#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_EXPLOSION) == EFFECT_EXPLOSION);
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
        MESSAGE("The opposing Wobbuffet fainted!");
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
        ASSUME(GetMoveType(MOVE_EXPLOSION) == TYPE_NORMAL);
        ASSUME(GetSpeciesType(SPECIES_GASTLY, 0) == TYPE_GHOST);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_GASTLY);
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); }
    } SCENE {
        HP_BAR(player, hp: 0);
        MESSAGE("It doesn't affect the opposing Gastly…");
        NOT HP_BAR(opponent);
        MESSAGE("Wobbuffet fainted!");
    }
}

DOUBLE_BATTLE_TEST("Explosion causes everyone to faint in a double battle")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        PLAYER(SPECIES_NORMAL_KOSUZU) { HP(1); }
        OPPONENT(SPECIES_SPEED_LILY_BLACK) { HP(1); }
        OPPONENT(SPECIES_CHIBI_LUNASA) { HP(1); }
        OPPONENT(SPECIES_CHIBI_LUNASA);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EXPLOSION); }
    } SCENE {
        HP_BAR(playerLeft, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, playerLeft);
        HP_BAR(opponentLeft, hp: 0);
        HP_BAR(playerRight, hp: 0);
        HP_BAR(opponentRight, hp: 0);
        MESSAGE("The opposing Abra fainted!");
        MESSAGE("Wynaut fainted!");
        MESSAGE("The opposing Kadabra fainted!");
        MESSAGE("Wobbuffet fainted!");
    }
}

SINGLE_BATTLE_TEST("Explosion is blocked by Ability Damp")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_GOLDUCK) { Ability(ABILITY_DAMP); }
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
            HP_BAR(player, hp: 0);
        }
        ABILITY_POPUP(opponent, ABILITY_DAMP);
        MESSAGE("The opposing Golduck's Damp prevents Wobbuffet from using Explosion!");
    }
}

SINGLE_BATTLE_TEST("Explosion does not trigger Destiny Bond")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { HP(1); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_DESTINY_BOND); MOVE(opponent, MOVE_EXPLOSION);}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DESTINY_BOND, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, opponent);
        HP_BAR(player);
        NOT HP_BAR(opponent);
    }
}

DOUBLE_BATTLE_TEST("Explosion boosted by Galvanize is correctly blocked by Volt Absorb")
{
    GIVEN {
        PLAYER(SPECIES_GEODUDE_ALOLA) { Ability(ABILITY_GALVANIZE); }
        PLAYER(SPECIES_WYNAUT) { HP(1); }
        OPPONENT(SPECIES_LANTURN) { Ability(ABILITY_VOLT_ABSORB); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EXPLOSION); }
    } SCENE {
        MESSAGE("Geodude used Explosion!");
        HP_BAR(playerLeft, hp: 0);
        ABILITY_POPUP(opponentLeft, ABILITY_VOLT_ABSORB);
        NOT HP_BAR(opponentLeft, hp: 0);
        HP_BAR(playerRight, hp: 0);
        HP_BAR(opponentRight, hp: 0);
        MESSAGE("Wynaut fainted!");
        MESSAGE("The opposing Wobbuffet fainted!");
        MESSAGE("Geodude fainted!");
    }
}
