#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoVtubers[] =
{
#endif

    [SPECIES_CHIBI_AMELIA] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 0,
        .expYield = 212,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_KEEN_EYE, ABILITY_FOCUS },
        .sourceGame = SOURCE_VTUBERS,
        .noFlip = TRUE,
        .speciesName = _("CAmelia"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LIEPARD,
        .categoryName = _("Detective"),
        .height = 11,
        .weight = 375,
        .description = COMPOUND_STRING(
            "Many Trainers are drawn to their\n"
            "beautiful form and fur. These Pokémon\n"
            "vanish and appear unexpectedly.\n"
            "They run silently in the night."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CAmelia,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_GenericBlinkingAnim,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CAmelia,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CAmelia,
        .shinyPalette = gMonShinyPalette_CAmelia,
        .iconSprite = gMonIcon_CAmelia,
        .iconPalIndex = 1,
        SHADOW(5, 6, SHADOW_SIZE_S)
        FOOTPRINT(CAmelia)
        .levelUpLearnset = sCAmeliaLevelUpLearnset,
        .teachableLearnset = sCAmeliaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_NORMAL_AMELIA}),
    },

    [SPECIES_NORMAL_AMELIA] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 125,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_REASON, TYPE_MIASMA),
        .catchRate = 0,
        .expYield = 212,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_KEEN_EYE, ABILITY_FOCUS },
        .sourceGame = SOURCE_VTUBERS,
        .noFlip = TRUE,
        .speciesName = _("Amelia"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PANSAGE,
        .categoryName = _("Detective"),
        .height = 6,
        .weight = 105,
        .description = COMPOUND_STRING(
            "This Pokémon dwells deep in the forest.\n"
            "It's good at finding berries and gathers\n"
            "them from all over. It's kind enough to\n"
            "share them with friends."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Amelia,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GenericBlinkingAnim,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Amelia,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Amelia,
        .shinyPalette = gMonShinyPalette_Amelia,
        .iconSprite = gMonIcon_Amelia,
        .iconPalIndex = 1,
        SHADOW(2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Amelia)
        .levelUpLearnset = sAmeliaLevelUpLearnset,
        .teachableLearnset = sAmeliaTeachableLearnset,
    },

    [SPECIES_CHIBI_BIJOU] =
    {
        .baseHP        = 45,
        .baseAttack    = 35,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_EARTH, TYPE_HEART),
        .catchRate = 150,
        .expYield = 250,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_CUTE_CHARM, ABILITY_SOLID_ROCK },
        .sourceGame = SOURCE_VTUBERS,
        .noFlip = TRUE,
        .speciesName = _("CBijou"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LEAVANNY,
        .categoryName = _("Jewel"),
        .height = 12,
        .weight = 250,
        .description = COMPOUND_STRING(
            "It keeps its eggs warm with heat from\n"
            "fermenting leaves. It also uses leaves to\n"
            "weave warm wrappings for Sewaddle by\n"
            "using the silk secreted from its mouth."),
        .pokemonScale = 282,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CBijou,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GenericBlinkingAnim,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_CBijou,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CBijou,
        .shinyPalette = gMonShinyPalette_CBijou,
        .iconSprite = gMonIcon_CBijou,
        .iconPalIndex = 1,
        SHADOW(0, 14, SHADOW_SIZE_S)
        FOOTPRINT(CBijou)
        .levelUpLearnset = sCBijouLevelUpLearnset,
        .teachableLearnset = sCBijouTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_NORMAL_BIJOU}),
    },

    [SPECIES_NORMAL_BIJOU] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 110,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 140,
        .types = MON_TYPES(TYPE_EARTH, TYPE_HEART),
        .catchRate = 255,
        .expYield = 52,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_CUTE_CHARM, ABILITY_SOLID_ROCK },
        .sourceGame = SOURCE_VTUBERS,
        .noFlip = TRUE,
        .speciesName = _("Bijou"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_VENIPEDE,
        .categoryName = _("Jewel"),
        .height = 4,
        .weight = 500,
        .description = COMPOUND_STRING(
            "Using the feelers on its head and tail,\n"
            "it picks up vibrations in the air to\n"
            "determine its prey's location and state.\n"
            "It is brutally aggressive."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bijou,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GenericBlinkingAnim,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Bijou,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Bijou,
        .shinyPalette = gMonShinyPalette_Bijou,
        .iconSprite = gMonIcon_Bijou,
        .iconPalIndex = 1,
        SHADOW(0, 14, SHADOW_SIZE_S)
        FOOTPRINT(Bijou)
        .levelUpLearnset = sBijouLevelUpLearnset,
        .teachableLearnset = sBijouTeachableLearnset,
    },

    [SPECIES_PLACEHOLD_BIJOU] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 110,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 140,
        .types = MON_TYPES(TYPE_EARTH, TYPE_HEART),
        .catchRate = 255,
        .expYield = 52,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_CUTE_CHARM, ABILITY_SOLID_ROCK },
        .sourceGame = SOURCE_VTUBERS,
        .noFlip = TRUE,
        .speciesName = _("PBijou"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_WHIRLIPEDE,
        .categoryName = _("Jewel"),
        .height = 12,
        .weight = 585,
        .description = COMPOUND_STRING(
            "Storing energy for evolution, it sits.\n"
            "But when attacked, it spins its body at\n"
            "high speed like a wheel and then\n"
            "crashes furiously into its opponent."),
        .pokemonScale = 282,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bijou,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GenericBlinkingAnim,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Bijou,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Bijou,
        .shinyPalette = gMonShinyPalette_Bijou,
        .iconSprite = gMonIcon_Bijou,
        .iconPalIndex = 1,
        SHADOW(0, 14, SHADOW_SIZE_S)
        FOOTPRINT(Bijou)
        .levelUpLearnset = sBijouLevelUpLearnset,
        .teachableLearnset = sBijouTeachableLearnset,
    },

    [SPECIES_CHIBI_KRONII] =
    {
        .baseHP        = 60,
        .baseAttack    = P_UPDATED_STATS >= GEN_6 ? 100 : 90,
        .baseDefense   = 89,
        .baseSpeed     = 112,
        .baseSpAttack  = 55,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 45,
        .expYield = 243,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_OWN_TEMPO, ABILITY_MAGIC_GUARD },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("CKronii"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SCOLIPEDE,
        .categoryName = _("Warden"),
        .height = 25,
        .weight = 2005,
        .description = COMPOUND_STRING(
            "With quick movements, it chases down\n"
            "its foes, attacking relentlessly with its\n"
            "horns until it prevails. Then it finishes\n"
            "them off with deadly poison."),
        .pokemonScale = 257,
        .pokemonOffset = 2,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Kronii,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GenericBlinkingAnim,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Kronii,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kronii,
        .shinyPalette = gMonShinyPalette_Kronii,
        .iconSprite = gMonIcon_Kronii,
        .iconPalIndex = 3,
        SHADOW(0, 14, SHADOW_SIZE_S)
        FOOTPRINT(Kronii)
        .levelUpLearnset = sCKroniiLevelUpLearnset,
        .teachableLearnset = sCKroniiTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_NORMAL_KRONII}),
    },

    [SPECIES_NORMAL_KRONII] =
    {
        .baseHP        = 100,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 75,
        .baseSpAttack  = 120,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 56,
        .evYield_SpAttack = 2,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_OWN_TEMPO, ABILITY_MAGIC_GUARD },
        .sourceGame = SOURCE_VTUBERS,
        .speciesName = _("Kronii"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_COTTONEE,
        .categoryName = _("Time Warden"),
        .height = 3,
        .weight = 6,
        .description = COMPOUND_STRING(
            "When it finds others of its kind, they all\n"
            "stick together. When enough of them\n"
            "have collected, the mass resembles a\n"
            "cumulonimbus cloud."),
        .pokemonScale = 530,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kronii,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GenericBlinkingAnim,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Kronii,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kronii,
        .shinyPalette = gMonShinyPalette_Kronii,
        .iconSprite = gMonIcon_Kronii,
        .iconPalIndex = 3,
        SHADOW(0, 14, SHADOW_SIZE_S)
        FOOTPRINT(Kronii)
        .levelUpLearnset = sKroniiLevelUpLearnset,
        .teachableLearnset = sKroniiTeachableLearnset,
    },

    [SPECIES_BASINEY] =
    {
        .baseHP        = 250,
        .baseAttack    = 5,
        .baseDefense   = 65,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 30,
        .expYield = 395,
        .evYield_HP = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_RAIN_DISH, ABILITY_NONE, ABILITY_HEALER },
        .sourceGame = SOURCE_OTHER,
        .speciesName = _("Basiney"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PURRLOIN,
        .categoryName = _("Basin"),
        .height = 11,
        .weight = 500,
        .description = COMPOUND_STRING(
            "Their deceptively cute act is the\n"
            "perfect ruse. They steal from people for\n"
            "fun, but their victims can't help but\n"
            "forgive them."),
        .pokemonScale = 491,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Basiney,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_GenericBlinkingAnim,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Basiney,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Basiney,
        .shinyPalette = gMonShinyPalette_Basiney,
        .iconSprite = gMonIcon_Basiney,
        .iconPalIndex = 3,
        SHADOW(2, 5, SHADOW_SIZE_L)
        FOOTPRINT(Basiney)
        .levelUpLearnset = sBasineyLevelUpLearnset,
        .teachableLearnset = sBasineyTeachableLearnset,
        .eggMoveLearnset = sBasineyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_CHROME_HEART, SPECIES_BLISSEA}),
    },

    [SPECIES_BLISSEA] =
    {
        .baseHP        = 255,
        .baseAttack    = 10,
        .baseDefense   = 80,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 608,
        .evYield_HP = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_RAIN_DISH, ABILITY_NONE, ABILITY_HEALER },
        .sourceGame = SOURCE_OTHER,
        .speciesName = _("Blissea"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PETILIL,
        .categoryName = _("Bulb"),
        .height = 5,
        .weight = 66,
        .description = COMPOUND_STRING(
            "By pruning the leaves on its head with\n"
            "regularity, this Pokémon can be grown\n"
            "into a fine plump shape. These bitter\n"
            "leaves refresh those who eat them."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blissea,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_GenericBlinkingAnim,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Blissea,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Blissea,
        .shinyPalette = gMonShinyPalette_Blissea,
        .iconSprite = gMonIcon_Blissea,
        .iconPalIndex = 3,
        SHADOW(0, 8, SHADOW_SIZE_L)
        FOOTPRINT(Blissea)
        .levelUpLearnset = sBlisseaLevelUpLearnset,
        .teachableLearnset = sBlisseaTeachableLearnset,
    },

#ifdef __INTELLISENSE__
};
#endif
