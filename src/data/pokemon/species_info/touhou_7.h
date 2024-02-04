#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoTouhou7[] =
{
#endif

    [SPECIES_CHIBI_LETTY] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 85,
        .baseSpeed     = 50,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 110 : 100,
        .baseSpDefense = 90,
        .types = { TYPE_NATURE, TYPE_MIASMA },
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 245,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 221,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 216,
    #else
        .expYield = 184,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_INFECTIOUS },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Vileplume"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_VILEPLUME,
        .categoryName = _("Flower"),
        .height = 12,
        .weight = 186,
        .description = COMPOUND_STRING(
            "In seasons when it produces more pollen,\n"
            "the air around a Vileplume turns yellow\n"
            "with the powder as it walks. The pollen is\n"
            "highly toxic and causes paralysis."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Vileplume, 56, 56),
        FRONT_PIC_FEMALE(Vileplume, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Vileplume,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Vileplume, 64, 56),
        BACK_PIC_FEMALE(Vileplume, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Vileplume),
        ICON(Vileplume, 0),
        FOOTPRINT(Vileplume)
        LEARNSETS(Vileplume),
    },

    [SPECIES_NORMAL_LETTY] =
    {
        .baseHP        = 35,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 25,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_HEART, TYPE_NATURE },
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 57 : 70,
        .evYield_Attack = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_GRASS },
        .abilities = { ABILITY_INFECTIOUS, ABILITY_DRY_SKIN, ABILITY_DAMP },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Paras"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PARAS,
        .categoryName = _("Mushroom"),
        .height = 3,
        .weight = 54,
        .description = COMPOUND_STRING(
            "A Paras has parasitic tochukaso\n"
            "mushrooms growing on its back. They grow\n"
            "by drawing nutrients from the host. They\n"
            "are valued as a medicine for long life."),
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Paras, 48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Paras,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .frontAnimDelay = 10,
        BACK_PIC(Paras, 64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Paras),
        ICON(Paras, 0),
        FOOTPRINT(Paras)
        LEARNSETS(Paras),
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_DEFENSE_LETTY}),
    },

    [SPECIES_DEFENSE_LETTY] =
    {
        .baseHP        = 60,
        .baseAttack    = 95,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .types = { TYPE_HEART, TYPE_NATURE },
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 128,
        .evYield_Attack = 2,
        .evYield_Defense = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_GRASS },
        .abilities = { ABILITY_INFECTIOUS, ABILITY_DRY_SKIN, ABILITY_DAMP },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Parasect"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PARASECT,
        .categoryName = _("Mushroom"),
        .height = 10,
        .weight = 295,
        .description = COMPOUND_STRING(
            "Parasect are known to infest the roots of\n"
            "large trees en masse and drain nutrients.\n"
            "When an infested tree dies, they move\n"
            "onto another tree all at once."),
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Parasect, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Parasect,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 45,
        BACK_PIC(Parasect, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Parasect),
        ICON(Parasect, 0),
        FOOTPRINT(Parasect)
        LEARNSETS(Parasect),
    },

    [SPECIES_HELPER_LETTY] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .types = { TYPE_HEART, TYPE_MIASMA },
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 61 : 75,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_FOCUS, ABILITY_TINTED_LENS, ABILITY_RUN_AWAY },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Venonat"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_VENONAT,
        .categoryName = _("Insect"),
        .height = 10,
        .weight = 300,
        .description = COMPOUND_STRING(
            "Its coat of thin, stiff hair that covers\n"
            "its entire body is said to have evolved\n"
            "for protection. Its large eyes never fail\n"
            "to spot even miniscule prey."),
        .pokemonScale = 360,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
        FRONT_PIC(Venonat, 40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Venonat,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .frontAnimDelay = 20,
        BACK_PIC(Venonat, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Venonat),
        ICON(Venonat, 2),
        FOOTPRINT(Venonat)
        LEARNSETS(Venonat),
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_SHANGHAI}),
    },

    [SPECIES_SHANGHAI] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 90,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .types = { TYPE_HEART, TYPE_MIASMA },
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 138,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_ADVENT, ABILITY_TINTED_LENS, ABILITY_WONDER_SKIN },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Venomoth"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_VENOMOTH,
        .categoryName = _("Poison Moth"),
        .height = 15,
        .weight = 125,
        .description = COMPOUND_STRING(
            "Venomoth are nocturnal--they are only\n"
            "active at night. Their favorite prey are\n"
            "insects that gather around streetlights,\n"
            "attracted by the light in the darkness."),
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
        FRONT_PIC(Venomoth, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Venomoth,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 16,
        BACK_PIC(Venomoth, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Venomoth),
        ICON(Venomoth, 2),
        FOOTPRINT(Venomoth)
        LEARNSETS(Venomoth),
    },

#define YOUMU_MISC_INFO                                         \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_SLOW, SOURCE_PCB),       \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FIELD }, \
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
        CHIBI_DEX_SCALE,
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
                                {EVO_HEART, ITEM_GUARD_HEART, SPECIES_DEFENSE_YOUMU},
                                {EVO_HEART, ITEM_SWIFT_HEART, SPECIES_SPEED_YOUMU}),
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
        EVOLVED_DEX_SCALE,
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
        EVOLVED_DEX_SCALE,
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
        EVOLVED_DEX_SCALE,
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