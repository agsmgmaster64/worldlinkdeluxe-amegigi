#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Innards Out deal dmg on fainting equal to the amount of dmg inflicted on the Innards Out mon")
{
    u16 hp = 0;
    PARAMETRIZE { hp = 5; }
    PARAMETRIZE { hp = 15; }
    PARAMETRIZE { hp = 50; }
    PARAMETRIZE { hp = 100; } // This takes out Wobbuffet.

    GIVEN {
        PLAYER(SPECIES_PYUKUMUKU) { HP(hp); Ability(ABILITY_INNARDS_OUT); }
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI) { HP(70); SpAttack(1000); }
        OPPONENT(SPECIES_CHIBI_YUUGI);
        ASSUME(gMovesInfo[MOVE_MANA_BURST].power != 0);
        ASSUME(gMovesInfo[MOVE_MANA_BURST].category == DAMAGE_CATEGORY_SPECIAL);
    } WHEN {
        TURN { MOVE(opponent, MOVE_MANA_BURST); SEND_OUT(player, 1); if (hp == 100) { SEND_OUT(opponent, 1); } }
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Psychic!");
        HP_BAR(player, hp);
        ABILITY_POPUP(player, ABILITY_INNARDS_OUT);
        HP_BAR(opponent, hp);
    }
}

SINGLE_BATTLE_TEST("Innards Out does not trigger after Gastro Acid has been used")
{
    GIVEN {
        PLAYER(SPECIES_PYUKUMUKU) { HP(1); Ability(ABILITY_INNARDS_OUT); }
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_CHIBI_YUUGI);
        ASSUME(gMovesInfo[MOVE_MANA_BURST].power != 0);
        ASSUME(gMovesInfo[MOVE_GASTRO_ACID].effect == EFFECT_GASTRO_ACID);
    } WHEN {
        TURN { MOVE(opponent, MOVE_GASTRO_ACID); }
        TURN { MOVE(opponent, MOVE_MANA_BURST); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Gastro Acid!");
        MESSAGE("The opposing Wobbuffet used Psychic!");
        HP_BAR(player);
        NONE_OF {
            ABILITY_POPUP(player, ABILITY_INNARDS_OUT);
            HP_BAR(opponent);
        }
    }
}

// According to Showdown Innards Out triggers, but does nothing.
SINGLE_BATTLE_TEST("Innards Out does not damage Magic Guard Pokemon")
{
    GIVEN {
        PLAYER(SPECIES_PYUKUMUKU) { HP(1); Ability(ABILITY_INNARDS_OUT); }
        PLAYER(SPECIES_CHIBI_YUUGI);
        OPPONENT(SPECIES_HELPER_SAKUYA) { Ability(ABILITY_MAGIC_GUARD); }
        ASSUME(gMovesInfo[MOVE_MANA_BURST].power != 0);
    } WHEN {
        TURN { MOVE(opponent, MOVE_MANA_BURST); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("The opposing Clefable used Psychic!");
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_INNARDS_OUT);
        NOT HP_BAR(opponent);
    }
}
