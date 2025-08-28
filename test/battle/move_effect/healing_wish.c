#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_HEALING_WISH) == EFFECT_HEALING_WISH);
    ASSUME(GetMoveEffect(MOVE_LUNAR_DANCE) == EFFECT_HEALING_WISH);
}

SINGLE_BATTLE_TEST("Healing Wish causes the user to faint and fully heals the replacement")
{
    GIVEN {
        ASSUME(B_HEALING_WISH_SWITCH >= GEN_5);
        PLAYER(SPECIES_PLACEHOLD_SEKIBANKI);
        PLAYER(SPECIES_NORMAL_KOSUZU) { HP(1); MaxHP(100); Status1(STATUS1_POISON); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_HEALING_WISH); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEALING_WISH, player);
        HP_BAR(player, hp: 0);
        MESSAGE("Gardevoir fainted!");
        MESSAGE("The healing wish came true for Wynaut!");
        HP_BAR(player, hp: 100);
        STATUS_ICON(player, none: TRUE);
        MESSAGE("Wynaut regained health!");
    }
}

DOUBLE_BATTLE_TEST("Lunar Dance causes the user to faint and fully heals the replacement in a double battle")
{
    GIVEN {
        ASSUME(B_HEALING_WISH_SWITCH >= GEN_5);
        PLAYER(SPECIES_PLACEHOLD_SEKIBANKI) { Speed(300); }
        PLAYER(SPECIES_CHIBI_YUUGI) { Speed(50); }
        PLAYER(SPECIES_NORMAL_KOSUZU) { HP(99); MaxHP(100); Status1(STATUS1_BURN); Speed(50); }
        OPPONENT(SPECIES_CHIBI_YUUGI) { Speed(50); }
        OPPONENT(SPECIES_CHIBI_YUUGI) { Speed(50); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_LUNAR_DANCE); SEND_OUT(playerLeft, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_LUNAR_DANCE, playerLeft);
        HP_BAR(playerLeft, hp: 0);
        MESSAGE("Gardevoir fainted!");
        MESSAGE("Wynaut became cloaked in mystical moonlight!");
        HP_BAR(playerLeft, hp: 100);
        STATUS_ICON(playerLeft, none: TRUE);
        MESSAGE("Wynaut regained health!");
    }
}

SINGLE_BATTLE_TEST("Healing Wish effect activates only if the switched Pokémon can be healed")
{
    GIVEN {
        ASSUME(B_HEALING_WISH_SWITCH >= GEN_8);
        PLAYER(SPECIES_PLACEHOLD_SEKIBANKI) { Speed(300); }
        PLAYER(SPECIES_CHIBI_BENBEN) { Speed(400); }
        PLAYER(SPECIES_NORMAL_KOSUZU) { HP(50); MaxHP(100); Status1(STATUS1_PARALYSIS); Speed(50); }
        OPPONENT(SPECIES_CHIBI_YUUGI) { Speed(50); }
    } WHEN {
        TURN { MOVE(player, MOVE_HEALING_WISH); SEND_OUT(player, 1); }
        TURN { MOVE(player, MOVE_U_TURN); SEND_OUT(player, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEALING_WISH, player);
        HP_BAR(player, hp: 0);
        MESSAGE("Gardevoir fainted!");
        NONE_OF {
            MESSAGE("The healing wish came true for Wynaut!");
            MESSAGE("Wynaut's HP was restored.");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, player);
        MESSAGE("The healing wish came true for Wynaut!");
        HP_BAR(player, hp: 100);
        STATUS_ICON(player, none: TRUE);
        MESSAGE("Wynaut regained health!");
    }
}
