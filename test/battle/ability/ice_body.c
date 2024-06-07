#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Ice Body prevents damage from hail")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_PLACEHOLD2_KOSUZU) { Ability(ABILITY_ICE_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_HAIL); MOVE(opponent, MOVE_SKILL_SWAP); }
    } SCENE {
        NONE_OF { HP_BAR(player); }
    }
}

SINGLE_BATTLE_TEST("Ice Body recovers 1/16th of Max HP in hail.")
{
    GIVEN {
        PLAYER(SPECIES_PLACEHOLD2_KOSUZU) { Ability(ABILITY_ICE_BODY); HP(1); MaxHP(100); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HAIL); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_ICE_BODY);
        MESSAGE("Glalie's Ice Body healed it a little bit!");
        HP_BAR(player, damage: -(100 / 16));
    }
}
