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

bool32 IsMusicPlayerOn(void);
u16 GetRegularWildBattleMusic(void);
u16 GetLegndaryWildBattleMusic(u16 species);
u16 GetTrainerBattleMusic(enum TrainerClassID trainerClass);
u16 GetSurfMusic(void);
u16 GetBikeMusic(void);
void PlayVictoryMusic(u8 battleType);
void ResetAllPlayerMusic(void);

#endif // GUARD_MUSIC_PLAYER_H
