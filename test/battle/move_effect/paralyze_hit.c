#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_THUNDER_SHOCK].effect == EFFECT_PARALYZE_HIT);
}

SINGLE_BATTLE_TEST("Thunder Shock inflicts paralysis")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_SHOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER_SHOCK, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, opponent);
        STATUS_ICON(opponent, paralysis: TRUE);
    }
}

SINGLE_BATTLE_TEST("Thunder Shock cannot paralyze an Electric-type")
{
    GIVEN {
        ASSUME(B_PARALYZE_ELECTRIC >= GEN_6);
        ASSUME(gSpeciesInfo[SPECIES_CHIBI_KOAKUMA].types[0] == TYPE_WIND);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_CHIBI_KOAKUMA);
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_SHOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER_SHOCK, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, opponent);
            STATUS_ICON(opponent, paralysis: TRUE);
        }
    }
}
