#ifndef GUARD_MUSIC_PLAYER_H
#define GUARD_MUSIC_PLAYER_H

#define MUSIC_PLAYER_VICTORY_WILD      0
#define MUSIC_PLAYER_VICTORY_TRAINER   1
#define MUSIC_PLAYER_CAUGHT_MON        2

struct PlaylistMusicList
{
    u16 wildBattleMusic;
    u16 trainerBattleMusic;
    u16 gymLeaderBattleMusic;
    u16 eliteFourBattleMusic;
    u16 championBattleMusic;
    u16 surfMusic;
    u16 bikeMusic;
};

struct MP3PlayerTrackInfo
{
    const u8 *name;
    u16 trackId;
};

struct MP3PlayerOptionInfo
{
    const u8 *name;
    const u8 *description;
};

bool32 IsMP3PlayerOn(void);
void MP3Player_Init(MainCallback callback);
u16 GetRegularWildBattleMusic(void);
u16 GetLegndaryWildBattleMusic(u16 species);
u16 GetTrainerBattleMusic(u8 trainerClass);
u16 GetSurfMusic(void);
u16 GetBikeMusic(void);
void PlayVictoryMusic(u8 battleType);
void ResetAllPlayerMusic(void);

#endif // GUARD_MUSIC_PLAYER_H
