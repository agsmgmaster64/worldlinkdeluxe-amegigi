#ifndef GUARD_QOL_FIELD_MOVES_H
#define GUARD_QOL_FIELD_MOVES_H

void ReturnToFieldFromFlyToolMapSelect(void);
bool32 IsFlyToolUsed(void);
void ReturnToFieldOrBagFromFlyTool(void);
void ResetFlyTool(void);

u32 CanUseSurfFromInteractedWater(void);
void RemoveRelevantSurfFieldEffect(void);
void Task_SurfToolFieldEffect(u8 taskId);

void FldEff_UseFlashTool(void);
u32 CanUseFlashTool(void);

bool32 CanUseWaterfallTool(void);
void CreateUseWaterfallTask(void);
u32 CanUseWaterfallFromInteractedWater(void);
void RemoveRelevantWaterfallFieldEffect(void);

bool8 FldEff_UseDiveTool(void);
void RemoveRelevantDiveFieldEffect(void);
u32 CanUseDiveDown(void);
u32 CanUseDiveEmerge(void);

bool32 CanUseRockClimbTool(void);

bool32 PartyCanUseFieldMove(u32 move, bool32 doUnlockedCheck);

enum FlyToolSource
{
    FLY_SOURCE_MOVE,
    FLY_SOURCE_FIELD,
    FLY_SOURCE_BAG
};

// https://github.com/PokemonSanFran/pokeemerald/wiki/QoL-Field-Moves#developer-options

#endif // GUARD_QOL_FIELD_MOVES_H
