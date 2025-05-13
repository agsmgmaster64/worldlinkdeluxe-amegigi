#include "global.h"
#include "test/battle.h"

// Please add Hail interactions with move, item and ability effects on their respective files.
ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_HAIL) == EFFECT_HAIL);
    ASSUME(gSpeciesInfo[SPECIES_WOBBUFFET].types[0] != TYPE_ICE && gSpeciesInfo[SPECIES_WOBBUFFET].types[1] != TYPE_ICE);
    ASSUME(gSpeciesInfo[SPECIES_WYNAUT].types[0] != TYPE_ICE && gSpeciesInfo[SPECIES_WYNAUT].types[1] != TYPE_ICE);
    ASSUME(gSpeciesInfo[SPECIES_GLALIE].types[0] == TYPE_ICE || gSpeciesInfo[SPECIES_GLALIE].types[1] == TYPE_ICE);
}

SINGLE_BATTLE_TEST("Hail deals 1/16 damage per turn")
{
    s16 hailDamage;

    GIVEN {
        PLAYER(SPECIES_PLACEHOLD2_KOSUZU);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN {MOVE(player, MOVE_HAIL);}
    } SCENE {
        MESSAGE("The opposing Wobbuffet is buffeted by the hail!");
        HP_BAR(opponent, captureDamage: &hailDamage);
   } THEN { EXPECT_EQ(hailDamage, opponent->maxHP / 16); }
}

SINGLE_BATTLE_TEST("Hail damage does not affect Ice-type Pokémon")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_PLACEHOLD2_KOSUZU].types[0] == TYPE_ICE);
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_PLACEHOLD2_KOSUZU);
    } WHEN {
        TURN {MOVE(player, MOVE_HAIL);}
    } SCENE {
        NOT MESSAGE("The opposing Glalie is buffeted by the hail!");
    }
}

SINGLE_BATTLE_TEST("Hail fails if Desolate Land or Primordial Sea are active")
{
    u32 species;
    u32 item;

    PARAMETRIZE { species = SPECIES_CHIBI_YUUGI; item = ITEM_NONE; }
    PARAMETRIZE { species = SPECIES_NORMAL_KANA; item = ITEM_RED_ORB; }
    PARAMETRIZE { species = SPECIES_CHIBI_KANA; item = ITEM_BLUE_ORB; }

    GIVEN {
        PLAYER(species) { Item(item); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HAIL); }
    } SCENE {
        if (item == ITEM_RED_ORB || item == ITEM_BLUE_ORB) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
            NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_HAIL, opponent);
        } else {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_HAIL, opponent);
        }
    }
}

DOUBLE_BATTLE_TEST("Hail deals damage based on turn order")
{
    GIVEN {
        PLAYER(SPECIES_GLALIE) { Speed(4); }
        PLAYER(SPECIES_WYNAUT) { Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(2); }
        OPPONENT(SPECIES_WYNAUT) { Speed(3); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_HAIL); }
    } SCENE {
        NOT HP_BAR(playerLeft);
        HP_BAR(opponentRight);
        HP_BAR(opponentLeft);
        HP_BAR(playerRight);
   }
}

SINGLE_BATTLE_TEST("Hail damage rounds properly when maxHP < 16")
{
    GIVEN {
        PLAYER(SPECIES_MAGIKARP) { Level(1); MaxHP(11); HP(11); }
        OPPONENT(SPECIES_GLALIE);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HAIL); }
    } SCENE {
        HP_BAR(player, damage: 1);
    }
}

SINGLE_BATTLE_TEST("Hail doesn't do damage when weather is negated")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_WOBBUFFET].types[0] != TYPE_ICE);
        ASSUME(gSpeciesInfo[SPECIES_WOBBUFFET].types[1] != TYPE_ICE);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_GOLDUCK) { Ability(ABILITY_CLOUD_NINE); }
    } WHEN {
        TURN { MOVE(player, MOVE_HAIL); }
    } SCENE {
        NOT HP_BAR(player);
    }
}
