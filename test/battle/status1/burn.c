#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Burn deals 1/16th (Gen7+) or 1/8th damage per turn")
{
    u32 j;
    GIVEN {
        PLAYER(SPECIES_DEFENSE_SATORI) { Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_DEFENSE_SATORI);
    } WHEN {
        for (j = 0; j < 4; j++)
            TURN {}
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        for (j = 0; j < 4; j++)
            HP_BAR(player, damage: maxHP / ((B_BURN_DAMAGE >= GEN_7) ? 16 : 8));
    }
}

SINGLE_BATTLE_TEST("Burn reduces Attack by 50%", s16 damage)
{
    bool32 burned;
    PARAMETRIZE { burned = FALSE; }
    PARAMETRIZE { burned = TRUE; }
    GIVEN {
        ASSUME(GetMoveCategory(MOVE_TACKLE) == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_WOBBUFFET) { if (burned) Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
    }
}

AI_SINGLE_BATTLE_TEST("AI avoids Will-o-Wisp when it can not burn target")
{
    u32 species, ability;

    PARAMETRIZE { species = SPECIES_NORMAL_SUWAKO; ability = ABILITY_WATER_VEIL; }
    PARAMETRIZE { species = SPECIES_DEWPIDER; ability = ABILITY_WATER_BUBBLE; }
    PARAMETRIZE { species = SPECIES_KOMALA; ability = ABILITY_COMATOSE; }
    PARAMETRIZE { species = SPECIES_NORMAL_SUNNY; ability = ABILITY_FLASH_FIRE; }
    PARAMETRIZE { species = SPECIES_ADVENT_CIRNO; ability = ABILITY_LIFESTREAM; }
    PARAMETRIZE { species = SPECIES_ATTACK_PATCHOULI; ability = ABILITY_BLAZE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(species) { Ability(ability); }
        OPPONENT(SPECIES_DEFENSE_SATORI) { Moves(MOVE_CELEBRATE, MOVE_WILL_O_WISP); }
    } WHEN {
        TURN { SCORE_EQ(opponent, MOVE_CELEBRATE, MOVE_WILL_O_WISP); } // Both get -10
    }
}
