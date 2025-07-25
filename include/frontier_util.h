#ifndef GUARD_FRONTIER_UTIL_H
#define GUARD_FRONTIER_UTIL_H

void CallFrontierUtilFunc(void);
u8 GetFrontierBrainStatus(void);
void CopyFrontierTrainerText(u8 whichText, u16 trainerId);
void ResetWinStreaks(void);
u32 GetCurrentFacilityWinStreak(void);
void ResetFrontierTrainerIds(void);
u8 GetPlayerSymbolCountForFacility(u8 facility);
u16 GetBattlePoints(void);
bool8 IsEnoughBattlePoints(u16 cost);
void SetBattlePoints(u16 pointAmount);
bool8 RemoveBattlePoints(u16 toSub);
bool8 AddBattlePoints(u16 toAdd);
void ShowRankingHallRecordsWindow(void);
void ScrollRankingHallRecordsWindow(void);
void ClearRankingHallRecords(void);
void SaveGameFrontier(void);
u8 GetFrontierBrainTrainerPicIndex(void);
enum TrainerClassID GetFrontierBrainTrainerClass(void);
void CopyFrontierBrainTrainerName(u8 *dst);
bool8 IsFrontierBrainFemale(void);
void SetFrontierBrainObjEventGfx_2(void);
void CreateFrontierBrainPokemon(void);
u16 GetFrontierBrainMonSpecies(u8 monId);
void SetFrontierBrainObjEventGfx(u8 facility);
u16 GetFrontierBrainMonMove(u8 monId, u8 moveSlotId);
u8 GetFrontierBrainMonNature(u8 monId);
u8 GetFrontierBrainMonEvs(u8 monId, u8 evStatId);
s32 GetFronterBrainSymbol(void);
void ClearEnemyPartyAfterChallenge(void);
u16 GetBattlePoints(void);
bool8 IsEnoughBattlePoints(u16 cost);
void SetBattlePoints(u16 pointAmount);
bool8 RemoveBattlePoints(u16 toSub);

#endif // GUARD_FRONTIER_UTIL_H
