#include "global.h"
#include "main.h"
#include "battle_setup.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "music_player.h"
#include "palette.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "text_window.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "constants/music_player.h"
#include "constants/rgb.h"

struct MP3PlayerResources
{
    MainCallback savedCallback;     // determines callback to run when we exit. e.g. where do we want to go after closing the menu
    u16 menuCursor[MP3_MENU_COUNT];
    u16 visibleCursor[MP3_MENU_COUNT];
    u8 menuMode;
    u8 gfxLoadState;
};

static EWRAM_DATA struct MP3PlayerResources *sMP3PlayerDataPtr = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;

static void MP3Player_RunSetup(void);
static bool8 MP3Player_DoGfxSetup(void);
static bool8 MP3Player_InitBgs(void);
static void MP3Player_FadeAndBail(void);
static bool8 MP3Player_LoadGraphics(void);
static void MP3Player_InitWindows(void);
static void MusicPlayer_PrintHeader(void);
static void MusicPlayer_PrintInfo(void);
static void Task_MP3PlayerWaitFadeIn(u8 taskId);
static void Task_MP3PlayerMain(u8 taskId);


static const u32 sMP3PlayerTiles[] = INCBIN_U32("graphics/music_player/tiles.4bpp.smol");
static const u32 sMP3PlayerTilemap[] = INCBIN_U32("graphics/music_player/tilemap.bin.smolTM");
static const u16 sMP3PlayerPalette[] = INCBIN_U16("graphics/music_player/palette.gbapal");

static const struct BgTemplate sMP3PlayerBgTemplates[] =
{
    {
        .bg = MP3_BG_1,    // windows, etc
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 1
    }, 
    {
        .bg = MP3_BG_2,    // this bg loads the UI tilemap
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 2
    },
    {
        .bg = MP3_BG_3,    // this bg loads the UI tilemap
        .charBaseIndex = 0,
        .mapBaseIndex = 28,
        .priority = 0
    }
};

static const struct WindowTemplate sMP3PlayerWindowTemplates[] = 
{
    [MP3_WINDOW_HEADER] =
    {
        .bg = MP3_BG_1,
        .tilemapLeft = 14,
        .tilemapTop = 0,
        .width = 16,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 1
    },
    [MP3_WINDOW_DESCRIPTION] =
    {
        .bg = MP3_BG_1,
        .tilemapLeft = 2,
        .tilemapTop = 16,
        .width = 26,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 1 + (16 * 5)
    },
    [MP3_WINDOW_LIST] =
    {
        .bg = MP3_BG_1,
        .tilemapLeft = 2,
        .tilemapTop = 5,
        .width = 26,
        .height = 10,
        .paletteNum = 15,
        .baseBlock = 1 + (16 * 5) + (26 * 4)
    },
    DUMMY_WIN_TEMPLATE,
};

enum MP3PlayerColors
{
    FONT_BLACK,
    FONT_WHITE,
    FONT_RED,
    FONT_BLUE,
};

static const u8 sMenuWindowFontColors[][3] = 
{
    [FONT_BLACK]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY,  TEXT_COLOR_LIGHT_GRAY},
    [FONT_WHITE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY,  TEXT_COLOR_LIGHT_GRAY},
    [FONT_RED]   = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_RED,        TEXT_COLOR_LIGHT_GRAY},
    [FONT_BLUE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_BLUE,       TEXT_COLOR_LIGHT_GRAY},
};

static const u8 *const sModeNames[MP3_MENU_COUNT] = {
    [MP3_MENU_MAIN]        = COMPOUND_STRING("Main Menu"),
    [MP3_MENU_PLAY_MUSIC]  = COMPOUND_STRING("Play Music"),
    [MP3_MENU_PLAYLISTS]   = COMPOUND_STRING("Playlists"),
    [MP3_MENU_RESET_ALL]   = COMPOUND_STRING("Reset All"),
};

static const struct PlaylistMusicList sPlaylistMusicList[PLAYLIST_SET_STYLE_COUNT] =
{
    [PLAYLIST_SET_STYLE_DEFAULT] =
    {
        .wildBattleMusic = MUS_WLD_VS_WILD,
        .trainerBattleMusic = MUS_ZGS_VS_AYA_REMATCH,
        .gymLeaderBattleMusic = MUS_ZGS_VS_EIKI,
        .eliteFourBattleMusic = MUS_VS_ELITE_FOUR,
        .championBattleMusic = MUS_ZGS_VS_MARISA_REMATCH,
        .surfMusic = MUS_WLD_SURF,
        .bikeMusic = MUS_CYCLING,
    },
    [PLAYLIST_SET_STYLE_REGULAR] = // duplicate of first for ability to override to this set
    {
        .wildBattleMusic = MUS_WLD_VS_WILD,
        .trainerBattleMusic = MUS_ZGS_VS_AYA_REMATCH,
        .gymLeaderBattleMusic = MUS_ZGS_VS_EIKI,
        .eliteFourBattleMusic = MUS_VS_ELITE_FOUR,
        .championBattleMusic = MUS_ZGS_VS_MARISA_REMATCH,
        .surfMusic = MUS_WLD_SURF,
        .bikeMusic = MUS_CYCLING,
    },
    [PLAYLIST_SET_STYLE_ZGS] =
    {
        .wildBattleMusic = MUS_ZGS_VS_WILD,
        .trainerBattleMusic = MUS_ZGS_VS_TRAINER,
        .gymLeaderBattleMusic = MUS_ZGS_VS_GYM_LEADER,
        .eliteFourBattleMusic = MUS_ZGS_VS_SAKUYA,
        .championBattleMusic = MUS_ZGS_VS_CHAMPION,
        .surfMusic = MUS_ZGS_SURF,
        .bikeMusic = MUS_ZGS_CYCLING,
    },
    [PLAYLIST_SET_STYLE_ALTERNATE] =
    {
        .wildBattleMusic = MUS_ZGS_VS_DREAM_WILD,
        .trainerBattleMusic = MUS_ZGS_VS_DREAM_TRAINER,
        .gymLeaderBattleMusic = MUS_ZGS_VS_BYAKUREN,
        .eliteFourBattleMusic = MUS_ZGS_VS_SAKUYA,
        .championBattleMusic = MUS_ZGS_VS_REIMU,
        .surfMusic = MUS_ZGS_SURF,
        .bikeMusic = MUS_ZGS_CYCLING,
    },
    [PLAYLIST_SET_STYLE_ALTERNATE2] = // placeholder
    {
        .wildBattleMusic = MUS_ZGS_VS_DREAM_WILD,
        .trainerBattleMusic = MUS_ZGS_VS_DREAM_TRAINER,
        .gymLeaderBattleMusic = MUS_ZGS_VS_GYM_LEADER,
        .eliteFourBattleMusic = MUS_ZGS_VS_SAKUYA,
        .championBattleMusic = MUS_ZGS_VS_CHAMPION,
        .surfMusic = MUS_ZGS_SURF,
        .bikeMusic = MUS_ZGS_CYCLING,
    },
};

static const struct MP3PlayerTrackInfo sMP3PlayerTrackInfo[MUSIC_TRACK_COUNT] =
{
    [MUSIC_TRACK_ZGS_VS_WILD] =
    {
        .name = COMPOUND_STRING("Vs. Wild (ZGS)"),
        .trackId = MUS_ZGS_VS_WILD,
    },
    [MUSIC_TRACK_ZGS_VS_TRAINER] =
    {
        .name = COMPOUND_STRING("Vs. Trainer (ZGS)"),
        .trackId = MUS_ZGS_VS_TRAINER,
    },
    [MUSIC_TRACK_ZGS_VS_CHAMPION] =
    {
        .name = COMPOUND_STRING("Vs. Champion (ZGS)"),
        .trackId = MUS_ZGS_VS_CHAMPION,
    },
};

static const struct MP3PlayerOptionInfo sMP3PlayerMainOptionsInfo[MP3_MAIN_COUNT] =
{
    [MP3_MAIN_PLAY_MUSIC] =
    {
        .name = COMPOUND_STRING("Play Music"),
        .description = COMPOUND_STRING("Play music."),
    },
    [MP3_MAIN_PLAYLISTS] =
    {
        .name = COMPOUND_STRING("Region Playlists"),
        .description = COMPOUND_STRING(""),
    },
    [MP3_MAIN_MUSIC_OVERRIDES] =
    {
        .name = COMPOUND_STRING("Music Overrides"),
        .description = COMPOUND_STRING(""),
    },
    [MP3_MAIN_OVERRIDE_SETTINGS] =
    {
        .name = COMPOUND_STRING("Override Settings"),
        .description = COMPOUND_STRING(""),
    },
    [MP3_MAIN_RESET_ALL] =
    {
        .name = COMPOUND_STRING("Reset All"),
        .description = COMPOUND_STRING("Reset all settings."),
    },
    [MP3_MAIN_PUT_AWAY] =
    {
        .name = COMPOUND_STRING("Put Away"),
        .description = COMPOUND_STRING("Put away."),
    },
};

static inline const u8 *GetMP3PlayerMainOptionName(u32 option)
{
    return sMP3PlayerMainOptionsInfo[option].name;
}

static inline const u8 *GetMP3PlayerMainOptionDescription(u32 option)
{
    return sMP3PlayerMainOptionsInfo[option].description;
}

static inline const u8 *GetMP3PlayerTrackName(u32 musicTrack)
{
    return sMP3PlayerTrackInfo[musicTrack].name;
}

static inline u16 GetMP3PlayerTrackId(u32 musicTrack)
{
    return sMP3PlayerTrackInfo[musicTrack].trackId;
}

bool32 IsMP3PlayerOn(void)
{
    return gSaveBlock3Ptr->savedPlayerMusic.isPlayerOn;
}

bool32 IsOverridingBattleMusic(void)
{
    return gSaveBlock3Ptr->savedPlayerMusic.canOverrideBattleMusic;
}

bool32 IsOverridingBikeMusic(void)
{
    return gSaveBlock3Ptr->savedPlayerMusic.muteBikeSurfMusic;
}

void MP3Player_Init(MainCallback callback)
{
    if ((sMP3PlayerDataPtr = AllocZeroed(sizeof(struct MP3PlayerResources))) == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    // initialize stuff
    sMP3PlayerDataPtr->gfxLoadState = 0;
    sMP3PlayerDataPtr->savedCallback = callback;
    sMP3PlayerDataPtr->menuMode = MP3_MENU_MAIN;

    SetMainCallback2(MP3Player_RunSetup);
}

static void MP3Player_RunSetup(void)
{
    while (TRUE)
    {
        if (MP3Player_DoGfxSetup() == TRUE)
            break;
    }
}

static void MP3Player_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void MP3Player_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static bool8 MP3Player_DoGfxSetup(void)
{
    switch (gMain.state)
    {
    case 0:
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        ResetVramOamAndBgCntRegs();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case 2:
        if (MP3Player_InitBgs())
        {
            sMP3PlayerDataPtr->gfxLoadState = 0;
            gMain.state++;
        }
        else
        {
            MP3Player_FadeAndBail();
            return TRUE;
        }
        break;
    case 3:
        if (MP3Player_LoadGraphics() == TRUE)
            gMain.state++;
        break;
    case 4:
        MP3Player_InitWindows();
        gMain.state++;
        break;
    case 5:
        sMP3PlayerDataPtr->menuCursor[MP3_MENU_MAIN] = 0;
        MusicPlayer_PrintHeader();
        MusicPlayer_PrintInfo();
        CreateTask(Task_MP3PlayerWaitFadeIn, 0);
        gMain.state++;
        break;
    case 6:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    default:
        SetVBlankCallback(MP3Player_VBlankCB);
        SetMainCallback2(MP3Player_MainCB);
        return TRUE;
    }
    return FALSE;
}

#define try_free(ptr) ({        \
    void ** ptr__ = (void **)&(ptr);   \
    if (*ptr__ != NULL)                \
        Free(*ptr__);                  \
})

static void MP3Player_FreeResources(void)
{
    try_free(sMP3PlayerDataPtr);
    try_free(sBg1TilemapBuffer);
    FreeAllWindowBuffers();
}

static void Task_MP3PlayerWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sMP3PlayerDataPtr->savedCallback);
        MP3Player_FreeResources();
        DestroyTask(taskId);
    }
}

static void MP3Player_FadeAndBail(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_MP3PlayerWaitFadeAndBail, 0);
    SetVBlankCallback(MP3Player_VBlankCB);
    SetMainCallback2(MP3Player_MainCB);
}

static bool8 MP3Player_InitBgs(void)
{
    ResetAllBgsCoordinates();
    sBg1TilemapBuffer = AllocZeroed(BG_SCREEN_SIZE);
    if (sBg1TilemapBuffer == NULL)
        return FALSE;

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMP3PlayerBgTemplates, NELEMS(sMP3PlayerBgTemplates));
    SetBgTilemapBuffer(MP3_BG_2, sBg1TilemapBuffer);
    ScheduleBgCopyTilemapToVram(MP3_BG_2);
    ScheduleBgCopyTilemapToVram(MP3_BG_3);

    ShowBg(MP3_BG_1);
    ShowBg(MP3_BG_2);
    ShowBg(MP3_BG_3);
    return TRUE;
}

static bool8 MP3Player_LoadGraphics(void)
{
    switch (sMP3PlayerDataPtr->gfxLoadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(MP3_BG_2, sMP3PlayerTiles, 0, 0, 0);
        sMP3PlayerDataPtr->gfxLoadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderWram(sMP3PlayerTilemap, sBg1TilemapBuffer);
            sMP3PlayerDataPtr->gfxLoadState++;
        }
        break;
    case 2:
        LoadPalette(sMP3PlayerPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
        LoadPalette(gStandardMenuPalette, BG_PLTT_ID(15), PLTT_SIZE_4BPP);
        sMP3PlayerDataPtr->gfxLoadState++;
        break;
    default:
        sMP3PlayerDataPtr->gfxLoadState = 0;
        return TRUE;
    }
    return FALSE;
}

static void MP3Player_InitWindows(void)
{
    InitWindows(sMP3PlayerWindowTemplates);

    DeactivateAllTextPrinters();

    ScheduleBgCopyTilemapToVram(MP3_BG_1);

    FillWindowPixelBuffer(MP3_WINDOW_HEADER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(MP3_WINDOW_DESCRIPTION, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(MP3_WINDOW_LIST, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    PutWindowTilemap(MP3_WINDOW_HEADER);
    PutWindowTilemap(MP3_WINDOW_DESCRIPTION);
    PutWindowTilemap(MP3_WINDOW_LIST);

    CopyWindowToVram(MP3_WINDOW_HEADER, COPYWIN_FULL);
    CopyWindowToVram(MP3_WINDOW_DESCRIPTION, COPYWIN_FULL);
    CopyWindowToVram(MP3_WINDOW_LIST, COPYWIN_FULL);
}

static const u8 sText_SampleUiButtonHint1[] = _("{DPAD_UPDOWN}Options");
static const u8 sText_SampleUiButtonHint2[] = _("{A_BUTTON}Select");
static const u8 sText_SampleUiButtonHint3[] = _("{B_BUTTON}Exit");
static void MusicPlayer_PrintHeader(void)
{
    FillWindowPixelBuffer(MP3_WINDOW_HEADER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    StringCopy(gStringVar1, sModeNames[sMP3PlayerDataPtr->menuMode]);

    AddTextPrinterParameterized4(MP3_WINDOW_HEADER, FONT_NORMAL, 0, 3, 0, 0, sMenuWindowFontColors[FONT_WHITE],
        TEXT_SKIP_DRAW, gStringVar1);
    AddTextPrinterParameterized4(MP3_WINDOW_HEADER, FONT_SMALL, 47, 0, 0, 0, sMenuWindowFontColors[FONT_WHITE],
        TEXT_SKIP_DRAW, sText_SampleUiButtonHint1);
    AddTextPrinterParameterized4(MP3_WINDOW_HEADER, FONT_SMALL, 47, 10, 0, 0, sMenuWindowFontColors[FONT_WHITE],
        TEXT_SKIP_DRAW, sText_SampleUiButtonHint2);
    AddTextPrinterParameterized4(MP3_WINDOW_HEADER, FONT_SMALL, 47, 20, 0, 0, sMenuWindowFontColors[FONT_WHITE],
        TEXT_SKIP_DRAW, sText_SampleUiButtonHint3);

    CopyWindowToVram(MP3_WINDOW_HEADER, COPYWIN_GFX);
}

static const u8 sText_SampleUiMonInfoSpecies[] = _("{NO}{STR_VAR_1} {STR_VAR_2}");
static const u8 sText_SampleUiMonOther[] = _("Put other info here");
static void MusicPlayer_PrintInfo(void)
{
    u32 option;
    FillWindowPixelBuffer(MP3_WINDOW_DESCRIPTION, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    switch (sMP3PlayerDataPtr->menuMode)
    {
    case MP3_MENU_MAIN:
        option = sMP3PlayerDataPtr->menuCursor[MP3_MENU_MAIN];
        ConvertIntToDecimalStringN(gStringVar1, option, STR_CONV_MODE_LEADING_ZEROS, 2);
        StringCopy(gStringVar2, GetMP3PlayerMainOptionName(option));
        StringExpandPlaceholders(gStringVar3, sText_SampleUiMonInfoSpecies);
        StringCopy(gStringVar4, GetMP3PlayerMainOptionDescription(option));

        AddTextPrinterParameterized4(MP3_WINDOW_DESCRIPTION, FONT_SHORT, 5, 3, 0, 0, sMenuWindowFontColors[FONT_BLACK],
            TEXT_SKIP_DRAW, gStringVar3);
        AddTextPrinterParameterized4(MP3_WINDOW_DESCRIPTION, FONT_SMALL, 5, 15, 0, 0, sMenuWindowFontColors[FONT_BLACK],
            TEXT_SKIP_DRAW, gStringVar4);
        break;
    default:
    case MP3_MENU_PLAYLISTS:
        AddTextPrinterParameterized4(MP3_WINDOW_DESCRIPTION, FONT_SHORT, 5, 3, 0, 0, sMenuWindowFontColors[FONT_BLACK],
            TEXT_SKIP_DRAW, sText_SampleUiMonOther);
        break;
    }

    // Copy pixel buffer to VRAM now that we are done drawing text
    CopyWindowToVram(MP3_WINDOW_DESCRIPTION, COPYWIN_GFX);
}

static void Task_MP3PlayerWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_MP3PlayerMain;
}

static void Task_MP3PlayerTurnOff(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sMP3PlayerDataPtr->savedCallback);
        MP3Player_FreeResources();
        DestroyTask(taskId);
    }
}

static void Task_MP3PlayerMain(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        switch (sMP3PlayerDataPtr->menuMode)
        {
        default:
            PlaySE(SE_SELECT);
            sMP3PlayerDataPtr->menuMode = MP3_MENU_MAIN;
            MusicPlayer_PrintHeader();
            MusicPlayer_PrintInfo();
            break;
        case MP3_MENU_MAIN:
            PlaySE(SE_PC_OFF);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_MP3PlayerTurnOff;
            break;
        }
    }
    if (JOY_REPEAT(DPAD_DOWN))
    {
        switch (sMP3PlayerDataPtr->menuMode)
        {
        case MP3_MENU_MAIN:
            PlaySE(SE_SELECT);
            if (sMP3PlayerDataPtr->menuCursor[MP3_MENU_MAIN] < MP3_MAIN_COUNT - 1)
            {
                sMP3PlayerDataPtr->menuCursor[MP3_MENU_MAIN]++;
            }
            else
            {
                sMP3PlayerDataPtr->menuCursor[MP3_MENU_MAIN] = 0;
            }
            MusicPlayer_PrintInfo();
            break;
        default:
            break;
        }
    }
    // User pressed or held DPAD_UP, scroll up through dex list
    if (JOY_REPEAT(DPAD_UP))
    {
        switch (sMP3PlayerDataPtr->menuMode)
        {
        case MP3_MENU_MAIN:
            PlaySE(SE_SELECT);
            if (sMP3PlayerDataPtr->menuCursor[MP3_MENU_MAIN] > 0)
            {
                sMP3PlayerDataPtr->menuCursor[MP3_MENU_MAIN]--;
            }
            else
            {
                sMP3PlayerDataPtr->menuCursor[MP3_MENU_MAIN] = MP3_MAIN_COUNT - 1;
            }
            MusicPlayer_PrintInfo();
            break;
        default:
            break;
        }
    }
    if (JOY_NEW(A_BUTTON))
    {
        switch (sMP3PlayerDataPtr->menuMode)
        {
        case MP3_MENU_MAIN:
            switch (sMP3PlayerDataPtr->menuCursor[MP3_MENU_MAIN])
            {
            case MP3_MAIN_PLAY_MUSIC:
                PlaySE(SE_SELECT);
                sMP3PlayerDataPtr->menuMode = MP3_MENU_PLAY_MUSIC;
                MusicPlayer_PrintHeader();
                MusicPlayer_PrintInfo();
                break;
            case MP3_MAIN_PLAYLISTS:
                PlaySE(SE_SELECT);
                sMP3PlayerDataPtr->menuMode = MP3_MENU_PLAYLISTS;
                MusicPlayer_PrintHeader();
                MusicPlayer_PrintInfo();
                break;
            case MP3_MAIN_RESET_ALL:
                PlaySE(SE_SELECT);
                sMP3PlayerDataPtr->menuMode = MP3_MENU_RESET_ALL;
                MusicPlayer_PrintHeader();
                MusicPlayer_PrintInfo();
                break;
            case MP3_MAIN_PUT_AWAY:
                PlaySE(SE_PC_OFF);
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
                gTasks[taskId].func = Task_MP3PlayerTurnOff;
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
    }
}

static u16 GetMusicStyle(void)
{
    u16 musicStyle = gSaveBlock3Ptr->savedPlayerMusic.playlistPresetStyle;

    if (musicStyle == PLAYLIST_SET_STYLE_DEFAULT)
        musicStyle = VarGet(OW_VAR_REGION_MUSIC);

    if (musicStyle >= PLAYLIST_SET_STYLE_COUNT)
        return PLAYLIST_SET_STYLE_DEFAULT;
    else
        return musicStyle;
}

u16 GetRegularWildBattleMusic(void)
{
    u16 musicStyle = GetMusicStyle();

    if (gSaveBlock3Ptr->savedPlayerMusic.wildBattleMusic)
        return gSaveBlock3Ptr->savedPlayerMusic.wildBattleMusic;
   
    return sPlaylistMusicList[musicStyle].wildBattleMusic;
}

u16 GetLegndaryWildBattleMusic(u16 species)
{
    if (gSaveBlock3Ptr->savedPlayerMusic.wildBattleMusic)
        return gSaveBlock3Ptr->savedPlayerMusic.wildBattleMusic;

    switch (species)
    {
    case SPECIES_LAST_WORD_KANAKO:
        return MUS_VS_RAYQUAZA;
    case SPECIES_LAST_WORD_SUWAKO:
    case SPECIES_LAST_WORD_UTSUHO:
        return MUS_VS_KYOGRE_GROUDON;
    case SPECIES_REGIELEKI:
    case SPECIES_REGIDRAGO:
        return MUS_VS_REGI;
    default:
        return MUS_ZGS_VS_LEGEND;
    }
}

u16 GetTrainerBattleMusic(u8 trainerClass)
{
    u16 musicStyle = GetMusicStyle();

    if (gSaveBlock3Ptr->savedPlayerMusic.trainerBattleMusic)
        return gSaveBlock3Ptr->savedPlayerMusic.trainerBattleMusic;

    switch (trainerClass)
    {
    case TRAINER_CLASS_AQUA_LEADER:
    case TRAINER_CLASS_MAGMA_LEADER:
        return MUS_VS_AQUA_MAGMA_LEADER;
    case TRAINER_CLASS_TEAM_AQUA:
    case TRAINER_CLASS_TEAM_MAGMA:
    case TRAINER_CLASS_AQUA_ADMIN:
    case TRAINER_CLASS_MAGMA_ADMIN:
        return MUS_VS_AQUA_MAGMA;
    case TRAINER_CLASS_LEADER:
        return sPlaylistMusicList[musicStyle].gymLeaderBattleMusic;
    case TRAINER_CLASS_CHAMPION:
        return sPlaylistMusicList[musicStyle].championBattleMusic;
    case TRAINER_CLASS_RIVAL:
        return MUS_VS_RIVAL;
    case TRAINER_CLASS_ELITE_FOUR:
        return sPlaylistMusicList[musicStyle].eliteFourBattleMusic;
    case TRAINER_CLASS_SALON_MAIDEN:
    case TRAINER_CLASS_DOME_ACE:
    case TRAINER_CLASS_PALACE_MAVEN:
    case TRAINER_CLASS_ARENA_TYCOON:
    case TRAINER_CLASS_FACTORY_HEAD:
    case TRAINER_CLASS_PIKE_QUEEN:
    case TRAINER_CLASS_PYRAMID_KING:
        return MUS_VS_FRONTIER_BRAIN;
    default:
        return sPlaylistMusicList[musicStyle].trainerBattleMusic;
    }
}

void PlayVictoryMusic(u8 battleType)
{
    if (gSaveBlock3Ptr->savedPlayerMusic.victoryMusic)
    {
        PlayBGM(gSaveBlock3Ptr->savedPlayerMusic.victoryMusic);
    }
    else if (battleType == MUSIC_PLAYER_VICTORY_TRAINER)
    {
        switch (GetTrainerClassFromId(TRAINER_BATTLE_PARAM.opponentA))
        {
        case TRAINER_CLASS_ELITE_FOUR:
        case TRAINER_CLASS_CHAMPION:
            PlayBGM(MUS_VICTORY_LEAGUE);
            break;
        case TRAINER_CLASS_TEAM_AQUA:
        case TRAINER_CLASS_TEAM_MAGMA:
        case TRAINER_CLASS_AQUA_ADMIN:
        case TRAINER_CLASS_AQUA_LEADER:
        case TRAINER_CLASS_MAGMA_ADMIN:
        case TRAINER_CLASS_MAGMA_LEADER:
            PlayBGM(MUS_VICTORY_AQUA_MAGMA);
            break;
        case TRAINER_CLASS_LEADER:
            PlayBGM(MUS_ZGS_VICTORY_GYM_LEADER);
            break;
        default:
            PlayBGM(MUS_ZGS_VICTORY_TRAINER);
            break;
        }
    }
    else if (battleType == MUSIC_PLAYER_CAUGHT_MON)
    {
        PlayBGM(MUS_ZGS_CAUGHT);
    }
    else
    {
        PlayBGM(MUS_ZGS_VICTORY_WILD);
    }
    
}

u16 GetSurfMusic(void)
{
    u16 musicStyle = GetMusicStyle();
    return sPlaylistMusicList[musicStyle].surfMusic;
}

u16 GetBikeMusic(void)
{
    u16 musicStyle = GetMusicStyle();
    return sPlaylistMusicList[musicStyle].bikeMusic;
}

void SetPlaylistPresetStyle(struct ScriptContext *ctx)
{
    u32 playlistSet = ScriptReadByte(ctx);
    if (playlistSet >= PLAYLIST_SET_STYLE_COUNT)
        gSaveBlock3Ptr->savedPlayerMusic.playlistPresetStyle = PLAYLIST_SET_STYLE_DEFAULT;
    else
        gSaveBlock3Ptr->savedPlayerMusic.playlistPresetStyle = playlistSet;
}

void GetPlaylistPresetStyle(struct ScriptContext *ctx)
{
    u16 variable = ScriptReadHalfword(ctx);
    u16 musicStyle = gSaveBlock3Ptr->savedPlayerMusic.playlistPresetStyle;
    VarSet(variable, musicStyle);
}

void SetOverworldPlayerMusic(struct ScriptContext *ctx)
{
    u16 track = ScriptReadHalfword(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.overworldMusic = sMP3PlayerTrackInfo[track].trackId;
}

void SetWildBattlePlayerMusic(struct ScriptContext *ctx)
{
    u16 track = ScriptReadHalfword(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.wildBattleMusic = sMP3PlayerTrackInfo[track].trackId;
}

void SetTrainerBattlePlayerMusic(struct ScriptContext *ctx)
{
    u16 track = ScriptReadHalfword(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.trainerBattleMusic = sMP3PlayerTrackInfo[track].trackId;
}

void SetVictoryPlayerMusic(struct ScriptContext *ctx)
{
    u16 track = ScriptReadHalfword(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.victoryMusic = sMP3PlayerTrackInfo[track].trackId;
}

void PowerMP3PlayerOverride(struct ScriptContext *ctx)
{
    u32 power = ScriptReadByte(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.isPlayerOn = power;
}

void SetOverworldMusicBattleOverride(struct ScriptContext *ctx)
{
    u32 canOverride = ScriptReadByte(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.canOverrideBattleMusic = canOverride;
}

void MuteBikeSurfMusicOverride(struct ScriptContext *ctx)
{
    u32 canOverride = ScriptReadByte(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.muteBikeSurfMusic = canOverride;
}

void ResetOverridePlayerMusic(void)
{
    gSaveBlock3Ptr->savedPlayerMusic.isPlayerOn = FALSE;
    gSaveBlock3Ptr->savedPlayerMusic.canOverrideBattleMusic = FALSE;
    gSaveBlock3Ptr->savedPlayerMusic.muteBikeSurfMusic = FALSE;
    gSaveBlock3Ptr->savedPlayerMusic.overworldMusic = MUS_NONE;
    gSaveBlock3Ptr->savedPlayerMusic.wildBattleMusic = MUS_NONE;
    gSaveBlock3Ptr->savedPlayerMusic.trainerBattleMusic = MUS_NONE;
    gSaveBlock3Ptr->savedPlayerMusic.victoryMusic = MUS_NONE;
}

void ResetAllPlayerMusic(void)
{
    gSaveBlock3Ptr->savedPlayerMusic.isPlayerOn = FALSE;
    gSaveBlock3Ptr->savedPlayerMusic.canOverrideBattleMusic = FALSE;
    gSaveBlock3Ptr->savedPlayerMusic.muteBikeSurfMusic = FALSE;
    gSaveBlock3Ptr->savedPlayerMusic.playlistPresetStyle = PLAYLIST_SET_STYLE_DEFAULT;
    gSaveBlock3Ptr->savedPlayerMusic.overworldMusic = MUS_NONE;
    gSaveBlock3Ptr->savedPlayerMusic.wildBattleMusic = MUS_NONE;
    gSaveBlock3Ptr->savedPlayerMusic.trainerBattleMusic = MUS_NONE;
    gSaveBlock3Ptr->savedPlayerMusic.victoryMusic = MUS_NONE;
}
