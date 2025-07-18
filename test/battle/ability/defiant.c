#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Defiant sharply raises player's Attack after Intimidate")
{
    u32 abilityLeft, abilityRight;

    PARAMETRIZE { abilityLeft = ABILITY_VITAL_SPIRIT; abilityRight = ABILITY_VITAL_SPIRIT; }
    PARAMETRIZE { abilityLeft = ABILITY_VITAL_SPIRIT; abilityRight = ABILITY_DEFIANT; }
    PARAMETRIZE { abilityLeft = ABILITY_DEFIANT; abilityRight = ABILITY_VITAL_SPIRIT; }
    PARAMETRIZE { abilityLeft = ABILITY_DEFIANT; abilityRight = ABILITY_DEFIANT; }

    GIVEN {
        PLAYER(SPECIES_CHIBI_LILY_WHITE) { Ability(abilityLeft); }
        PLAYER(SPECIES_NORMAL_LILY_WHITE) { Ability(abilityRight); }
        OPPONENT(SPECIES_NORMAL_KAGUYA) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_SPEED_MEILING) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SCRATCH, target:opponentLeft); MOVE(playerRight, MOVE_SCRATCH, target:opponentRight); }
    } SCENE {
        //1st mon Intimidate
        ABILITY_POPUP(opponentLeft, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("The opposing Gyarados's Intimidate cuts Mankey's Attack!");
        if (abilityLeft == ABILITY_DEFIANT) {
            ABILITY_POPUP(playerLeft, ABILITY_DEFIANT);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
            MESSAGE("Mankey's Attack sharply rose!");
        }
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("The opposing Gyarados's Intimidate cuts Primeape's Attack!");
        if (abilityRight == ABILITY_DEFIANT) {
            ABILITY_POPUP(playerRight, ABILITY_DEFIANT);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
            MESSAGE("Primeape's Attack sharply rose!");
        }

        //2nd mon Intimidate
        ABILITY_POPUP(opponentRight, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("The opposing Arbok's Intimidate cuts Mankey's Attack!");
        if (abilityLeft == ABILITY_DEFIANT) {
            ABILITY_POPUP(playerLeft, ABILITY_DEFIANT);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
            MESSAGE("Mankey's Attack sharply rose!");
        }
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("The opposing Arbok's Intimidate cuts Primeape's Attack!");
        if (abilityRight == ABILITY_DEFIANT) {
            ABILITY_POPUP(playerRight, ABILITY_DEFIANT);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
            MESSAGE("Primeape's Attack sharply rose!");
        }
    } FINALLY {
        // -2 from Intimidates and +4 from Defiants gets +2 total
        EXPECT_EQ(playerLeft->statStages[STAT_ATK], (abilityLeft == ABILITY_DEFIANT) ? DEFAULT_STAT_STAGE + 2 : DEFAULT_STAT_STAGE - 2);
        EXPECT_EQ(playerRight->statStages[STAT_ATK], (abilityRight == ABILITY_DEFIANT) ? DEFAULT_STAT_STAGE + 2 : DEFAULT_STAT_STAGE - 2);
    }
}

// Same as above, but for opponent.
DOUBLE_BATTLE_TEST("Defiant sharply raises opponent's Attack after Intimidate")
{
    u32 abilityLeft, abilityRight;

    PARAMETRIZE { abilityLeft = ABILITY_VITAL_SPIRIT; abilityRight = ABILITY_VITAL_SPIRIT; }
    PARAMETRIZE { abilityLeft = ABILITY_VITAL_SPIRIT; abilityRight = ABILITY_DEFIANT; }
    PARAMETRIZE { abilityLeft = ABILITY_DEFIANT; abilityRight = ABILITY_VITAL_SPIRIT; }
    PARAMETRIZE { abilityLeft = ABILITY_DEFIANT; abilityRight = ABILITY_DEFIANT; }

    GIVEN {
        OPPONENT(SPECIES_CHIBI_LILY_WHITE) { Ability(abilityLeft); }
        OPPONENT(SPECIES_NORMAL_LILY_WHITE) { Ability(abilityRight); }
        PLAYER(SPECIES_NORMAL_KAGUYA) { Ability(ABILITY_INTIMIDATE); }
        PLAYER(SPECIES_SPEED_MEILING) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SCRATCH, target:playerLeft); MOVE(opponentRight, MOVE_SCRATCH, target:playerRight); }
    } SCENE {
        //1st mon Intimidate
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        MESSAGE("Gyarados's Intimidate cuts the opposing Mankey's Attack!");
        if (abilityLeft == ABILITY_DEFIANT) {
            ABILITY_POPUP(opponentLeft, ABILITY_DEFIANT);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
            MESSAGE("The opposing Mankey's Attack sharply rose!");
        }
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("Gyarados's Intimidate cuts the opposing Primeape's Attack!");
        if (abilityRight == ABILITY_DEFIANT) {
            ABILITY_POPUP(opponentRight, ABILITY_DEFIANT);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
            MESSAGE("The opposing Primeape's Attack sharply rose!");
        }

        //2nd mon Intimidate
        ABILITY_POPUP(playerRight, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        MESSAGE("Arbok's Intimidate cuts the opposing Mankey's Attack!");
        if (abilityLeft == ABILITY_DEFIANT) {
            ABILITY_POPUP(opponentLeft, ABILITY_DEFIANT);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
            MESSAGE("The opposing Mankey's Attack sharply rose!");
        }
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("Arbok's Intimidate cuts the opposing Primeape's Attack!");
        if (abilityRight == ABILITY_DEFIANT) {
            ABILITY_POPUP(opponentRight, ABILITY_DEFIANT);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
            MESSAGE("The opposing Primeape's Attack sharply rose!");
        }
    } FINALLY {
        // -2 from Intimidates and +4 from Defiants gets +2 total
        EXPECT_EQ(opponentLeft->statStages[STAT_ATK], (abilityLeft == ABILITY_DEFIANT) ? DEFAULT_STAT_STAGE + 2 : DEFAULT_STAT_STAGE - 2);
        EXPECT_EQ(opponentRight->statStages[STAT_ATK], (abilityRight == ABILITY_DEFIANT) ? DEFAULT_STAT_STAGE + 2 : DEFAULT_STAT_STAGE - 2);
    }
}

SINGLE_BATTLE_TEST("Defiant activates after Sticky Web lowers Speed")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_YUUGI);
        PLAYER(SPECIES_CHIBI_LILY_WHITE) { Ability(ABILITY_DEFIANT); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(opponent, MOVE_STICKY_WEB); }
        TURN { SWITCH(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, opponent);
        // Switch-in - Sticky Web activates
        SEND_IN_MESSAGE("Mankey");
        MESSAGE("Mankey was caught in a sticky web!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Speed fell!");
        // Defiant activates
        ABILITY_POPUP(player, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Attack sharply rose!");
    }
}

SINGLE_BATTLE_TEST("Defiant doesn't activate after Sticky Web lowers Speed if Court Changed (Gen8)")
{
    GIVEN {
        WITH_CONFIG(GEN_CONFIG_DEFIANT_STICKY_WEB, GEN_8);
        ASSUME(GetMoveEffect(MOVE_GROWL) == EFFECT_ATTACK_DOWN);
        ASSUME(GetMoveEffect(MOVE_STICKY_WEB) == EFFECT_STICKY_WEB);
        ASSUME(GetMoveEffect(MOVE_COURT_CHANGE) == EFFECT_COURT_CHANGE);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_MANKEY) { Ability(ABILITY_DEFIANT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_STICKY_WEB); MOVE(opponent, MOVE_COURT_CHANGE); }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_GROWL);}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_COURT_CHANGE, opponent);
        // Switch-in - Sticky Web activates
        SEND_IN_MESSAGE("Mankey");
        MESSAGE("Mankey was caught in a sticky web!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Speed fell!");
        // Defiant doesn't activate
        NONE_OF {
            ABILITY_POPUP(player, ABILITY_DEFIANT);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Mankey's Attack sharply rose!");
        }
        // Defiant triggers correctly after Sticky Web
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GROWL, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Attack fell!");
        ABILITY_POPUP(player, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Attack sharply rose!");
    }
}

SINGLE_BATTLE_TEST("Defiant activates after Sticky Web lowers Speed if Court Changed (Gen9)")
{
    GIVEN {
        WITH_CONFIG(GEN_CONFIG_DEFIANT_STICKY_WEB, GEN_9);
        ASSUME(GetMoveEffect(MOVE_GROWL) == EFFECT_ATTACK_DOWN);
        ASSUME(GetMoveEffect(MOVE_STICKY_WEB) == EFFECT_STICKY_WEB);
        ASSUME(GetMoveEffect(MOVE_COURT_CHANGE) == EFFECT_COURT_CHANGE);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_MANKEY) { Ability(ABILITY_DEFIANT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_STICKY_WEB); MOVE(opponent, MOVE_COURT_CHANGE); }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_GROWL);}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_COURT_CHANGE, opponent);
        // Switch-in - Sticky Web activates
        SEND_IN_MESSAGE("Mankey");
        MESSAGE("Mankey was caught in a sticky web!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Speed fell!");
        ABILITY_POPUP(player, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Attack sharply rose!");
        // Defiant triggers correctly after Sticky Web
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GROWL, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Attack fell!");
        ABILITY_POPUP(player, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Attack sharply rose!");
    }
}

DOUBLE_BATTLE_TEST("Defiant is activated by Cotton Down for non-ally pokemon")
{
    GIVEN {
        PLAYER(SPECIES_CHIBI_LILY_WHITE) { Ability(ABILITY_DEFIANT); }
        PLAYER(SPECIES_CHIBI_LILY_WHITE) { Ability(ABILITY_DEFIANT); }
        OPPONENT(SPECIES_ELDEGOSS) { Ability(ABILITY_COTTON_DOWN); }
        OPPONENT(SPECIES_CHIBI_LILY_WHITE) { Ability(ABILITY_DEFIANT); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SCRATCH, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, playerLeft);
        ABILITY_POPUP(opponentLeft, ABILITY_COTTON_DOWN);

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Mankey's Speed fell!");
        ABILITY_POPUP(playerLeft, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Mankey's Attack sharply rose!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("Mankey's Speed fell!");
        ABILITY_POPUP(playerRight, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("Mankey's Attack sharply rose!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("The opposing Mankey's Speed fell!");
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_SPEED], DEFAULT_STAT_STAGE - 1);
        EXPECT_EQ(playerRight->statStages[STAT_SPEED], DEFAULT_STAT_STAGE - 1);
        EXPECT_EQ(opponentRight->statStages[STAT_SPEED], DEFAULT_STAT_STAGE - 1);
        EXPECT_EQ(playerLeft->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 2);
        EXPECT_EQ(playerRight->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 2);
    }
}

SINGLE_BATTLE_TEST("Defiant activates before White Herb")
{
    u32 move;

    PARAMETRIZE { move = MOVE_LEER; }
    PARAMETRIZE { move = MOVE_GROWL; }

    GIVEN {
        PLAYER(SPECIES_MANKEY) { Ability(ABILITY_DEFIANT); Item(ITEM_WHITE_HERB); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);

        ABILITY_POPUP(player, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Attack sharply rose!");

        if (move == MOVE_LEER) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Mankey returned its stats to normal using its White Herb!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Mankey returned its stats to normal using its White Herb!");
            }
        }
    } THEN {
        if (move == MOVE_LEER) {
            EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
            EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 2);
        } else {
            EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
        }
    }
}

SINGLE_BATTLE_TEST("Defiant activates for each stat that is lowered")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_TICKLE) == EFFECT_TICKLE);
        PLAYER(SPECIES_MANKEY) { Ability(ABILITY_DEFIANT); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TICKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TICKLE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Attack fell!");
        ABILITY_POPUP(player, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Attack sharply rose!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Defense fell!");
        ABILITY_POPUP(player, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Attack sharply rose!");

    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 3);
    }
}

SINGLE_BATTLE_TEST("Defiant doesn't activate if the pokemon lowers it's own stats")
{
    u32 move;

    PARAMETRIZE { move = MOVE_SUPERPOWER; }
    PARAMETRIZE { move = MOVE_CLOSE_COMBAT; }
    PARAMETRIZE { move = MOVE_MAKE_IT_RAIN; }
    PARAMETRIZE { move = MOVE_SPIN_OUT; }

    GIVEN {
        ASSUME(MoveHasAdditionalEffectSelf(MOVE_SUPERPOWER, MOVE_EFFECT_ATK_DEF_DOWN));
        ASSUME(MoveHasAdditionalEffectSelf(MOVE_CLOSE_COMBAT, MOVE_EFFECT_DEF_SPDEF_DOWN));
        ASSUME(MoveHasAdditionalEffectSelf(MOVE_MAKE_IT_RAIN, MOVE_EFFECT_SP_ATK_MINUS_1));
        ASSUME(MoveHasAdditionalEffectSelf(MOVE_SPIN_OUT, MOVE_EFFECT_SPD_MINUS_2));
        PLAYER(SPECIES_MANKEY) { Ability(ABILITY_DEFIANT); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);

        NONE_OF {
            ABILITY_POPUP(player, ABILITY_DEFIANT);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Mankey's Attack sharply rose!");
        }
    } THEN {
        if (move == MOVE_SUPERPOWER)
            EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE - 1);
        else
            EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Defiant doesn't display ability popup when already at Maximum Attack")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_TICKLE) == EFFECT_TICKLE);
        ASSUME(GetMoveEffect(MOVE_BELLY_DRUM) == EFFECT_BELLY_DRUM);
        PLAYER(SPECIES_MANKEY) { Ability(ABILITY_DEFIANT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_BELLY_DRUM); MOVE(opponent, MOVE_TICKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BELLY_DRUM, player);
        // Maxed Attack
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TICKLE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Attack fell!");
        ABILITY_POPUP(player, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Attack rose!");
        // Maxed Attack
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Mankey's Defense fell!");
        NONE_OF {
            ABILITY_POPUP(player, ABILITY_DEFIANT);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Mankey's Attack sharply rose!");
        }
        MESSAGE("Mankey's Attack won't go any higher!");

    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], MAX_STAT_STAGE);
    }
}
