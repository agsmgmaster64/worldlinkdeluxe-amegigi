#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Poison Sting inflicts poison")
{
    GIVEN {
        ASSUME(MoveHasAdditionalEffect(MOVE_POISON_STING, MOVE_EFFECT_POISON) == TRUE);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
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
    PARAMETRIZE { mon = SPECIES_CHIBI_KOTOHIME; }
    GIVEN {
        ASSUME(MoveHasAdditionalEffect(MOVE_TWINEEDLE, MOVE_EFFECT_POISON) == TRUE);
        ASSUME(gSpeciesInfo[SPECIES_NIDORAN_M].types[0] == TYPE_POISON);
        ASSUME(gSpeciesInfo[SPECIES_CHIBI_KOTOHIME].types[0] == TYPE_STEEL);
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
