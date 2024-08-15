#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Damp prevents explosion-like moves from enemies")
{
    u32 move;
    PARAMETRIZE { move = MOVE_EXPLOSION; }
    PARAMETRIZE { move = MOVE_SELF_DESTRUCT; }
    PARAMETRIZE { move = MOVE_MIND_BLOWN; }
    PARAMETRIZE { move = MOVE_MISTY_EXPLOSION; }
    GIVEN {
        PLAYER(SPECIES_NORMAL_LETTY) { Ability(ABILITY_DAMP); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DAMP);
        NONE_OF { HP_BAR(player); HP_BAR(opponent); }
    }
}

DOUBLE_BATTLE_TEST("Damp prevents explosion-like moves from enemies in a double battle")
{
    u32 move;
    PARAMETRIZE { move = MOVE_EXPLOSION; }
    PARAMETRIZE { move = MOVE_SELF_DESTRUCT; }
    PARAMETRIZE { move = MOVE_MIND_BLOWN; }
    PARAMETRIZE { move = MOVE_MISTY_EXPLOSION; }
    GIVEN {
        PLAYER(SPECIES_NORMAL_LETTY) { Ability(ABILITY_DAMP); }
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(opponentLeft, move); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_DAMP);
        NONE_OF { HP_BAR(playerLeft); HP_BAR(opponentLeft); HP_BAR(playerRight); HP_BAR(opponentRight); }
    }
}

SINGLE_BATTLE_TEST("Damp prevents explosion-like moves from self")
{
    u32 move;
    PARAMETRIZE { move = MOVE_EXPLOSION; }
    PARAMETRIZE { move = MOVE_SELF_DESTRUCT; }
    PARAMETRIZE { move = MOVE_MIND_BLOWN; }
    PARAMETRIZE { move = MOVE_MISTY_EXPLOSION; }
    GIVEN {
        PLAYER(SPECIES_NORMAL_LETTY) { Ability(ABILITY_DAMP); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DAMP);
        NONE_OF { HP_BAR(player); HP_BAR(opponent); }
    }
}

SINGLE_BATTLE_TEST("Damp prevents damage from Aftermath")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].makesContact);
        PLAYER(SPECIES_NORMAL_LETTY) { Ability(ABILITY_DAMP); }
        OPPONENT(SPECIES_CHIBI_WRIGGLE) { Ability(ABILITY_AFTERMATH); HP(1); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); SEND_OUT(opponent, 1); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_AFTERMATH);
        ABILITY_POPUP(player, ABILITY_DAMP);
        NONE_OF { HP_BAR(player); }
    }
}
