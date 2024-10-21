#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_BURN_POWDER].effect == EFFECT_BIDE);
}

SINGLE_BATTLE_TEST("Bide deals twice the taken damage over two turns")
{
    s16 damage1;
    s16 damage2;
    s16 bideDamage;
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_BURN_POWDER); MOVE(opponent, MOVE_TACKLE); }
        TURN { SKIP_TURN(player); MOVE(opponent, MOVE_TACKLE); }
        TURN { SKIP_TURN(player); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BURN_POWDER, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        HP_BAR(player, captureDamage: &damage1);
        MESSAGE("Wobbuffet is storing energy!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        HP_BAR(player, captureDamage: &damage2);
        MESSAGE("Wobbuffet unleashed its energy!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BIDE, player);
        HP_BAR(opponent, captureDamage: &bideDamage);
    } THEN {
        EXPECT_EQ(bideDamage, 2 * (damage1 + damage2));
    }
}

TO_DO_BATTLE_TEST("Bide hits the last Pokémon that attacked the user, even allies");
TO_DO_BATTLE_TEST("Bide has +1 priority if called via a different move"); // Gen 5 onwards
