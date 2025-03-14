#include "global.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_effect.h"
#include "field_control_avatar.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "fldeff.h"
#include "fldeff_misc.h"
#include "item.h"
#include "item_menu.h"
#include "item_use.h"
#include "map_name_popup.h"
#include "metatile_behavior.h"
#include "music_player.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "qol_field_moves.h"
#include "region_map.h"
#include "script.h"
#include "sound.h"
#include "constants/event_objects.h"
#include "constants/field_effects.h"
#include "constants/flags.h"
#include "constants/items.h"
#include "constants/map_types.h"
#include "constants/moves.h"
#include "constants/party_menu.h"
#include "constants/songs.h"
#include "constants/vars.h"

static void FieldCallback_UseFlyTool(void);
static void Task_UseFlyTool(void);

static void Task_UseWaterfallTool(u8);
static bool8 IsPlayerFacingWaterfall(void);

static void Task_UseDiveTool(u8);

static bool32 CanSpeciesLearnMoveLevelUp(u16 species, u16 move);
static bool32 SetMonResultVariables(u32 partyIndex, u32 species);

#define tState      data[0]
#define tFallOffset data[1]
#define tTotalFall  data[2]

// Fly
void ReturnToFieldFromFlyToolMapSelect(void)
{
    SetMainCallback2(CB2_ReturnToField);
    gFieldCallback = Task_UseFlyTool;
}

static void Task_UseFlyTool(void)
{
    Overworld_ResetStateAfterFly();
    WarpIntoMap();
    SetMainCallback2(CB2_LoadMap);
    gFieldCallback = FieldCallback_UseFlyTool;
}

static void FieldCallback_UseFlyTool(void)
{
    Overworld_PlaySpecialMapMusic();
    FadeInFromBlack();
    if (gPaletteFade.active)
            return;

    UnlockPlayerFieldControls();
    UnfreezeObjectEvents();
    gFieldCallback = NULL;
}

bool32 IsFlyToolUsed(void)
{
    return (VarGet(VAR_FLY_TOOL_SOURCE));
}

void ReturnToFieldOrBagFromFlyTool(void)
{
    if (VarGet(VAR_FLY_TOOL_SOURCE) == FLY_SOURCE_BAG)
        GoToBagMenu(ITEMMENULOCATION_LAST, KEYITEMS_POCKET, CB2_ReturnToFieldWithOpenMenu);
    else if (VarGet(VAR_FLY_TOOL_SOURCE) == FLY_SOURCE_FIELD)
        SetMainCallback2(CB2_ReturnToField);
}

void ResetFlyTool(void)
{
    VarSet(VAR_FLY_TOOL_SOURCE, FLY_SOURCE_MOVE);
}

// Surf
u32 CanUseSurf(s16 x, s16 y, u8 collision)
{
    bool32 monHasMove = PartyHasMonLearnsKnowsFieldMove(MOVE_SURF);
    bool32 bagHasItem = CheckBagHasItem(ITEM_SURFBOARD, 1);
    bool32 playerHasBadge = FlagGet(FLAG_BADGE05_GET);
    bool32 collisionHasMismatch = (collision == COLLISION_ELEVATION_MISMATCH);

    if (IsPlayerFacingSurfableFishableWater()
     && collisionHasMismatch
     && (!TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_SURFING))
     && GetObjectEventIdByPosition(x, y, 1) == OBJECT_EVENTS_COUNT)
    {
        if ((monHasMove && playerHasBadge))
            return FIELD_MOVE_POKEMON;
        else if (bagHasItem)
            return FIELD_MOVE_TOOL;
    }

    return FIELD_MOVE_FAIL;
}

u32 CanUseSurfFromInteractedWater(void)
{
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x = playerObjEvent->currentCoords.x;
    s16 y = playerObjEvent->currentCoords.y;

    return CanUseSurf(x, y, COLLISION_ELEVATION_MISMATCH);
}

u8 FldEff_UseSurfTool(void)
{
    CreateTask(Task_SurfToolFieldEffect, 0);
    Overworld_ClearSavedMusic();
    Overworld_ChangeMusicTo(GetSurfMusic());
    return FALSE;
}

static void SurfToolFieldEffect_CheckHeldMovementStatus(struct Task *task)
{
    struct ObjectEvent *objectEvent;
    objectEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    if (ObjectEventCheckHeldMovementStatus(objectEvent))
        task->tState++;
}

static void (*const sSurfToolFieldEffectFuncs[])(struct Task *) =
{
    SurfFieldEffect_Init,
    SurfToolFieldEffect_CheckHeldMovementStatus,
    SurfFieldEffect_JumpOnSurfBlob,
    SurfFieldEffect_End,
};

void Task_SurfToolFieldEffect(u8 taskId)
{
    sSurfToolFieldEffectFuncs[gTasks[taskId].tState](&gTasks[taskId]);
}

void RemoveRelevantSurfFieldEffect(void)
{
    if (FieldEffectActiveListContains(FLDEFF_USE_SURF))
    {
        FieldEffectActiveListRemove(FLDEFF_USE_SURF);
        DestroyTask(FindTaskIdByFunc(Task_SurfFieldEffect));
    }
    else if(FieldEffectActiveListContains(FLDEFF_USE_SURF_TOOL))
    {
        FieldEffectActiveListRemove(FLDEFF_USE_SURF_TOOL);
        DestroyTask(FindTaskIdByFunc(Task_SurfToolFieldEffect));
    }
}

// Flash

void FldEff_UseFlashTool(void)
{
    HideMapNamePopUpWindow();
    PlaySE(SE_M_REFLECT);
    FlagSet(FLAG_SYS_USE_FLASH);
    ScriptContext_SetupScript(EventScript_UseLantern);
}

u32 CanUseFlash(void)
{
    bool32 playerIsInCave = (gMapHeader.cave == TRUE);
    bool32 mapIsNotLit = (GetFlashLevel() == (gMaxFlashLevel - 1));
    bool32 playerHasUsedFlash = FlagGet(FLAG_SYS_USE_FLASH);
    bool32 monHasMove = PartyHasMonLearnsKnowsFieldMove(MOVE_FLASH);
    bool32 playerHasBadge = FlagGet(FLAG_BADGE02_GET);
    bool32 bagHasItem = CheckBagHasItem(ITEM_LANTERN, 1);

    if (playerIsInCave && mapIsNotLit && !playerHasUsedFlash)
    {
        if ((monHasMove && playerHasBadge))
            return FIELD_MOVE_POKEMON;
        else if (bagHasItem)
            return FIELD_MOVE_TOOL;
    }
    return FIELD_MOVE_FAIL;
}

//Waterfall

u32 CanUseWaterfallFromInteractedWater(void)
{
    return CanUseWaterfall(DIR_SOUTH);
}

bool8 IsPlayerFacingWaterfall(void)
{
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x = playerObjEvent->currentCoords.x;
    s16 y = playerObjEvent->currentCoords.y;

    MoveCoords(playerObjEvent->facingDirection, &x, &y);
    if (GetCollisionAtCoords(playerObjEvent, x, y, playerObjEvent->facingDirection) == COLLISION_NONE
     && MetatileBehavior_IsWaterfall(MapGridGetMetatileBehaviorAt(x, y)))
        return TRUE;
    else
       return FALSE;
}

u32 CanUseWaterfall(u8 direction)
{
    bool32 monHasMove = PartyHasMonLearnsKnowsFieldMove(MOVE_WATERFALL);
    bool32 bagHasItem = CheckBagHasItem(ITEM_CLIMBING_GEAR, 1);
    bool32 playerHasBadge = FlagGet(FLAG_BADGE08_GET);
    bool32 isPlayerPushedSouth = (direction == DIR_SOUTH);

    if (IsPlayerFacingWaterfall()
     && IsPlayerSurfingNorth()
     && isPlayerPushedSouth)
    {
        if ((monHasMove && playerHasBadge))
            return FIELD_MOVE_POKEMON;
        else if (bagHasItem)
            return FIELD_MOVE_TOOL;
    }

    return FIELD_MOVE_FAIL;
}

u32 CanUseWaterfallTool(void)
{
    return CanUseWaterfall(DIR_SOUTH);
}

static bool8 WaterfallToolFieldEffect_ContinueRideOrEnd(struct Task *task, struct ObjectEvent *objectEvent)
{
    if (!ObjectEventClearHeldMovementIfFinished(objectEvent))
        return FALSE;

    if (MetatileBehavior_IsWaterfall(objectEvent->currentMetatileBehavior))
    {
        // Still ascending waterfall, back to WaterfallFieldEffect_RideUp
        task->tState = 1;
        return TRUE;
    }

    UnlockPlayerFieldControls();
    gPlayerAvatar.preventStep = FALSE;
    DestroyTask(FindTaskIdByFunc(Task_UseWaterfallTool));
    FieldEffectActiveListRemove(FLDEFF_USE_WATERFALL_TOOL);
    return FALSE;
    return WaterfallFieldEffect_ContinueRideOrEnd(task, objectEvent);
}

static bool8 (*const sWaterfallToolFieldEffectFuncs[])(struct Task *, struct ObjectEvent *) =
{
    WaterfallFieldEffect_Init,
    WaterfallFieldEffect_RideUp,
    WaterfallToolFieldEffect_ContinueRideOrEnd,
};

static void Task_UseWaterfallTool(u8 taskId)
{
    while (sWaterfallToolFieldEffectFuncs[gTasks[taskId].tState](&gTasks[taskId], &gObjectEvents[gPlayerAvatar.objectEventId]));
}

u8 FldEff_UseWaterfallTool(void)
{
    u8 taskId = CreateTask(Task_UseWaterfallTool, 0);
    Task_UseWaterfallTool(taskId);
    return FALSE;
}

void RemoveRelevantWaterfallFieldEffect(void)
{
    if (FieldEffectActiveListContains(FLDEFF_USE_WATERFALL))
    {
        FieldEffectActiveListRemove(FLDEFF_USE_WATERFALL);
        DestroyTask(FindTaskIdByFunc(Task_UseWaterfall));
    }
    else if(FieldEffectActiveListContains(FLDEFF_USE_WATERFALL_TOOL))
    {
        FieldEffectActiveListRemove(FLDEFF_USE_SURF_TOOL);
        DestroyTask(FindTaskIdByFunc(Task_UseWaterfallTool));
    }
}

// Dive

u32 CanUseDiveDown(void)
{
    bool32 monHasMove = PartyHasMonLearnsKnowsFieldMove(MOVE_DIVE);
    bool32 bagHasItem = CheckBagHasItem(ITEM_SCUBA_GEAR, 1);
    bool32 playerHasBadge = FlagGet(FLAG_BADGE07_GET);
    bool32 diveWarpSuccessful = (TrySetDiveWarp() == 2);

    if (diveWarpSuccessful)
    {
        if ((monHasMove && playerHasBadge))
            return FIELD_MOVE_POKEMON;
        else if (bagHasItem)
            return FIELD_MOVE_TOOL;
    }

    return FIELD_MOVE_FAIL;
}

u32 CanUseDiveEmerge(void)
{
    bool32 monHasMove = PartyHasMonLearnsKnowsFieldMove(MOVE_DIVE);
    bool32 bagHasItem = CheckBagHasItem(ITEM_SCUBA_GEAR, 1);
    bool32 playerHasBadge = FlagGet(FLAG_BADGE07_GET);
    bool32 diveWarpSuccessful = (TrySetDiveWarp() == 1);
    bool32 playerisUnderwater = (gMapHeader.mapType == MAP_TYPE_UNDERWATER);

    if (diveWarpSuccessful && playerisUnderwater)
    {
        if ((monHasMove && playerHasBadge))
            return FIELD_MOVE_POKEMON;
        else if (bagHasItem)
            return FIELD_MOVE_TOOL;
    }

    return FIELD_MOVE_FAIL;
}


static bool8 (*const sDiveToolFieldEffectFuncs[])(struct Task *) =
{
    DiveFieldEffect_Init,
    DiveFieldEffect_TryWarp,
};

bool8 FldEff_UseDiveTool(void)
{
    u8 taskId;
    taskId = CreateTask(Task_UseDiveTool, 0xFF);
    Task_UseDiveTool(taskId);
    return FALSE;
}

static void Task_UseDiveTool(u8 taskId)
{
    while (sDiveToolFieldEffectFuncs[gTasks[taskId].data[0]](&gTasks[taskId]));
}

void RemoveRelevantDiveFieldEffect(void)
{
    if (FieldEffectActiveListContains(FLDEFF_USE_DIVE))
    {
        FieldEffectActiveListRemove(FLDEFF_USE_DIVE);
        DestroyTask(FindTaskIdByFunc(Task_UseDive));
    }
    else if(FieldEffectActiveListContains(FLDEFF_USE_DIVE_TOOL))
    {
        FieldEffectActiveListRemove(FLDEFF_USE_SURF_TOOL);
        DestroyTask(FindTaskIdByFunc(Task_UseDiveTool));
    }
}

static bool32 CanSpeciesLearnMoveLevelUp(u16 species, u16 move)
{
    const struct LevelUpMove *learnset = GetSpeciesLevelUpLearnset(species);
    u32 i = 0;

    for (i = 0; learnset[i].move != LEVEL_UP_MOVE_END; i++)
    {
        if (learnset[i].move == move)
            return TRUE;
    }
    return FALSE;
}

u32 CanUseRockClimb(void)
{
    bool32 monHasMove = PartyHasMonLearnsKnowsFieldMove(MOVE_ROCK_CLIMB);
    bool32 bagHasItem = CheckBagHasItem(ITEM_CLIMBING_GEAR, 1);
    bool32 playerHasBadge = FlagGet(FLAG_BADGE08_GET);
    s16 x, y;

    GetXYCoordsOneStepInFrontOfPlayer(&x, &y);

    if (MetatileBehavior_IsRockClimbable(MapGridGetMetatileBehaviorAt(x, y)))
    {
        if ((monHasMove && playerHasBadge))
            return FIELD_MOVE_POKEMON;
        else if (bagHasItem)
            return FIELD_MOVE_TOOL;
    }

    return FIELD_MOVE_FAIL;
}

bool32 PartyHasMonLearnsKnowsFieldMove(u16 move)
{
    struct Pokemon *mon;
    u32 species, i, monCanLearn;
    gSpecialVar_Result = PARTY_SIZE;
    gSpecialVar_0x8004 = 0;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        mon = &gPlayerParty[i];
        species = GetMonData(mon, MON_DATA_SPECIES, NULL);

        if (species == SPECIES_NONE)
            break;

        monCanLearn = CanTeachMove(mon, move);

        if (monCanLearn == ALREADY_KNOWS_MOVE)
            return SetMonResultVariables(i, species);

        if (CanSpeciesLearnMoveLevelUp(species, move) || monCanLearn == CAN_LEARN_MOVE)
        {
            return SetMonResultVariables(i, species);
        }
    }

    return FALSE;
}

static bool32 SetMonResultVariables(u32 partyIndex, u32 species)
{
    gSpecialVar_Result = partyIndex;
    gSpecialVar_0x8004 = species;
    return TRUE;
}

#undef tState
#undef tFallOffset
#undef tTotalFall
