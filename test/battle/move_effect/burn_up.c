#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_BURN_UP].effect == EFFECT_FAIL_IF_NOT_ARG_TYPE);
    ASSUME(MoveHasAdditionalEffectSelfArg(MOVE_BURN_UP, MOVE_EFFECT_REMOVE_ARG_TYPE, TYPE_FIRE) == TRUE);
    ASSUME(gSpeciesInfo[SPECIES_CHIBI_YUUGI].types[0] != TYPE_FIRE || gSpeciesInfo[SPECIES_CHIBI_YUUGI].types[1] != TYPE_FIRE);
    ASSUME(gSpeciesInfo[SPECIES_NORMAL_EIKI].types[0] == TYPE_FIRE || gSpeciesInfo[SPECIES_NORMAL_EIKI].types[1] == TYPE_FIRE);
}

SINGLE_BATTLE_TEST("Burn Up user loses its Fire-type")
{
    GIVEN {
        PLAYER(SPECIES_NORMAL_EIKI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); }
        TURN { MOVE(player, MOVE_BURN_UP); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, player);
        MESSAGE("Cyndaquil burned itself out!");
        MESSAGE("Cyndaquil used Burn Up!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Burn Up fails if the user isn't a Fire-type")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); }
    } SCENE {
        NONE_OF { ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, player); }
        MESSAGE("Wobbuffet used Burn Up!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Burn Up user loses its Fire-type if enemy faints")
{
    GIVEN {
        PLAYER(SPECIES_NORMAL_EIKI);
        OPPONENT(SPECIES_CHIBI_YUUGI) { HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_UP); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_UP, player);
        HP_BAR(opponent, hp: 0);
        MESSAGE("Cyndaquil burned itself out!");
    }
}
