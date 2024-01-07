#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoTouhou7[] =
{
#endif

#define YOUMU_MISC_INFO                                         \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_SLOW,                       \
        .eggCycles = 20,                                        \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FIELD }, \
        .sourceGame = SOURCE_PCB,                               \
        .noFlip = TRUE,                                         \
        .cryId = CRY_YOUMU

    [SPECIES_CHIBI_YOUMU] =
    {
        YOUMU_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 95,
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = { TYPE_GHOST, TYPE_STEEL },
        .catchRate = 90,
        .expYield = 76,
        .evYield_Attack = 1,
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_EARLY_BIRD },
        .speciesName = _("CYoumu"),
        .natDexNum = NATIONAL_DEX_CHIBI_YOUMU,
        .categoryName = _("Half-Human"),
        .height = 3,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Youmu is a half-human half-phantom,\n"
            "which are the mix of humans and\n"
            "phantoms, which explains her ghost\n"
            "and human bodies."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(CYoumu, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CYoumu,
        BACK_PIC(CYoumu, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CYoumu),
        ICON(CYoumu, 0),
        FOOTPRINT(CYoumu)
        LEARNSETS(CYoumu),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_NORMAL_YOUMU},
                                {EVO_SHARD, ITEM_GUARD_HEART, SPECIES_DEFENSE_YOUMU},
                                {EVO_SHARD, ITEM_SWIFT_HEART, SPECIES_SPEED_YOUMU}),
    },

    [SPECIES_NORMAL_YOUMU] =
    {
        YOUMU_MISC_INFO,
        .baseHP        = 85,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 85,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = { TYPE_GHOST, TYPE_STEEL },
        .catchRate = 45,
        .expYield = 212,
        .evYield_Attack = 3,
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_EARLY_BIRD },
        .speciesName = _("Youmu"),
        .natDexNum = NATIONAL_DEX_NORMAL_YOUMU,
        .categoryName = _("Magnet"),
        .height = 5,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "The units at its sides are extremely\n"
            "powerful magnets. They generate enough\n"
            "magnetism to draw in iron objects from\n"
            "over 300 feet away."),
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Youmu, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Youmu,
        BACK_PIC(Youmu, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Youmu),
        ICON(Youmu, 0),
        FOOTPRINT(Youmu)
        LEARNSETS(Youmu),
    },

    [SPECIES_DEFENSE_YOUMU] =
    {
        YOUMU_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 120,
        .baseSpeed     = 85,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = { TYPE_GHOST, TYPE_STEEL },
        .catchRate = 45,
        .expYield = 212,
        .evYield_Defense = 3,
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_EARLY_BIRD },
        .speciesName = _("DYoumu"),
        .natDexNum = NATIONAL_DEX_DEFENSE_YOUMU,
        .categoryName = _("Magnet"),
        .height = 5,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "It is actually three Magnemite linked\n"
            "by magnetism. It generates powerful radio\n"
            "waves that raise temperatures by 3.6\n"
            "degrees F within a 3,300-foot radius."),
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(DYoumu, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_DYoumu,
        BACK_PIC(DYoumu, 64, 64),
        .backPicYOffset = 0,
        PALETTES(DYoumu),
        ICON(DYoumu, 0),
        FOOTPRINT(DYoumu)
        LEARNSETS(DYoumu),
    },

    [SPECIES_SPEED_YOUMU] =
    {
        YOUMU_MISC_INFO,
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 120,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = { TYPE_GHOST, TYPE_STEEL },
        .catchRate = 45,
        .expYield = 212,
        .evYield_Speed = 3,
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_EARLY_BIRD },
        .speciesName = _("SYoumu"),
        .natDexNum = NATIONAL_DEX_SPEED_YOUMU,
        .categoryName = _("Swordmaster"),
        .height = 8,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "It is always seen with a stick from a plant.\n"
            "Apparently, there are good sticks and bad\n"
            "sticks. This Pokémon occasionally fights\n"
            "with others over choice sticks."),
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(SYoumu, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SYoumu,
        BACK_PIC(SYoumu, 64, 64),
        .backPicYOffset = 0,
        PALETTES(SYoumu),
        ICON(SYoumu, 0),
        FOOTPRINT(SYoumu)
        LEARNSETS(SYoumu),
    },

#ifdef __INTELLISENSE__
};
#endif