#include "constants/moves.h"

#define EGG_MOVES_SPECIES_OFFSET 20000
#define EGG_MOVES_TERMINATOR 0xFFFF
#define egg_moves(species, moves...) (SPECIES_##species + EGG_MOVES_SPECIES_OFFSET), moves

const u16 gEggMoves[] = {
/*#if P_FAMILY_BULBASAUR
    egg_moves(CHIBI_REIMU,
        MOVE_SKULL_BASH,
        MOVE_CHARM,
        MOVE_PETAL_DANCE,
        MOVE_MAGICAL_LEAF,
        MOVE_NATURE_SOUND,
        MOVE_CURSE,
        MOVE_INGRAIN,
        MOVE_NATIVE_POWER,
        MOVE_AMNESIA,
        MOVE_LEAF_STORM,
        MOVE_POWER_WHIP,
        MOVE_SLUDGE,
        MOVE_ENDURE,
        MOVE_GIGA_DRAIN,
        MOVE_GRASSY_TERRAIN),
#endif //P_FAMILY_BULBASAUR */

    egg_moves(CHIBI_REIMU,
        MOVE_CURSE,
        MOVE_FORCE_PALM,
        MOVE_KNOCK_OFF,
        MOVE_CROSS_CHOP,
        //MOVE_COERCE,
        MOVE_REVENGE,
        MOVE_ROCK_SLIDE),

    egg_moves(CHIBI_MARISA,
        MOVE_HYPER_BEAM,
        MOVE_AURORA_BEAM,
        MOVE_SUBSTITUTE,
        MOVE_SKILL_SWAP,
        MOVE_DOUBLE_EDGE,
        MOVE_MAGIC_KNIFE,
        MOVE_STEEL_WING),

    egg_moves(CHIBI_DAIYOUSEI,
        MOVE_THUNDER_WAVE,
        MOVE_ENCORE,
        MOVE_PERISH_SONG,
        MOVE_SILVER_WIND,
        MOVE_HELPING_HAND,
        MOVE_MINIMIZE),

    egg_moves(CHIBI_CIRNO,
        MOVE_DOUBLE_EDGE,
        MOVE_FLAIL,
        MOVE_DEFENSE_CURL,
        MOVE_SKULL_BASH,
        MOVE_SONIC_BOOM),

    egg_moves(CHIBI_RUMIA,
        MOVE_SLEEP_TALK,
        MOVE_THRASH,
        MOVE_DREAM_EATER,
        MOVE_SLACK_OFF,
        MOVE_TICKLE,
        MOVE_SHADOW_FORCE),

    egg_moves(CHIBI_MEILING,
        MOVE_DYNAMIC_PUNCH,
        MOVE_REVENGE,
        MOVE_SLEEP_TALK,
        MOVE_BELLY_DRUM,
        MOVE_MAGIC_KNIFE,
        MOVE_VITAL_THROW,
        MOVE_SMELLING_SALTS,
        MOVE_TWISTER),

    egg_moves(CHIBI_KOAKUMA,
        MOVE_WILL_O_WISP,
        MOVE_THUNDER_WAVE,
        MOVE_MIRROR_SHOT,
        MOVE_LOVELY_KISS,
        MOVE_PAIN_SPLIT,
        MOVE_FIRE_BLAST,
        MOVE_BLOCK,
        MOVE_FAKE_TEARS),

    EGG_MOVES_TERMINATOR
};

