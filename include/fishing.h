#ifndef GUARD_FISHING_H
#define GUARD_FISHING_H

void StartFishing(u8 rod);
void UpdateChainFishingStreak(void);
u32 CalculateChainFishingShinyRolls(void);
bool32 ShouldUseFishingEnvironmentInBattle(void);
void Task_Fishing(u8);
void ResetPlayerAvatar(u8 gfxId);
void AlignFishingAnimationFrames(void);

#endif // GUARD_FISHING_H