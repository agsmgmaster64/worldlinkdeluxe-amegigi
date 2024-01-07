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
        .height = 7,
        .weight = 69,
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
        .height = 10,
        .weight = 130,
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
        .height = 20,
        .weight = 1000,
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
        .weight = 85,
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
        .height = 11,
        .weight = 190,
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
        .height = 17,
        .weight = 905,
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
        .height = 5,
        .weight = 90,
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
        .height = 10,
        .weight = 225,
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
        .height = 16,
        .weight = 855,
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
        .height = 3,
        .weight = 29,
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
        .height = 7,
        .weight = 99,
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
        .height = 11,
        .weight = 320,
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
        .cryId = CRY_PORYGON

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
        .weight = 32,
        .description = COMPOUND_STRING(
            "A Weedle has an extremely acute sense\n"
            "of smell. It distinguishes its favorite\n"
            "kinds of leaves from those it dislikes by\n"
            "sniffing with its big red nose."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .height = 6,
        .weight = 100,
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
        .height = 10,
        .weight = 295,
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
        .height = 3,
        .weight = 18,
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

    [SPECIES_CHIBI_RUMIA] =
    {
        .baseHP        = 63,
        .baseAttack    = 60,
        .baseDefense   = 55,
        .baseSpeed     = 71,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_ILLUSION, TYPE_FLYING },
        .catchRate = 120,
        .expYield = 122,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Pidgeotto"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CHIBI_RUMIA,
        .categoryName = _("Bird"),
        .height = 11,
        .weight = 300,
        .description = COMPOUND_STRING(
            "This Pokémon flies around, patrolling its\n"
            "large territory. If its living space is\n"
            "violated, it shows no mercy in thoroughly\n"
            "punishing the foe with its sharp claws."),
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pidgeotto, 56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Pidgeotto,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 25,
        BACK_PIC(Pidgeotto, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Pidgeotto),
        ICON(Pidgeotto, 0),
        FOOTPRINT(Pidgeotto)
        LEARNSETS(Pidgeotto),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_NORMAL_RUMIA}),
    },

    [SPECIES_NORMAL_RUMIA] =
    {
        PIDGEOT_MISC_INFO,
        .baseHP        = 83,
        .baseAttack    = 80,
        .baseDefense   = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .baseSpeed     = PIDGEOT_SPEED,
        .expYield = 216,
        .abilities = { ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS },
        .cryId = CRY_PORYGON,
        .height = 15,
        .weight = 395,
        .description = COMPOUND_STRING(
            "This Pokémon has gorgeous, glossy\n"
            "feathers. Many Trainers are so captivated\n"
            "by the beautiful feathers on its head that\n"
            "they choose Pidgeot as their Pokémon."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pidgeot, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Pidgeot,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        BACK_PIC(Pidgeot, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Pidgeot),
        ICON(Pidgeot, 0),
    },

    [SPECIES_ATTACK_RUMIA] =
    {
        RATTATA_FAMILY_MISC_INFO,
        RATTATA_MISC_INFO,
        .types = { TYPE_ILLUSION, TYPE_ILLUSION },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_GUTS, ABILITY_HUSTLE },
        .sourceGame = SOURCE_PCB,
        .height = 3,
        .weight = 35,
        .description = COMPOUND_STRING(
            "A Rattata is cautious in the extreme.\n"
            "Even while it is asleep, it constantly\n"
            "moves its ears and listens for danger.\n"
            "It will make its nest anywhere."),
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Rattata, 40, 40),
        FRONT_PIC_FEMALE(Rattata, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Rattata,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Rattata, 64, 56),
        BACK_PIC_FEMALE(Rattata, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Rattata),
        ICON(Rattata, 2),
        LEARNSETS(Rattata),
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_SPEED_RUMIA}),
    },

    [SPECIES_SPEED_RUMIA] =
    {
        RATTATA_FAMILY_MISC_INFO,
        RATICATE_MISC_INFO,
        .baseHP        = 55,
        .baseAttack    = 81,
        .baseDefense   = 60,
        .baseSpeed     = 97,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_ILLUSION, TYPE_ILLUSION },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_GUTS, ABILITY_HUSTLE },
        .sourceGame = SOURCE_EOSD,
        .weight = 185,
        .description = COMPOUND_STRING(
            "A Raticate's sturdy fangs grow steadily.\n"
            "To keep them ground down, it gnaws on\n"
            "rocks and logs. It may even chew on the\n"
            "walls of houses."),
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Raticate, 64, 56),
        FRONT_PIC_FEMALE(Raticate, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Raticate,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        BACK_PIC(Raticate, 64, 48),
        BACK_PIC_FEMALE(Raticate, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Raticate),
        ICON(Raticate, 2),
        LEARNSETS(Raticate),
    },

    [SPECIES_CHIBI_MEILING] =
    {
        .baseHP        = 40,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 70,
        .baseSpAttack  = 31,
        .baseSpDefense = 31,
        .types = { TYPE_ILLUSION, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 52,
        .evYield_Speed = 1,
        .itemRare = ITEM_STEWARDESS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_SNIPER },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Spearow"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CHIBI_MEILING,
        .categoryName = _("Tiny Bird"),
        .height = 3,
        .weight = 20,
        .description = COMPOUND_STRING(
            "Its loud cry can be heard over half a mile\n"
            "away. If its high, keening cry is heard\n"
            "echoing all around, it is a sign that they\n"
            "are warning each other of danger."),
        .pokemonScale = 571,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Spearow, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Spearow,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Spearow, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Spearow),
        ICON(Spearow, 0),
        FOOTPRINT(Spearow)
        LEARNSETS(Spearow),
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_NORMAL_MEILING}),
    },

    [SPECIES_NORMAL_MEILING] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 61,
        .baseSpDefense = 61,
        .types = { TYPE_ILLUSION, TYPE_FLYING },
        .catchRate = 90,
        .expYield = 155,
        .evYield_Speed = 2,
        .itemRare = ITEM_STEWARDESS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_SNIPER },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Fearow"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_NORMAL_MEILING,
        .categoryName = _("Beak"),
        .height = 12,
        .weight = 380,
        .description = COMPOUND_STRING(
            "Its long neck and elongated beak are\n"
            "ideal for catching prey in soil or water.\n"
            "It deftly moves this extended and skinny\n"
            "beak to pluck prey."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Fearow, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Fearow,
        .frontAnimId = ANIM_FIGURE_8,
        .frontAnimDelay = 2,
        .enemyMonElevation = 6,
        BACK_PIC(Fearow, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Fearow),
        ICON(Fearow, 0),
        FOOTPRINT(Fearow)
        LEARNSETS(Fearow),
    },

    [SPECIES_DEFENSE_MEILING] =
    {
        .baseHP        = 35,
        .baseAttack    = 60,
        .baseDefense   = 44,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 54,
        .types = { TYPE_MIASMA, TYPE_MIASMA },
        .catchRate = 255,
        .expYield = 58,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_MAINTENANCE, ABILITY_UNNERVE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Ekans"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DEFENSE_MEILING,
        .categoryName = _("Snake"),
        .height = 20,
        .weight = 69,
        .description = COMPOUND_STRING(
            "An Ekans curls itself up in a spiral while\n"
            "it rests. This position allows it to quickly\n"
            "respond to an enemy from any direction\n"
            "with a threat from its upraised head."),
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ekans, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Ekans,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 30,
        BACK_PIC(Ekans, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Ekans),
        ICON(Ekans, 2),
        FOOTPRINT(Ekans)
        LEARNSETS(Ekans),
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_SPEED_MEILING}),
    },

    [SPECIES_SPEED_MEILING] =
    {
        .baseHP        = 60,
        .baseAttack    = P_UPDATED_STATS >= GEN_7 ? 95 : 85,
        .baseDefense   = 69,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 79,
        .types = { TYPE_MIASMA, TYPE_MIASMA },
        .catchRate = 90,
        .expYield = 157,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_MAINTENANCE, ABILITY_UNNERVE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Arbok"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SPEED_MEILING,
        .categoryName = _("Cobra"),
        .height = 35,
        .weight = 650,
        .description = COMPOUND_STRING(
            "This Pokémon has a terrifically strong\n"
            "constricting power. It can even flatten\n"
            "steel oil drums. Once it wraps its body\n"
            "around its foe, escaping is impossible."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(Arbok, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Arbok,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Arbok, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Arbok),
        ICON(Arbok, 2),
        FOOTPRINT(Arbok)
        LEARNSETS(Arbok),
    },

    [SPECIES_CHIBI_KOAKUMA] =
    {
        PIKACHU_MISC_INFO,
        PIKACHU_REGULAR_SIZE_INFO,
        .genderRatio = PERCENT_FEMALE(50),
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },
        .description = gPikachuPokedexText,
        FRONT_PIC(Pikachu, 48, 48),
        FRONT_PIC_FEMALE(Pikachu, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Pikachu,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .frontAnimDelay = 25,
        BACK_PIC(Pikachu, 64, 56),
        BACK_PIC_FEMALE(Pikachu, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Pikachu),
        ICON(Pikachu, 2),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        ICON_FEMALE(Pikachu, 2),
    #endif
        .formChangeTable = sPikachuFormChangeTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SWIFT_HEART, SPECIES_NORMAL_KOAKUMA},
                                {EVO_NONE, 0, SPECIES_RAICHU_ALOLAN}),
    },

    [SPECIES_NORMAL_KOAKUMA] =
    {
        RAICHU_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 55,
        .baseSpeed     = RAICHU_SPEED,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        .types = { TYPE_WIND, TYPE_WIND },
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .sourceGame = SOURCE_PODD,
        .height = 8,
        .weight = 300,
        .description = COMPOUND_STRING(
            "If it stores too much electricity, its\n"
            "behavior turns aggressive. To avoid this,\n"
            "it occasionally discharges excess energy\n"
            "and calms itself down."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Raichu, 64, 64),
        FRONT_PIC_FEMALE(Raichu, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Raichu,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Raichu, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Raichu),
        ICON(Raichu, 0),
        LEARNSETS(Raichu),
    },

    [SPECIES_HELPER_KOAKUMA] =
    {
        SANDSHREW_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = { TYPE_EARTH, TYPE_EARTH },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_SAND_RUSH },
        .sourceGame = SOURCE_PODD,
        .height = 6,
        .weight = 120,
        .description = COMPOUND_STRING(
            "When it curls up in a ball, it can make any\n"
            "attack bounce off harmlessly. Its hide has\n"
            "turned tough and solid as a result of\n"
            "living in the desert."),
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sandshrew, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Sandshrew,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        BACK_PIC(Sandshrew, 48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Sandshrew),
        ICON(Sandshrew, 2),
        LEARNSETS(Sandshrew),
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_PLCEHOLDER1_KOAKUMA}),
    },

    [SPECIES_PLCEHOLDER1_KOAKUMA] =
    {
        SANDSLASH_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_EARTH, TYPE_EARTH },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_SAND_RUSH },
        .sourceGame = SOURCE_PODD,
        .height = 10,
        .weight = 295,
        .description = COMPOUND_STRING(
            "It curls up in a ball to protect itself from\n"
            "enemy attacks. It also curls up to prevent\n"
            "heatstroke during the daytime when\n"
            "temperatures rise sharply."),
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sandslash, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Sandslash,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Sandslash, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Sandslash),
        ICON(Sandslash, 2),
        LEARNSETS(Sandslash),
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