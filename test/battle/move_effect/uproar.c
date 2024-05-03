#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_UPROAR].effect == EFFECT_UPROAR);
}

DOUBLE_BATTLE_TEST("Uproar status causes sleeping pokemon to wake up during an attack")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        PLAYER(SPECIES_CHIBI_YUUGI) { Status1(STATUS1_SLEEP); }
        OPPONENT(SPECIES_CHIBI_WRIGGLE) { Ability(ABILITY_SOUNDPROOF); Status1(STATUS1_SLEEP); }
        OPPONENT(SPECIES_CHIBI_YUUGI) { Status1(STATUS1_SLEEP); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_UPROAR); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_UPROAR, playerLeft);
        HP_BAR(opponentRight);
        MESSAGE("Wobbuffet woke up in the UPROAR!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerRight);
        MESSAGE("Foe Voltorb woke up in the UPROAR!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentLeft);
        MESSAGE("Foe Wobbuffet woke up in the UPROAR!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentRight);
    }
}
