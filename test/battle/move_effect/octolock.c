#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Octolock decreases Defense and Sp. Def by at the end of the turn")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_OCTOLOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OCTOLOCK, player);
        MESSAGE("The opposing Wobbuffet can no longer escape because of Octolock!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Wobbuffet's Defense fell!");
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Wobbuffet's Sp. Def fell!");
    }
}

SINGLE_BATTLE_TEST("Octolock reduction is prevented by Clear Body, White Smoke and Full Metal Body")
{
    u32 species;
    u32 ability;

    PARAMETRIZE { species = SPECIES_NORMAL_MEIRA; ability = ABILITY_HAKUREI_MIKO; }
    PARAMETRIZE { species = SPECIES_NORMAL_HATATE; ability = ABILITY_MAGIC_BARRIER; }
    PARAMETRIZE { species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; }

    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_OCTOLOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OCTOLOCK, player);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        if (species == SPECIES_NORMAL_MEIRA)
        {
            MESSAGE("The opposing Beldum can no longer escape because of Octolock!");
            ABILITY_POPUP(opponent, ABILITY_CLEAR_BODY);
            MESSAGE("The opposing Beldum's Clear Body prevents stat loss!");
            NONE_OF {
                MESSAGE("The opposing Beldum's Defense fell!");
                MESSAGE("The opposing Beldum's Sp. Def fell!");
            }
        }
        else if (species == SPECIES_NORMAL_HATATE)
        {
            MESSAGE("The opposing Torkoal can no longer escape because of Octolock!");
            ABILITY_POPUP(opponent, ABILITY_WHITE_SMOKE);
            MESSAGE("The opposing Torkoal's White Smoke prevents stat loss!");
            NONE_OF {
                MESSAGE("The opposing Torkoal's Defense fell!");
                MESSAGE("The opposing Torkoal's Sp. Def fell!");
            }
        }
        else if (species == SPECIES_SOLGALEO)
        {
            MESSAGE("The opposing Solgaleo can no longer escape because of Octolock!");
            ABILITY_POPUP(opponent, ABILITY_FULL_METAL_BODY);
            MESSAGE("The opposing Solgaleo's Full Metal Body prevents stat loss!");
            NONE_OF {
                MESSAGE("The opposing Solgaleo's Defense fell!");
                MESSAGE("The opposing Solgaleo's Sp. Def fell!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Octolock Defense reduction is prevented by Big Pecks")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_TECH_CIRNO) { Ability(ABILITY_BIG_PECKS); }
    } WHEN {
        TURN { MOVE(player, MOVE_OCTOLOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OCTOLOCK, player);
        MESSAGE("The opposing Pidgey can no longer escape because of Octolock!");
        NOT MESSAGE("The opposing Pidgey's Defense fell!");
        ABILITY_POPUP(opponent, ABILITY_BIG_PECKS);
        MESSAGE("The opposing Pidgey's Big Pecks prevents Defense loss!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Pidgey's Sp. Def fell!");
    }
}

SINGLE_BATTLE_TEST("Octolock reduction is prevented by Clear Amulet")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI) { Item(ITEM_CLEAR_AMULET); }
    } WHEN {
        TURN { MOVE(player, MOVE_OCTOLOCK); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OCTOLOCK, player);
        MESSAGE("The opposing Wobbuffet can no longer escape because of Octolock!");
        MESSAGE("The effects of the Clear Amulet held by the opposing Wobbuffet prevents its stats from being lowered!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("The opposing Wobbuffet's Defense fell!");
            MESSAGE("The opposing Wobbuffet's Sp. Def fell!");
        }
    }
}

SINGLE_BATTLE_TEST("Octolock will not decrease Defense and Sp. Def further then minus six")
{
    u8 j;

    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_OCTOLOCK); }
        for (j = 0; j < 6; j++)
            TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OCTOLOCK, player);
        for (j = 0; j < 5; j++) {
            MESSAGE("The opposing Wobbuffet's Defense fell!");
            MESSAGE("The opposing Wobbuffet's Sp. Def fell!");
        }
        MESSAGE("The opposing Wobbuffet's Defense won't go any lower!");
        MESSAGE("The opposing Wobbuffet's Sp. Def won't go any lower!");
        NONE_OF {
            MESSAGE("The opposing Wobbuffet's Defense fell!");
            MESSAGE("The opposing Wobbuffet's Sp. Def fell!");
        }
    }
}

SINGLE_BATTLE_TEST("Octolock triggers Defiant for both stat reductions")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BISHARP) { Ability(ABILITY_DEFIANT); }
    } WHEN {
        TURN { MOVE(player, MOVE_OCTOLOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OCTOLOCK, player);
        MESSAGE("The opposing Bisharp can no longer escape because of Octolock!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Bisharp's Defense fell!");
        ABILITY_POPUP(opponent, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Bisharp's Attack sharply rose!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Bisharp's Sp. Def fell!");
        ABILITY_POPUP(opponent, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Bisharp's Attack sharply rose!");
    }
}
