#define EGG_MOVES_SPECIES_OFFSET 20000
#define EGG_MOVES_TERMINATOR 0xFFFF
#define egg_moves(species, moves...) (SPECIES_##species + EGG_MOVES_SPECIES_OFFSET), moves

const u16 gEggMoves[] = {
    egg_moves(BULBASAUR,
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

    egg_moves(CHARMANDER,
        MOVE_BELLY_DRUM,
        MOVE_ANCIENT_POWER,
        MOVE_BITE,
        MOVE_OUTRAGE,
        MOVE_BEAT_UP,
        MOVE_DRAGON_DANCE,
        MOVE_CRUNCH,
        MOVE_DRAGON_RUSH,
        MOVE_METAL_CLAW,
        MOVE_FLARE_BLITZ,
        MOVE_COUNTER,
        MOVE_DRAGON_PULSE,
        MOVE_FOCUS_PUNCH,
        MOVE_AIR_CUTTER),

    EGG_MOVES_TERMINATOR
};
