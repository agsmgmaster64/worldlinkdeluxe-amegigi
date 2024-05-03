#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_MANA_CHARGE].effect == EFFECT_SPECIAL_ATTACK_UP_3);
}

SINGLE_BATTLE_TEST("Tail Glow drastically raises Special Attack", s16 damage)
{
    bool32 raiseSpecialAttack;
    PARAMETRIZE { raiseSpecialAttack = FALSE; }
    PARAMETRIZE { raiseSpecialAttack = TRUE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_GUST].category == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        if (raiseSpecialAttack) TURN { MOVE(player, MOVE_MANA_CHARGE); }
        TURN { MOVE(player, MOVE_GUST); }
    } SCENE {
        if (raiseSpecialAttack) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_MANA_CHARGE, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Wobbuffet's Sp. Atk drastically rose!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUST, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.5), results[1].damage);
    }
}
