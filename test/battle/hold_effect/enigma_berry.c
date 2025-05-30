#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_ENIGMA_BERRY].holdEffect == HOLD_EFFECT_ENIGMA_BERRY);
}

SINGLE_BATTLE_TEST("Enigma Berry recovers 25% of HP if hit by super effective move")
{
    GIVEN {
        PLAYER(SPECIES_NORMAL_KOSUZU) { MaxHP(100); HP(2); Item(ITEM_ENIGMA_BERRY); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_ENDURE); MOVE(opponent, MOVE_BITE); }
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ENDURE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BITE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Wynaut restored its health using its Enigma Berry!");
        HP_BAR(player, damage: -maxHP / 4);
    }
}

SINGLE_BATTLE_TEST("Enigma Berry does nothing if not hit by super effective move")
{
    GIVEN {
        PLAYER(SPECIES_PLACEHOLD_SEIGA) { MaxHP(100); HP(2); Item(ITEM_ENIGMA_BERRY); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_ENDURE); MOVE(opponent, MOVE_BITE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ENDURE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BITE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Mightyena restored its health using its Enigma Berry!");
        }
    }
}

SINGLE_BATTLE_TEST("Enigma Berry does nothing if Heal Block applies")
{
    GIVEN {
        PLAYER(SPECIES_NORMAL_KOSUZU) { MaxHP(100); HP(2); Item(ITEM_ENIGMA_BERRY); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEAL_BLOCK); }
        TURN { MOVE(player, MOVE_ENDURE); MOVE(opponent, MOVE_BITE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEAL_BLOCK, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ENDURE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BITE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Wynaut restored its health using its Enigma Berry!");
        }
    }
}

DOUBLE_BATTLE_TEST("Enigma Berry doesn't trigger if partner was hit")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT) { Item(ITEM_ENIGMA_BERRY); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SCRATCH, target: opponentLeft); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentRight);
    } THEN {
        EXPECT(opponentRight->item == ITEM_ENIGMA_BERRY);
    }
}
