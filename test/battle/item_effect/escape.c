#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_POKE_TOY].battleUsage == EFFECT_ITEM_ESCAPE);
}

WILD_BATTLE_TEST("Poke Toy lets the player escape from a wild battle")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_POKE_TOY); }
    } SCENE {
        MESSAGE("{PLAY_SE SE_FLEE}You got away safely!\p");
    }
}

WILD_BATTLE_TEST("Poke Toy lets the player escape from a wild battle even if a move forbid them to")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_MEAN_LOOK) == EFFECT_MEAN_LOOK);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_CHARMING_LOOK); }
        TURN { USE_ITEM(player, ITEM_POKE_TOY); }
    } SCENE {
        // Turn 1
        MESSAGE("The wild Wobbuffet used Mean Look!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MEAN_LOOK, opponent);
        MESSAGE("Wobbuffet can no longer escape!");
        // Turn 2
        MESSAGE("{PLAY_SE SE_FLEE}You got away safely!\p");
    }
}

WILD_BATTLE_TEST("Poke Toy lets the player escape from a wild battle even if an ability forbid them to")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_HOURAI) { Ability(ABILITY_ARENA_TRAP); }
    } WHEN {
        TURN { USE_ITEM(player, ITEM_POKE_TOY); }
    } SCENE {
        MESSAGE("{PLAY_SE SE_FLEE}You got away safely!\p");
    }
}
