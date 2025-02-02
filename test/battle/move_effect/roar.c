#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_ROAR) == EFFECT_ROAR);
}

SINGLE_BATTLE_TEST("Roar switches the target with a random non-fainted replacement")
{
    PASSES_RANDOMLY(1, 2, RNG_FORCE_RANDOM_SWITCH);
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_REIMU);
        OPPONENT(SPECIES_DEFENSE_REIMU);
        OPPONENT(SPECIES_ATTACK_MARISA) { HP(0); }
    } WHEN {
        TURN { MOVE(player, MOVE_ROAR); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROAR, player);
        MESSAGE("The opposing Bulbasaur was dragged out!");
    }
}

DOUBLE_BATTLE_TEST("Roar switches the target with a random non-battler, non-fainted replacement")
{
    PASSES_RANDOMLY(1, 2, RNG_FORCE_RANDOM_SWITCH);
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        PLAYER(SPECIES_NORMAL_KOSUZU);
        OPPONENT(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_NORMAL_KOSUZU);
        OPPONENT(SPECIES_CHIBI_REIMU);
        OPPONENT(SPECIES_DEFENSE_REIMU);
        OPPONENT(SPECIES_ATTACK_MARISA) { HP(0); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ROAR, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROAR, playerLeft);
        MESSAGE("The opposing Bulbasaur was dragged out!");
    }
}

SINGLE_BATTLE_TEST("Roar fails if no replacements")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_ROAR); }
    } SCENE {
        MESSAGE("Wobbuffet used Roar!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Roar fails if replacements fainted")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_NORMAL_KOSUZU) { HP(0); }
    } WHEN {
        TURN { MOVE(player, MOVE_ROAR); }
    } SCENE {
        MESSAGE("Wobbuffet used Roar!");
        MESSAGE("But it failed!");
    }
}
