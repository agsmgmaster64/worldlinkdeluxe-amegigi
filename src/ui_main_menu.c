#include "global.h"
#include "ui_main_menu.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_icon.h"
#include "item_use.h"
#include "international_string_util.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "new_game.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "overworld.h"
#include "outfit_menu.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/field_mugshots.h"
#include "pokemon_icon.h"
#include "region_map.h"
#include "pokedex.h"
#include "title_screen.h"
#include "main_menu.h"
#include "option_menu.h"
#include "option_plus_menu.h"
#include "mystery_event_menu.h"
#include "mystery_gift_menu.h"
#include "link.h"
#include "tx_randomizer_and_challenges.h"

/*
 * 
 */
 
//==========DEFINES==========//
struct MainMenuResources
{
    MainCallback savedCallback;     // determines callback to run when we exit. e.g. where do we want to go after closing the menu
    u8 gfxLoadState;
    u16 iconBoxSpriteIds[6];
    u16 iconMonSpriteIds[6];
    u16 mugshotSpriteId;
    u8 sSelectedOption;
};

enum WindowIds
{
    WINDOW_HEADER,
    WINDOW_MIDDLE,
};

enum
{
    UI_BG_TEXT,
    UI_BG_MAIN,
    UI_BG_SCROLL,
};

enum {
    HW_WIN_CONTINUE,
    HW_WIN_NEW_GAME,
    HW_WIN_OPTIONS,
    HW_WIN_MYSTERY_GIFT,
    HW_WIN_MYSTERY_EVENT,
    HW_WIN_MYSTERY_BOTH,
};

enum Colors
{
    FONT_BLACK,
    FONT_WHITE,
    FONT_RED,
    FONT_BLUE,
};

enum
{
    HAS_NO_SAVED_GAME,  //NEW GAME, OPTION
    HAS_SAVED_GAME,     //CONTINUE, NEW GAME, OPTION
    HAS_MYSTERY_GIFT,   //CONTINUE, NEW GAME, MYSTERY GIFT, OPTION
    HAS_MYSTERY_EVENTS, //CONTINUE, NEW GAME, MYSTERY GIFT, MYSTERY EVENTS, OPTION
};

#define try_free(ptr) ({        \
    void ** ptr__ = (void **)&(ptr);   \
    if (*ptr__ != NULL)                \
        Free(*ptr__);                  \
})

//==========EWRAM==========//
static EWRAM_DATA struct MainMenuResources *sMainMenuDataPtr = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;
static EWRAM_DATA u8 *sBg2TilemapBuffer = NULL;
static EWRAM_DATA u8 sSelectedOption = {0};
static EWRAM_DATA u8 menuType = {0};

//==========STATIC=DEFINES==========//
static void MainMenu_RunSetup(void);
static bool8 MainMenu_DoGfxSetup(void);
static bool8 MainMenu_InitBgs(void);
static void MainMenu_FadeAndBail(void);
static bool8 MainMenu_LoadGraphics(void);
static void MainMenu_InitWindows(void);
static void PrintToWindow(u8 windowId, u8 colorIdx);
static void Task_MainMenuWaitFadeIn(u8 taskId);
static void Task_MainMenuMain(u8 taskId);
static void MainMenu_InitializeGPUWindows(void);

static void CreateMugshot(void);
static void DestroyMugshot(void);
static void CreateIconShadow(void);
static void DestroyIconShadow(void);
static u32 GetHPEggCyclePercent(u32 partyIndex);
static void CreatePartyMonIcons(void);
static void DestroyMonIcons(void);


//==========Background and Window Data==========//
static const struct BgTemplate sMainMenuBgTemplates[] =
{
    {
        .bg = UI_BG_TEXT,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0
    }, 
    {
        .bg = UI_BG_MAIN,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 2
    },
    {
        .bg = UI_BG_SCROLL,
        .charBaseIndex = 2,
        .mapBaseIndex = 28,
        .priority = 2
    }
};

static const struct WindowTemplate sMainMenuWindowTemplates[] = 
{
    [WINDOW_HEADER] = // Prints the Map and Playtime
    {
        .bg = UI_BG_TEXT,   // which bg to print text on
        .tilemapLeft = 10,  // position from left (per 8 pixels)
        .tilemapTop = 1,    // position from top (per 8 pixels)
        .width = 18,        // width (per 8 pixels)
        .height = 2,        // height (per 8 pixels)
        .paletteNum = 0,    // palette index to use for text
        .baseBlock = 1,     // tile start in VRAM
    },

    [WINDOW_MIDDLE] = // Prints the name, dex number, and badges
    {
        .bg = UI_BG_TEXT,          // which bg to print text on
        .tilemapLeft = 8,          // position from left (per 8 pixels)
        .tilemapTop = 4,           // position from top (per 8 pixels)
        .width = 18,               // width (per 8 pixels)
        .height = 7,               // height (per 8 pixels)
        .paletteNum = 0,           // palette index to use for text
        .baseBlock = 1 + (18 * 2), // tile start in VRAM
    },
};

//  Positions of Hardware/GPU Windows
//       that highlight and hide sections of the Bg
struct HighlightWindowCoords {
    u8 left;
    u8 right;
};

struct HWWindowPosition {
    struct HighlightWindowCoords winh;
    struct HighlightWindowCoords winv;
};

struct OutfitMugshot {
    const struct CompressedSpriteSheet mugshotGfx;
    const struct SpritePalette mugshotPal;
};

static const struct HWWindowPosition HWinCoords[6] = 
{
    [HW_WIN_CONTINUE]        = {{7, 233},   {7, 89},},
    [HW_WIN_NEW_GAME]        = {{7, 113},   {103, 122},},
    [HW_WIN_OPTIONS]         = {{126, 233}, {103, 122},},
    [HW_WIN_MYSTERY_GIFT]    = {{7, 113},   {135, 154},},
    [HW_WIN_MYSTERY_EVENT]   = {{126, 233}, {135, 154},},
    [HW_WIN_MYSTERY_BOTH]    = {{7, 233},   {135, 154}},
};


//
//  Graphic and Tilemap Pointers for Bgs and Mughsots
//
static const u32 sMainBgTiles[] = INCBIN_U32("graphics/ui_main_menu/main_tiles.4bpp.smol");
static const u32 sMainBgTilemap[] = INCBIN_U32("graphics/ui_main_menu/main_tiles.bin.smolTM");
static const u16 sMainBgPalette[] = INCBIN_U16("graphics/ui_main_menu/main_tiles.gbapal");

static const u32 sMainBgTilesFem[] = INCBIN_U32("graphics/ui_main_menu/main_tiles_fem.4bpp.smol");
static const u32 sMainBgTilemapFem[] = INCBIN_U32("graphics/ui_main_menu/main_tiles_fem.bin.smolTM");
static const u16 sMainBgPaletteFem[] = INCBIN_U16("graphics/ui_main_menu/main_tiles_fem.gbapal");

static const u32 sScrollBgTiles[] = INCBIN_U32("graphics/ui_main_menu/scroll_tiles.4bpp.smol");
static const u32 sScrollBgTilemap[] = INCBIN_U32("graphics/ui_main_menu/scroll_tiles.bin.smolTM");
static const u16 sScrollBgPalette[] = INCBIN_U16("graphics/ui_main_menu/scroll_tiles.gbapal");

static const u16 sIconBox_Pal[] = INCBIN_U16("graphics/ui_main_menu/icon_shadow.gbapal");
static const u32 sIconBox_Gfx[] = INCBIN_U32("graphics/ui_main_menu/icon_shadow.4bpp.smol");

static const u16 sIconBox_PalFem[] = INCBIN_U16("graphics/ui_main_menu/icon_shadow_fem.gbapal");
static const u32 sIconBox_GfxFem[] = INCBIN_U32("graphics/ui_main_menu/icon_shadow_fem.4bpp.smol");

static const u16 sRenkoMugshot_Pal[] = INCBIN_U16("graphics/ui_main_menu/renko_mugshot.gbapal");
static const u32 sRenkoMugshot_Gfx[] = INCBIN_U32("graphics/ui_main_menu/renko_mugshot.4bpp.smol");
static const u16 sMaribelMugshot_Pal[] = INCBIN_U16("graphics/ui_main_menu/maribel_mugshot.gbapal");
static const u32 sMaribelMugshot_Gfx[] = INCBIN_U32("graphics/ui_main_menu/maribel_mugshot.4bpp.smol");
static const u16 sGigiMugshot_Pal[] = INCBIN_U16("graphics/ui_main_menu/gigi_mugshot.gbapal");
static const u32 sGigiMugshot_Gfx[] = INCBIN_U32("graphics/ui_main_menu/gigi_mugshot.4bpp.smol");


//
//  Sprite Data for Mugshots and Icon Shadows 
//
#define TAG_MUGSHOT 30012
#define TAG_ICON_BOX 30006
static const struct OamData sOamData_Mugshot =
{
    .size = SPRITE_SIZE(64x64),
    .shape = SPRITE_SHAPE(64x64),
    .priority = 1,
};

static const struct CompressedSpriteSheet sSpriteSheet_RenkoMugshot =
{
    .data = sRenkoMugshot_Gfx,
    .size = 64*64*1/2,
    .tag = TAG_MUGSHOT,
};

static const struct SpritePalette sSpritePal_RenkoMugshot =
{
    .data = sRenkoMugshot_Pal,
    .tag = TAG_MUGSHOT
};

static const struct CompressedSpriteSheet sSpriteSheet_MaribelMugshot =
{
    .data = sMaribelMugshot_Gfx,
    .size = 64*64*1/2,
    .tag = TAG_MUGSHOT,
};

static const struct SpritePalette sSpritePal_MaribelMugshot =
{
    .data = sMaribelMugshot_Pal,
    .tag = TAG_MUGSHOT
};

static const struct CompressedSpriteSheet sSpriteSheet_GigiMugshot =
{
    .data = sGigiMugshot_Gfx,
    .size = 64*64*1/2,
    .tag = TAG_MUGSHOT,
};

static const struct SpritePalette sSpritePal_GigiMugshot =
{
    .data = sGigiMugshot_Pal,
    .tag = TAG_MUGSHOT
};

static const union AnimCmd sSpriteAnim_Mugshot[] =
{
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sSpriteAnimTable_Mugshot[] =
{
    sSpriteAnim_Mugshot,
};

static const struct SpriteTemplate sSpriteTemplate_Mugshot =
{
    .tileTag = TAG_MUGSHOT,
    .paletteTag = TAG_MUGSHOT,
    .oam = &sOamData_Mugshot,
    .anims = sSpriteAnimTable_Mugshot,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct OamData sOamData_IconBox =
{
    .size = SPRITE_SIZE(32x32),
    .shape = SPRITE_SHAPE(32x32),
    .priority = 1,
};

static const struct CompressedSpriteSheet sSpriteSheet_IconBox =
{
    .data = sIconBox_Gfx,
    .size = 32*32*1/2,
    .tag = TAG_ICON_BOX,
};

static const struct CompressedSpriteSheet sSpriteSheet_IconBoxFem =
{
    .data = sIconBox_GfxFem,
    .size = 32*32*1/2,
    .tag = TAG_ICON_BOX,
};

static const struct SpritePalette sSpritePal_IconBox =
{
    .data = sIconBox_Pal,
    .tag = TAG_ICON_BOX
};

static const struct SpritePalette sSpritePal_IconBoxFem =
{
    .data = sIconBox_PalFem,
    .tag = TAG_ICON_BOX
};

static const union AnimCmd sSpriteAnim_IconBox0[] =
{
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sSpriteAnimTable_IconBox[] =
{
    sSpriteAnim_IconBox0,
};

static const struct SpriteTemplate sSpriteTemplate_IconBox =
{
    .tileTag = TAG_ICON_BOX,
    .paletteTag = TAG_ICON_BOX,
    .oam = &sOamData_IconBox,
    .anims = sSpriteAnimTable_IconBox,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct OutfitMugshot sOutfitMugshot[MUGSHOT_COUNT] =
{
    [MUGSHOT_RENKO] =
    {
        .mugshotGfx = sSpriteSheet_RenkoMugshot,
        .mugshotPal = sSpritePal_RenkoMugshot,
    },
    [MUGSHOT_MARIBEL] =
    {
        .mugshotGfx = sSpriteSheet_MaribelMugshot,
        .mugshotPal = sSpritePal_MaribelMugshot,
    },
    [MUGSHOT_GIGI] =
    {
        .mugshotGfx = sSpriteSheet_GigiMugshot,
        .mugshotPal = sSpritePal_GigiMugshot,
    },
};

//==========UI Initialization from Ghoulslash's UI Shell Branch==========//
void Task_OpenMainMenu(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    if (!gPaletteFade.active)
    {   
        switch (data[0]) // This data[0] comes from the main_menu.c Task_DisplayMainMenu, 
        {                //  where the UI is initialized by swapping a task func with this one 
            case HAS_NO_SAVED_GAME:
            default:
                gExitStairsMovementDisabled = FALSE;
                ResetChallengesData();
                gMain.savedCallback = CB2_NewGameBirchSpeech_ReturnFromOptionsMenu;
                SetMainCallback2(CB2_InitOptionPlusMenu);
                DestroyTask(taskId);
                return;
            case HAS_SAVED_GAME:       
            case HAS_MYSTERY_GIFT:
            case HAS_MYSTERY_EVENTS:
                menuType = data[0];
                break;
        }
        CleanupOverworldWindowsAndTilemaps();
        MainMenu_Init(CB2_InitTitleScreen); // if need to bail go to title screen
        DestroyTask(taskId);
    }
}

//
//  Setup Menu Functions
//
void MainMenu_Init(MainCallback callback)
{
    u32 i = 0;
    if ((sMainMenuDataPtr = AllocZeroed(sizeof(struct MainMenuResources))) == NULL)
    {
        SetMainCallback2(callback);
        return;
    }
    
    // initialize stuff
    sMainMenuDataPtr->gfxLoadState = 0;
    sMainMenuDataPtr->savedCallback = callback;
    for(i = 0; i < 6; i++)
    {
        sMainMenuDataPtr->iconBoxSpriteIds[5] = SPRITE_NONE;
        sMainMenuDataPtr->iconMonSpriteIds[5] = SPRITE_NONE;
    }
    
    SetMainCallback2(MainMenu_RunSetup);
}

static void MainMenu_RunSetup(void)
{
    while (1)
    {
        if (MainMenu_DoGfxSetup() == TRUE)
            break;
    }
}

static void MainMenu_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void MainMenu_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
    ChangeBgX(UI_BG_SCROLL, 128, BG_COORD_SUB); // This controls the scrolling of the scroll bg, remove it to stop scrolling
    //ChangeBgY(UI_BG_SCROLL, 128, BG_COORD_ADD); // This controls the scrolling of the scroll bg, remove it to stop scrolling
}

//
//  Quit Out Functions
//
static void MainMenu_FreeResources(void)
{
    try_free(sMainMenuDataPtr);
    try_free(sBg1TilemapBuffer);
    try_free(sBg2TilemapBuffer);
    FreeAllWindowBuffers();
    DestroyMugshot();
    DestroyIconShadow();
    DestroyMonIcons();
    DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
}

static void Task_MainMenuWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sMainMenuDataPtr->savedCallback);
        MainMenu_FreeResources();
        DestroyTask(taskId);
    }
}

static void MainMenu_FadeAndBail(void)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_MainMenuWaitFadeAndBail, 0);
    SetVBlankCallback(MainMenu_VBlankCB);
    SetMainCallback2(MainMenu_MainCB);
}

static void Task_MainMenuWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_MainMenuMain;
}

static void Task_MainMenuTurnOff(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WIN1H, 0);
        SetGpuReg(REG_OFFSET_WIN1V, 0);
        SetGpuReg(REG_OFFSET_WININ, 0);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        SetMainCallback2(sMainMenuDataPtr->savedCallback);
        MainMenu_FreeResources();
        DestroyTask(taskId);
    }
}


//
//  Load Graphics Functions
//
static bool8 MainMenu_DoGfxSetup(void)
{
    switch (gMain.state)
    {
    case 0:
        DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000)
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, 0);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
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
        MainMenu_InitializeGPUWindows();
        gMain.state++;
        break;
    case 2:
        if (MainMenu_InitBgs())
        {
            sMainMenuDataPtr->gfxLoadState = 0;
            gMain.state++;
        }
        else
        {
            MainMenu_FadeAndBail();
            return TRUE;
        }
        break;
    case 3:
        if (MainMenu_LoadGraphics() == TRUE)
            gMain.state++;
        break;
    case 4:
        LoadMessageBoxAndBorderGfx();
        MainMenu_InitWindows();
        gMain.state++;
        break;
    case 5: // Here is where the sprites are drawn and text is printed
        PrintToWindow(WINDOW_HEADER, FONT_WHITE);
        CreateIconShadow();
        CreatePartyMonIcons();
        CreateMugshot();
        CreateTask(Task_MainMenuWaitFadeIn, 0);
        BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
        gMain.state++;
        break;
    case 6:
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    default:
        SetVBlankCallback(MainMenu_VBlankCB);
        SetMainCallback2(MainMenu_MainCB);
        return TRUE;
    }
    return FALSE;
}

static bool8 MainMenu_InitBgs(void)
{
    ResetAllBgsCoordinates();
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMainMenuBgTemplates, NELEMS(sMainMenuBgTemplates));

    sBg1TilemapBuffer = Alloc(0x800);
    if (sBg1TilemapBuffer == NULL)
        return FALSE;
    memset(sBg1TilemapBuffer, 0, 0x800);
    SetBgTilemapBuffer(UI_BG_MAIN, sBg1TilemapBuffer);
    ScheduleBgCopyTilemapToVram(UI_BG_MAIN);

    sBg2TilemapBuffer = Alloc(0x800);
    if (sBg2TilemapBuffer == NULL)
        return FALSE;
    memset(sBg2TilemapBuffer, 0, 0x800);
    SetBgTilemapBuffer(UI_BG_SCROLL, sBg2TilemapBuffer);
    ScheduleBgCopyTilemapToVram(UI_BG_SCROLL);

    ShowBg(UI_BG_TEXT);
    ShowBg(UI_BG_MAIN);
    ShowBg(UI_BG_SCROLL);
    return TRUE;
}

static void MainMenu_InitializeGPUWindows(void) // This function creates the windows that highlight an option and cover mystery options when not enabled
{
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN1_ON | DISPCNT_WIN0_ON | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP); // Turn on Windows 0 and 1 and Enable Sprites
    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(HWinCoords[sSelectedOption].winh.left, HWinCoords[sSelectedOption].winh.right));  // Set Window 0 width/height Which defines the not darkened space
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(HWinCoords[sSelectedOption].winv.left, HWinCoords[sSelectedOption].winv.right));
    switch(menuType)
    {
            case HAS_SAVED_GAME:    // The three Window 1 states either block out the mystery buttons both, just the mystery event, or nothing. 
                SetGpuReg(REG_OFFSET_WIN1H,  WIN_RANGE(HWinCoords[HW_WIN_MYSTERY_BOTH].winh.left, HWinCoords[HW_WIN_MYSTERY_BOTH].winh.right));
                SetGpuReg(REG_OFFSET_WIN1V,  WIN_RANGE(HWinCoords[HW_WIN_MYSTERY_BOTH].winv.left, HWinCoords[HW_WIN_MYSTERY_BOTH].winv.right));
                break;   
            case HAS_MYSTERY_GIFT:
                SetGpuReg(REG_OFFSET_WIN1H,  WIN_RANGE(HWinCoords[HW_WIN_MYSTERY_EVENT].winh.left, HWinCoords[HW_WIN_MYSTERY_EVENT].winh.right));
                SetGpuReg(REG_OFFSET_WIN1V,  WIN_RANGE(HWinCoords[HW_WIN_MYSTERY_EVENT].winv.left, HWinCoords[HW_WIN_MYSTERY_EVENT].winv.right));
                break;
        }

    SetGpuReg(REG_OFFSET_WININ, (WININ_WIN1_BG0 | WININ_WIN1_BG2) | (WININ_WIN0_BG_ALL | WININ_WIN0_OBJ)); // Set Win 0 Active everywhere, Win 1 active on everything except bg 1 
    SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_ALL);                                                                     // where the main tiles are so the window hides whats behind it
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_DARKEN | BLDCNT_TGT1_BG0 | BLDCNT_TGT1_BG1 | BLDCNT_TGT1_OBJ);   // Set Darken Effect on things not in the window on bg 0, 1, and sprite layer
    SetGpuReg(REG_OFFSET_BLDY, 7);  // Set Level of Darken effect, can be changed 0-16
}

static void MoveHWindowsWithInput(void) // Update GPU windows after selection is changed
{
    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(HWinCoords[sSelectedOption].winh.left, HWinCoords[sSelectedOption].winh.right));
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(HWinCoords[sSelectedOption].winv.left, HWinCoords[sSelectedOption].winv.right));
}

static void LoadOutfitBasedMugshot(void)
{
    u32 mugshotId = GetPlayerMugshotIdByOutfitGender(gSaveBlock3Ptr->currOutfitId, gSaveBlock2Ptr->playerGender);
    LoadCompressedSpriteSheet(&sOutfitMugshot[mugshotId].mugshotGfx);
    LoadSpritePalette(&sOutfitMugshot[mugshotId].mugshotPal);
}

static bool8 MainMenu_LoadGraphics(void) // Load all the tilesets, tilemaps, spritesheets, and palettes
{
    switch (sMainMenuDataPtr->gfxLoadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        if (gSaveBlock2Ptr->playerGender == MALE)
        {
            DecompressAndCopyTileDataToVram(UI_BG_MAIN, sMainBgTiles, 0, 0, 0);
        }
        else
        {
            DecompressAndCopyTileDataToVram(UI_BG_MAIN, sMainBgTilesFem, 0, 0, 0);
        }
        sMainMenuDataPtr->gfxLoadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            if (gSaveBlock2Ptr->playerGender == MALE)
            {
                DecompressDataWithHeaderWram(sMainBgTilemap, sBg1TilemapBuffer);
            }
            else
            {
                DecompressDataWithHeaderWram(sMainBgTilemapFem, sBg1TilemapBuffer);
            }
            sMainMenuDataPtr->gfxLoadState++;
        }
        break;
    case 2:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(UI_BG_SCROLL, sScrollBgTiles, 0, 0, 0);
        sMainMenuDataPtr->gfxLoadState++;
        break;
    case 3:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderWram(sScrollBgTilemap, sBg2TilemapBuffer);
            sMainMenuDataPtr->gfxLoadState++;
        }
        break;
    case 4:
    {
        if (gSaveBlock2Ptr->playerGender == MALE)
        {
            LoadCompressedSpriteSheet(&sSpriteSheet_IconBox);
            LoadSpritePalette(&sSpritePal_IconBox);
            LoadOutfitBasedMugshot();
            LoadPalette(sMainBgPalette, 0, 32);
        }
        else
        {
            LoadCompressedSpriteSheet(&sSpriteSheet_IconBoxFem);
            LoadSpritePalette(&sSpritePal_IconBoxFem);
            LoadOutfitBasedMugshot();
            LoadPalette(sMainBgPaletteFem, 0, 32);
        }
        LoadPalette(sScrollBgPalette, 16, 32);
    }
        sMainMenuDataPtr->gfxLoadState++;
        break;
    default:
        sMainMenuDataPtr->gfxLoadState = 0;
        return TRUE;
    }
    return FALSE;
}

static void MainMenu_InitWindows(void) // Init Text Windows
{
    InitWindows(sMainMenuWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(UI_BG_TEXT);
    
    FillWindowPixelBuffer(WINDOW_HEADER, 0);
    PutWindowTilemap(WINDOW_HEADER);
    CopyWindowToVram(WINDOW_HEADER, 3);

    FillWindowPixelBuffer(WINDOW_MIDDLE, 0);
    PutWindowTilemap(WINDOW_MIDDLE);
    CopyWindowToVram(WINDOW_MIDDLE, 3);
}


/*    Sprite Creation Functions     */

//
//      Mugshot Functions
//
static void CreateMugshot(void)
{
    sMainMenuDataPtr->mugshotSpriteId = CreateSprite(&sSpriteTemplate_Mugshot, 48, 56, 1);
    gSprites[sMainMenuDataPtr->mugshotSpriteId].invisible = FALSE;
    StartSpriteAnim(&gSprites[sMainMenuDataPtr->mugshotSpriteId], 0);
    gSprites[sMainMenuDataPtr->mugshotSpriteId].oam.priority = 0;
    return;
}

static void DestroyMugshot(void)
{
    DestroySprite(&gSprites[sMainMenuDataPtr->mugshotSpriteId]);
    sMainMenuDataPtr->mugshotSpriteId = SPRITE_NONE;
}

//
//  Create Mon Icon and Shadow Sprites
//
#define ICON_BOX_1_START_X          136 + 8
#define ICON_BOX_1_START_Y          38
#define ICON_BOX_X_DIFFERENCE       32
#define ICON_BOX_Y_DIFFERENCE       32
static void CreateIconShadow(void)
{
    u8 i = 0;

    sMainMenuDataPtr->iconBoxSpriteIds[0] = CreateSprite(&sSpriteTemplate_IconBox, ICON_BOX_1_START_X + (ICON_BOX_X_DIFFERENCE * 0), ICON_BOX_1_START_Y, 2);
    sMainMenuDataPtr->iconBoxSpriteIds[1] = CreateSprite(&sSpriteTemplate_IconBox, ICON_BOX_1_START_X + (ICON_BOX_X_DIFFERENCE * 1), ICON_BOX_1_START_Y, 2);
    sMainMenuDataPtr->iconBoxSpriteIds[2] = CreateSprite(&sSpriteTemplate_IconBox, ICON_BOX_1_START_X + (ICON_BOX_X_DIFFERENCE * 2), ICON_BOX_1_START_Y, 2);
    
    sMainMenuDataPtr->iconBoxSpriteIds[3] = CreateSprite(&sSpriteTemplate_IconBox, ICON_BOX_1_START_X + (ICON_BOX_X_DIFFERENCE * 0), ICON_BOX_1_START_Y + (ICON_BOX_Y_DIFFERENCE * 1), 2);
    sMainMenuDataPtr->iconBoxSpriteIds[4] = CreateSprite(&sSpriteTemplate_IconBox, ICON_BOX_1_START_X + (ICON_BOX_X_DIFFERENCE * 1), ICON_BOX_1_START_Y + (ICON_BOX_Y_DIFFERENCE * 1), 2);
    sMainMenuDataPtr->iconBoxSpriteIds[5] = CreateSprite(&sSpriteTemplate_IconBox, ICON_BOX_1_START_X + (ICON_BOX_X_DIFFERENCE * 2), ICON_BOX_1_START_Y + (ICON_BOX_Y_DIFFERENCE * 1), 2);

    for(i = 0; i < gPlayerPartyCount; i++)
    {
        gSprites[sMainMenuDataPtr->iconBoxSpriteIds[i]].invisible = FALSE;
        StartSpriteAnim(&gSprites[sMainMenuDataPtr->iconBoxSpriteIds[i]], 0);
        gSprites[sMainMenuDataPtr->iconBoxSpriteIds[i]].oam.priority = 1;
    }

    for(i = gPlayerPartyCount; i < 6; i++) // Hide Shadows For Mons that don't exist
    {
        gSprites[sMainMenuDataPtr->iconBoxSpriteIds[i]].invisible = TRUE;
    }

    return;
}

static void DestroyIconShadow(void)
{
    u8 i = 0;
    for(i = 0; i < gPlayerPartyCount; i++)
    {
        DestroySprite(&gSprites[sMainMenuDataPtr->iconBoxSpriteIds[i]]);
        sMainMenuDataPtr->iconBoxSpriteIds[i] = SPRITE_NONE;
    }
}

static u32 GetHPEggCyclePercent(u32 partyIndex) // Random HP function from psf's hack written by Rioluwott
{
    struct Pokemon *mon = &gPlayerParty[partyIndex];
    if (!GetMonData(mon, MON_DATA_IS_EGG))
        return ((GetMonData(mon, MON_DATA_HP)) * 100 / (GetMonData(mon,MON_DATA_MAX_HP)));
    else
        return ((GetMonData(mon, MON_DATA_FRIENDSHIP)) * 100 / (gSpeciesInfo[GetMonData(mon,MON_DATA_SPECIES)].eggCycles));
}

static void CreatePartyMonIcons(void)
{
    u8 i = 0;
    s16 x = ICON_BOX_1_START_X;
    s16 y = ICON_BOX_1_START_Y;
    LoadMonIconPalettes();
    for(i = 0; i < gPlayerPartyCount; i++)
    {   
        switch (i) // choose position for each icon
        {
            case 0:
                x = ICON_BOX_1_START_X;
                y = ICON_BOX_1_START_Y;
                break;
            case 1:
                x = ICON_BOX_1_START_X + ICON_BOX_X_DIFFERENCE;
                y = ICON_BOX_1_START_Y;
                break;
            case 2:
                x = ICON_BOX_1_START_X + (ICON_BOX_X_DIFFERENCE * 2);
                y = ICON_BOX_1_START_Y;
                break;
            case 3:
                x = ICON_BOX_1_START_X;
                y = ICON_BOX_1_START_Y + (ICON_BOX_Y_DIFFERENCE * 1);
                break;
            case 4:
                x = ICON_BOX_1_START_X + ICON_BOX_X_DIFFERENCE;
                y = ICON_BOX_1_START_Y + (ICON_BOX_X_DIFFERENCE * 1);
                break;
            case 5:
                x = ICON_BOX_1_START_X + (ICON_BOX_X_DIFFERENCE * 2);
                y = ICON_BOX_1_START_Y + (ICON_BOX_Y_DIFFERENCE * 1);
                break;
        }

        sMainMenuDataPtr->iconMonSpriteIds[i] = CreateMonIcon(GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG), SpriteCB_MonIcon, x, y - 2, 0, GetMonData(&gPlayerParty[i], MON_DATA_PERSONALITY));
        gSprites[sMainMenuDataPtr->iconMonSpriteIds[i]].oam.priority = 0;

        if (GetHPEggCyclePercent(i) == 0)
        {
            gSprites[sMainMenuDataPtr->iconMonSpriteIds[i]].callback = SpriteCallbackDummy;
        }

    }
}

static void DestroyMonIcons(void)
{
    u8 i = 0;
    for(i = 0; i < 6; i++)
    {
        DestroySprite(&gSprites[sMainMenuDataPtr->iconMonSpriteIds[i]]);
        sMainMenuDataPtr->iconMonSpriteIds[i] = SPRITE_NONE;
    }
}


//
//  Print The Text For Dex Num, Badges, Name, Playtime, Location
//
static const u8 sText_DexNum[] = _("Dex {STR_VAR_1}");
static const u8 sText_Badges[] = _("Badges {STR_VAR_1}");
static void PrintToWindow(u8 windowId, u8 colorIdx)
{
    const u8 colors[3] = {0,  2,  3}; 
    u8 mapDisplayHeader[24];
    u8 *withoutPrefixPtr, *playTimePtr;
    u16 dexCount = 0; u8 badgeCount = 0;
    u32 i = 0;

    FillWindowPixelBuffer(WINDOW_HEADER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WINDOW_MIDDLE, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    // Print Map Name In Header
    withoutPrefixPtr = &(mapDisplayHeader[3]);
    GetMapName(withoutPrefixPtr, GetCurrentRegionMapSectionId(), 0);
    mapDisplayHeader[0] = EXT_CTRL_CODE_BEGIN;
    mapDisplayHeader[1] = EXT_CTRL_CODE_HIGHLIGHT;
    mapDisplayHeader[2] = TEXT_COLOR_TRANSPARENT;
    AddTextPrinterParameterized4(WINDOW_HEADER, FONT_NARROW, GetStringCenterAlignXOffset(FONT_NARROW, withoutPrefixPtr, 10 * 8), 1, 0, 0, colors, 0xFF, mapDisplayHeader);

    // Print Playtime In Header
    playTimePtr = ConvertIntToDecimalStringN(gStringVar4, gSaveBlock2Ptr->playTimeHours, STR_CONV_MODE_LEFT_ALIGN, 3);
    *playTimePtr = 0xF0;
    ConvertIntToDecimalStringN(playTimePtr + 1, gSaveBlock2Ptr->playTimeMinutes, STR_CONV_MODE_LEADING_ZEROS, 2);
    AddTextPrinterParameterized4(WINDOW_HEADER, FONT_NORMAL, (104 - 12) + GetStringRightAlignXOffset(FONT_NORMAL, gStringVar4, (6*8)), 1, 0, 0, colors, TEXT_SKIP_DRAW, gStringVar4);

    // Print Dex Numbers if You Have It
    if (FlagGet(FLAG_SYS_POKEDEX_GET) == TRUE)
    {
        if (IsNationalPokedexEnabled())
            dexCount = GetNationalPokedexCount(FLAG_GET_CAUGHT);
        else
            dexCount = GetHoennPokedexCount(FLAG_GET_CAUGHT);
        ConvertIntToDecimalStringN(gStringVar1, dexCount, STR_CONV_MODE_RIGHT_ALIGN, 4);
        StringExpandPlaceholders(gStringVar4, sText_DexNum);
        AddTextPrinterParameterized4(WINDOW_MIDDLE, FONT_NORMAL, 8 + 8, 16 + 2, 0, 0, colors, TEXT_SKIP_DRAW, gStringVar4);
    }

    // Print Badge Numbers if You Have Them
    badgeCount = GetBadgeCount();
    ConvertIntToDecimalStringN(gStringVar1, badgeCount, STR_CONV_MODE_LEADING_ZEROS, 1);
    StringExpandPlaceholders(gStringVar4, sText_Badges);
    AddTextPrinterParameterized4(WINDOW_MIDDLE, FONT_NORMAL, 16, 32 + 2, 0, 0, colors, TEXT_SKIP_DRAW, gStringVar4);

    // Print Player Name
    AddTextPrinterParameterized3(WINDOW_MIDDLE, FONT_NORMAL, 16, 2, colors, TEXT_SKIP_DRAW, gSaveBlock2Ptr->playerName);

    PutWindowTilemap(WINDOW_HEADER);
    CopyWindowToVram(WINDOW_HEADER, 3);
    PutWindowTilemap(WINDOW_MIDDLE);
    CopyWindowToVram(WINDOW_MIDDLE, 3);
}


//
//  Main Input Control Task
//
static void Task_MainMenuMain(u8 taskId)
{
    if (JOY_NEW(A_BUTTON)) // If Pressed A go to thing you pressed A on
    {
        PlaySE(SE_SELECT);
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
        switch(sSelectedOption)
        {
            case HW_WIN_CONTINUE:
                gExitStairsMovementDisabled = FALSE;
                sMainMenuDataPtr->savedCallback = CB2_ContinueSavedGame;
                sSelectedOption = HW_WIN_CONTINUE;
                break;
            case HW_WIN_NEW_GAME:
                gExitStairsMovementDisabled = FALSE;
                ResetChallengesData();
                gMain.savedCallback = CB2_NewGameBirchSpeech_ReturnFromOptionsMenu;
                if (HOUSE_LIKE_CARPET)
                    sMainMenuDataPtr->savedCallback = CB2_InitOptionPlusMenu;
                else
                    sMainMenuDataPtr->savedCallback = CB2_InitChallengesMenu;
                sSelectedOption = HW_WIN_CONTINUE;
                break;
            case HW_WIN_OPTIONS:
                gMain.savedCallback = CB2_ReinitMainMenu;
                sMainMenuDataPtr->savedCallback = CB2_InitOptionPlusMenu;
                break;
            case HW_WIN_MYSTERY_EVENT:
                sMainMenuDataPtr->savedCallback = CB2_InitMysteryEventMenu;
                sSelectedOption = HW_WIN_CONTINUE;
                break;
            case HW_WIN_MYSTERY_GIFT:
                if((menuType == HAS_MYSTERY_EVENTS) && !(IsWirelessAdapterConnected()))
                    //sMainMenuDataPtr->savedCallback = CB2_InitEReader;
                    sMainMenuDataPtr->savedCallback = CB2_InitMysteryGift; // E-Reader Crashes IDK Why Exactly But You Can Uncomment It
                else
                    sMainMenuDataPtr->savedCallback = CB2_InitMysteryGift;
                sSelectedOption = HW_WIN_CONTINUE;
                break;
        }
        gTasks[taskId].func = Task_MainMenuTurnOff;
    }

    if (JOY_NEW(B_BUTTON)) // If B Pressed Go To Title Screen
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
        sMainMenuDataPtr->savedCallback = CB2_InitTitleScreen;
        sSelectedOption = HW_WIN_CONTINUE;
        gTasks[taskId].func = Task_MainMenuTurnOff;
    }

    if(JOY_NEW(DPAD_DOWN)) // Handle DPad directions, kinda bad way to do it with each case handled individually but its whatever
    {
        switch (menuType)
        {
            case HAS_SAVED_GAME:
                if(sSelectedOption == HW_WIN_CONTINUE)
                    sSelectedOption = HW_WIN_NEW_GAME;
                else if((sSelectedOption == HW_WIN_NEW_GAME) || (sSelectedOption == HW_WIN_OPTIONS))
                    sSelectedOption = HW_WIN_CONTINUE;
                break;
            case HAS_MYSTERY_GIFT:
                if(sSelectedOption == HW_WIN_CONTINUE)
                    sSelectedOption = HW_WIN_NEW_GAME;
                else if((sSelectedOption == HW_WIN_NEW_GAME) || (sSelectedOption == HW_WIN_OPTIONS))
                    sSelectedOption = HW_WIN_MYSTERY_GIFT;
                else
                    sSelectedOption = HW_WIN_CONTINUE;
                break;
            case HAS_MYSTERY_EVENTS:
                if(sSelectedOption == HW_WIN_CONTINUE)
                    sSelectedOption = HW_WIN_NEW_GAME;
                else if(sSelectedOption == HW_WIN_NEW_GAME)
                    sSelectedOption = HW_WIN_MYSTERY_GIFT;
                else if(sSelectedOption == HW_WIN_OPTIONS)
                    sSelectedOption = HW_WIN_MYSTERY_EVENT;
                else
                    sSelectedOption = HW_WIN_CONTINUE;
                break;
        }
        MoveHWindowsWithInput();
    }

    if(JOY_NEW(DPAD_UP))
    {
        switch (menuType)
        {
            case HAS_SAVED_GAME:
                if(sSelectedOption == HW_WIN_CONTINUE)
                    sSelectedOption = HW_WIN_NEW_GAME;
                else if((sSelectedOption == HW_WIN_NEW_GAME) || (sSelectedOption == HW_WIN_OPTIONS))
                    sSelectedOption = HW_WIN_CONTINUE;
                break;
            case HAS_MYSTERY_GIFT:
                if(sSelectedOption == HW_WIN_CONTINUE)
                    sSelectedOption = HW_WIN_MYSTERY_GIFT;
                else if((sSelectedOption == HW_WIN_NEW_GAME) || (sSelectedOption == HW_WIN_OPTIONS))
                    sSelectedOption = HW_WIN_CONTINUE;
                else
                    sSelectedOption = HW_WIN_NEW_GAME;
                break;
            case HAS_MYSTERY_EVENTS:
                if(sSelectedOption == HW_WIN_CONTINUE)
                    sSelectedOption = HW_WIN_MYSTERY_GIFT;
                else if(sSelectedOption == HW_WIN_NEW_GAME)
                    sSelectedOption = HW_WIN_CONTINUE;
                else if(sSelectedOption == HW_WIN_OPTIONS)
                    sSelectedOption = HW_WIN_CONTINUE;
                else if(sSelectedOption == HW_WIN_MYSTERY_GIFT)
                    sSelectedOption = HW_WIN_NEW_GAME;
                else if(sSelectedOption == HW_WIN_MYSTERY_EVENT)
                    sSelectedOption = HW_WIN_OPTIONS;
                break;
        }
        MoveHWindowsWithInput();
    }

    if(JOY_NEW(DPAD_LEFT) || JOY_NEW(DPAD_RIGHT))
    {
        switch (menuType)
        {
            case HAS_SAVED_GAME:
                if(sSelectedOption == HW_WIN_NEW_GAME)
                    sSelectedOption = HW_WIN_OPTIONS;
                else if(sSelectedOption == HW_WIN_OPTIONS)
                    sSelectedOption = HW_WIN_NEW_GAME;
                break;
            case HAS_MYSTERY_GIFT:
                if(sSelectedOption == HW_WIN_NEW_GAME)
                    sSelectedOption = HW_WIN_OPTIONS;
                else if(sSelectedOption == HW_WIN_OPTIONS)
                    sSelectedOption = HW_WIN_NEW_GAME;
                break;
            case HAS_MYSTERY_EVENTS:
                if(sSelectedOption == HW_WIN_NEW_GAME)
                    sSelectedOption = HW_WIN_OPTIONS;
                else if(sSelectedOption == HW_WIN_OPTIONS)
                    sSelectedOption = HW_WIN_NEW_GAME;

                else if(sSelectedOption == HW_WIN_MYSTERY_GIFT)
                    sSelectedOption = HW_WIN_MYSTERY_EVENT;
                else if(sSelectedOption == HW_WIN_MYSTERY_EVENT)
                    sSelectedOption = HW_WIN_MYSTERY_GIFT;
                break;
        }
        MoveHWindowsWithInput();
    }
}
