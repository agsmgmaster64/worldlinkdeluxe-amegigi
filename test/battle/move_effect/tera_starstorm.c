#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_TERA_STARSTORM) == EFFECT_TERA_STARSTORM);
}

SINGLE_BATTLE_TEST("Tera Starstorm changes from Normal-type to Stellar-type if used by Terapagos-Stellar")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_TERA_STARSTORM) == TYPE_NORMAL);
        PLAYER(SPECIES_TERAPAGOS_STELLAR);
        OPPONENT(SPECIES_MISDREAVUS);
    } WHEN {
        TURN { MOVE(player, MOVE_TERA_STARSTORM); }
    } SCENE {
        MESSAGE("Terapagos used Tera Starstorm!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TERA_STARSTORM, player);
        HP_BAR(opponent);
        NOT { MESSAGE("It doesn't affect the opposing Misdreavus…"); }
    }
}

DOUBLE_BATTLE_TEST("Tera Starstorm targets both opponents in a double battle if used by Terapagos-Stellar")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_TERA_STARSTORM) == MOVE_TARGET_SELECTED);
        PLAYER(SPECIES_TERAPAGOS_STELLAR);
        PLAYER(SPECIES_NORMAL_KOSUZU);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_NORMAL_KOSUZU);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TERA_STARSTORM, target:opponentLeft); }
    } SCENE {
        MESSAGE("Terapagos used Tera Starstorm!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TERA_STARSTORM, playerLeft);
        HP_BAR(opponentLeft);
        HP_BAR(opponentRight);
    }
}

SINGLE_BATTLE_TEST("Tera Starstorm becomes a physical move if the user is Terapagos-Stellar, is Terastallized, and has a higher Attack stat", s16 damage)
{
    bool32 tera;
    PARAMETRIZE { tera = GIMMICK_NONE; }
    PARAMETRIZE { tera = GIMMICK_TERA; }
    GIVEN {
        ASSUME(GetMoveCategory(MOVE_TERA_STARSTORM) == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_TERAPAGOS_STELLAR) { Attack(100); SpAttack(50); }
        OPPONENT(SPECIES_WOBBUFFET) { Defense(200); SpDefense(200); }
    } WHEN {
        TURN { MOVE(player, MOVE_TERA_STARSTORM, gimmick: tera); }
    } SCENE {
        MESSAGE("Terapagos used Tera Starstorm!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TERA_STARSTORM, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, UQ_4_12(2.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Tera Starstorm remains Normal-type if used by Pokemon other than Terapagos")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_TERA_STARSTORM) == TYPE_NORMAL);
        ASSUME(gSpeciesInfo[SPECIES_MISDREAVUS].types[0] == TYPE_GHOST);
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_STELLAR); }
        OPPONENT(SPECIES_MISDREAVUS);
    } WHEN {
        TURN { MOVE(player, MOVE_TERA_STARSTORM, gimmick: GIMMICK_TERA); }
    } SCENE {
        MESSAGE("Wobbuffet used Tera Starstorm!");
        MESSAGE("It doesn't affect the opposing Misdreavus…");
    }
}
