#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoTouhou7[] =
{
#endif

#define LETTY_MISC_INFO                                         \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_FAST, SOURCE_PCB),       \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FIELD }, \
        .cryId = CRY_LETTY

    [SPECIES_CHIBI_LETTY] =
    {
        LETTY_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 225,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_THICK_FUR,
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_DAMP },
        .speciesName = _("CLetty"),
        .natDexNum = NATIONAL_DEX_CHIBI_LETTY,
        .categoryName = _("Flower"),
        .height = 4,
        .weight = 100,
        .description = COMPOUND_STRING(
            "In seasons when it produces more pollen,\n"
            "the air around a Vileplume turns yellow\n"
            "with the powder as it walks. The pollen is\n"
            "highly toxic and causes paralysis."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CLetty, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CLetty,
        BACK_PIC(CLetty, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CLetty),
        ICON(CLetty, 0),
        FOOTPRINT(CLetty)
        LEARNSETS(CLetty),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_NORMAL_LETTY},
                                //{EVO_HEART, ITEM_JUST_HEART, SPECIES_ADVENT_LETTY},
                                {EVO_HEART, ITEM_GUARD_HEART, SPECIES_DEFENSE_LETTY},
                                {EVO_HEART, ITEM_HELPER_HEART, SPECIES_HELPER_LETTY}),
    },

    [SPECIES_NORMAL_LETTY] =
    {
        LETTY_MISC_INFO,
        .baseHP        = 85,
        .baseAttack    = 60,
        .baseDefense   = 85,
        .baseSpeed     = 70,
        .baseSpAttack  = 115,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 45,
        .expYield = 200,
        .evYield_SpAttack = 3,
        .itemCommon = ITEM_ASPEAR_BERRY,
        .itemRare = ITEM_THICK_FUR,
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_SNOW_WARNING },
        .speciesName = _("Letty"),
        .natDexNum = NATIONAL_DEX_NORMAL_LETTY,
        .categoryName = _("Mushroom"),
        .height = 6,
        .weight = 250,
        .description = COMPOUND_STRING(
            "A Paras has parasitic tochukaso\n"
            "mushrooms growing on its back. They grow\n"
            "by drawing nutrients from the host. They\n"
            "are valued as a medicine for long life."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Letty, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Letty,
        BACK_PIC(Letty, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Letty),
        ICON(Letty, 0),
        FOOTPRINT(Letty)
        LEARNSETS(Letty),
    },

    [SPECIES_DEFENSE_LETTY] =
    {
        LETTY_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 70,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_ICE, TYPE_EARTH),
        .catchRate = 45,
        .expYield = 175,
        .evYield_SpDefense = 3,
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_SNOW_WARNING },
        .speciesName = _("DLetty"),
        .natDexNum = NATIONAL_DEX_DEFENSE_LETTY,
        .categoryName = _("Mushroom"),
        .height = 6,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Parasect are known to infest the roots of\n"
            "large trees en masse and drain nutrients.\n"
            "When an infested tree dies, they move\n"
            "onto another tree all at once."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(DLetty, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_DLetty,
        BACK_PIC(DLetty, 64, 64),
        .backPicYOffset = 0,
        PALETTES(DLetty),
        ICON(DLetty, 0),
        FOOTPRINT(DLetty)
        LEARNSETS(DLetty),
    },

    [SPECIES_HELPER_LETTY] =
    {
        LETTY_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 55,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 45,
        .expYield = 175,
        .evYield_Speed = 3,
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_SNOW_WARNING },
        .speciesName = _("HLetty"),
        .natDexNum = NATIONAL_DEX_HELPER_LETTY,
        .categoryName = _("Insect"),
        .height = 6,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Its coat of thin, stiff hair that covers\n"
            "its entire body is said to have evolved\n"
            "for protection. Its large eyes never fail\n"
            "to spot even miniscule prey."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(HLetty, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_HLetty,
        BACK_PIC(HLetty, 64, 64),
        .backPicYOffset = 0,
        PALETTES(HLetty),
        ICON(HLetty, 0),
        FOOTPRINT(HLetty)
        LEARNSETS(HLetty),
    },

#define ALICE_DOLL_MISC_INFO                                         \
        PUPPET_MISC_INFO(GROWTH_FAST, SOURCE_PCB),                   \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
        .cryId = CRY_ALICE_DOLL

    [SPECIES_SHANGHAI] =
    {
        ALICE_DOLL_MISC_INFO,
        .baseHP        = 40,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 200,
        .expYield = 66,
        .evYield_Attack = 1,
        .itemRare = ITEM_LIECHI_BERRY,
        .abilities = { ABILITY_STURDY, ABILITY_MAINTENANCE },
        .speciesName = _("Shanghai"),
        .natDexNum = NATIONAL_DEX_SHANGHAI,
        .categoryName = _("Poison Moth"),
        .height = 3,
        .weight = 100,
        .description = COMPOUND_STRING(
            "Venomoth are nocturnal--they are only\n"
            "active at night. Their favorite prey are\n"
            "insects that gather around streetlights,\n"
            "attracted by the light in the darkness."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(Shanghai, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Shanghai,
        .enemyMonElevation = 4,
        BACK_PIC(Shanghai, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Shanghai),
        ICON(Shanghai, 1),
        FOOTPRINT(Shanghai)
        LEARNSETS(Shanghai),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_GOLIATH}),
    },

    [SPECIES_HOURAI] =
    {
        ALICE_DOLL_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 80,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 200,
        .expYield = 66,
        .evYield_Defense = 1,
        .itemRare = ITEM_PETAYA_BERRY,
        .abilities = { ABILITY_STURDY, ABILITY_MAINTENANCE },
        .speciesName = _("Hourai"),
        .natDexNum = NATIONAL_DEX_HOURAI,
        .categoryName = _("Mole"),
        .height = 3,
        .weight = 100,
        .description = COMPOUND_STRING(
            "Diglett are raised in most farms.\n"
            "The reason is simple--wherever they\n"
            "burrow, the soil is left perfectly tilled\n"
            "for growing delicious crops."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(Hourai, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Hourai,
        .enemyMonElevation = 8,
        BACK_PIC(Hourai, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Hourai),
        ICON(Hourai, 1),
        FOOTPRINT(Hourai)
        LEARNSETS(Hourai),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_GOLIATH}),
    },

    [SPECIES_GOLIATH] =
    {
        ALICE_DOLL_MISC_INFO,
        .baseHP        = 110,
        .baseAttack    = 120,
        .baseDefense   = 110,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_REASON, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 208,
        .evYield_Attack = 3,
        .abilities = { ABILITY_STURDY, ABILITY_MAINTENANCE },
        .speciesName = _("Goliath"),
        .natDexNum = NATIONAL_DEX_GOLIATH,
        .categoryName = _("Mole"),
        .height = 8,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "Because the triplets originally split from\n"
            "one body, they think exactly alike.\n"
            "They work cooperatively to burrow\n"
            "endlessly through the ground."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Goliath, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Goliath,
        BACK_PIC(Goliath, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Goliath),
        ICON(Goliath, 1),
        FOOTPRINT(Goliath)
        LEARNSETS(Goliath),
    },

#define ALICE_MISC_INFO                                              \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_SLOW, SOURCE_PCB),            \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
        .cryId = CRY_ALICE

    [SPECIES_CHIBI_ALICE] =
    {
        ALICE_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 60,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_WITCHS_ROBE,
        .abilities = { ABILITY_DOLL_WALL, ABILITY_MAGIC_BARRIER },
        .speciesName = _("CAlice"),
        .natDexNum = NATIONAL_DEX_CHIBI_ALICE,
        .categoryName = _("Scratch Cat"),
        .height = 4,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Meowth withdraw their sharp claws into\n"
            "their paws to silently sneak about.\n"
            "For some reason, this Pokémon loves\n"
            "shiny coins that glitter with light."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CAlice, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CAlice,
        BACK_PIC(CAlice, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CAlice),
        ICON(CAlice, 1),
        FOOTPRINT(CAlice)
        LEARNSETS(CAlice),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_NORMAL_ALICE},
                                //{EVO_HEART, ITEM_CHROME_HEART, SPECIES_DARK_ALICE},
                                //{EVO_HEART, ITEM_JUST_HEART, SPECIES_ADVENT_ALICE},
                                {EVO_HEART, ITEM_POWER_HEART, SPECIES_ATTACK_ALICE},
                                {EVO_HEART, ITEM_TECH_HEART, SPECIES_TECH_ALICE}),
    },

    [SPECIES_NORMAL_ALICE] =
    {
        ALICE_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 70,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 110,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 45,
        .expYield = 212,
        .evYield_Defense = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .abilities = { ABILITY_DOLL_WALL, ABILITY_MAGIC_BARRIER },
        .speciesName = _("Alice"),
        .natDexNum = NATIONAL_DEX_NORMAL_ALICE,
        .categoryName = _("Classy Cat"),
        .height = 6,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "A Persian's six bold whiskers sense air\n"
            "movements to determine what is in its\n"
            "vicinity. It becomes docile if grabbed\n"
            "by the whiskers."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Alice, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Alice,
        BACK_PIC(Alice, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Alice),
        ICON(Alice, 1),
        FOOTPRINT(Alice)
        LEARNSETS(Alice),
    },

    [SPECIES_ATTACK_ALICE] =
    {
        ALICE_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 85,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 45,
        .expYield = 212,
        .evYield_SpAttack = 3,
        .abilities = { ABILITY_DOLL_WALL, ABILITY_MAGIC_BARRIER },
        .speciesName = _("AAlice"),
        .natDexNum = NATIONAL_DEX_ATTACK_ALICE,
        .categoryName = _("Duck"),
        .height = 6,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "When its headache intensifies, it starts\n"
            "using strange powers. However, it has no\n"
            "recollection of its powers, so it always\n"
            "looks befuddled and bewildered."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(AAlice, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_AAlice,
        BACK_PIC(AAlice, 64, 64),
        .backPicYOffset = 0,
        PALETTES(AAlice),
        ICON(AAlice, 1),
        FOOTPRINT(AAlice)
        LEARNSETS(AAlice),
    },

    [SPECIES_TECH_ALICE] =
    {
        ALICE_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 105,
        .baseSpAttack  = 70,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 45,
        .expYield = 212,
        .evYield_Attack = 1,
        .evYield_Speed = 2,
        .abilities = { ABILITY_DOLL_WALL, ABILITY_SKILL_LINK },
        .speciesName = _("TAlice"),
        .natDexNum = NATIONAL_DEX_TECH_ALICE,
        .categoryName = _("Duck"),
        .height = 6,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "A Golduck is an adept swimmer.\n"
            "It sometimes joins competitive swimmers\n"
            "in training. It uses psychic powers when\n"
            "its forehead shimmers with light."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(TAlice, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_TAlice,
        BACK_PIC(TAlice, 64, 64),
        .backPicYOffset = 0,
        PALETTES(TAlice),
        ICON(TAlice, 1),
        FOOTPRINT(TAlice)
        LEARNSETS(TAlice),
    },

#define LILY_WHITE_MISC_INFO                                                \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_FAST, SOURCE_PCB),                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FAIRY), \
        .cryId = CRY_LILY_WHITE

    [SPECIES_CHIBI_LILY_WHITE] =
    {
        LILY_WHITE_MISC_INFO,
        .baseHP        = 85,
        .baseAttack    = 35,
        .baseDefense   = 70,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 255,
        .expYield = 66,
        .evYield_HP = 1,
        .itemRare = ITEM_ORAN_BERRY,
        .abilities = { ABILITY_SPRING_CHARM, ABILITY_NONE },
        .speciesName = _("CLilyWhite"),
        .natDexNum = NATIONAL_DEX_CHIBI_LILY_WHITE,
        .categoryName = _("Pig Monkey"),
        .height = 3,
        .weight = 100,
        .description = COMPOUND_STRING(
            "When it starts shaking and its nasal\n"
            "breathing turns rough, it's a sure sign\n"
            "of anger. However, since this happens\n"
            "instantly, there is no time to flee."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CLilyWhite, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CLilyWhite,
        BACK_PIC(CLilyWhite, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CLilyWhite),
        ICON(CLilyWhite, 2),
        FOOTPRINT(CLilyWhite)
        LEARNSETS(CLilyWhite),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_NORMAL_LILY_WHITE},
                                {EVO_HEART, ITEM_POWER_HEART, SPECIES_ATTACK_LILY_WHITE},
                                {EVO_HEART, ITEM_HELPER_HEART, SPECIES_HELPER_LILY_WHITE}),
    },

    [SPECIES_NORMAL_LILY_WHITE] =
    {
        LILY_WHITE_MISC_INFO,
        .baseHP        = 120,
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 45,
        .expYield = 192,
        .evYield_HP = 2,
        .itemRare = ITEM_SITRUS_BERRY,
        .abilities = { ABILITY_SPRING_CHARM, ABILITY_NONE },
        .speciesName = _("LilyWhite"),
        .natDexNum = NATIONAL_DEX_NORMAL_LILY_WHITE,
        .categoryName = _("Pig Monkey"),
        .height = 5,
        .weight = 250,
        .description = COMPOUND_STRING(
            "When it becomes furious, its blood\n"
            "circulation becomes more robust, and\n"
            "its muscles are made stronger. But it\n"
            "also becomes much less intelligent."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(LilyWhite, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LilyWhite,
        .enemyMonElevation = 4,
        BACK_PIC(LilyWhite, 64, 64),
        .backPicYOffset = 0,
        PALETTES(LilyWhite),
        ICON(LilyWhite, 2),
        FOOTPRINT(LilyWhite)
        LEARNSETS(LilyWhite),
    },

    [SPECIES_ATTACK_LILY_WHITE] =
    {
        LILY_WHITE_MISC_INFO,
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 45,
        .expYield = 170,
        .evYield_Attack = 2,
        .abilities = { ABILITY_SPRING_CHARM, ABILITY_NONE },
        .speciesName = _("ALilyWhite"),
        .natDexNum = NATIONAL_DEX_ATTACK_LILY_WHITE,
        .categoryName = _("Puppy"),
        .height = 5,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Its superb sense of smell ensures that\n"
            "this Pokémon won't forget any scent,\n"
            "no matter what. It uses its sense of smell\n"
            "to detect the emotions of others."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(ALilyWhite, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_ALilyWhite,
        BACK_PIC(ALilyWhite, 64, 64),
        .backPicYOffset = 0,
        PALETTES(ALilyWhite),
        ICON(ALilyWhite, 2),
        FOOTPRINT(ALilyWhite)
        LEARNSETS(ALilyWhite),
    },

    [SPECIES_HELPER_LILY_WHITE] =
    {
        LILY_WHITE_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 45,
        .expYield = 140,
        .evYield_HP = 2,
        .abilities = { ABILITY_SPRING_CHARM, ABILITY_NONE },
        .speciesName = _("HLilyWhite"),
        .natDexNum = NATIONAL_DEX_HELPER_LILY_WHITE,
        .categoryName = _("Legendary"),
        .height = 5,
        .weight = 250,
        .description = COMPOUND_STRING(
            "This fleet-footed Pokémon is said to run\n"
            "over 6,200 miles in a single day and night.\n"
            "The fire that blazes wildly within its body\n"
            "is its source of power."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(HLilyWhite, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_HLilyWhite,
        BACK_PIC(HLilyWhite, 64, 64),
        .backPicYOffset = 0,
        PALETTES(HLilyWhite),
        ICON(HLilyWhite, 2),
        FOOTPRINT(HLilyWhite)
        LEARNSETS(HLilyWhite),
    },

#define LILY_BLACK_MISC_INFO                                    \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_FAST, SOURCE_PCB),       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FAIRY), \
        .cryId = CRY_LILY_BLACK

    [SPECIES_CHIBI_LILY_BLACK] =
    {
        LILY_BLACK_MISC_INFO,
        .baseHP        = 40,
        .baseAttack    = 60,
        .baseDefense   = 35,
        .baseSpeed     = 100,
        .baseSpAttack  = 60,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 255,
        .expYield = 66,
        .evYield_Speed = 1,
        .itemCommon = ITEM_CHERI_BERRY,
        .itemRare = ITEM_LEPPA_BERRY,
        .abilities = { ABILITY_SPRING_CHARM, ABILITY_NONE },
        .speciesName = _("CLilyBlack"),
        .natDexNum = NATIONAL_DEX_CHIBI_LILY_BLACK,
        .categoryName = _("Tadpole"),
        .height = 3,
        .weight = 100,
        .description = COMPOUND_STRING(
            "It is possible to see this Pokémon's spiral\n"
            "innards right through its thin skin.\n"
            "However, the skin is also very flexible.\n"
            "Even sharp fangs bounce right off it."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CLilyBlack, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CLilyBlack,
        BACK_PIC(CLilyBlack, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CLilyBlack),
        ICON(CLilyBlack, 2),
        FOOTPRINT(CLilyBlack)
        LEARNSETS(CLilyBlack),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_NORMAL_LILY_BLACK},
                                {EVO_HEART, ITEM_POWER_HEART, SPECIES_ATTACK_LILY_BLACK},
                                {EVO_HEART, ITEM_SWIFT_HEART, SPECIES_SPEED_LILY_BLACK}),
    },

    [SPECIES_NORMAL_LILY_BLACK] =
    {
        LILY_BLACK_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 140,
        .baseSpAttack  = 85,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 192,
        .evYield_Speed = 2,
        .itemCommon = ITEM_LEPPA_BERRY,
        .itemRare = ITEM_LANSAT_BERRY,
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_NONE },
        .speciesName = _("LilyBlack"),
        .natDexNum = NATIONAL_DEX_NORMAL_LILY_BLACK,
        .categoryName = _("Tadpole"),
        .height = 5,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Its body surface is always wet and slick\n"
            "with an oily fluid. Because of this greasy\n"
            "covering, it can easily slip and slide out\n"
            "of the clutches of any enemy in battle."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(LilyBlack, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LilyBlack,
        .enemyMonElevation = 4,
        BACK_PIC(LilyBlack, 64, 64),
        .backPicYOffset = 0,
        PALETTES(LilyBlack),
        ICON(LilyBlack, 2),
        FOOTPRINT(LilyBlack)
        LEARNSETS(LilyBlack),
    },

    [SPECIES_ATTACK_LILY_BLACK] =
    {
        LILY_BLACK_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 130,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 45,
        .expYield = 170,
        .evYield_Attack = 2,
        .abilities = { ABILITY_GUTS, ABILITY_NONE },
        .speciesName = _("ALilyBlack"),
        .natDexNum = NATIONAL_DEX_ATTACK_LILY_BLACK,
        .categoryName = _("Tadpole"),
        .height = 5,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Its highly developed muscles never grow\n"
            "fatigued, however much it exercises.\n"
            "This Pokémon can swim back and forth\n"
            "across the Pacific Ocean without effort."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(ALilyBlack, 64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_ALilyBlack,
        BACK_PIC(ALilyBlack, 64, 64),
        .backPicYOffset = 0,
        PALETTES(ALilyBlack),
        ICON(ALilyBlack, 2),
        FOOTPRINT(ALilyBlack)
        LEARNSETS(ALilyBlack),
    },

    [SPECIES_SPEED_LILY_BLACK] =
    {
        LILY_BLACK_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 110,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 45,
        .expYield = 140,
        .evYield_Speed = 2,
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_NONE },
        .speciesName = _("SLilyBlack"),
        .natDexNum = NATIONAL_DEX_SPEED_LILY_BLACK,
        .categoryName = _("Psi"),
        .height = 5,
        .weight = 250,
        .description = COMPOUND_STRING(
            "A Pokémon that sleeps 18 hours a day.\n"
            "Observation revealed that it uses\n"
            "Teleport to change its location once\n"
            "every hour."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(SLilyBlack, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SLilyBlack,
        BACK_PIC(SLilyBlack, 64, 64),
        .backPicYOffset = 0,
        PALETTES(SLilyBlack),
        ICON(SLilyBlack, 2),
        FOOTPRINT(SLilyBlack)
        LEARNSETS(SLilyBlack),
    },

#define LUNASA_MISC_INFO                                             \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_FAST, SOURCE_PCB),            \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_LUNASA] =
    {
        LUNASA_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 50,
        .baseDefense   = 75,
        .baseSpeed     = 20,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 190,
        .expYield = 70,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_PECHA_BERRY,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_SOUNDPROOF },
        .speciesName = _("CLunasa"),
        .natDexNum = NATIONAL_DEX_CHIBI_LUNASA,
        .categoryName = _("Psi"),
        .height = 4,
        .weight = 100,
        .description = COMPOUND_STRING(
            "It is rumored that a boy with psychic\n"
            "abilities suddenly transformed into\n"
            "Kadabra while he was assisting research\n"
            "into extrasensory powers."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CLunasa, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CLunasa,
        BACK_PIC(CLunasa, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CLunasa),
        ICON(CLunasa, 1),
        FOOTPRINT(CLunasa)
        LEARNSETS(CLunasa),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_NORMAL_LUNASA},
                                {EVO_HEART, ITEM_HELPER_HEART, SPECIES_HELPER_LUNASA}),
    },

    [SPECIES_NORMAL_LUNASA] =
    {
        LUNASA_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 75,
        .baseDefense   = 100,
        .baseSpeed     = 45,
        .baseSpAttack  = 80,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GHOST, TYPE_MIASMA),
        .catchRate = 45,
        .expYield = 200,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_PECHA_BERRY,
        .itemRare = ITEM_GANLON_BERRY,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_GUARD_ARMOR },
        .speciesName = _("Lunasa"),
        .natDexNum = NATIONAL_DEX_NORMAL_LUNASA,
        .categoryName = _("Psi"),
        .height = 6,
        .weight = 500,
        .description = COMPOUND_STRING(
            "While it has strong psychic abilities and\n"
            "high intelligence, an Alakazam's muscles\n"
            "are very weak. It uses psychic power to\n"
            "move its body."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Lunasa, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Lunasa,
        .enemyMonElevation = 4,
        BACK_PIC(Lunasa, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Lunasa),
        ICON(Lunasa, 1),
        FOOTPRINT(Lunasa)
        LEARNSETS(Lunasa),
    },

    [SPECIES_HELPER_LUNASA] =
    {
        LUNASA_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 70,
        .baseDefense   = 85,
        .baseSpeed     = 75,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_GHOST, TYPE_MIASMA),
        .catchRate = 45,
        .expYield = 200,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_GUARD_ARMOR },
        .speciesName = _("HLunasa"),
        .natDexNum = NATIONAL_DEX_HELPER_LUNASA,
        .categoryName = _("Superpower"),
        .height = 6,
        .weight = 500,
        .description = COMPOUND_STRING(
            "It continually undertakes strenuous\n"
            "training to master all forms of martial\n"
            "arts. Its strength lets it easily hoist\n"
            "a sumo wrestler onto its shoulders."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(HLunasa, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_HLunasa,
        BACK_PIC(HLunasa, 64, 64),
        .backPicYOffset = 0,
        PALETTES(HLunasa),
        ICON(HLunasa, 1),
        FOOTPRINT(HLunasa)
        LEARNSETS(HLunasa),
    },

    [SPECIES_PLACEHOLD_LUNASA] =
    {
        LUNASA_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 70,
        .baseDefense   = 85,
        .baseSpeed     = 75,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_GHOST, TYPE_MIASMA),
        .catchRate = 45,
        .expYield = 200,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_GUARD_ARMOR },
        .speciesName = _("PLunasa"),
        .natDexNum = NATIONAL_DEX_PLACEHOLD_LUNASA,
        .categoryName = _("Superpower"),
        .height = 6,
        .weight = 500,
        .description = COMPOUND_STRING(
            "A belt is worn by a Machoke to keep its\n"
            "overwhelming power under control.\n"
            "Because it is so dangerous, no one has\n"
            "ever removed the belt."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(HLunasa, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_HLunasa,
        BACK_PIC(HLunasa, 64, 64),
        .backPicYOffset = 0,
        PALETTES(HLunasa),
        ICON(HLunasa, 1),
        FOOTPRINT(HLunasa)
        LEARNSETS(HLunasa),
    },

#define MERLIN_MISC_INFO                                             \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_FAST, SOURCE_PCB),            \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_MERLIN] =
    {
        MERLIN_MISC_INFO,
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 190,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_PERSIM_BERRY,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_SOUNDPROOF },
        .speciesName = _("CMerlin"),
        .natDexNum = NATIONAL_DEX_CHIBI_MERLIN,
        .categoryName = _("Superpower"),
        .height = 4,
        .weight = 100,
        .description = COMPOUND_STRING(
            "It is impossible to defend against punches\n"
            "and chops doled out by its four arms.\n"
            "Its fighting spirit flares up when it faces\n"
            "a tough opponent."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CMerlin, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CMerlin,
        BACK_PIC(CMerlin, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CMerlin),
        ICON(CMerlin, 0),
        FOOTPRINT(CMerlin)
        LEARNSETS(CMerlin),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_NORMAL_MERLIN},
                                {EVO_HEART, ITEM_HELPER_HEART, SPECIES_HELPER_MERLIN}),
    },

    [SPECIES_NORMAL_MERLIN] =
    {
        MERLIN_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 120,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GHOST, TYPE_HEART),
        .catchRate = 45,
        .expYield = 200,
        .evYield_SpAttack = 3,
        .itemCommon = ITEM_PERSIM_BERRY,
        .itemRare = ITEM_PETAYA_BERRY,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_SERENE_GRACE },
        .speciesName = _("Merlin"),
        .natDexNum = NATIONAL_DEX_NORMAL_MERLIN,
        .categoryName = _("Flower"),
        .height = 6,
        .weight = 500,
        .description = COMPOUND_STRING(
            "A Bellsprout's thin and flexible body lets\n"
            "it bend and sway to avoid any attack,\n"
            "however strong it may be. From its mouth,\n"
            "it leaks a fluid that melts even iron."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Merlin, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Merlin,
        .enemyMonElevation = 4,
        BACK_PIC(Merlin, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Merlin),
        ICON(Merlin, 0),
        FOOTPRINT(Merlin)
        LEARNSETS(Merlin),
    },

    [SPECIES_HELPER_MERLIN] =
    {
        MERLIN_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GHOST, TYPE_HEART),
        .catchRate = 45,
        .expYield = 200,
        .evYield_Defense = 1,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_SERENE_GRACE },
        .speciesName = _("HMerlin"),
        .natDexNum = NATIONAL_DEX_HELPER_MERLIN,
        .categoryName = _("Flycatcher"),
        .height = 6,
        .weight = 500,
        .description = COMPOUND_STRING(
            "At night, a Weepinbell hangs on to a tree\n"
            "branch with its hooked rear and sleeps.\n"
            "If it moves around in its sleep, it may\n"
            "wake up to find itself on the ground."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(HMerlin, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_HMerlin,
        BACK_PIC(HMerlin, 64, 64),
        .backPicYOffset = 0,
        PALETTES(HMerlin),
        ICON(HMerlin, 0),
        FOOTPRINT(HMerlin)
        LEARNSETS(HMerlin),
    },

    [SPECIES_PLACEHOLD_MERLIN] =
    {
        MERLIN_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GHOST, TYPE_HEART),
        .catchRate = 45,
        .expYield = 200,
        .evYield_Defense = 1,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_SERENE_GRACE },
        .speciesName = _("PMerlin"),
        .natDexNum = NATIONAL_DEX_PLACEHOLD_MERLIN,
        .categoryName = _("Flycatcher"),
        .height = 6,
        .weight = 500,
        .description = COMPOUND_STRING(
            "The long vine extending from its head is\n"
            "waved about as if it were a living thing to\n"
            "attract prey. When an unsuspecting victim\n"
            "approaches, it is swallowed whole."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(HMerlin, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_HMerlin,
        BACK_PIC(HMerlin, 64, 64),
        .backPicYOffset = 0,
        PALETTES(HMerlin),
        ICON(HMerlin, 0),
        FOOTPRINT(HMerlin)
        LEARNSETS(HMerlin),
    },

#define LYRICA_MISC_INFO                                             \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_FAST, SOURCE_PCB),            \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_LYRICA] =
    {
        LYRICA_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 45,
        .baseSpeed     = 110,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 190,
        .expYield = 70,
        .evYield_Speed = 1,
        .itemRare = ITEM_CHERI_BERRY,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_SOUNDPROOF },
        .speciesName = _("CLyrica"),
        .natDexNum = NATIONAL_DEX_CHIBI_LYRICA,
        .categoryName = _("Jellyfish"),
        .height = 4,
        .weight = 100,
        .description = COMPOUND_STRING(
            "Its body is almost entirely composed of\n"
            "water. It ensnares its foe with its two\n"
            "long tentacles, then stabs with the poison\n"
            "stingers at their tips."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CLyrica, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CLyrica,
        BACK_PIC(CLyrica, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CLyrica),
        ICON(CLyrica, 0),
        FOOTPRINT(CLyrica)
        LEARNSETS(CLyrica),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_NORMAL_LYRICA},
                                {EVO_HEART, ITEM_HELPER_HEART, SPECIES_HELPER_LYRICA}),
    },

    [SPECIES_NORMAL_LYRICA] =
    {
        LYRICA_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 135,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GHOST, TYPE_DREAM),
        .catchRate = 45,
        .expYield = 200,
        .evYield_Speed = 3,
        .itemCommon = ITEM_CHERI_BERRY,
        .itemRare = ITEM_SALAC_BERRY,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_SAND_VEIL },
        .speciesName = _("Lyrica"),
        .natDexNum = NATIONAL_DEX_NORMAL_LYRICA,
        .categoryName = _("Jellyfish"),
        .height = 6,
        .weight = 500,
        .description = COMPOUND_STRING(
            "It lives in complex rock formations on\n"
            "the ocean floor and traps prey using its\n"
            "80 tentacles. Its red orbs glow when it\n"
            "grows excited or agitated."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Lyrica, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Lyrica,
        .enemyMonElevation = 4,
        BACK_PIC(Lyrica, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Lyrica),
        ICON(Lyrica, 0),
        FOOTPRINT(Lyrica)
        LEARNSETS(Lyrica),
    },

    [SPECIES_HELPER_LYRICA] =
    {
        LYRICA_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 60,
        .baseDefense   = 80,
        .baseSpeed     = 115,
        .baseSpAttack  = 85,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GHOST, TYPE_DREAM),
        .catchRate = 45,
        .expYield = 200,
        .evYield_Speed = 3,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_SAND_VEIL },
        .speciesName = _("HLyrica"),
        .natDexNum = NATIONAL_DEX_HELPER_LYRICA,
        .categoryName = _("Rock"),
        .height = 6,
        .weight = 500,
        .description = COMPOUND_STRING(
            "It climbs mountain paths using only the\n"
            "power of its arms. Because they look just\n"
            "like boulders lining paths, hikers may step\n"
            "on them without noticing."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(HLyrica, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_HLyrica,
        BACK_PIC(HLyrica, 64, 64),
        .backPicYOffset = 0,
        PALETTES(HLyrica),
        ICON(HLyrica, 0),
        FOOTPRINT(HLyrica)
        LEARNSETS(HLyrica),
    },

    [SPECIES_PLACEHOLDER_LYRICA] =
    {
        LYRICA_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 60,
        .baseDefense   = 80,
        .baseSpeed     = 115,
        .baseSpAttack  = 85,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GHOST, TYPE_DREAM),
        .catchRate = 45,
        .expYield = 200,
        .evYield_Speed = 3,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_SAND_VEIL },
        .speciesName = _("PLyrica"),
        .natDexNum = NATIONAL_DEX_PLACEHOLD_LYRICA,
        .categoryName = _("Rock"),
        .height = 6,
        .weight = 500,
        .description = COMPOUND_STRING(
            "They descend from mountains by tumbling\n"
            "down steep slopes. They are so brutal,\n"
            "they smash aside obstructing trees and\n"
            "massive boulders with thunderous tackles."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(HLyrica, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_HLyrica,
        BACK_PIC(HLyrica, 64, 64),
        .backPicYOffset = 0,
        PALETTES(HLyrica),
        ICON(HLyrica, 0),
        FOOTPRINT(HLyrica)
        LEARNSETS(HLyrica),
    },

#define LAYLA_MISC_INFO                                              \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_FAST, SOURCE_PCB),            \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_LAYLA] =
    {
        LAYLA_MISC_INFO,
        .baseHP        = 25,
        .baseAttack    = 45,
        .baseDefense   = 75,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .types = { TYPE_REASON, TYPE_GHOST },
        .catchRate = 65,
        .expYield = 74,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_STARF_BERRY,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_NONE },
        .speciesName = _("CLayla"),
        .natDexNum = NATIONAL_DEX_CHIBI_LAYLA,
        .categoryName = _("Megaton"),
        .height = 4,
        .weight = 100,
        .description = COMPOUND_STRING(
            "It is said to live in volcanic craters\n"
            "on mountain peaks. Once a year, it sheds\n"
            "its hide and grows larger. The shed hide\n"
            "crumbles and returns to the soil."),
        CHIBI_DEX_SCALE,
        FRONT_PIC(CLayla, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CLayla,
        .enemyMonElevation = 4,
        BACK_PIC(CLayla, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CLayla),
        ICON(CLayla, 0),
        FOOTPRINT(CLayla)
        LEARNSETS(CLayla),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_NORMAL_LAYLA},
                                {EVO_HEART, ITEM_GUARD_HEART, SPECIES_DEFENSE_LAYLA}),
    },

    [SPECIES_NORMAL_LAYLA] =
    {
        LAYLA_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_REASON, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 200,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_NONE },
        .speciesName = _("Layla"),
        .natDexNum = NATIONAL_DEX_NORMAL_LAYLA,
        .categoryName = _("Fire Horse"),
        .height = 6,
        .weight = 500,
        .description = COMPOUND_STRING(
            "A Ponyta is very weak at birth. It can\n"
            "barely stand up. Its legs become stronger\n"
            "as it stumbles and falls while trying to\n"
            "keep up with its parent."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(Layla, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Layla,
        .enemyMonElevation = 4,
        BACK_PIC(Layla, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Layla),
        ICON(Layla, 0),
        FOOTPRINT(Layla)
        LEARNSETS(Layla),
    },

    [SPECIES_DEFENSE_LAYLA] =
    {
        LAYLA_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 125,
        .baseSpeed     = 40,
        .baseSpAttack  = 90,
        .baseSpDefense = 125,
        .types = { TYPE_HEART, TYPE_REASON },
        .catchRate = 45,
        .expYield = 200,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_NONE },
        .speciesName = _("DLayla"),
        .natDexNum = NATIONAL_DEX_DEFENSE_LAYLA,
        .categoryName = _("Fire Horse"),
        .height = 6,
        .weight = 500,
        .description = COMPOUND_STRING(
            "It usually canters casually in the fields\n"
            "and plains. But once a Rapidash turns\n"
            "serious, its fiery manes flare and blaze\n"
            "as it gallops its way up to 150 mph."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(DLayla, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_DLayla,
        BACK_PIC(DLayla, 64, 64),
        .backPicYOffset = 0,
        PALETTES(DLayla),
        ICON(DLayla, 0),
        FOOTPRINT(DLayla)
        LEARNSETS(DLayla),
    },

    [SPECIES_PLACEHOLDER_LAYLA] =
    {
        LAYLA_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 125,
        .baseSpeed     = 40,
        .baseSpAttack  = 90,
        .baseSpDefense = 125,
        .types = { TYPE_HEART, TYPE_REASON },
        .catchRate = 45,
        .expYield = 200,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_NONE },
        .speciesName = _("DLayla"),
        .natDexNum = NATIONAL_DEX_PLACEHOLD_LAYLA,
        .categoryName = _("Dopey"),
        .height = 6,
        .weight = 500,
        .description = COMPOUND_STRING(
            "It catches prey by dipping its tail in\n"
            "water at the side of a river. But it often\n"
            "forgets what it is doing and spends entire\n"
            "days just loafing at water's edge."),
        EVOLVED_DEX_SCALE,
        FRONT_PIC(DLayla, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_DLayla,
        BACK_PIC(DLayla, 64, 64),
        .backPicYOffset = 0,
        PALETTES(DLayla),
        ICON(DLayla, 0),
        FOOTPRINT(DLayla)
        LEARNSETS(DLayla),
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
