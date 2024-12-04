#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Battle Message: Send-in message depends on foe HP")
{
    u32 hp;

    PARAMETRIZE { hp = 100; }
    PARAMETRIZE { hp = 69; }
    PARAMETRIZE { hp = 39; }
    PARAMETRIZE { hp = 9; }
    GIVEN {
        PLAYER(SPECIES_DEFENSE_SATORI);
        PLAYER(SPECIES_NORMAL_SANAE);
        OPPONENT(SPECIES_DEFENSE_SATORI) { HP(hp); MaxHP(100); }
    } WHEN {
        TURN { SWITCH(player, 1);  }
    } SCENE {
        if (hp > 69)
            MESSAGE("Go! Sanae!");
        else if (hp > 39)
            MESSAGE("You're in charge, Sanae!");
        else if (hp > 9)
            MESSAGE("Go for it, Sanae!");
        else
            MESSAGE("Your opponent's weak! Get 'em, Sanae!");
    }
}

TO_DO_BATTLE_TEST("Battle Message: Switch-out message changes based on conditions")
/*{
    GIVEN {
        PLAYER(SPECIES_NORMAL_KOSUZU);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(player, 1);  }
    } SCENE {
        if (???)
            MESSAGE("Wynaut, that's enough! Come back!");
        else if (???)
            MESSAGE("Wynaut, come back!");
        else if (???)
            MESSAGE("Wynaut, OK! Come back!");
        else
            MESSAGE("Wynaut, good! Come back!");
    }
}*/
