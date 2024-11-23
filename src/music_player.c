#include "global.h"
#include "battle_setup.h"
#include "data.h"
#include "event_data.h"
#include "music_player.h"
#include "script.h"
#include "sound.h"
#include "constants/songs.h"
#include "constants/trainers.h"

static const struct PlaylistMusicList sPlaylistMusicList[PLAYLIST_SET_STYLE_COUNT] =
{
    [PLAYLIST_SET_STYLE_DEFAULT] =
    {
        .wildBattleMusic = MUS_WLD_VS_WILD,
        .trainerBattleMusic = MUS_WLD_VS_TRAINER,
        .gymLeaderBattleMusic = MUS_WLD_VS_GYM_LEADER,
        .eliteFourBattleMusic = MUS_VS_ELITE_FOUR,
        .championBattleMusic = MUS_WLD_VS_CHAMPION,
        .surfMusic = MUS_WLD_SURF,
        .bikeMusic = MUS_CYCLING,
    },
    [PLAYLIST_SET_STYLE_REGULAR] = // duplicate of first for ability to override to this set
    {
        .wildBattleMusic = MUS_WLD_VS_WILD,
        .trainerBattleMusic = MUS_WLD_VS_TRAINER,
        .gymLeaderBattleMusic = MUS_WLD_VS_GYM_LEADER,
        .eliteFourBattleMusic = MUS_VS_ELITE_FOUR,
        .championBattleMusic = MUS_WLD_VS_CHAMPION,
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
        .bikeMusic = MUS_RG_CYCLING,
    },
    [PLAYLIST_SET_STYLE_ALTERNATE] =
    {
        .wildBattleMusic = MUS_ZGS_VS_DREAM_WILD,
        .trainerBattleMusic = MUS_ZGS_VS_DREAM_TRAINER,
        .gymLeaderBattleMusic = MUS_ZGS_VS_GYM_LEADER,
        .eliteFourBattleMusic = MUS_ZGS_VS_SAKUYA,
        .championBattleMusic = MUS_ZGS_VS_CHAMPION,
        .surfMusic = MUS_ZGS_SURF,
        .bikeMusic = MUS_RG_CYCLING,
    },
    [PLAYLIST_SET_STYLE_ALTERNATE2] = // placeholder
    {
        .wildBattleMusic = MUS_ZGS_VS_DREAM_WILD,
        .trainerBattleMusic = MUS_ZGS_VS_DREAM_TRAINER,
        .gymLeaderBattleMusic = MUS_ZGS_VS_GYM_LEADER,
        .eliteFourBattleMusic = MUS_ZGS_VS_SAKUYA,
        .championBattleMusic = MUS_ZGS_VS_CHAMPION,
        .surfMusic = MUS_ZGS_SURF,
        .bikeMusic = MUS_RG_CYCLING,
    },
};

bool32 IsMusicPlayerOn(void)
{
    return gSaveBlock3Ptr->savedPlayerMusic.isPlayerOn;
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

    if (IsMusicPlayerOn() && gSaveBlock3Ptr->savedPlayerMusic.wildBattleMusic)
        return gSaveBlock3Ptr->savedPlayerMusic.wildBattleMusic;
   
    return sPlaylistMusicList[musicStyle].wildBattleMusic;
}

u16 GetLegndaryWildBattleMusic(u16 species)
{
    if (IsMusicPlayerOn() && gSaveBlock3Ptr->savedPlayerMusic.wildBattleMusic)
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
        return MUS_RG_VS_LEGEND;
    }
}

u16 GetTrainerBattleMusic(u8 trainerClass)
{
    u16 musicStyle = GetMusicStyle();

    if (IsMusicPlayerOn() && gSaveBlock3Ptr->savedPlayerMusic.trainerBattleMusic)
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
    if (IsMusicPlayerOn() && gSaveBlock3Ptr->savedPlayerMusic.victoryMusic)
    {
        PlayBGM(gSaveBlock3Ptr->savedPlayerMusic.victoryMusic);
    }
    else if (battleType == MUSIC_PLAYER_VICTORY_TRAINER)
    {
        switch (GetTrainerClassFromId(gTrainerBattleOpponent_A))
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
            PlayBGM(MUS_VICTORY_GYM_LEADER);
            break;
        default:
            PlayBGM(MUS_WLD_VICTORY_TRAINER);
            break;
        }
    }
    else if (battleType == MUSIC_PLAYER_CAUGHT_MON)
    {
        PlayBGM(MUS_WLD_CAUGHT);
    }
    else
    {
        PlayBGM(MUS_WLD_VICTORY_WILD);
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

void SetOverworldPlayerMusic(struct ScriptContext *ctx)
{
    u16 music = ScriptReadHalfword(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.overworldMusic = music;
}

void SetWildBattlePlayerMusic(struct ScriptContext *ctx)
{
    u16 music = ScriptReadHalfword(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.wildBattleMusic = music;
}

void SetTrainerBattlePlayerMusic(struct ScriptContext *ctx)
{
    u16 music = ScriptReadHalfword(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.trainerBattleMusic = music;
}

void SetVictoryPlayerMusic(struct ScriptContext *ctx)
{
    u16 music = ScriptReadHalfword(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.victoryMusic = music;
}

void PowerMusicPlayerOverride(struct ScriptContext *ctx)
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
