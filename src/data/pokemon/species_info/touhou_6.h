#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoTouhou6[] =
{
#endif

#define REIMU_MISC_INFO                                          \
        PUPPET_MISC_INFO(GROWTH_SLOW, SOURCE_EOSD),              \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FLYING }, \
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_REIMU] =
    {
        REIMU_MISC_INFO,
        .baseHP        = 85,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 55,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        .types = { TYPE_FAITH, TYPE_FAITH },
        .catchRate = 60,
        .expYield = 80,
        .evYield_HP = 2,
        .itemRare = ITEM_PRIESTESS,
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_NONE },
        .speciesName = _("CReimu"),
        .natDexNum = NATIONAL_DEX_CHIBI_REIMU,
        .categoryName = _("Seed"),
        .height = 4,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "Bulbasaur can be seen napping in bright\n"
            "sunlight. There is a seed on its back.\n"
            "By soaking up the sun's rays, the seed\n"
            "grows progressively larger."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CReimu, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_CReimu,
        BACK_PIC(CReimu, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CReimu),
        ICON(CReimu, 1),
        FOOTPRINT(CReimu)
        LEARNSETS(CReimu),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_NORMAL_REIMU},
                                {EVO_HEART, ITEM_POWER_HEART, SPECIES_ATTACK_REIMU},
                                {EVO_HEART, ITEM_GUARD_HEART, SPECIES_DEFENSE_REIMU}),
    },

    [SPECIES_NORMAL_REIMU] =
    {
        REIMU_MISC_INFO,
        .baseHP        = 110,
        .baseAttack    = 95,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .types = { TYPE_FAITH, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 220,
        .evYield_HP = 3,
        .itemRare = ITEM_PRIESTESS,
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_NONE },
        .speciesName = _("Reimu"),
        .natDexNum = NATIONAL_DEX_NORMAL_REIMU,
        .categoryName = _("Seed"),
        .height = 6,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "To support its bulb, Ivysaur's legs\n"
            "grow sturdy. If it spends more time lying in\n"
            "the sunlight, the bud will soon bloom into\n"
            "a large flower."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Reimu, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Reimu,
        BACK_PIC(Reimu, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Reimu),
        ICON(Reimu, 1),
        FOOTPRINT(Reimu)
        LEARNSETS(Reimu),
    },

    [SPECIES_ATTACK_REIMU] =
    {
        REIMU_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 85,
        .baseSpDefense = 85,
        .types = { TYPE_DREAM, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 220,
        .evYield_Attack = 3,
        .itemRare = ITEM_PRIESTESS,
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_NONE },
        .speciesName = _("AReimu"),
        .natDexNum = NATIONAL_DEX_ATTACK_REIMU,
        .categoryName = _("Seed"),
        .height = 6,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "Venusaur's flower is said to take on vivid\n"
            "colors if it gets plenty of nutrition and\n"
            "sunlight. The flower's aroma soothes the\n"
            "emotions of people."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(AReimu, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_AReimu,
        BACK_PIC(AReimu, 64, 64),
        .backPicYOffset = 0,
        PALETTES(AReimu),
        ICON(AReimu, 1),
        FOOTPRINT(AReimu)
        LEARNSETS(AReimu),
    },

    [SPECIES_DEFENSE_REIMU] =
    {
        REIMU_MISC_INFO,
        .baseHP        = 125,
        .baseAttack    = 75,
        .baseDefense   = 100,
        .baseSpeed     = 70,
        .baseSpAttack  = 80,
        .baseSpDefense = 100,
        .types = { TYPE_FAITH, TYPE_DREAM },
        .catchRate = 45,
        .expYield = 220,
        .evYield_HP = 3,
        .itemRare = ITEM_PRIESTESS,
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_NONE },
        .speciesName = _("DReimu"),
        .natDexNum = NATIONAL_DEX_DEFENSE_REIMU,
        .categoryName = _("Lizard"),
        .height = 6,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "The flame that burns at the tip of its\n"
            "tail is an indication of its emotions.\n"
            "The flame wavers when Charmander is\n"
            "happy, and blazes when it is enraged."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(DReimu, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DReimu,
        BACK_PIC(DReimu, 64, 64),
        .backPicYOffset = 0,
        PALETTES(DReimu),
        ICON(DReimu, 1),
        FOOTPRINT(DReimu)
        LEARNSETS(DReimu),
    },

#define MARISA_MISC_INFO                                         \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_SLOW, SOURCE_EOSD),       \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FLYING }, \
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_MARISA] =
    {
        MARISA_MISC_INFO,
        .baseHP        = 45,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .types = { TYPE_WIND, TYPE_WIND },
        .catchRate = 60,
        .expYield = 76,
        .evYield_Speed = 1,
        .abilities = { ABILITY_PICKUP, ABILITY_HUSTLE },
        .speciesName = _("CMarisa"),
        .natDexNum = NATIONAL_DEX_CHIBI_MARISA,
        .categoryName = _("Flame"),
        .height = 4,
        .weight = 500,
        .description = COMPOUND_STRING(
            "Without pity, its sharp claws destroy foes.\n"
            "If it encounters a strong enemy, it\n"
            "becomes agitated, and the flame on its\n"
            "tail flares with a bluish white color."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CMarisa, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_CMarisa,
        BACK_PIC(CMarisa, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CMarisa),
        ICON(CMarisa, 1),
        FOOTPRINT(CMarisa)
        LEARNSETS(CMarisa),
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_NORMAL_MARISA},
                                //{EVO_HEART, ITEM_JUST_HEART, SPECIES_ADVENT_MARISA},
                                {EVO_HEART, ITEM_POWER_HEART, SPECIES_ATTACK_MARISA},
                                {EVO_HEART, ITEM_SWIFT_HEART, SPECIES_SPEED_MARISA}),
    },

    [SPECIES_NORMAL_MARISA] =
    {
        MARISA_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 115,
        .baseSpDefense = 100,
        .types = { TYPE_WIND, TYPE_REASON },
        .catchRate = 45,
        .expYield = 212,
        .evYield_Speed = 3,
        .abilities = { ABILITY_COLLECTOR, ABILITY_HUSTLE },
        .speciesName = _("Marisa"),
        .natDexNum = NATIONAL_DEX_NORMAL_MARISA,
        .categoryName = _("Flame"),
        .height = 6,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "A Charizard flies about in search of\n"
            "strong opponents. It breathes intense\n"
            "flames that can melt any material. However,\n"
            "it will never torch a weaker foe."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Marisa, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Marisa,
        BACK_PIC(Marisa, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Marisa),
        ICON(Marisa, 1),
        FOOTPRINT(Marisa)
        LEARNSETS(Marisa),
    },

    [SPECIES_ATTACK_MARISA] =
    {
        MARISA_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 130,
        .baseSpDefense = 70,
        .types = { TYPE_WIND, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 200,
        .evYield_SpAttack = 3,
        .abilities = { ABILITY_COLLECTOR, ABILITY_HUSTLE },
        .speciesName = _("AMarisa"),
        .natDexNum = NATIONAL_DEX_ATTACK_MARISA,
        .categoryName = _("Tiny Turtle"),
        .height = 6,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "Its shell is not just for protection.\n"
            "Its rounded shape and the grooves on its\n"
            "surface minimize resistance in water,\n"
            "enabling Squirtle to swim at high speeds."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(AMarisa, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_AMarisa,
        BACK_PIC(AMarisa, 64, 64),
        .backPicYOffset = 0,
        PALETTES(AMarisa),
        ICON(AMarisa, 1),
        FOOTPRINT(AMarisa)
        LEARNSETS(AMarisa),
    },

    [SPECIES_SPEED_MARISA] =
    {
        MARISA_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 130,
        .baseSpAttack  = 105,
        .baseSpDefense = 70,
        .types = { TYPE_WIND, TYPE_HEART },
        .catchRate = 45,
        .expYield = 200,
        .evYield_Speed = 3,
        .abilities = { ABILITY_COLLECTOR, ABILITY_HUSTLE },
        .speciesName = _("SMarisa"),
        .natDexNum = NATIONAL_DEX_SPEED_MARISA,
        .categoryName = _("Turtle"),
        .height = 6,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "Its large tail is covered with rich, thick\n"
            "fur that deepens in color with age.\n"
            "The scratches on its shell are evidence\n"
            "of this Pokémon's toughness in battle."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(SMarisa, 64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SMarisa,
        .enemyMonElevation = 7,
        BACK_PIC(SMarisa, 64, 64),
        .backPicYOffset = 0,
        PALETTES(SMarisa),
        ICON(SMarisa, 1),
        FOOTPRINT(SMarisa)
        LEARNSETS(SMarisa),
    },

#define DAIYOUSEI_MISC_INFO                                     \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_FAST, SOURCE_EOSD),      \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FAIRY }, \
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_DAIYOUSEI] =
    {
        DAIYOUSEI_MISC_INFO,
        .baseHP        = 55,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 90,
        .baseSpAttack  = 55,
        .baseSpDefense = 50,
        .types = { TYPE_NATURE, TYPE_NATURE },
        .catchRate = 225,
        .expYield = 66,
        .evYield_Speed = 1,
        //.itemRare = ITEM_ASSIST_BALL,
        .abilities = { ABILITY_RUN_AWAY, ABILITY_RUN_AWAY },
        .speciesName = _("CDaiyousei"),
        .natDexNum = NATIONAL_DEX_CHIBI_DAIYOUSEI,
        .categoryName = _("Shellfish"),
        .height = 3,
        .weight = 100,
        .description = COMPOUND_STRING(
            "The waterspouts that protrude from its\n"
            "shell are highly accurate. Their bullets of\n"
            "water can precisely nail tin cans from\n"
            "a distance of over 160 feet."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CDaiyousei, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CDaiyousei,
        .enemyMonElevation = 4,
        BACK_PIC(CDaiyousei, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CDaiyousei),
        ICON(CDaiyousei, 0),
        FOOTPRINT(CDaiyousei)
        LEARNSETS(CDaiyousei),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_NORMAL_DAIYOUSEI},
                                {EVO_HEART, ITEM_POWER_HEART, SPECIES_ATTACK_DAIYOUSEI},
                                {EVO_HEART, ITEM_GUARD_HEART, SPECIES_DEFENSE_DAIYOUSEI}),
    },

    [SPECIES_NORMAL_DAIYOUSEI] =
    {
        DAIYOUSEI_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 120,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_NATURE, TYPE_NATURE },
        .catchRate = 45,
        .expYield = 192,
        .evYield_Speed = 2,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NATURAL_CURE },
        .speciesName = _("Daiyousei"),
        .natDexNum = NATIONAL_DEX_NORMAL_DAIYOUSEI,
        .categoryName = _("Worm"),
        .height = 5,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Its voracious appetite compels it to\n"
            "devour leaves bigger than itself without\n"
            "hesitation. It releases a terribly strong\n"
            "odor from its antennae."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Daiyousei, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Daiyousei,
        BACK_PIC(Daiyousei, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Daiyousei),
        ICON(Daiyousei, 0),
        FOOTPRINT(Daiyousei)
        LEARNSETS(Daiyousei),
    },

    [SPECIES_ATTACK_DAIYOUSEI] =
    {
        DAIYOUSEI_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 120,
        .baseSpDefense = 80,
        .types = { TYPE_NATURE, TYPE_NATURE },
        .catchRate = 45,
        .expYield = 160,
        .evYield_SpAttack = 2,
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NATURAL_CURE },
        .speciesName = _("ADaiyousei"),
        .natDexNum = NATIONAL_DEX_ATTACK_DAIYOUSEI,
        .categoryName = _("Cocoon"),
        .height = 5,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Its shell is as hard as an iron slab.\n"
            "A Metapod does not move very much\n"
            "because it is preparing its soft innards\n"
            "for evolution inside the shell."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(ADaiyousei, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ADaiyousei,
        BACK_PIC(ADaiyousei, 64, 64),
        .backPicYOffset = 0,
        PALETTES(ADaiyousei),
        ICON(ADaiyousei, 0),
        FOOTPRINT(ADaiyousei)
        LEARNSETS(ADaiyousei),
    },

    [SPECIES_DEFENSE_DAIYOUSEI] =
    {
        DAIYOUSEI_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 40,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 160,
        .types = { TYPE_NATURE, TYPE_WIND },
        .catchRate = 45,
        .expYield = 160,
        .evYield_SpDefense = 2,
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NATURAL_CURE },
        .speciesName = _("DDaiyousei"),
        .natDexNum = NATIONAL_DEX_DEFENSE_DAIYOUSEI,
        .categoryName = _("Butterfly"),
        .height = 5,
        .weight = 250,
        .description = COMPOUND_STRING(
            "It has a superior ability to search for\n"
            "delicious honey from flowers. It can seek,\n"
            "extract, and carry honey from flowers\n"
            "blooming over six miles away."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(DDaiyousei, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_DDaiyousei,
        BACK_PIC(DDaiyousei, 64, 64),
        .backPicYOffset = 0,
        PALETTES(DDaiyousei),
        ICON(DDaiyousei, 0),
        FOOTPRINT(DDaiyousei)
        LEARNSETS(DDaiyousei),
    },

#define CIRNO_MISC_INFO                                         \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_FAST, SOURCE_EOSD),      \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FAIRY }, \
        .cryId = CRY_CIRNO

    [SPECIES_CHIBI_CIRNO] =
    {
        CIRNO_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 15,
        .types = { TYPE_ICE, TYPE_ICE },
        .catchRate = 190,
        .expYield = 68,
        .evYield_SpAttack = 1,
        //.itemRare = ITEM_ICE_BALL,
        .abilities = { ABILITY_GUTS, ABILITY_VITAL_SPIRIT },
        .speciesName = _("CCirno"),
        .natDexNum = NATIONAL_DEX_CHIBI_CIRNO,
        .categoryName = _("Hairy Bug"),
        .height = 3,
        .weight = 250,
        .description = COMPOUND_STRING(
            "A Weedle has an extremely acute sense\n"
            "of smell. It distinguishes its favorite\n"
            "kinds of leaves from those it dislikes by\n"
            "sniffing with its big red nose."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CCirno, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CCirno,
        BACK_PIC(CCirno, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CCirno),
        ICON(CCirno, 1),
        FOOTPRINT(CCirno)
        LEARNSETS(CCirno),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_NORMAL_CIRNO},
                                //{EVO_HEART, ITEM_JUST_HEART, SPECIES_ADVENT_CIRNO},
                                {EVO_HEART, ITEM_SWIFT_HEART, SPECIES_SPEED_CIRNO},
                                {EVO_HEART, ITEM_TECH_HEART, SPECIES_TECH_CIRNO}),
    },

    [SPECIES_NORMAL_CIRNO] =
    {
        CIRNO_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 105,
        .baseSpAttack  = 125,
        .baseSpDefense = 30,
        .types = { TYPE_ICE, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 200,
        .evYield_SpAttack = 3,
        .itemCommon = ITEM_ASPEAR_BERRY,
        .itemRare = ITEM_PETAYA_BERRY,
        .abilities = { ABILITY_GUTS, ABILITY_SPEED_BOOST },
        .speciesName = _("Cirno"),
        .natDexNum = NATIONAL_DEX_NORMAL_CIRNO,
        .categoryName = _("Cocoon"),
        .height = 5,
        .weight = 500,
        .description = COMPOUND_STRING(
            "It remains virtually immobile while it\n"
            "clings to a tree. However, on the inside,\n"
            "it busily prepares for evolution. This is\n"
            "evident from how hot its shell becomes."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Cirno, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cirno,
        .enemyMonElevation = 4,
        BACK_PIC(Cirno, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Cirno),
        ICON(Cirno, 1),
        FOOTPRINT(Cirno)
        LEARNSETS(Cirno),
    },

    [SPECIES_SPEED_CIRNO] =
    {
        CIRNO_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 120,
        .baseSpAttack  = 95,
        .baseSpDefense = 40,
        .types = { TYPE_ICE, TYPE_WATER },
        .catchRate = 45,
        .expYield = 200,
        .evYield_Speed = 3,
        .abilities = { ABILITY_UNWAVERING, ABILITY_VITAL_SPIRIT },
        .speciesName = _("SCirno"),
        .natDexNum = NATIONAL_DEX_SPEED_CIRNO,
        .categoryName = _("Poison Bee"),
        .height = 5,
        .weight = 500,
        .description = COMPOUND_STRING(
            "A Beedrill is extremely territorial.\n"
            "For safety reasons, no one should ever\n"
            "approach its nest. If angered, they will\n"
            "attack in a swarm."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(SCirno, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SCirno,
        .enemyMonElevation = 7,
        BACK_PIC(SCirno, 64, 64),
        .backPicYOffset = 0,
        PALETTES(SCirno),
        ICON(SCirno, 1),
        FOOTPRINT(SCirno)
        LEARNSETS(SCirno),
    },

    [SPECIES_TECH_CIRNO] =
    {
        CIRNO_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 95,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
        .types = { TYPE_ICE, TYPE_WATER },
        .catchRate = 45,
        .expYield = 200,
        .evYield_Speed = 1,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_THICK_FUR,
        .abilities = { ABILITY_UNWAVERING, ABILITY_VITAL_SPIRIT },
        .speciesName = _("TCirno"),
        .natDexNum = NATIONAL_DEX_TECH_CIRNO,
        .categoryName = _("Tiny Bird"),
        .height = 5,
        .weight = 500,
        .description = COMPOUND_STRING(
            "It has an extremely sharp sense of\n"
            "direction. It can unerringly return home to\n"
            "its nest, however far it may be removed\n"
            "from its familiar surroundings."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(TCirno, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_TCirno,
        BACK_PIC(TCirno, 64, 64),
        .backPicYOffset = 0,
        PALETTES(TCirno),
        ICON(TCirno, 1),
        FOOTPRINT(TCirno)
        LEARNSETS(TCirno),
    },

#define RUMIA_MISC_INFO                                           \
        PUPPET_MISC_INFO(GROWTH_SLOW, SOURCE_EOSD),               \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MONSTER }, \
        .cryId = CRY_RUMIA

    [SPECIES_CHIBI_RUMIA] =
    {
        RUMIA_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 35,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 255,
        .expYield = 72,
        .evYield_HP = 1,
        .itemRare = ITEM_CHESTO_BERRY,
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .speciesName = _("CRumia"),
        .natDexNum = NATIONAL_DEX_CHIBI_RUMIA,
        .categoryName = _("Bird"),
        .height = 3,
        .weight = 100,
        .description = COMPOUND_STRING(
            "This Pokémon flies around, patrolling its\n"
            "large territory. If its living space is\n"
            "violated, it shows no mercy in thoroughly\n"
            "punishing the foe with its sharp claws."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CRumia, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CRumia,
        .enemyMonElevation = 4,
        BACK_PIC(CRumia, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CRumia),
        ICON(CRumia, 1),
        FOOTPRINT(CRumia)
        LEARNSETS(CRumia),
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_NORMAL_RUMIA},
                                {EVO_HEART, ITEM_POWER_HEART, SPECIES_ATTACK_RUMIA},
                                {EVO_HEART, ITEM_SWIFT_HEART, SPECIES_SPEED_RUMIA}),
    },

    [SPECIES_NORMAL_RUMIA] =
    {
        RUMIA_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 90,
        .baseDefense   = 110,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = { TYPE_DARK, TYPE_MIASMA },
        .catchRate = 45,
        .expYield = 204,
        .evYield_Defense = 3,
        .itemCommon = ITEM_CHESTO_BERRY,
        .itemRare = ITEM_GANLON_BERRY,
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .speciesName = _("Rumia"),
        .natDexNum = NATIONAL_DEX_NORMAL_RUMIA,
        .categoryName = _("Bird"),
        .height = 5,
        .weight = 500,
        .description = COMPOUND_STRING(
            "This Pokémon has gorgeous, glossy\n"
            "feathers. Many Trainers are so captivated\n"
            "by the beautiful feathers on its head that\n"
            "they choose Pidgeot as their Pokémon."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Rumia, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Rumia,
        .enemyMonElevation = 4,
        BACK_PIC(Rumia, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Rumia),
        ICON(Rumia, 1),
        FOOTPRINT(Rumia)
        LEARNSETS(Rumia),
    },

    [SPECIES_ATTACK_RUMIA] =
    {
        RUMIA_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 130,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .types = { TYPE_DARK, TYPE_MIASMA },
        .catchRate = 45,
        .expYield = 204,
        .evYield_Attack = 3,
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .speciesName = _("ARumia"),
        .natDexNum = NATIONAL_DEX_ATTACK_RUMIA,
        .categoryName = _("Mouse"),
        .height = 5,
        .weight = 500,
        .description = COMPOUND_STRING(
            "A Rattata is cautious in the extreme.\n"
            "Even while it is asleep, it constantly\n"
            "moves its ears and listens for danger.\n"
            "It will make its nest anywhere."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(ARumia, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_ARumia,
        .enemyMonElevation = 6,
        BACK_PIC(ARumia, 64, 64),
        .backPicYOffset = 0,
        PALETTES(ARumia),
        ICON(ARumia, 1),
        FOOTPRINT(ARumia)
        LEARNSETS(ARumia),
    },

    [SPECIES_SPEED_RUMIA] =
    {
        RUMIA_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
        .types = { TYPE_DARK, TYPE_MIASMA },
        .catchRate = 45,
        .expYield = 204,
        .evYield_Speed = 2,
        .evYield_SpAttack = 1,
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .speciesName = _("SRumia"),
        .natDexNum = NATIONAL_DEX_SPEED_RUMIA,
        .categoryName = _("Mouse"),
        .height = 5,
        .weight = 500,
        .description = COMPOUND_STRING(
            "A Raticate's sturdy fangs grow steadily.\n"
            "To keep them ground down, it gnaws on\n"
            "rocks and logs. It may even chew on the\n"
            "walls of houses."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(SRumia, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SRumia,
        .enemyMonElevation = 5,
        BACK_PIC(SRumia, 64, 64),
        .backPicYOffset = 0,
        PALETTES(SRumia),
        ICON(SRumia, 1),
        FOOTPRINT(SRumia)
        LEARNSETS(SRumia),
    },

#define MEILING_MISC_INFO                                         \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_FAST, SOURCE_EOSD),        \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FIELD },   \
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_MEILING] =
    {
        MEILING_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_DREAM, TYPE_DREAM },
        .catchRate = 190,
        .expYield = 72,
        .evYield_Attack = 1,
        .itemRare = ITEM_CHINA_DRESS,
        .abilities = { ABILITY_GATE_KEEPER, ABILITY_INNER_POWER },
        .speciesName = _("CMeiling"),
        .natDexNum = NATIONAL_DEX_CHIBI_MEILING,
        .categoryName = _("Tiny Bird"),
        .height = 5,
        .weight = 100,
        .description = COMPOUND_STRING(
            "Its loud cry can be heard over half a mile\n"
            "away. If its high, keening cry is heard\n"
            "echoing all around, it is a sign that they\n"
            "are warning each other of danger."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CMeiling, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CMeiling,
        BACK_PIC(CMeiling, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CMeiling),
        ICON(CMeiling, 0),
        FOOTPRINT(CMeiling)
        LEARNSETS(CMeiling),
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_NORMAL_MEILING},
                                //{EVO_HEART, ITEM_JUST_HEART, SPECIES_ADVENT_MEILING},
                                {EVO_HEART, ITEM_GUARD_HEART, SPECIES_DEFENSE_MEILING},
                                {EVO_HEART, ITEM_SWIFT_HEART, SPECIES_SPEED_MEILING}),
    },

    [SPECIES_NORMAL_MEILING] =
    {
        MEILING_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 115,
        .baseDefense   = 95,
        .baseSpeed     = 90,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_DREAM, TYPE_DREAM },
        .catchRate = 45,
        .expYield = 204,
        .evYield_Attack = 3,
        .itemCommon = ITEM_SITRUS_BERRY,
        .itemRare = ITEM_CHINA_DRESS,
        .abilities = { ABILITY_GATE_KEEPER, ABILITY_INNER_POWER },
        .speciesName = _("Meiling"),
        .natDexNum = NATIONAL_DEX_NORMAL_MEILING,
        .categoryName = _("Beak"),
        .height = 7,
        .weight = 500,
        .description = COMPOUND_STRING(
            "Its long neck and elongated beak are\n"
            "ideal for catching prey in soil or water.\n"
            "It deftly moves this extended and skinny\n"
            "beak to pluck prey."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Meiling, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Meiling,
        BACK_PIC(Meiling, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Meiling),
        ICON(Meiling, 0),
        FOOTPRINT(Meiling)
        LEARNSETS(Meiling),
    },

    [SPECIES_DEFENSE_MEILING] =
    {
        MEILING_MISC_INFO,
        .baseHP        = 110,
        .baseAttack    = 75,
        .baseDefense   = 120,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .types = { TYPE_DREAM, TYPE_DREAM },
        .catchRate = 45,
        .expYield = 185,
        .evYield_Defense = 3,
        .itemRare = ITEM_CHINA_DRESS,
        .abilities = { ABILITY_GATE_KEEPER, ABILITY_INNER_POWER },
        .speciesName = _("DMeiling"),
        .natDexNum = NATIONAL_DEX_DEFENSE_MEILING,
        .categoryName = _("Snake"),
        .height = 7,
        .weight = 500,
        .description = COMPOUND_STRING(
            "An Ekans curls itself up in a spiral while\n"
            "it rests. This position allows it to quickly\n"
            "respond to an enemy from any direction\n"
            "with a threat from its upraised head."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(DMeiling, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DMeiling,
        BACK_PIC(DMeiling, 64, 64),
        .backPicYOffset = 0,
        PALETTES(DMeiling),
        ICON(DMeiling, 0),
        FOOTPRINT(DMeiling)
        LEARNSETS(DMeiling),
    },

    [SPECIES_SPEED_MEILING] =
    {
        MEILING_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 120,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_DREAM, TYPE_DREAM },
        .catchRate = 45,
        .expYield = 185,
        .evYield_Attack = 1,
        .evYield_Speed = 2,
        .itemRare = ITEM_CHINA_DRESS,
        .abilities = { ABILITY_GATE_KEEPER, ABILITY_INNER_POWER },
        .speciesName = _("SMeiling"),
        .natDexNum = NATIONAL_DEX_SPEED_MEILING,
        .categoryName = _("Cobra"),
        .height = 7,
        .weight = 500,
        .description = COMPOUND_STRING(
            "This Pokémon has a terrifically strong\n"
            "constricting power. It can even flatten\n"
            "steel oil drums. Once it wraps its body\n"
            "around its foe, escaping is impossible."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(SMeiling, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SMeiling,
        BACK_PIC(SMeiling, 64, 64),
        .backPicYOffset = 0,
        PALETTES(SMeiling),
        ICON(SMeiling, 0),
        FOOTPRINT(SMeiling)
        LEARNSETS(SMeiling),
    },

#define KOAKUMA_MISC_INFO                                         \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_FAST, SOURCE_EOSD),        \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FLYING },  \
        .cryId = CRY_KOAKUMA

    [SPECIES_CHIBI_KOAKUMA] =
    {
        KOAKUMA_MISC_INFO,
        .baseHP        = 35,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .types = { TYPE_REASON, TYPE_REASON },
        .catchRate = 225,
        .expYield = 66,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_RAWST_BERRY,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_RUN_AWAY },
        .speciesName = _("CKoakuma"),
        .natDexNum = NATIONAL_DEX_CHIBI_KOAKUMA,
        .categoryName = _("Mouse"),
        .height = 3,
        .weight = 100,
        .description = COMPOUND_STRING(
            "This Pokémon has a terrifically strong\n"
            "constricting power. It can even flatten\n"
            "steel oil drums. Once it wraps its body\n"
            "around its foe, escaping is impossible."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CKoakuma, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CKoakuma,
        BACK_PIC(CKoakuma, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CKoakuma),
        ICON(CKoakuma, 1),
        FOOTPRINT(CKoakuma)
        LEARNSETS(CKoakuma),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_NORMAL_KOAKUMA},
                                {EVO_HEART, ITEM_HELPER_HEART, SPECIES_HELPER_KOAKUMA}),
    },

    [SPECIES_NORMAL_KOAKUMA] =
    {
        KOAKUMA_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_REASON, TYPE_REASON },
        .catchRate = 45,
        .expYield = 192,
        .evYield_SpAttack = 2,
        .itemCommon = ITEM_CHERI_BERRY,
        .itemRare = ITEM_APICOT_BERRY,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_LEVITATE },
        .speciesName = _("Koakuma"),
        .natDexNum = NATIONAL_DEX_NORMAL_KOAKUMA,
        .categoryName = _("Mouse"),
        .height = 6,
        .weight = 250,
        .description = COMPOUND_STRING(
            "If it stores too much electricity, its\n"
            "behavior turns aggressive. To avoid this,\n"
            "it occasionally discharges excess energy\n"
            "and calms itself down."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Koakuma, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Koakuma,
        .enemyMonElevation = 4,
        BACK_PIC(Koakuma, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Koakuma),
        ICON(Koakuma, 1),
        FOOTPRINT(Koakuma)
        LEARNSETS(Koakuma),
    },

    [SPECIES_HELPER_KOAKUMA] =
    {
        KOAKUMA_MISC_INFO,
        .baseHP        = 85,
        .baseAttack    = 45,
        .baseDefense   = 85,
        .baseSpeed     = 85,
        .baseSpAttack  = 80,
        .baseSpDefense = 100,
        .types = { TYPE_REASON, TYPE_REASON },
        .catchRate = 45,
        .expYield = 160,
        .evYield_SpDefense = 2,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_LEVITATE },
        .speciesName = _("HKoakuma"),
        .natDexNum = NATIONAL_DEX_HELPER_KOAKUMA,
        .categoryName = _("Mouse"),
        .height = 6,
        .weight = 250,
        .description = COMPOUND_STRING(
            "When it curls up in a ball, it can make any\n"
            "attack bounce off harmlessly. Its hide has\n"
            "turned tough and solid as a result of\n"
            "living in the desert."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(HKoakuma, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_HKoakuma,
        BACK_PIC(HKoakuma, 64, 64),
        .backPicYOffset = 0,
        PALETTES(HKoakuma),
        ICON(HKoakuma, 1),
        FOOTPRINT(HKoakuma)
        LEARNSETS(HKoakuma),
    },

    [SPECIES_PLCEHOLDER1_KOAKUMA] =
    {
        KOAKUMA_MISC_INFO,
        .baseHP        = 85,
        .baseAttack    = 45,
        .baseDefense   = 85,
        .baseSpeed     = 85,
        .baseSpAttack  = 80,
        .baseSpDefense = 100,
        .types = { TYPE_REASON, TYPE_REASON },
        .catchRate = 45,
        .expYield = 160,
        .evYield_SpDefense = 2,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_LEVITATE },
        .speciesName = _("PKoakuma"),
        .natDexNum = NATIONAL_DEX_PLCEHOLDER1_KOAKUMA,
        .categoryName = _("Mouse"), 
        .height = 6,
        .weight = 250,
        .description = COMPOUND_STRING(
            "It curls up in a ball to protect itself from\n"
            "enemy attacks. It also curls up to prevent\n"
            "heatstroke during the daytime when\n"
            "temperatures rise sharply."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(HKoakuma, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_HKoakuma,
        BACK_PIC(HKoakuma, 64, 64),
        .backPicYOffset = 0,
        PALETTES(HKoakuma),
        ICON(HKoakuma, 1),
        FOOTPRINT(HKoakuma)
        LEARNSETS(HKoakuma),
    },

#define PATCHOULI_MISC_INFO                                          \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_FAST, SOURCE_EOSD),           \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_PATCHOULI] =
    {
        PATCHOULI_MISC_INFO,
        .baseHP        = 45,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 45,
        .baseSpAttack  = 100,
        .baseSpDefense = 110,
        .types = { TYPE_REASON, TYPE_REASON },
        .catchRate = 120,
        .expYield = 74,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_WITCHS_ROBE,
        .abilities = { ABILITY_TRACE, ABILITY_TRACE },
        .speciesName = _("CPatchouli"),
        .natDexNum = NATIONAL_DEX_CHIBI_PATCHOULI,
        .categoryName = _("Poison Pin"),
        .height = 4,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Its highly toxic barbs are thought to have\n"
            "developed as protection for this small-\n"
            "bodied Pokémon. When enraged, it releases\n"
            "a horrible toxin from its horn."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CPatchouli, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CPatchouli,
        BACK_PIC(CPatchouli, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CPatchouli),
        ICON(CPatchouli, 1),
        FOOTPRINT(CPatchouli)
        LEARNSETS(CPatchouli),
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_NORMAL_PATCHOULI},
                                {EVO_HEART, ITEM_POWER_HEART, SPECIES_ATTACK_PATCHOULI},
                                {EVO_HEART, ITEM_GUARD_HEART, SPECIES_DEFENSE_PATCHOULI}),
    },

    [SPECIES_NORMAL_PATCHOULI] =
    {
        PATCHOULI_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 70,
        .baseSpAttack  = 125,
        .baseSpDefense = 135,
        .types = { TYPE_REASON, TYPE_REASON },
        .catchRate = 45,
        .expYield = 208,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_WITCHS_ROBE,
        .abilities = { ABILITY_TRACE, ABILITY_TRACE },
        .speciesName = _("Patchouli"),
        .natDexNum = NATIONAL_DEX_NORMAL_PATCHOULI,
        .categoryName = _("Poison Pin"),
        .height = 6,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "When it is with its friends or\n"
            "family, its barbs are tucked away to\n"
            "prevent injury. It appears to become\n"
            "nervous if separated from the others."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Patchouli, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Patchouli,
        BACK_PIC(Patchouli, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Patchouli),
        ICON(Patchouli, 1),
        FOOTPRINT(Patchouli)
        LEARNSETS(Patchouli),
    },

    [SPECIES_ATTACK_PATCHOULI] =
    {
        PATCHOULI_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 60,
        .baseSpAttack  = 160,
        .baseSpDefense = 160,
        .types = { TYPE_FIRE, TYPE_WATER },
        .catchRate = 45,
        .expYield = 190,
        .evYield_SpAttack = 3,
        .abilities = { ABILITY_BLAZE, ABILITY_TORRENT },
        .speciesName = _("APatchouli"),
        .natDexNum = NATIONAL_DEX_ATTACK_PATCHOULI,
        .categoryName = _("Drill"),
        .height = 6,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "It is adept at sending foes flying with\n"
            "harsh tackles using its tough, scaly body.\n"
            "This Pokémon is at its strongest when\n"
            "it is defending its young."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(APatchouli, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_APatchouli,
        BACK_PIC(APatchouli, 64, 64),
        .backPicYOffset = 0,
        PALETTES(APatchouli),
        ICON(APatchouli, 1),
        FOOTPRINT(APatchouli)
        LEARNSETS(APatchouli),
    },

    [SPECIES_DEFENSE_PATCHOULI] =
    {
        PATCHOULI_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 20,
        .baseDefense   = 150,
        .baseSpeed     = 35,
        .baseSpAttack  = 85,
        .baseSpDefense = 150,
        .types = { TYPE_EARTH, TYPE_WIND },
        .catchRate = 45,
        .expYield = 208,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_WITCHS_ROBE,
        .abilities = { ABILITY_GUARD_ARMOR, ABILITY_GUARD_ARMOR },
        .speciesName = _("DPatchouli"),
        .natDexNum = NATIONAL_DEX_DEFENSE_PATCHOULI,
        .categoryName = _("Poison Pin"),
        .height = 6,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "The male Nidoran has developed muscles\n"
            "that freely move its ears in any direction.\n"
            "Even the slightest sound does not escape\n"
            "this Pokémon's notice."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(DPatchouli, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_DPatchouli,
        BACK_PIC(DPatchouli, 64, 64),
        .backPicYOffset = 0,
        PALETTES(DPatchouli),
        ICON(DPatchouli, 1),
        FOOTPRINT(DPatchouli)
        LEARNSETS(DPatchouli),
    },

#define SAKUYA_MISC_INFO                                             \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_SLOW, SOURCE_EOSD),           \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_SAKUYA] =
    {
        SAKUYA_MISC_INFO,
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 75,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_STEEL, TYPE_STEEL },
        .catchRate = 60,
        .expYield = 76,
        .evYield_Attack = 1,
        .itemRare = ITEM_MAID_UNIFORM,
        .abilities = { ABILITY_FOCUS, ABILITY_GUARD_ARMOR },
        .speciesName = _("CSakuya"),
        .natDexNum = NATIONAL_DEX_CHIBI_SAKUYA,
        .categoryName = _("Poison Pin"),
        .height = 4,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Its horn is harder than a diamond.\n"
            "If it senses a hostile presence, all the\n"
            "barbs on its back bristle up at once, and it\n"
            "challenges the foe with all its might."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CSakuya, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CSakuya,
        BACK_PIC(CSakuya, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CSakuya),
        ICON(CSakuya, 1),
        FOOTPRINT(CSakuya)
        LEARNSETS(CSakuya),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_NORMAL_SAKUYA},
                                {EVO_HEART, ITEM_TECH_HEART, SPECIES_TECH_SAKUYA},
                                {EVO_HEART, ITEM_HELPER_HEART, SPECIES_HELPER_SAKUYA}),
    },

    [SPECIES_NORMAL_SAKUYA] =
    {
        SAKUYA_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_STEEL, TYPE_REASON },
        .catchRate = 30,
        .expYield = 212,
        .evYield_Attack = 2,
        .evYield_Speed = 1,
        .itemRare = ITEM_MAID_UNIFORM,
        .abilities = { ABILITY_FOCUS, ABILITY_GUARD_ARMOR },
        .speciesName = _("Sakuya"),
        .natDexNum = NATIONAL_DEX_NORMAL_SAKUYA,
        .categoryName = _("Drill"),
        .height = 6,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "A Nidoking's thick tail packs enormously\n"
            "destructive power capable of toppling\n"
            "a metal transmission tower. Once it goes\n"
            "on a rampage, there is no stopping it."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Sakuya, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sakuya,
        .enemyMonElevation = 4,
        BACK_PIC(Sakuya, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Sakuya),
        ICON(Sakuya, 1),
        FOOTPRINT(Sakuya)
        LEARNSETS(Sakuya),
    },

    [SPECIES_TECH_SAKUYA] =
    {
        SAKUYA_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 90,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 90,
        .types = { TYPE_STEEL, TYPE_REASON },
        .catchRate = 45,
        .expYield = 212,
        .evYield_SpAttack = 3,
        .abilities = { ABILITY_FOCUS, ABILITY_GUARD_ARMOR },
        .speciesName = _("TSakuya"),
        .natDexNum = NATIONAL_DEX_TECH_SAKUYA,
        .categoryName = _("Fairy"),
        .height = 6,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "On every night of a full moon, they come\n"
            "out to play. When dawn arrives, the tired\n"
            "Clefairy go to sleep nestled up against\n"
            "each other in deep and quiet mountains."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(TSakuya, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_TSakuya,
        BACK_PIC(TSakuya, 64, 64),
        .backPicYOffset = 0,
        PALETTES(TSakuya),
        ICON(TSakuya, 1),
        FOOTPRINT(TSakuya)
        LEARNSETS(TSakuya),
    },

    [SPECIES_HELPER_SAKUYA] =
    {
        SAKUYA_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 75,
        .baseDefense   = 110,
        .baseSpeed     = 80,
        .baseSpAttack  = 75,
        .baseSpDefense = 110,
        .types = { TYPE_STEEL, TYPE_REASON },
        .catchRate = 45,
        .expYield = 212,
        .evYield_Defense = 3,
        .abilities = { ABILITY_FOCUS, ABILITY_GUARD_ARMOR },
        .speciesName = _("HSakuya"),
        .natDexNum = NATIONAL_DEX_HELPER_SAKUYA,
        .categoryName = _("Fairy"),
        .height = 6,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "A Clefable uses its wings to skip lightly \n"
            "as if it were flying. Its bouncy step\n"
            "lets it even walk on water. On quiet,\n"
            "moonlit nights, it strolls on lakes."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(HSakuya, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_HSakuya,
        BACK_PIC(HSakuya, 64, 64),
        .backPicYOffset = 0,
        PALETTES(HSakuya),
        ICON(HSakuya, 1),
        FOOTPRINT(HSakuya)
        LEARNSETS(HSakuya),
    },

#define REMILIA_MISC_INFO                                            \
        PUPPET_MISC_INFO(GROWTH_SLOW, SOURCE_EOSD),                  \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FLYING },     \
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_REMILIA] =
    {
        REMILIA_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 85,
        .baseSpDefense = 50,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 60,
        .expYield = 80,
        .evYield_Attack = 2,
        .abilities = { ABILITY_KEEN_EYE, ABILITY_PRESSURE },
        .speciesName = _("CRemilia"),
        .natDexNum = NATIONAL_DEX_CHIBI_REMILIA,
        .categoryName = _("Fox"),
        .height = 3,
        .weight = 500,
        .description = COMPOUND_STRING(
            "It can freely control fire, making fiery\n"
            "orbs fly like will-o'-the-wisps. Just\n"
            "before evolution, its six tails grow hot \n"
            "as if on fire."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CRemilia, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CRemilia,
        BACK_PIC(CRemilia, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CRemilia),
        ICON(CRemilia, 0),
        FOOTPRINT(CRemilia)
        LEARNSETS(CRemilia),
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_NORMAL_REMILIA},
                                {EVO_HEART, ITEM_POWER_HEART, SPECIES_ATTACK_REMILIA},
                                {EVO_HEART, ITEM_GUARD_HEART, SPECIES_DEFENSE_REMILIA}),
    },

    [SPECIES_NORMAL_REMILIA] =
    {
        REMILIA_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 75,
        .baseSpeed     = 105,
        .baseSpAttack  = 110,
        .baseSpDefense = 75,
        .types = { TYPE_DARK, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 220,
        .evYield_Attack = 3,
        .itemRare = ITEM_LIECHI_BERRY,
        .abilities = { ABILITY_KEEN_EYE, ABILITY_PRESSURE },
        .speciesName = _("Remilia"),
        .natDexNum = NATIONAL_DEX_NORMAL_REMILIA,
        .categoryName = _("Fox"),
        .height = 5,
        .weight = 1500,
        .description = COMPOUND_STRING(
            "It has long been said that each of the\n"
            "nine tails embody an enchanted power.\n"
            "A long-lived Ninetales will have fur that\n"
            "shines like gold."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Remilia, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Remilia,
        BACK_PIC(Remilia, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Remilia),
        ICON(Remilia, 0),
        FOOTPRINT(Remilia)
        LEARNSETS(Remilia),
    },

    [SPECIES_ATTACK_REMILIA] =
    {
        REMILIA_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 135,
        .baseDefense   = 60,
        .baseSpeed     = 120,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = { TYPE_DARK, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 220,
        .evYield_Attack = 3,
        .abilities = { ABILITY_KEEN_EYE, ABILITY_PRESSURE },
        .speciesName = _("ARemilia"),
        .natDexNum = NATIONAL_DEX_ATTACK_REMILIA,
        .categoryName = _("Balloon"),
        .height = 5,
        .weight = 1500,
        .description = COMPOUND_STRING(
            "Nothing can avoid falling asleep hearing a\n"
            "Jigglypuff's song. The sound waves of its\n"
            "singing voice match the brain waves of\n"
            "someone in a deep sleep."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(ARemilia, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_ARemilia,
        BACK_PIC(ARemilia, 64, 64),
        .backPicYOffset = 0,
        PALETTES(ARemilia),
        ICON(ARemilia, 0),
        FOOTPRINT(ARemilia)
        LEARNSETS(ARemilia),
    },

    [SPECIES_DEFENSE_REMILIA] =
    {
        REMILIA_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 100,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 45,
        .expYield = 220,
        .evYield_Speed = 3,
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_PRESSURE },
        .speciesName = _("DRemilia"),
        .natDexNum = NATIONAL_DEX_DEFENSE_REMILIA,
        .categoryName = _("Balloon"),
        .height = 5,
        .weight = 1500,
        .description = COMPOUND_STRING(
            "Its fur is the ultimate in luxuriousness.\n"
            "Sleeping alongside a Wigglytuff is simply\n"
            "divine. Its body expands seemingly without\n"
            "end when it inhales."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(DRemilia, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_DRemilia,
        BACK_PIC(DRemilia, 64, 64),
        .backPicYOffset = 0,
        PALETTES(DRemilia),
        ICON(DRemilia, 0),
        FOOTPRINT(DRemilia)
        LEARNSETS(DRemilia),
    },

#define FLANDRE_MISC_INFO                                            \
        PUPPET_MISC_INFO(GROWTH_FLUCTUATING, SOURCE_EOSD),           \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MONSTER },    \
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_FLANDRE] =
    {
        FLANDRE_MISC_INFO,
        .baseHP        = 25,
        .baseAttack    = 100,
        .baseDefense   = 55,
        .baseSpeed     = 65,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 90,
        .expYield = 82,
        .evYield_Attack = 2,
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE },
        .speciesName = _("CFlandre"),
        .natDexNum = NATIONAL_DEX_CHIBI_FLANDRE,
        .categoryName = _("Bat"),
        .height = 5,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "While living in pitch-black caverns, their\n"
            "eyes gradually grew shut and deprived\n"
            "them of vision. They use ultrasonic waves\n"
            "to detect obstacles."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CFlandre, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CFlandre,
        .enemyMonElevation = 4,
        BACK_PIC(CFlandre, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CFlandre),
        ICON(CFlandre, 1),
        FOOTPRINT(CFlandre)
        LEARNSETS(CFlandre),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_NORMAL_FLANDRE},
                                {EVO_HEART, ITEM_POWER_HEART, SPECIES_ATTACK_FLANDRE},
                                {EVO_HEART, ITEM_SWIFT_HEART, SPECIES_SPEED_FLANDRE}),
    },

    [SPECIES_NORMAL_FLANDRE] =
    {
        FLANDRE_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 90,
        .baseSpAttack  = 140,
        .baseSpDefense = 85,
        .types = { TYPE_DARK, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 224,
        .evYield_Attack = 3,
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE },
        .speciesName = _("Flandre"),
        .natDexNum = NATIONAL_DEX_NORMAL_FLANDRE,
        .categoryName = _("Bat"),
        .height = 5,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "Its fangs easily puncture even thick\n"
            "animal hide. It loves to feast on the blood\n"
            "of people and Pokémon. It flits about in\n"
            "darkness and strikes from behind."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Flandre, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Flandre,
        BACK_PIC(Flandre, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Flandre),
        ICON(Flandre, 1),
        FOOTPRINT(Flandre)
        LEARNSETS(Flandre),
    },

    [SPECIES_ATTACK_FLANDRE] =
    {
        FLANDRE_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 170,
        .baseDefense   = 75,
        .baseSpeed     = 95,
        .baseSpAttack  = 105,
        .baseSpDefense = 65,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 45,
        .expYield = 250,
        .evYield_Attack = 3,
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE },
        .speciesName = _("AFlandre"),
        .natDexNum = NATIONAL_DEX_ATTACK_FLANDRE,
        .categoryName = _("Weed"),
        .height = 5,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "This Pokémon grows by absorbing moonlight.\n"
            "During the daytime, it buries itself in the\n"
            "ground, leaving only its leaves exposed to\n"
            "avoid detection by its enemies."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(AFlandre, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_AFlandre,
        BACK_PIC(AFlandre, 64, 64),
        .backPicYOffset = 0,
        PALETTES(AFlandre),
        ICON(AFlandre, 1),
        FOOTPRINT(AFlandre)
        LEARNSETS(AFlandre),
    },

    [SPECIES_SPEED_FLANDRE] =
    {
        FLANDRE_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 125,
        .baseSpAttack  = 120,
        .baseSpDefense = 80,
        .types = { TYPE_DARK, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 250,
        .evYield_Speed = 3,
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE },
        .speciesName = _("SFlandre"),
        .natDexNum = NATIONAL_DEX_SPEED_FLANDRE,
        .categoryName = _("Weed"),
        .height = 5,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "A horribly noxious honey drools from its\n"
            "mouth. One whiff of the honey can result\n"
            "in memory loss. Some fans are said to\n"
            "enjoy this overwhelming stink, however."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(SFlandre, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SFlandre,
        BACK_PIC(SFlandre, 64, 64),
        .backPicYOffset = 0,
        PALETTES(SFlandre),
        ICON(SFlandre, 1),
        FOOTPRINT(SFlandre)
        LEARNSETS(SFlandre),
    },

#ifdef __INTELLISENSE__
};
#endif