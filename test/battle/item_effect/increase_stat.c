#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("X Attack sharply raises battler's Attack stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_X_ATTACK].battleUsage == EFFECT_ITEM_INCREASE_STAT);
        ASSUME(GetMoveCategory(MOVE_SCRATCH) == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_X_ATTACK); }
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        MESSAGE("Wobbuffet used Scratch!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (B_X_ITEMS_BUFF >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage);
        else
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("X Defense sharply raises battler's Defense stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_X_DEFENSE].battleUsage == EFFECT_ITEM_INCREASE_STAT);
        ASSUME(GetMoveCategory(MOVE_SCRATCH) == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_X_DEFENSE); }
        TURN { MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Scratch!");
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        if (B_X_ITEMS_BUFF >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
        else
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.66), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("X Sp. Atk sharply raises battler's Sp. Attack stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_X_SP_ATK].battleUsage == EFFECT_ITEM_INCREASE_STAT);
        ASSUME(GetMoveCategory(MOVE_DISARMING_VOICE) == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_X_SP_ATK); }
        TURN { MOVE(player, MOVE_DISARMING_VOICE); }
    } SCENE {
        MESSAGE("Wobbuffet used Disarming Voice!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (B_X_ITEMS_BUFF >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage);
        else
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("X Sp. Def sharply raises battler's Sp. Defense stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_X_SP_DEF].battleUsage == EFFECT_ITEM_INCREASE_STAT);
        ASSUME(GetMoveCategory(MOVE_DISARMING_VOICE) == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_X_SP_DEF); }
        TURN { MOVE(opponent, MOVE_DISARMING_VOICE); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Disarming Voice!");
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        if (B_X_ITEMS_BUFF >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
        else
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.66), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("X Speed sharply raises battler's Speed stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_X_SPEED].battleUsage == EFFECT_ITEM_INCREASE_STAT);
        if (B_X_ITEMS_BUFF >= GEN_7)
        {
            PLAYER(SPECIES_CHIBI_YUUGI) { Speed(3); }
            OPPONENT(SPECIES_CHIBI_YUUGI) { Speed(4); }
        }
        else
        {
            PLAYER(SPECIES_CHIBI_YUUGI) { Speed(4); }
            OPPONENT(SPECIES_CHIBI_YUUGI) { Speed(5); }
        }
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_X_SPEED); }
        TURN { MOVE(player, MOVE_SCRATCH); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        if (useItem)
        {
            MESSAGE("Wobbuffet used Scratch!");
            MESSAGE("The opposing Wobbuffet used Scratch!");
        }
        else
        {
            MESSAGE("The opposing Wobbuffet used Scratch!");
            MESSAGE("Wobbuffet used Scratch!");
        }
    }
}

SINGLE_BATTLE_TEST("X Accuracy sharply raises battler's Accuracy stat")
{

    ASSUME(GetMoveAccuracy(MOVE_SING) == 55);
    if (B_X_ITEMS_BUFF >= GEN_7)
        PASSES_RANDOMLY(GetMoveAccuracy(MOVE_SING) * 5 / 3, 100, RNG_ACCURACY);
    else
        PASSES_RANDOMLY(GetMoveAccuracy(MOVE_SING) * 4 / 3, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(gItemsInfo[ITEM_X_ACCURACY].battleUsage == EFFECT_ITEM_INCREASE_STAT);
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_X_ACCURACY); }
        TURN { MOVE(player, MOVE_SING); }
    } SCENE {
        MESSAGE("Wobbuffet used Sing!");
        MESSAGE("The opposing Wobbuffet fell asleep!");
    }
}

SINGLE_BATTLE_TEST("Max Mushrooms raises battler's Attack stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_MAX_MUSHROOMS].battleUsage == EFFECT_ITEM_INCREASE_ALL_STATS);
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_MAX_MUSHROOMS); }
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        MESSAGE("Wobbuffet used Scratch!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Max Mushrooms raises battler's Defense stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_MAX_MUSHROOMS].battleUsage == EFFECT_ITEM_INCREASE_ALL_STATS);
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_MAX_MUSHROOMS); }
        TURN { MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Scratch!");
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.66), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Max Mushrooms raises battler's Sp. Attack stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_MAX_MUSHROOMS].battleUsage == EFFECT_ITEM_INCREASE_ALL_STATS);
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_MAX_MUSHROOMS); }
        TURN { MOVE(player, MOVE_DISARMING_VOICE); }
    } SCENE {
        MESSAGE("Wobbuffet used Disarming Voice!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Max Mushrooms battler's Sp. Defense stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_MAX_MUSHROOMS].battleUsage == EFFECT_ITEM_INCREASE_ALL_STATS);
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_MAX_MUSHROOMS); }
        TURN { MOVE(opponent, MOVE_DISARMING_VOICE); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Disarming Voice!");
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.66), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Max Mushrooms raises battler's Speed stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_MAX_MUSHROOMS].battleUsage == EFFECT_ITEM_INCREASE_ALL_STATS);
        PLAYER(SPECIES_CHIBI_YUUGI) { Speed(4); }
        OPPONENT(SPECIES_CHIBI_YUUGI) { Speed(5); }
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_MAX_MUSHROOMS); }
        TURN { MOVE(player, MOVE_SCRATCH); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        if (useItem)
        {
            MESSAGE("Wobbuffet used Scratch!");
            MESSAGE("The opposing Wobbuffet used Scratch!");
        }
        else
        {
            MESSAGE("The opposing Wobbuffet used Scratch!");
            MESSAGE("Wobbuffet used Scratch!");
        }
    }
}
