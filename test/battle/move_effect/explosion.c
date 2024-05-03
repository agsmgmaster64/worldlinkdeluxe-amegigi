#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
}

SINGLE_BATTLE_TEST("Explosion causes the user to faint")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        MESSAGE("Wobbuffet fainted!");
    }
}

SINGLE_BATTLE_TEST("Explosion causes the user & the target to faint")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI) { HP(1); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        HP_BAR(opponent, hp: 0);
        MESSAGE("Foe Wobbuffet fainted!");
        MESSAGE("Wobbuffet fainted!");
    }
}

SINGLE_BATTLE_TEST("Explosion causes the user to faint even if it misses")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION, hit: FALSE); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        MESSAGE("Wobbuffet fainted!");
    }
}

SINGLE_BATTLE_TEST("Explosion causes the user to faint even if it has no effect")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EXPLOSION].type == TYPE_ILLUSION);
        ASSUME(gSpeciesInfo[SPECIES_CHIBI_RAN].types[0] == TYPE_GHOST);
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_RAN);
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        MESSAGE("It doesn't affect Foe Gastly…");
        NOT HP_BAR(opponent);
        MESSAGE("Wobbuffet fainted!");
    }
}

DOUBLE_BATTLE_TEST("Explosion causes everyone to faint in a double battle")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        PLAYER(SPECIES_WYNAUT) { HP(1); }
        OPPONENT(SPECIES_SPEED_LILY_BLACK) { HP(1); }
        OPPONENT(SPECIES_CHIBI_LUNASA) { HP(1); }
        OPPONENT(SPECIES_CHIBI_LUNASA);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EXPLOSION); }
    } SCENE {
        HP_BAR(playerLeft, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, playerLeft);
        HP_BAR(opponentLeft, hp: 0);
        MESSAGE("Foe Abra fainted!");
        HP_BAR(playerRight, hp: 0);
        MESSAGE("Wynaut fainted!");
        HP_BAR(opponentRight, hp: 0);
        MESSAGE("Foe Kadabra fainted!");
        MESSAGE("Wobbuffet fainted!");
    }
}
