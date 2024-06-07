#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoTouhou2[] =
{
#endif

    [SPECIES_CHIBI_KIRISAME] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 115,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WIND, TYPE_REASON),
        .catchRate = 60,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FLYING),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_FLASH_FIRE },
        .sourceGame = SOURCE_SOEW,
        .noFlip = TRUE,
        .speciesName = _("CKirisame"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CLAMPERL,
        .categoryName = _("Bivalve"),
        .height = 4,
        .weight = 525,
        .description = COMPOUND_STRING(
            "A Clamperl slams its shell closed on prey\n"
            "to prevent escape. The pearl it creates\n"
            "upon evolution is said to be infused with\n"
            "a mysterious energy."),
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CKirisame,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_CKirisame,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_CKirisame,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CKirisame,
        .shinyPalette = gMonShinyPalette_CKirisame,
        .iconSprite = gMonIcon_CKirisame,
        .iconPalIndex = 1,
        FOOTPRINT(CKirisame)
        .levelUpLearnset = sCKirisameLevelUpLearnset,
        .teachableLearnset = sCKirisameTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_NORMAL_KIRISAME}),
    },

    [SPECIES_NORMAL_KIRISAME] =
    {
        .baseHP        = 80,
        .baseAttack    = 75,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 140,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_WIND, TYPE_REASON),
        .catchRate = 45,
        .expYield = 216,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FLYING),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_FLASH_FIRE },
        .sourceGame = SOURCE_SOEW,
        .noFlip = TRUE,
        .speciesName = _("Kirisame"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_HUNTAIL,
        .categoryName = _("Deep Sea"),
        .height = 17,
        .weight = 270,
        .description = COMPOUND_STRING(
            "To withstand the crushing pressure of\n"
            "water deep under the sea, its spine is very\n"
            "thick and sturdy. Its tail, which is shaped\n"
            "like a small fish, has eyes that light up."),
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kirisame,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kirisame,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kirisame,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kirisame,
        .shinyPalette = gMonShinyPalette_Kirisame,
        .iconSprite = gMonIcon_Kirisame,
        .iconPalIndex = 1,
        FOOTPRINT(Kirisame)
        .levelUpLearnset = sKirisameLevelUpLearnset,
        .teachableLearnset = sKirisameTeachableLearnset,
    },

    [SPECIES_PLACEHOLD_KIRISAME] =
    {
        .baseHP        = 80,
        .baseAttack    = 75,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 140,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_WIND, TYPE_REASON),
        .catchRate = 45,
        .expYield = 216,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FLYING),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_FLASH_FIRE },
        .sourceGame = SOURCE_SOEW,
        .noFlip = TRUE,
        .speciesName = _("PKirisame"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GOREBYSS,
        .categoryName = _("South Sea"),
        .height = 18,
        .weight = 226,
        .description = COMPOUND_STRING(
            "A Gorebyss siphons the body fluids of prey\n"
            "through its thin, tubular mouth. Its light\n"
            "pink body color turns vivid when it\n"
            "finishes feeding."),
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kirisame,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kirisame,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kirisame,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kirisame,
        .shinyPalette = gMonShinyPalette_Kirisame,
        .iconSprite = gMonIcon_Kirisame,
        .iconPalIndex = 1,
        FOOTPRINT(Kirisame)
        .levelUpLearnset = sKirisameLevelUpLearnset,
        .teachableLearnset = sKirisameTeachableLearnset,
    },

    [SPECIES_GENJI] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 220,
        .baseSpeed     = 60,
        .baseSpAttack  = 10,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_EARTH, TYPE_FLYING),
        .catchRate = 120,
        .expYield = 132,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FLYING),
        .abilities = { ABILITY_STURDY, ABILITY_NONE },
        .sourceGame = SOURCE_SOEW,
        .noFlip = TRUE,
        .speciesName = _("Genji"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_RELICANTH,
        .categoryName = _("Longevity"),
        .height = 10,
        .weight = 234,
        .description = COMPOUND_STRING(
            "A Pokémon that was once believed to have\n"
            "been extinct. The species has not changed\n"
            "its form for 100 million years. It walks on\n"
            "the seafloor using its pectoral fins."),
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Genji,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Genji,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Genji,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Genji,
        .shinyPalette = gMonShinyPalette_Genji,
        .iconSprite = gMonIcon_Genji,
        .iconPalIndex = 0,
        FOOTPRINT(Genji)
        .levelUpLearnset = sGenjiLevelUpLearnset,
        .teachableLearnset = sGenjiTeachableLearnset,
    },

    [SPECIES_CHIBI_RIKA] =
    {
        .baseHP        = 60,
        .baseAttack    = 35,
        .baseDefense   = 80,
        .baseSpeed     = 45,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 190,
        .expYield = 76,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_STURDY },
        .sourceGame = SOURCE_SOEW,
        .noFlip = TRUE,
        .speciesName = _("CRika"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LUVDISC,
        .categoryName = _("Rendezvous"),
        .height = 6,
        .weight = 87,
        .description = COMPOUND_STRING(
            "Luvdisc make the branches of Corsola\n"
            "their nests. There is a custom from long\n"
            "ago of giving a Luvdisc as a gift to\n"
            "express one's feelings of love."),
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CRika,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_CRika,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CRika,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CRika,
        .shinyPalette = gMonShinyPalette_CRika,
        .iconSprite = gMonIcon_CRika,
        .iconPalIndex = 1,
        FOOTPRINT(CRika)
        .levelUpLearnset = sCRikaLevelUpLearnset,
        .teachableLearnset = sCRikaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_NORMAL_RIKA}),
    },

    [SPECIES_NORMAL_RIKA] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 75,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DARK),
        .catchRate = 45,
        .expYield = 212,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_PRESSURE },
        .sourceGame = SOURCE_SOEW,
        .noFlip = TRUE,
        .speciesName = _("Rika"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BAGON,
        .categoryName = _("Rock Head"),
        .height = 6,
        .weight = 421,
        .description = COMPOUND_STRING(
            "Although it is small, this Pokémon is very\n"
            "powerful because its body is a bundle of\n"
            "muscles. It launches head-butts with its\n"
            "ironlike skull."),
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rika,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Rika,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Rika,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Rika,
        .shinyPalette = gMonShinyPalette_Rika,
        .iconSprite = gMonIcon_Rika,
        .iconPalIndex = 0,
        FOOTPRINT(Rika)
        .levelUpLearnset = sRikaLevelUpLearnset,
        .teachableLearnset = sRikaTeachableLearnset,
    },

    [SPECIES_PLACEHOLD_RIKA] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 75,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DARK),
        .catchRate = 45,
        .expYield = 212,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_PRESSURE },
        .sourceGame = SOURCE_SOEW,
        .noFlip = TRUE,
        .speciesName = _("PRika"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SHELGON,
        .categoryName = _("Endurance"),
        .height = 11,
        .weight = 1105,
        .description = COMPOUND_STRING(
            "It hardly eats while it awaits evolution.\n"
            "It becomes hardier by enduring hunger.\n"
            "Its shell peels off the instant it begins\n"
            "to evolve."),
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rika,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Rika,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Rika,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Rika,
        .shinyPalette = gMonShinyPalette_Rika,
        .iconSprite = gMonIcon_Rika,
        .iconPalIndex = 0,
        FOOTPRINT(Rika)
        .levelUpLearnset = sRikaLevelUpLearnset,
        .teachableLearnset = sRikaTeachableLearnset,
    },

    [SPECIES_CHIBI_MEIRA] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 45,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 190,
        .expYield = 72,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE },
        .sourceGame = SOURCE_SOEW,
        .noFlip = TRUE,
        .speciesName = _("CMeira"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SALAMENCE,
        .categoryName = _("Dragon"),
        .height = 15,
        .weight = 1026,
        .description = COMPOUND_STRING(
            "After many long years, its cellular\n"
            "structure underwent a sudden mutation to\n"
            "grow wings. When angered, it loses all\n"
            "thought and rampages out of control."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CMeira,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_CMeira,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CMeira,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CMeira,
        .shinyPalette = gMonShinyPalette_CMeira,
        .iconSprite = gMonIcon_CMeira,
        .iconPalIndex = 1,
        FOOTPRINT(CMeira)
        .levelUpLearnset = sCMeiraLevelUpLearnset,
        .teachableLearnset = sCMeiraTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_NORMAL_MEIRA}),
    },

    [SPECIES_NORMAL_MEIRA] =
    {
        .baseHP        = 70,
        .baseAttack    = 125,
        .baseDefense   = 70,
        .baseSpeed     = 115,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 45,
        .expYield = 204,
        .evYield_Attack = 2,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE },
        .sourceGame = SOURCE_SOEW,
        .noFlip = TRUE,
        .speciesName = _("Meira"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BELDUM,
        .categoryName = _("Iron Ball"),
        .height = 6,
        .weight = 952,
        .description = COMPOUND_STRING(
            "When Beldum gather in a swarm, they move\n"
            "in perfect unison as if they were but one\n"
            "Pokémon. They communicate with each other\n"
            "using brain waves."),
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Meira,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Meira,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Meira,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Meira,
        .shinyPalette = gMonShinyPalette_Meira,
        .iconSprite = gMonIcon_Meira,
        .iconPalIndex = 1,
        FOOTPRINT(Meira)
        .levelUpLearnset = sMeiraLevelUpLearnset,
        .teachableLearnset = sMeiraTeachableLearnset,
    },

    [SPECIES_PLACEHOLD_MEIRA] =
    {
        .baseHP        = 70,
        .baseAttack    = 125,
        .baseDefense   = 70,
        .baseSpeed     = 115,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 45,
        .expYield = 204,
        .evYield_Attack = 2,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE },
        .sourceGame = SOURCE_SOEW,
        .noFlip = TRUE,
        .speciesName = _("PMeira"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_METANG,
        .categoryName = _("Iron Claw"),
        .height = 12,
        .weight = 2025,
        .description = COMPOUND_STRING(
            "The claws tipping its arms pack the\n"
            "destructive power to tear through thick\n"
            "iron sheets as if they were silk. It flies\n"
            "at over 60 miles per hour."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Meira,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Meira,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Meira,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Meira,
        .shinyPalette = gMonShinyPalette_Meira,
        .iconSprite = gMonIcon_Meira,
        .iconPalIndex = 1,
        FOOTPRINT(Meira)
        .levelUpLearnset = sMeiraLevelUpLearnset,
        .teachableLearnset = sMeiraTeachableLearnset,
    },

#ifdef __INTELLISENSE__
};
#endif
