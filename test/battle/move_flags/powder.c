#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Powder moves are blocked by Grass-type Pokémon")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_STUN_SPORE].powderMove);
        ASSUME(gSpeciesInfo[SPECIES_ATTACK_FLANDRE].types[0] == TYPE_NATURE);
        PLAYER(SPECIES_NORMAL_KOSUZU);
        OPPONENT(SPECIES_ATTACK_FLANDRE);
    } WHEN {
        TURN { MOVE(player, MOVE_STUN_SPORE); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_STUN_SPORE, player);
        MESSAGE("It doesn't affect the opposing Oddish…");
    }
}
