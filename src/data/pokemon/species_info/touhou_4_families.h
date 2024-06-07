#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoTouhou4[] =
{
#endif

    [SPECIES_CHIBI_ORANGE] =
    {
        .baseHP        = 200,
        .baseAttack    = 20,
        .baseDefense   = 40,
        .baseSpeed     = 40,
        .baseSpAttack  = 25,
        .baseSpDefense = 5,
        .types = MON_TYPES(TYPE_DREAM),
        .catchRate = 200,
        .expYield = 66,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FIELD),
        .abilities = { ABILITY_IMMUNITY, ABILITY_NONE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("COrange"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_STARAVIA,
        .categoryName = _("Starling"),
        .height = 6,
        .weight = 155,
        .description = COMPOUND_STRING(
            "Recognizing their own weakness, they\n"
            "maintain huge flocks. Fierce scuffles\n"
            "break out between various flocks.\n"
            "When alone, a Staravia cries noisily."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_COrange,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_COrange,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_COrange,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_COrange,
        .shinyPalette = gMonShinyPalette_COrange,
        .iconSprite = gMonIcon_COrange,
        .iconPalIndex = 2,
        FOOTPRINT(COrange)
        .levelUpLearnset = sCOrangeLevelUpLearnset,
        .teachableLearnset = sCOrangeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_NORMAL_ORANGE}),
    },

    [SPECIES_NORMAL_ORANGE] =
    {
        .baseHP        = 255,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 55,
        .baseSpDefense = 10,
        .types = MON_TYPES(TYPE_DREAM),
        .catchRate = 45,
        .expYield = 192,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FIELD),
        .abilities = { ABILITY_PURE_POWER, ABILITY_NONE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("Orange"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_STARAPTOR,
        .categoryName = _("Predator"),
        .height = 12,
        .weight = 249,
        .description = COMPOUND_STRING(
            "When Staravia evolve into Staraptor,\n"
            "they leave the flock to live alone. It has\n"
            "a savage nature. It will courageously\n"
            "challenge foes that are much larger."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Orange,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Orange,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Orange,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Orange,
        .shinyPalette = gMonShinyPalette_Orange,
        .iconSprite = gMonIcon_Orange,
        .iconPalIndex = 2,
        FOOTPRINT(Orange)
        .levelUpLearnset = sOrangeLevelUpLearnset,
        .teachableLearnset = sOrangeTeachableLearnset,
    },

    [SPECIES_PLACEHOLD_ORANGE] =
    {
        .baseHP        = 255,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 55,
        .baseSpDefense = 10,
        .types = MON_TYPES(TYPE_DREAM),
        .catchRate = 45,
        .expYield = 192,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FIELD),
        .abilities = { ABILITY_PURE_POWER, ABILITY_NONE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("POrange"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BIDOOF,
        .categoryName = _("Plump Mouse"),
        .height = 5,
        .weight = 200,
        .description = COMPOUND_STRING(
            "A comparison revealed that Bidoof's front\n"
            "teeth grow at the same rate as Rattata's.\n"
            "It constantly gnaws on logs and rocks to\n"
            "whittle down its front teeth."),
        .pokemonScale = 432,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Orange,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Orange,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Orange,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Orange,
        .shinyPalette = gMonShinyPalette_Orange,
        .iconSprite = gMonIcon_Orange,
        .iconPalIndex = 2,
        FOOTPRINT(Orange)
        .levelUpLearnset = sOrangeLevelUpLearnset,
        .teachableLearnset = sOrangeTeachableLearnset,
    },

    [SPECIES_CHIBI_KURUMI] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 190,
        .expYield = 70,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FLYING),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_GATE_KEEPER },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("CKurumi"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BIBAREL,
        .categoryName = _("Beaver"),
        .height = 10,
        .weight = 315,
        .description = COMPOUND_STRING(
            "It makes its nest by damming streams\n"
            "with bark and mud. A river dammed by\n"
            "Bibarel will never overflow its banks,\n"
            "which is appreciated by people nearby."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CKurumi,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_CKurumi,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CKurumi,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CKurumi,
        .shinyPalette = gMonShinyPalette_CKurumi,
        .iconSprite = gMonIcon_CKurumi,
        .iconPalIndex = 1,
        FOOTPRINT(CKurumi)
        .levelUpLearnset = sCKurumiLevelUpLearnset,
        .teachableLearnset = sCKurumiTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_NORMAL_KURUMI}),
    },

    [SPECIES_NORMAL_KURUMI] =
    {
        .baseHP        = 75,
        .baseAttack    = 60,
        .baseDefense   = 75,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 45,
        .expYield = 208,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FLYING),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_GATE_KEEPER },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("Kurumi"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_KRICKETOT,
        .categoryName = _("Cricket"),
        .height = 3,
        .weight = 22,
        .description = COMPOUND_STRING(
            "It shakes its head back to front,\n"
            "causing its antennae to hit each other\n"
            "and sound like a xylophone.\n"
            "These sounds are fall hallmarks."),
        .pokemonScale = 530,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kurumi,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Kurumi,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kurumi,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kurumi,
        .shinyPalette = gMonShinyPalette_Kurumi,
        .iconSprite = gMonIcon_Kurumi,
        .iconPalIndex = 1,
        FOOTPRINT(Kurumi)
        .levelUpLearnset = sKurumiLevelUpLearnset,
        .teachableLearnset = sKurumiTeachableLearnset,
    },

    [SPECIES_PLACEHOLD_KURUMI] =
    {
        .baseHP        = 75,
        .baseAttack    = 60,
        .baseDefense   = 75,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 45,
        .expYield = 208,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FLYING),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_GATE_KEEPER },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("PKurumi"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_KRICKETUNE,
        .categoryName = _("Cricket"),
        .height = 10,
        .weight = 255,
        .description = COMPOUND_STRING(
            "It signals its emotions with its melodies.\n"
            "There is a village that hosts a contest\n"
            "based on the amazingly variable cries\n"
            "of this Pokémon."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kurumi,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Kurumi,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kurumi,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kurumi,
        .shinyPalette = gMonShinyPalette_Kurumi,
        .iconSprite = gMonIcon_Kurumi,
        .iconPalIndex = 1,
        FOOTPRINT(Kurumi)
        .levelUpLearnset = sKurumiLevelUpLearnset,
        .teachableLearnset = sKurumiTeachableLearnset,
    },

    [SPECIES_CHIBI_ELLY] =
    {
        .baseHP        = 55,
        .baseAttack    = 120,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 95,
        .expYield = 74,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FIELD),
        .abilities = { ABILITY_GATE_KEEPER, ABILITY_NONE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("CElly"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SHINX,
        .categoryName = _("Flash"),
        .height = 5,
        .weight = 95,
        .description = COMPOUND_STRING(
            "It rapidly contracts and relaxes its\n"
            "muscles to generate electricity. Its\n"
            "body shines if endangered. It flees\n"
            "while the foe is momentarily blinded."),
        .pokemonScale = 432,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CElly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_CElly,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CElly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CElly,
        .shinyPalette = gMonShinyPalette_CElly,
        .iconSprite = gMonIcon_CElly,
        .iconPalIndex = 1,
        FOOTPRINT(CElly)
        .levelUpLearnset = sCEllyLevelUpLearnset,
        .teachableLearnset = sCEllyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_NORMAL_ELLY}),
    },

    [SPECIES_NORMAL_ELLY] =
    {
        .baseHP        = 80,
        .baseAttack    = 145,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 45,
        .expYield = 208,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FIELD),
        .abilities = { ABILITY_GATE_KEEPER, ABILITY_NONE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("Elly"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LUXIO,
        .categoryName = _("Spark"),
        .height = 9,
        .weight = 305,
        .description = COMPOUND_STRING(
            "Strong electricity courses through the\n"
            "tips of its sharp claws. A light scratch\n"
            "has enough amperage to cause fainting\n"
            "in foes."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Elly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Elly,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Elly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Elly,
        .shinyPalette = gMonShinyPalette_Elly,
        .iconSprite = gMonIcon_Elly,
        .iconPalIndex = 1,
        FOOTPRINT(Elly)
        .levelUpLearnset = sEllyLevelUpLearnset,
        .teachableLearnset = sEllyTeachableLearnset,
    },

    [SPECIES_PLACEHOLD_ELLY] =
    {
        .baseHP        = 80,
        .baseAttack    = 145,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 45,
        .expYield = 208,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FIELD),
        .abilities = { ABILITY_GATE_KEEPER, ABILITY_NONE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("PElly"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LUXRAY,
        .categoryName = _("Gleam Eyes"),
        .height = 14,
        .weight = 420,
        .description = COMPOUND_STRING(
            "It has eyes which can see through\n"
            "anything. Luxray's ability to see\n"
            "through objects comes in handy when\n"
            "it's scouting for danger."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Elly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Elly,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Elly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Elly,
        .shinyPalette = gMonShinyPalette_Elly,
        .iconSprite = gMonIcon_Elly,
        .iconPalIndex = 1,
        FOOTPRINT(Elly)
        .levelUpLearnset = sEllyLevelUpLearnset,
        .teachableLearnset = sEllyTeachableLearnset,
    },

    [SPECIES_CHIBI_KAZAMI] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NATURE, TYPE_DARK),
        .catchRate = 120,
        .expYield = 78,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_FRETFUL },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("CKazami"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BUDEW,
        .categoryName = _("Bud"),
        .height = 2,
        .weight = 12,
        .description = COMPOUND_STRING(
            "Over the winter, it closes its bud and\n"
            "endures the cold. Sensitive to changing\n"
            "temperature, the bud is said to bloom\n"
            "when it feels the sun's warm touch."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CKazami,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_CKazami,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CKazami,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CKazami,
        .shinyPalette = gMonShinyPalette_CKazami,
        .iconSprite = gMonIcon_CKazami,
        .iconPalIndex = 2,
        FOOTPRINT(CKazami)
        .levelUpLearnset = sCKazamiLevelUpLearnset,
        .teachableLearnset = sCKazamiTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_NORMAL_KAZAMI},
                                {EVO_HEART, ITEM_POWER_HEART, SPECIES_ATTACK_KAZAMI}),
    },

    [SPECIES_NORMAL_KAZAMI] =
    {
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_NATURE, TYPE_DARK),
        .catchRate = 45,
        .expYield = 216,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_FRETFUL },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("Kazami"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ROSERADE,
        .categoryName = _("Bouquet"),
        .height = 9,
        .weight = 145,
        .description = COMPOUND_STRING(
            "Its sweet aroma attracts prey.\n"
            "With the movements of a dancer,\n"
            "it strikes with whips that are densely\n"
            "lined with poison thorns."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kazami,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kazami,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kazami,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kazami,
        .shinyPalette = gMonShinyPalette_Kazami,
        .iconSprite = gMonIcon_Kazami,
        .iconPalIndex = 2,
        FOOTPRINT(Kazami)
        .levelUpLearnset = sKazamiLevelUpLearnset,
        .teachableLearnset = sKazamiTeachableLearnset,
    },

    [SPECIES_ATTACK_KAZAMI] =
    {
        .baseHP        = 60,
        .baseAttack    = 125,
        .baseDefense   = 65,
        .baseSpeed     = 115,
        .baseSpAttack  = 110,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NATURE, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 200,
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_PRESSURE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("AKazami"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CRANIDOS,
        .categoryName = _("Head Butt"),
        .height = 9,
        .weight = 315,
        .description = COMPOUND_STRING(
            "A lifelong jungle dweller from 100 million\n"
            "years ago, its skull is as hard as iron. \n"
            "It would snap obstructing trees with\n"
            "headbutts."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_AKazami,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_AKazami,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_AKazami,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_AKazami,
        .shinyPalette = gMonShinyPalette_AKazami,
        .iconSprite = gMonIcon_AKazami,
        .iconPalIndex = 2,
        FOOTPRINT(AKazami)
        .levelUpLearnset = sAKazamiLevelUpLearnset,
        .teachableLearnset = sAKazamiTeachableLearnset,
    },

    [SPECIES_CHIBI_MUGETSU] =
    {
        .baseHP        = 85,
        .baseAttack    = 45,
        .baseDefense   = 65,
        .baseSpeed     = 45,
        .baseSpAttack  = 60,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DARK, TYPE_HEART),
        .catchRate = 60,
        .expYield = 79,
        .evYield_Defense = 1,
        .itemRare = ITEM_MAID_UNIFORM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_MINUS, ABILITY_PRESSURE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("CMugetsu"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_RAMPARDOS,
        .categoryName = _("Head Butt"),
        .height = 16,
        .weight = 1025,
        .description = COMPOUND_STRING(
            "The result of repeated headbutts\n"
            "is a skull grown thick and hard.\n"
            "However, its brain has shrunk in size\n"
            "compared with Cranidos's."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_CMugetsu,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_CMugetsu,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CMugetsu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CMugetsu,
        .shinyPalette = gMonShinyPalette_CMugetsu,
        .iconSprite = gMonIcon_CMugetsu,
        .iconPalIndex = 1,
        FOOTPRINT(CMugetsu)
        .levelUpLearnset = sCMugetsuLevelUpLearnset,
        .teachableLearnset = sCMugetsuTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_NORMAL_MUGETSU}),
    },

    [SPECIES_NORMAL_MUGETSU] =
    {
        .baseHP        = 110,
        .baseAttack    = 70,
        .baseDefense   = 90,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_DARK, TYPE_HEART),
        .catchRate = 45,
        .expYield = 218,
        .evYield_Defense = 3,
        .itemRare = ITEM_MAID_UNIFORM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_MINUS, ABILITY_PRESSURE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("Mugetsu"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SHIELDON,
        .categoryName = _("Shield"),
        .height = 5,
        .weight = 570,
        .description = COMPOUND_STRING(
            "This Pokémon lived in primeval jungles.\n"
            "Few enemies would have been willing to\n"
            "square off against its heavily armored\n"
            "face, so it's thought."),
        .pokemonScale = 432,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mugetsu,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Mugetsu,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Mugetsu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Mugetsu,
        .shinyPalette = gMonShinyPalette_Mugetsu,
        .iconSprite = gMonIcon_Mugetsu,
        .iconPalIndex = 1,
        FOOTPRINT(Mugetsu)
        .levelUpLearnset = sMugetsuLevelUpLearnset,
        .teachableLearnset = sMugetsuTeachableLearnset,
    },

    [SPECIES_PLACEHOLD_MUGETSU] =
    {
        .baseHP        = 110,
        .baseAttack    = 70,
        .baseDefense   = 90,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_DARK, TYPE_HEART),
        .catchRate = 45,
        .expYield = 218,
        .evYield_Defense = 3,
        .itemRare = ITEM_MAID_UNIFORM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_MINUS, ABILITY_PRESSURE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("PMugetsu"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BASTIODON,
        .categoryName = _("Shield"),
        .height = 13,
        .weight = 1495,
        .description = COMPOUND_STRING(
            "Their rock-hard faces serve to protect\n"
            "them from any frontral attacks.\n"
            "When attacked, they form a wall.\n"
            "They shielded their young in that way."),
        .pokemonScale = 272,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mugetsu,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Mugetsu,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Mugetsu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Mugetsu,
        .shinyPalette = gMonShinyPalette_Mugetsu,
        .iconSprite = gMonIcon_Mugetsu,
        .iconPalIndex = 1,
        FOOTPRINT(Mugetsu)
        .levelUpLearnset = sMugetsuLevelUpLearnset,
        .teachableLearnset = sMugetsuTeachableLearnset,
    },

    [SPECIES_CHIBI_GENGETSU] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = 95,
        .baseSpeed     = 95,
        .baseSpAttack  = 80,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 60,
        .expYield = 79,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FLYING),
        .abilities = { ABILITY_PLUS, ABILITY_PRESSURE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("CGengetsu"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BURMY,
        .categoryName = _("Bagworm"),
        .height = 2,
        .weight = 34,
        .description = COMPOUND_STRING(
            "If its cloak is even slightly damaged, it\n"
            "will immediately repair it with whatever is\n"
            "near at hand. The Pokémon within the cloak\n"
            "is scrawny and vulnerable to the cold."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CGengetsu,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_CGengetsu,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CGengetsu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CGengetsu,
        .shinyPalette = gMonShinyPalette_CGengetsu,
        .iconSprite = gMonIcon_CGengetsu,
        .iconPalIndex = 1,
        FOOTPRINT(CGengetsu)
        .levelUpLearnset = sCGengetsuLevelUpLearnset,
        .teachableLearnset = sCGengetsuTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_NORMAL_GENGETSU}),
    },

    [SPECIES_NORMAL_GENGETSU] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 218,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FLYING),
        .abilities = { ABILITY_PLUS, ABILITY_PRESSURE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("Gengetsu"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_WORMADAM,
        .categoryName = _("Bagworm"),
        .height = 5,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Its appearance changes depending\n"
            "on where Burmy evolved. The materials\n"
            "on hand become a part of its body.\n"
            "The cloak is never shed."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gengetsu,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Gengetsu,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Gengetsu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Gengetsu,
        .shinyPalette = gMonShinyPalette_Gengetsu,
        .iconSprite = gMonIcon_Gengetsu,
        .iconPalIndex = 1,
        FOOTPRINT(Gengetsu)
        .levelUpLearnset = sGengetsuLevelUpLearnset,
        .teachableLearnset = sGengetsuTeachableLearnset,
    },

    [SPECIES_PLACEHOLD_GENGETSU] = 
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 218,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FLYING),
        .abilities = { ABILITY_PLUS, ABILITY_PRESSURE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("PGengetsu"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MOTHIM, 
        .categoryName = _("Moth"),
        .height = 9,
        .weight = 233,
        .description = gMothimPokedexText,
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gengetsu,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Gengetsu,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Gengetsu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Gengetsu,
        .shinyPalette = gMonShinyPalette_Gengetsu,
        .iconSprite = gMonIcon_Gengetsu,
        .iconPalIndex = 1,
        FOOTPRINT(Gengetsu)
        .levelUpLearnset = sGengetsuLevelUpLearnset,
        .teachableLearnset = sGengetsuTeachableLearnset,
    },

#ifdef __INTELLISENSE__
};
#endif
