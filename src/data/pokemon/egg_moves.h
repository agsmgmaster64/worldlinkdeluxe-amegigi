#include "constants/moves.h"

#define EGG_MOVES_SPECIES_OFFSET 20000
#define EGG_MOVES_TERMINATOR 0xFFFF
#define egg_moves(species, moves...) (SPECIES_##species + EGG_MOVES_SPECIES_OFFSET), moves

const u16 gEggMoves[] = {
#if P_FAMILY_BULBASAUR
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
#endif //P_FAMILY_BULBASAUR

    EGG_MOVES_TERMINATOR
};

