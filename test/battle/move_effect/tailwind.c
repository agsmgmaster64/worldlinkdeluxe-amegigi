#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_TAILWIND) == EFFECT_TAILWIND);
}

SINGLE_BATTLE_TEST("Tailwind applies for 4 turns")
{
    GIVEN {
        ASSUME(B_TAILWIND_TURNS >= GEN_5);
        PLAYER(SPECIES_CHIBI_YUUGI) { Speed(10); }
        OPPONENT(SPECIES_CHIBI_YUUGI) { Speed(15); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_TAILWIND); }
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Celebrate!");
        MESSAGE("Wobbuffet used Tailwind!");

        MESSAGE("Wobbuffet used Celebrate!");
        MESSAGE("The opposing Wobbuffet used Celebrate!");

        MESSAGE("Wobbuffet used Celebrate!");
        MESSAGE("The opposing Wobbuffet used Celebrate!");

        MESSAGE("Wobbuffet used Celebrate!");
        MESSAGE("The opposing Wobbuffet used Celebrate!");

        MESSAGE("The opposing Wobbuffet used Celebrate!");
        MESSAGE("Wobbuffet used Celebrate!");
    }
}

DOUBLE_BATTLE_TEST("Tailwind affects partner on first turn")
{
    GIVEN {
        ASSUME(B_RECALC_TURN_AFTER_ACTIONS);
        PLAYER(SPECIES_CHIBI_YUUGI) { Speed(20); }
        PLAYER(SPECIES_NORMAL_KOSUZU) { Speed(10); }
        OPPONENT(SPECIES_CHIBI_YUUGI) { Speed(15); }
        OPPONENT(SPECIES_NORMAL_KOSUZU) { Speed(14); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TAILWIND); }
    } SCENE {
        MESSAGE("Wobbuffet used Tailwind!");
        MESSAGE("Wynaut used Celebrate!");
        MESSAGE("The opposing Wobbuffet used Celebrate!");
        MESSAGE("The opposing Wynaut used Celebrate!");
    }
}
