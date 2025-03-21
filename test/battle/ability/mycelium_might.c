#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Mycelium Might causes the user to move last in the priority bracket if it uses a status move")
{
    GIVEN {
        PLAYER(SPECIES_TOEDSCOOL) { Speed(100); Ability(ABILITY_AMBITION); }
        OPPONENT(SPECIES_CHIBI_YUUGI) { Speed(1); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_SPORE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        STATUS_ICON(opponent, sleep: TRUE);
    }
}

SINGLE_BATTLE_TEST("Mycelium Might will respect the speed if both battlers have the ability")
{
    GIVEN {
        PLAYER(SPECIES_TOEDSCOOL) { Speed(100); Ability(ABILITY_AMBITION); }
        OPPONENT(SPECIES_TOEDSCOOL) { Speed(1); Ability(ABILITY_AMBITION); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_WILL_O_WISP); MOVE(player, MOVE_WILL_O_WISP); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WILL_O_WISP, player);
        STATUS_ICON(opponent, burn: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WILL_O_WISP, opponent);
        STATUS_ICON(player, burn: TRUE);
    }
}

SINGLE_BATTLE_TEST("Mycelium Might ignores opposing abilities")
{
    GIVEN {
        PLAYER(SPECIES_TOEDSCOOL) { Speed(100); Ability(ABILITY_AMBITION); }
        OPPONENT(SPECIES_NORMAL_MEIRA) { Speed(1); Ability(ABILITY_HAKUREI_MIKO);}
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_SCREECH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCREECH, player);
        NOT ABILITY_POPUP(opponent, ABILITY_HAKUREI_MIKO);
    }
}

SINGLE_BATTLE_TEST("Mycelium Might vs Stall action order depends on speed")
{
    u32 speed;
    PARAMETRIZE { speed = 99; }
    PARAMETRIZE { speed = 101; }
    GIVEN {
        PLAYER(SPECIES_TOEDSCOOL) { Speed(100); Ability(ABILITY_AMBITION); }
        OPPONENT(SPECIES_PLACEHOLD_RAIKO) { Speed(speed); Ability(ABILITY_STALL);}
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        if (speed < 100)
        {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        }
        else
        {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        }
    }
}
