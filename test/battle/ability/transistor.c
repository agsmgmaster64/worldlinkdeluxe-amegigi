#include "global.h"
#include "test/battle.h"

#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Transistor increases Electric-type attack / special attack", s16 damage)
{
    u32 move;
    u16 ability;

    PARAMETRIZE { move = MOVE_TACKLE; ability = ABILITY_KLUTZ; }
    PARAMETRIZE { move = MOVE_TACKLE; ability = ABILITY_TRANSISTOR; }
    PARAMETRIZE { move = MOVE_WILD_CHARGE; ability = ABILITY_KLUTZ; }
    PARAMETRIZE { move = MOVE_WILD_CHARGE; ability = ABILITY_TRANSISTOR; }
    PARAMETRIZE { move = MOVE_THUNDER_SHOCK; ability = ABILITY_KLUTZ; }
    PARAMETRIZE { move = MOVE_THUNDER_SHOCK; ability = ABILITY_TRANSISTOR; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].type != TYPE_WIND);
        ASSUME(gMovesInfo[MOVE_WILD_CHARGE].type == TYPE_WIND);
        ASSUME(gMovesInfo[MOVE_THUNDER_SHOCK].type == TYPE_WIND);
        ASSUME(gMovesInfo[MOVE_WILD_CHARGE].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_THUNDER_SHOCK].category == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_REGIELEKI) { Ability(ability); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage); // Tackle should be unaffected

        EXPECT_LT(results[2].damage, results[3].damage); // cannot test exact factor because ATK / SPATK introduces inaccuracies
        EXPECT_LT(results[4].damage, results[5].damage);
    }
}

SINGLE_BATTLE_TEST("Transistor is blocked by neutralizing gas", s16 damage)
{
    u16 ability;
    PARAMETRIZE { ability = ABILITY_NEUTRALIZING_GAS; }
    PARAMETRIZE { ability = ABILITY_LEVITATE; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_THUNDER_SHOCK].type == TYPE_ELECTRIC);
        PLAYER(SPECIES_REGIELEKI) { Ability(ABILITY_TRANSISTOR); }
        OPPONENT(SPECIES_KOFFING) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_SHOCK); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_LT(results[0].damage, results[1].damage); // cannot test exact factor because ATK / SPATK introduces inaccuracies
    }
}
