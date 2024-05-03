#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_POISON_STING, MOVE_EFFECT_POISON) == TRUE);
    ASSUME(MoveHasAdditionalEffect(MOVE_TWINEEDLE, MOVE_EFFECT_POISON) == TRUE);
}

SINGLE_BATTLE_TEST("Poison Sting inflicts poison")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_POISON_STING); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_POISON_STING, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
        STATUS_ICON(opponent, poison: TRUE);
    }
}

SINGLE_BATTLE_TEST("Poison cannot be inflicted on Poison and Steel-type Pokémon")
{
    u32 mon;
    PARAMETRIZE { mon = SPECIES_DEFENSE_PATCHOULI; }
    PARAMETRIZE { mon = SPECIES_REGISTEEL; }
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_DEFENSE_PATCHOULI].types[0] == TYPE_MIASMA);
        ASSUME(gSpeciesInfo[SPECIES_REGISTEEL].types[0] == TYPE_STEEL);
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(mon);
    } WHEN {
        TURN { MOVE(player, MOVE_SEAL_NEEDLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SEAL_NEEDLE, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PSN, opponent);
            STATUS_ICON(opponent, poison: TRUE);
        }
    }
}
