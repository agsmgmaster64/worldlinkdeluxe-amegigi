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
                                {EVO_SHARD, ITEM_POWER_HEART, SPECIES_ATTACK_REIMU},
                                {EVO_SHARD, ITEM_GUARD_HEART, SPECIES_DEFENSE_REIMU}),
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
                                //{EVO_SHARD, ITEM_JUST_HEART, SPECIES_ADVENT_MARISA},
                                {EVO_SHARD, ITEM_POWER_HEART, SPECIES_ATTACK_MARISA},
                                {EVO_SHARD, ITEM_SWIFT_HEART, SPECIES_SPEED_MARISA}),
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
                                {EVO_SHARD, ITEM_POWER_HEART, SPECIES_ATTACK_DAIYOUSEI},
                                {EVO_SHARD, ITEM_GUARD_HEART, SPECIES_DEFENSE_DAIYOUSEI}),
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
                                //{EVO_SHARD, ITEM_JUST_HEART, SPECIES_ADVENT_CIRNO},
                                {EVO_SHARD, ITEM_SWIFT_HEART, SPECIES_SPEED_CIRNO},
                                {EVO_SHARD, ITEM_TECH_HEART, SPECIES_TECH_CIRNO}),
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
                                {EVO_SHARD, ITEM_POWER_HEART, SPECIES_ATTACK_RUMIA},
                                {EVO_SHARD, ITEM_SWIFT_HEART, SPECIES_SPEED_RUMIA}),
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
        .height = 3,
        .weight = 20,
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
                                //{EVO_SHARD, ITEM_JUST_HEART, SPECIES_ADVENT_MEILING},
                                {EVO_SHARD, ITEM_GUARD_HEART, SPECIES_DEFENSE_MEILING},
                                {EVO_SHARD, ITEM_SWIFT_HEART, SPECIES_SPEED_MEILING}),
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
        .height = 12,
        .weight = 380,
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
        .height = 20,
        .weight = 69,
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
        .height = 35,
        .weight = 650,
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
        .height = 4,
        .weight = 60,
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
                                {EVO_SHARD, ITEM_HELPER_HEART, SPECIES_HELPER_KOAKUMA}),
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
        .height = 8,
        .weight = 300,
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
        .weight = 120,
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
        .height = 10,
        .weight = 295,
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

    [SPECIES_CHIBI_PATCHOULI] =
    {
        .baseHP        = 55,
        .baseAttack    = 47,
        .baseDefense   = 52,
        .baseSpeed     = 41,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_MIASMA, TYPE_MIASMA },
        .catchRate = 235,
        .expYield = 55,
        .evYield_HP = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_POISON_BODY, ABILITY_RIVALRY, ABILITY_HUSTLE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Nidoran♀"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CHIBI_PATCHOULI,
        .categoryName = _("Poison Pin"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "Its highly toxic barbs are thought to have\n"
            "developed as protection for this small-\n"
            "bodied Pokémon. When enraged, it releases\n"
            "a horrible toxin from its horn."),
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(NidoranF, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_NidoranF,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 28,
        BACK_PIC(NidoranF, 48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(NidoranF),
        ICON(NidoranF, 0),
        FOOTPRINT(NidoranF)
        LEARNSETS(NidoranF),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_NORMAL_PATCHOULI}),
    },

    [SPECIES_NORMAL_PATCHOULI] =
    {
        .baseHP        = 70,
        .baseAttack    = 62,
        .baseDefense   = 67,
        .baseSpeed     = 56,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_MIASMA, TYPE_MIASMA },
        .catchRate = 120,
        .expYield = 128,
        .evYield_HP = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_POISON_BODY, ABILITY_RIVALRY, ABILITY_HUSTLE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Nidorina"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_NORMAL_PATCHOULI,
        .categoryName = _("Poison Pin"),
        .height = 8,
        .weight = 200,
        .description = COMPOUND_STRING(
            "When it is with its friends or\n"
            "family, its barbs are tucked away to\n"
            "prevent injury. It appears to become\n"
            "nervous if separated from the others."),
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nidorina, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Nidorina,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Nidorina, 56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Nidorina),
        ICON(Nidorina, 0),
        FOOTPRINT(Nidorina)
        LEARNSETS(Nidorina),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_CHROME_HEART, SPECIES_ATTACK_PATCHOULI}),
    },

    [SPECIES_ATTACK_PATCHOULI] =
    {
        .baseHP        = 90,
        .baseAttack    = P_UPDATED_STATS >= GEN_6 ? 92 : 82,
        .baseDefense   = 87,
        .baseSpeed     = 76,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .types = { TYPE_MIASMA, TYPE_EARTH },
        .catchRate = 45,
        .expYield = 227,
        .evYield_HP = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_POISON_BODY, ABILITY_RIVALRY, ABILITY_SHEER_FORCE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Nidoqueen"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ATTACK_PATCHOULI,
        .categoryName = _("Drill"),
        .height = 13,
        .weight = 600,
        .description = COMPOUND_STRING(
            "It is adept at sending foes flying with\n"
            "harsh tackles using its tough, scaly body.\n"
            "This Pokémon is at its strongest when\n"
            "it is defending its young."),
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nidoqueen, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Nidoqueen,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Nidoqueen, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Nidoqueen),
        ICON(Nidoqueen, 2),
        FOOTPRINT(Nidoqueen)
        LEARNSETS(Nidoqueen),
    },

    [SPECIES_DEFENSE_PATCHOULI] =
    {
        .baseHP        = 46,
        .baseAttack    = 57,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_MIASMA, TYPE_MIASMA },
        .catchRate = 235,
        .expYield = 55,
        .evYield_Attack = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_POISON_BODY, ABILITY_RIVALRY, ABILITY_HUSTLE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Nidoran♂"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DEFENSE_PATCHOULI,
        .categoryName = _("Poison Pin"),
        .height = 5,
        .weight = 90,
        .description = COMPOUND_STRING(
            "The male Nidoran has developed muscles\n"
            "that freely move its ears in any direction.\n"
            "Even the slightest sound does not escape\n"
            "this Pokémon's notice."),
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(NidoranM, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_NidoranM,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(NidoranM, 48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(NidoranM),
        ICON(NidoranM, 2),
        FOOTPRINT(NidoranM)
        LEARNSETS(NidoranM),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_NIDORINO}),
    },

#ifdef __INTELLISENSE__
};
#endif