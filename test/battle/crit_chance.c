#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Crit Chance: Battle Armor and Shell Armor block critical hits")
{
    u32 species;
    u32 ability;

    PARAMETRIZE { species = SPECIES_AKYUU; ability = ABILITY_SHELL_ARMOR; }
    PARAMETRIZE { species = SPECIES_NORMAL_KEINE; ability = ABILITY_GUARD_ARMOR; }

    GIVEN {
        PLAYER(SPECIES_DEFENSE_SATORI);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, criticalHit: TRUE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        NOT MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Flag ignoresTargetAbility ignores Battle Armor and Shell Armor")
{
    u32 species;
    u32 ability;

    PARAMETRIZE { species = SPECIES_AKYUU; ability = ABILITY_SHELL_ARMOR; }
    PARAMETRIZE { species = SPECIES_NORMAL_KEINE; ability = ABILITY_GUARD_ARMOR; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SUNSTEEL_STRIKE].ignoresTargetAbility == TRUE);
        PLAYER(SPECIES_DEFENSE_SATORI);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_SUNSTEEL_STRIKE, criticalHit: TRUE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUNSTEEL_STRIKE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Mold Breaker, Teravolt and Turboblaze ignore Battle Armor and Shell Armor")
{
    u32 j;
    static const u32 pokemonPlayer[][2] =
    {
        {SPECIES_NORMAL_SANAE, ABILITY_MOLD_BREAKER},
        {SPECIES_ZEKROM, ABILITY_TERAVOLT},
        {SPECIES_KYUREM_WHITE,  ABILITY_TURBOBLAZE},
    };

    u32 speciesPlayer;
    u32 abilityPlayer;
    u32 speciesOpponent;
    u32 abilityOpponent;

    for (j = 0; j < ARRAY_COUNT(pokemonPlayer); j++)
    {
        PARAMETRIZE {
            speciesPlayer = pokemonPlayer[j][0];
            abilityPlayer = pokemonPlayer[j][1];
            speciesOpponent = SPECIES_AKYUU;
            abilityOpponent = ABILITY_SHELL_ARMOR;
        }

        PARAMETRIZE {
            speciesPlayer = pokemonPlayer[j][0];
            abilityPlayer = pokemonPlayer[j][1];
            speciesOpponent = SPECIES_NORMAL_KEINE;
            abilityOpponent = ABILITY_GUARD_ARMOR;
        }
    }

    GIVEN {
        PLAYER(speciesPlayer) { Ability(abilityPlayer); }
        OPPONENT(speciesOpponent) { Ability(abilityOpponent); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, criticalHit: TRUE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: User effected by Laser Focus causes moves to result in a critical hit")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_LASER_FOCUS].effect == EFFECT_LASER_FOCUS);
        PLAYER(SPECIES_DEFENSE_SATORI);
        OPPONENT(SPECIES_DEFENSE_SATORI);
    } WHEN {
        TURN { MOVE(player, MOVE_LASER_FOCUS); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_LASER_FOCUS, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: If the target is poisoned the ability Merciless causes a move to result in a critical hit")
{
    GIVEN {
        PLAYER(SPECIES_MAREANIE) { Ability(ABILITY_MERCILESS); }
        OPPONENT(SPECIES_DEFENSE_SATORI) { Status1(STATUS1_POISON); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Focus Energy increases the user's critical hit ratio by two stage")
{
    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gMovesInfo[MOVE_FOCUS_ENERGY].effect == EFFECT_FOCUS_ENERGY);
        PLAYER(SPECIES_DEFENSE_SATORI);
        OPPONENT(SPECIES_DEFENSE_SATORI);
    } WHEN {
        TURN { MOVE(player, MOVE_FOCUS_ENERGY); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_ENERGY, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: High crit rate increases the critical hit ratio by one stage")
{
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gMovesInfo[MOVE_SLASH].criticalHitStage == 1);
        PLAYER(SPECIES_DEFENSE_SATORI);
        OPPONENT(SPECIES_DEFENSE_SATORI);
    } WHEN {
        TURN { MOVE(player, MOVE_SLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLASH, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Super Luck increases the critical hit ratio by one stage")
{
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        PLAYER(SPECIES_NORMAL_TENSHI) { Ability(ABILITY_SUPER_LUCK); };
        OPPONENT(SPECIES_DEFENSE_SATORI);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Scope Lens increases the critical hit ratio by one stage")
{
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gItemsInfo[ITEM_SCOPE_LENS].holdEffect == HOLD_EFFECT_SCOPE_LENS);
        PLAYER(SPECIES_DEFENSE_SATORI) { Item(ITEM_SCOPE_LENS); };
        OPPONENT(SPECIES_DEFENSE_SATORI);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: High crit rate, Super Luck and Scope Lens cause the move to result in a critical hit")
{
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gMovesInfo[MOVE_SLASH].criticalHitStage == 1);
        ASSUME(gItemsInfo[ITEM_SCOPE_LENS].holdEffect == HOLD_EFFECT_SCOPE_LENS);
        PLAYER(SPECIES_NORMAL_TENSHI) { Ability(ABILITY_SUPER_LUCK); Item(ITEM_SCOPE_LENS); };
        OPPONENT(SPECIES_DEFENSE_SATORI);
    } WHEN {
        TURN { MOVE(player, MOVE_SLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLASH, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Signature items Big Cloud and Bloomers increase the critical hit ratio by 2 stages")
{
    u32 species;
    u32 item;

    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);

    PARAMETRIZE { species = SPECIES_NORMAL_ICHIRIN; item = ITEM_BIG_CLOUD; }
    PARAMETRIZE { species = SPECIES_TECH_ICHIRIN; item = ITEM_BIG_CLOUD; }
    PARAMETRIZE { species = SPECIES_NORMAL_RAN; item = ITEM_BLOOMERS; }
    PARAMETRIZE { species = SPECIES_ATTACK_RAN; item = ITEM_BLOOMERS; }

    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gItemsInfo[ITEM_BIG_CLOUD].holdEffect == HOLD_EFFECT_BIG_CLOUD);
        ASSUME(gItemsInfo[ITEM_BLOOMERS].holdEffect == HOLD_EFFECT_BLOOMERS);
        PLAYER(SPECIES_DEFENSE_SATORI);
        OPPONENT(species) { Item(item); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Dire Hit increases a battler's critical hit chance by 2 stages")
{
    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gItemsInfo[ITEM_DIRE_HIT].battleUsage == EFFECT_ITEM_SET_FOCUS_ENERGY);
        PLAYER(SPECIES_DEFENSE_SATORI);
        OPPONENT(SPECIES_DEFENSE_SATORI);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_DIRE_HIT, partyIndex: 0); }
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_ENERGY, player);
        MESSAGE("DSatori used the Dire Hit to get pumped!");
        MESSAGE("DSatori used Scratch!");
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Focus Energy increases critical hit ratio by two")
{
    PASSES_RANDOMLY(8, 8, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gMovesInfo[MOVE_SLASH].criticalHitStage == 1);
        ASSUME(gMovesInfo[MOVE_FOCUS_ENERGY].effect == EFFECT_FOCUS_ENERGY);
        PLAYER(SPECIES_DEFENSE_SATORI);
        OPPONENT(SPECIES_DEFENSE_SATORI);
    } WHEN {
        TURN { MOVE(player, MOVE_FOCUS_ENERGY); }
        TURN { MOVE(player, MOVE_SLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_ENERGY, player);
        MESSAGE("DSatori is getting pumped!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLASH, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Dragon Cheer fails in a single battle")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DRAGON_CHEER].effect == EFFECT_DRAGON_CHEER);
        PLAYER(SPECIES_DEFENSE_SATORI);
        OPPONENT(SPECIES_DEFENSE_SATORI);
    } WHEN {
        TURN { MOVE(player, MOVE_DRAGON_CHEER); }
    } SCENE {
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Crit Chance: Dragon Cheer increases critical hit ratio by one on non Faith types")
{
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gMovesInfo[MOVE_TACKLE].criticalHitStage == 0);
        ASSUME(gMovesInfo[MOVE_DRAGON_CHEER].effect == EFFECT_DRAGON_CHEER);
        PLAYER(SPECIES_DEFENSE_SATORI);
        PLAYER(SPECIES_NORMAL_ALICE);
        OPPONENT(SPECIES_DEFENSE_SATORI);
        OPPONENT(SPECIES_DEFENSE_SATORI);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DRAGON_CHEER, target: playerRight); MOVE(playerRight, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_CHEER, playerLeft);
        MESSAGE("Alice is getting pumped!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerRight);
        MESSAGE("A critical hit!");
    }
}

DOUBLE_BATTLE_TEST("Crit Chance: Dragon Cheer increases critical hit ratio by two on Faith types")
{
    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gMovesInfo[MOVE_TACKLE].criticalHitStage == 0);
        ASSUME(gMovesInfo[MOVE_DRAGON_CHEER].effect == EFFECT_DRAGON_CHEER);
        PLAYER(SPECIES_DEFENSE_SATORI);
        PLAYER(SPECIES_NORMAL_SANAE);
        OPPONENT(SPECIES_DEFENSE_SATORI);
        OPPONENT(SPECIES_DEFENSE_SATORI);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DRAGON_CHEER, target: playerRight); MOVE(playerRight, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_CHEER, playerLeft);
        MESSAGE("Sanae is getting pumped!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerRight);
        MESSAGE("A critical hit!");
    }
}

DOUBLE_BATTLE_TEST("Crit Chance: Dragon Cheer fails if critical hit stage was already increased by Focus Energy")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SLASH].criticalHitStage == 1);
        ASSUME(gMovesInfo[MOVE_FOCUS_ENERGY].effect == EFFECT_FOCUS_ENERGY);
        ASSUME(gMovesInfo[MOVE_DRAGON_CHEER].effect == EFFECT_DRAGON_CHEER);
        PLAYER(SPECIES_DEFENSE_SATORI);
        PLAYER(SPECIES_DEFENSE_SATORI);
        OPPONENT(SPECIES_DEFENSE_SATORI);
        OPPONENT(SPECIES_DEFENSE_SATORI);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_FOCUS_ENERGY); MOVE(playerRight, MOVE_DRAGON_CHEER, target: playerLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_ENERGY, playerLeft);
        MESSAGE("But it failed!");
    }
}
