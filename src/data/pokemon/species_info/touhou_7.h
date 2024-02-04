#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoTouhou7[] =
{
#endif

#define LETTY_MISC_INFO                                         \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_FAST, SOURCE_PCB),       \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FIELD }, \
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_LETTY] =
    {
        LETTY_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 55,
        .types = { TYPE_ICE, TYPE_ICE },
        .catchRate = 225,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_THICK_FUR,
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_DAMP },
        .speciesName = _("CLetty"),
        .natDexNum = NATIONAL_DEX_VILEPLUME,
        .categoryName = _("Flower"),
        .height = 12,
        .weight = 186,
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
        .types = { TYPE_ICE, TYPE_ICE },
        .catchRate = 45,
        .expYield = 200,
        .evYield_SpAttack = 3,
        .itemCommon = ITEM_ASPEAR_BERRY,
        .itemRare = ITEM_THICK_FUR,
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_SNOW_WARNING },
        .speciesName = _("Letty"),
        .natDexNum = NATIONAL_DEX_PARAS,
        .categoryName = _("Mushroom"),
        .height = 3,
        .weight = 54,
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
        .types = { TYPE_ICE, TYPE_EARTH },
        .catchRate = 45,
        .expYield = 175,
        .evYield_SpDefense = 3,
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_SNOW_WARNING },
        .speciesName = _("DLetty"),
        .natDexNum = NATIONAL_DEX_PARASECT,
        .categoryName = _("Mushroom"),
        .height = 10,
        .weight = 295,
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
        .types = { TYPE_ICE, TYPE_ICE },
        .catchRate = 45,
        .expYield = 175,
        .evYield_Speed = 3,
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_SNOW_WARNING },
        .speciesName = _("HLetty"),
        .natDexNum = NATIONAL_DEX_VENONAT,
        .categoryName = _("Insect"),
        .height = 10,
        .weight = 300,
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

    [SPECIES_SHANGHAI] =
    {
        .baseHP        = 40,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_REASON, TYPE_REASON },
        .catchRate = 200,
        .expYield = 66,
        .evYield_Attack = 1,
        .itemRare = ITEM_LIECHI_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_STURDY, ABILITY_MAINTENANCE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Shanghai"),
        .cryId = CRY_PORYGON,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_VENOMOTH,
        .categoryName = _("Poison Moth"),
        .height = 15,
        .weight = 125,
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
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 80,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = { TYPE_REASON, TYPE_REASON },
        .catchRate = 200,
        .expYield = 66,
        .evYield_Defense = 1,
        .itemRare = ITEM_PETAYA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_STURDY, ABILITY_MAINTENANCE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Hourai"),
        .cryId = CRY_PORYGON,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_DIGLETT,
        .categoryName = _("Mole"),
        .height = 2,
        .weight = 8,
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
        .baseHP        = 110,
        .baseAttack    = 120,
        .baseDefense   = 110,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = { TYPE_REASON, TYPE_STEEL },
        .catchRate = 45,
        .expYield = 208,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_STURDY, ABILITY_MAINTENANCE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Goliath"),
        .cryId = CRY_PORYGON,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_DUGTRIO,
        .categoryName = _("Mole"),
        .height = 7,
        .weight = 333,
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
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_ALICE] =
    {
        ALICE_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = { TYPE_REASON, TYPE_REASON },
        .catchRate = 60,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_WITCHS_ROBE,
        .abilities = { ABILITY_DOLL_WALL, ABILITY_MAGIC_BARRIER },
        .speciesName = _("CAlice"),
        .natDexNum = NATIONAL_DEX_MEOWTH,
        .categoryName = _("Scratch Cat"),
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING(
            "Meowth withdraw their sharp claws into\n"
            "their paws to silently sneak about.\n"
            "For some reason, this Pokémon loves\n"
            "shiny coins that glitter with light."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .types = { TYPE_REASON, TYPE_REASON },
        .catchRate = 45,
        .expYield = 212,
        .evYield_Defense = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .abilities = { ABILITY_DOLL_WALL, ABILITY_MAGIC_BARRIER },
        .speciesName = _("Alice"),
        .natDexNum = NATIONAL_DEX_PERSIAN,
        .categoryName = _("Classy Cat"),
        .height = 10,
        .weight = 320,
        .description = COMPOUND_STRING(
            "A Persian's six bold whiskers sense air\n"
            "movements to determine what is in its\n"
            "vicinity. It becomes docile if grabbed\n"
            "by the whiskers."),
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .types = { TYPE_REASON, TYPE_REASON },
        .catchRate = 45,
        .expYield = 212,
        .evYield_SpAttack = 3,
        .abilities = { ABILITY_DOLL_WALL, ABILITY_MAGIC_BARRIER },
        .speciesName = _("AAlice"),
        .natDexNum = NATIONAL_DEX_PSYDUCK,
        .categoryName = _("Duck"),
        .height = 8,
        .weight = 196,
        .description = COMPOUND_STRING(
            "When its headache intensifies, it starts\n"
            "using strange powers. However, it has no\n"
            "recollection of its powers, so it always\n"
            "looks befuddled and bewildered."),
        .pokemonScale = 369,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .types = { TYPE_REASON, TYPE_REASON },
        .catchRate = 45,
        .expYield = 212,
        .evYield_Attack = 1,
        .evYield_Speed = 2,
        .abilities = { ABILITY_DOLL_WALL, ABILITY_SKILL_LINK },
        .speciesName = _("TAlice"),
        .natDexNum = NATIONAL_DEX_GOLDUCK,
        .categoryName = _("Duck"),
        .height = 17,
        .weight = 766,
        .description = COMPOUND_STRING(
            "A Golduck is an adept swimmer.\n"
            "It sometimes joins competitive swimmers\n"
            "in training. It uses psychic powers when\n"
            "its forehead shimmers with light."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
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

#define LILY_WHITE_MISC_INFO                                    \
        PUPPET_MISC_INFO(GROWTH_MEDIUM_FAST, SOURCE_PCB),       \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FAIRY }, \
        .cryId = CRY_PORYGON

    [SPECIES_CHIBI_LILY_WHITE] =
    {
        LILY_WHITE_MISC_INFO,
        .baseHP        = 85,
        .baseAttack    = 35,
        .baseDefense   = 70,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 70,
        .types = { TYPE_HEART, TYPE_HEART },
        .catchRate = 255,
        .expYield = 66,
        .evYield_HP = 1,
        .itemRare = ITEM_ORAN_BERRY,
        .abilities = { ABILITY_SPRING_CHARM, ABILITY_NONE },
        .speciesName = _("CLilyWhite"),
        .natDexNum = NATIONAL_DEX_MANKEY,
        .categoryName = _("Pig Monkey"),
        .height = 5,
        .weight = 280,
        .description = COMPOUND_STRING(
            "When it starts shaking and its nasal\n"
            "breathing turns rough, it's a sure sign\n"
            "of anger. However, since this happens\n"
            "instantly, there is no time to flee."),
        .pokemonScale = 404,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(CLilyWhite, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CLilyWhite,
        BACK_PIC(CLilyWhite, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CLilyWhite),
        ICON(CLilyWhite, 2),
        .footprint = gMonFootprint_CLilyWhite,
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
        .types = { TYPE_HEART, TYPE_HEART },
        .catchRate = 45,
        .expYield = 192,
        .evYield_HP = 2,
        .itemRare = ITEM_SITRUS_BERRY,
        .abilities = { ABILITY_SPRING_CHARM, ABILITY_NONE },
        .speciesName = _("LilyWhite"),
        .natDexNum = NATIONAL_DEX_PRIMEAPE,
        .categoryName = _("Pig Monkey"),
        .height = 10,
        .weight = 320,
        .description = COMPOUND_STRING(
            "When it becomes furious, its blood\n"
            "circulation becomes more robust, and\n"
            "its muscles are made stronger. But it\n"
            "also becomes much less intelligent."),
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(LilyWhite, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LilyWhite,
        .enemyMonElevation = 4,
        BACK_PIC(LilyWhite, 64, 64),
        .backPicYOffset = 0,
        PALETTES(LilyWhite),
        ICON(LilyWhite, 2),
        .footprint = gMonFootprint_LilyWhite,
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
        .types = { TYPE_HEART, TYPE_HEART },
        .catchRate = 45,
        .expYield = 170,
        .evYield_Attack = 2,
        .abilities = { ABILITY_SPRING_CHARM, ABILITY_NONE },
        .speciesName = _("ALilyWhite"),
        .natDexNum = NATIONAL_DEX_GROWLITHE,
        .categoryName = _("Puppy"),
        .height = 7,
        .weight = 190,
        .description = COMPOUND_STRING(
            "Its superb sense of smell ensures that\n"
            "this Pokémon won't forget any scent,\n"
            "no matter what. It uses its sense of smell\n"
            "to detect the emotions of others."),
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(ALilyWhite, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_ALilyWhite,
        BACK_PIC(ALilyWhite, 64, 64),
        .backPicYOffset = 0,
        PALETTES(ALilyWhite),
        ICON(ALilyWhite, 2),
        .footprint = gMonFootprint_ALilyWhite,
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
        .types = { TYPE_HEART, TYPE_HEART },
        .catchRate = 45,
        .expYield = 140,
        .evYield_HP = 2,
        .abilities = { ABILITY_SPRING_CHARM, ABILITY_NONE },
        .speciesName = _("HLilyWhite"),
        .natDexNum = NATIONAL_DEX_ARCANINE,
        .categoryName = _("Legendary"),
        .height = 19,
        .weight = 1550,
        .description = COMPOUND_STRING(
            "This fleet-footed Pokémon is said to run\n"
            "over 6,200 miles in a single day and night.\n"
            "The fire that blazes wildly within its body\n"
            "is its source of power."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
        FRONT_PIC(HLilyWhite, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_HLilyWhite,
        BACK_PIC(HLilyWhite, 64, 64),
        .backPicYOffset = 0,
        PALETTES(HLilyWhite),
        ICON(HLilyWhite, 2),
        .footprint = gMonFootprint_HLilyWhite,
        LEARNSETS(HLilyWhite),
    },

    [SPECIES_CHIBI_LILY_BLACK] =
    {
        .baseHP        = 40,
        .baseAttack    = 60,
        .baseDefense   = 35,
        .baseSpeed     = 100,
        .baseSpAttack  = 60,
        .baseSpDefense = 35,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 255,
        .expYield = 66,
        .evYield_Speed = 1,
        .itemCommon = ITEM_CHERI_BERRY,
        .itemRare = ITEM_LEPPA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_SPRING_CHARM, ABILITY_NONE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("CLilyBlack"),
        .cryId = CRY_PORYGON,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_POLIWAG,
        .categoryName = _("Tadpole"),
        .height = 6,
        .weight = 124,
        .description = COMPOUND_STRING(
            "It is possible to see this Pokémon's spiral\n"
            "innards right through its thin skin.\n"
            "However, the skin is also very flexible.\n"
            "Even sharp fangs bounce right off it."),
        .pokemonScale = 369,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(CLilyBlack, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CLilyBlack,
        BACK_PIC(CLilyBlack, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CLilyBlack),
        ICON(CLilyBlack, 2),
        .footprint = gMonFootprint_CLilyBlack,
        LEARNSETS(CLilyBlack),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_NORMAL_LILY_BLACK},
                                {EVO_HEART, ITEM_POWER_HEART, SPECIES_ATTACK_LILY_BLACK},
                                {EVO_HEART, ITEM_SWIFT_HEART, SPECIES_SPEED_LILY_BLACK}),
    },

    [SPECIES_NORMAL_LILY_BLACK] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 140,
        .baseSpAttack  = 85,
        .baseSpDefense = 55,
        .types = { TYPE_DARK, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 192,
        .evYield_Speed = 2,
        .itemCommon = ITEM_LEPPA_BERRY,
        .itemRare = ITEM_LANSAT_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_NONE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("LilyBlack"),
        .cryId = CRY_PORYGON,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_POLIWHIRL,
        .categoryName = _("Tadpole"),
        .height = 10,
        .weight = 200,
        .description = COMPOUND_STRING(
            "Its body surface is always wet and slick\n"
            "with an oily fluid. Because of this greasy\n"
            "covering, it can easily slip and slide out\n"
            "of the clutches of any enemy in battle."),
        .pokemonScale = 288,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(LilyBlack, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LilyBlack,
        .enemyMonElevation = 4,
        BACK_PIC(LilyBlack, 64, 64),
        .backPicYOffset = 0,
        PALETTES(LilyBlack),
        ICON(LilyBlack, 2),
        .footprint = gMonFootprint_LilyBlack,
        LEARNSETS(LilyBlack),
    },

    [SPECIES_ATTACK_LILY_BLACK] =
    {
        .baseHP        = 70,
        .baseAttack    = 130,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 45,
        .expYield = 170,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_GUTS, ABILITY_NONE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("ALilyBlack"),
        .cryId = CRY_PORYGON,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_POLIWRATH,
        .categoryName = _("Tadpole"),
        .height = 13,
        .weight = 540,
        .description = COMPOUND_STRING(
            "Its highly developed muscles never grow\n"
            "fatigued, however much it exercises.\n"
            "This Pokémon can swim back and forth\n"
            "across the Pacific Ocean without effort."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(ALilyBlack, 64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_ALilyBlack,
        BACK_PIC(ALilyBlack, 64, 64),
        .backPicYOffset = 0,
        PALETTES(ALilyBlack),
        ICON(ALilyBlack, 2),
        .footprint = gMonFootprint_ALilyBlack,
        LEARNSETS(ALilyBlack),
    },

    [SPECIES_SPEED_LILY_BLACK] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 110,
        .baseSpDefense = 60,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 45,
        .expYield = 140,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_NONE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("SLilyBlack"),
        .cryId = CRY_PORYGON,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_ABRA,
        .categoryName = _("Psi"),
        .height = 9,
        .weight = 195,
        .description = COMPOUND_STRING(
            "A Pokémon that sleeps 18 hours a day.\n"
            "Observation revealed that it uses\n"
            "Teleport to change its location once\n"
            "every hour."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(SLilyBlack, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SLilyBlack,
        BACK_PIC(SLilyBlack, 64, 64),
        .backPicYOffset = 0,
        PALETTES(SLilyBlack),
        ICON(SLilyBlack, 2),
        .footprint = gMonFootprint_SLilyBlack,
        LEARNSETS(SLilyBlack),
    },

    [SPECIES_CHIBI_LUNASA] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 105,
        .baseSpAttack  = 120,
        .baseSpDefense = 70,
        .types = { TYPE_REASON, TYPE_REASON },
        .catchRate = 100,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 140 : 145,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_WITCHS_ROBE,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS, ABILITY_MAGIC_GUARD },
        .sourceGame = SOURCE_EOSD,
        .noFlip = TRUE,
        .speciesName = _("Kadabra"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_KADABRA,
        .categoryName = _("Psi"),
        .height = 13,
        .weight = 565,
        .description = COMPOUND_STRING(
            "It is rumored that a boy with psychic\n"
            "abilities suddenly transformed into\n"
            "Kadabra while he was assisting research\n"
            "into extrasensory powers."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kadabra, 64, 56),
        FRONT_PIC_FEMALE(Kadabra, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Kadabra,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Kadabra, 64, 48),
        BACK_PIC_FEMALE(Kadabra, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Kadabra),
        ICON(Kadabra, 2),
        FOOTPRINT(Kadabra)
        LEARNSETS(Kadabra),
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_NORMAL_LUNASA},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_NORMAL_LUNASA}),
    },

    [SPECIES_NORMAL_LUNASA] =
    {
        ALAKAZAM_MISC_INFO,
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 120,
        .baseSpAttack  = 135,
        .baseSpDefense = ALAKAZAM_SP_DEF,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 250,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 225,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 221,
    #else
        .expYield = 186,
    #endif
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS, ABILITY_MAGIC_GUARD },
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ALAKAZAM,
        .categoryName = _("Psi"),
        .height = 15,
        .weight = 480,
        .description = COMPOUND_STRING(
            "While it has strong psychic abilities and\n"
            "high intelligence, an Alakazam's muscles\n"
            "are very weak. It uses psychic power to\n"
            "move its body."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Alakazam, 64, 64),
        FRONT_PIC_FEMALE(Alakazam, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Alakazam,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Alakazam, 64, 56),
        BACK_PIC_FEMALE(Alakazam, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(Alakazam),
        ICON(Alakazam, 2),
    },

    [SPECIES_HELPER_LUNASA] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_DREAM, TYPE_DREAM },
        .catchRate = 180,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 61,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 75,
    #else
        .expYield = 88,
    #endif
        .evYield_Attack = 1,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Machop"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MACHOP,
        .categoryName = _("Superpower"),
        .height = 8,
        .weight = 195,
        .description = COMPOUND_STRING(
            "It continually undertakes strenuous\n"
            "training to master all forms of martial\n"
            "arts. Its strength lets it easily hoist\n"
            "a sumo wrestler onto its shoulders."),
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Machop, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Machop,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Machop, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Machop),
        ICON(Machop, 0),
        FOOTPRINT(Machop)
        LEARNSETS(Machop),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PLACEHOLD_LUNASA}),
    },

    [SPECIES_PLACEHOLD_LUNASA] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = { TYPE_DREAM, TYPE_DREAM },
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 146,
        .evYield_Attack = 2,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST },
        .sourceGame = SOURCE_IN,
        .noFlip = TRUE,
        .speciesName = _("Machoke"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MACHOKE,
        .categoryName = _("Superpower"),
        .height = 15,
        .weight = 705,
        .description = COMPOUND_STRING(
            "A belt is worn by a Machoke to keep its\n"
            "overwhelming power under control.\n"
            "Because it is so dangerous, no one has\n"
            "ever removed the belt."),
        .pokemonScale = 323,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Machoke, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Machoke,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Machoke, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Machoke),
        ICON(Machoke, 2),
        FOOTPRINT(Machoke)
        LEARNSETS(Machoke),
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_CHIBI_MERLIN},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_CHIBI_MERLIN}),
    },

    [SPECIES_CHIBI_MERLIN] =
    {
        MACHAMP_MISC_INFO,
        .natDexNum = NATIONAL_DEX_MACHAMP,
        .categoryName = _("Superpower"),
        .height = 16,
        .weight = 1300,
        .description = COMPOUND_STRING(
            "It is impossible to defend against punches\n"
            "and chops doled out by its four arms.\n"
            "Its fighting spirit flares up when it faces\n"
            "a tough opponent."),
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
        FRONT_PIC(Machamp, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Machamp,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Machamp, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Machamp),
        ICON(Machamp, 0),
    },

    [SPECIES_NORMAL_MERLIN] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 70,
        .baseSpDefense = 30,
        .types = { TYPE_NATURE, TYPE_MIASMA },
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 84,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Bellsprout"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BELLSPROUT,
        .categoryName = _("Flower"),
        .height = 7,
        .weight = 40,
        .description = COMPOUND_STRING(
            "A Bellsprout's thin and flexible body lets\n"
            "it bend and sway to avoid any attack,\n"
            "however strong it may be. From its mouth,\n"
            "it leaks a fluid that melts even iron."),
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bellsprout, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Bellsprout,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Bellsprout, 40, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Bellsprout),
        ICON(Bellsprout, 1),
        FOOTPRINT(Bellsprout)
        LEARNSETS(Bellsprout),
        .evolutions = EVOLUTION({EVO_LEVEL, 21, SPECIES_HELPER_MERLIN}),
    },

    [SPECIES_HELPER_MERLIN] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 45,
        .types = { TYPE_NATURE, TYPE_MIASMA },
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 137 : 151,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Weepinbell"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_WEEPINBELL,
        .categoryName = _("Flycatcher"),
        .height = 10,
        .weight = 64,
        .description = COMPOUND_STRING(
            "At night, a Weepinbell hangs on to a tree\n"
            "branch with its hooked rear and sleeps.\n"
            "If it moves around in its sleep, it may\n"
            "wake up to find itself on the ground."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Weepinbell, 56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Weepinbell,
        .frontAnimId = ANIM_SWING_CONVEX,
        .frontAnimDelay = 3,
        BACK_PIC(Weepinbell, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Weepinbell),
        ICON(Weepinbell, 1),
        FOOTPRINT(Weepinbell)
        LEARNSETS(Weepinbell),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_TECH_HEART, SPECIES_PLACEHOLD_MERLIN}),
    },

    [SPECIES_PLACEHOLD_MERLIN] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 70 : 60,
        .types = { TYPE_NATURE, TYPE_MIASMA },
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 245,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 221,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 216,
    #else
        .expYield = 191,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Victreebel"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_VICTREEBEL,
        .categoryName = _("Flycatcher"),
        .height = 17,
        .weight = 155,
        .description = COMPOUND_STRING(
            "The long vine extending from its head is\n"
            "waved about as if it were a living thing to\n"
            "attract prey. When an unsuspecting victim\n"
            "approaches, it is swallowed whole."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 3,
        FRONT_PIC(Victreebel, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Victreebel,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Victreebel, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Victreebel),
        ICON(Victreebel, 1),
        FOOTPRINT(Victreebel)
        LEARNSETS(Victreebel),
    },

    [SPECIES_CHIBI_LYRICA] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .types = { TYPE_WATER, TYPE_MIASMA },
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 67 : 105,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_NURSE_OUTFIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_STRANGE_MIST, ABILITY_RAIN_DISH },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Tentacool"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_TENTACOOL,
        .categoryName = _("Jellyfish"),
        .height = 9,
        .weight = 455,
        .description = COMPOUND_STRING(
            "Its body is almost entirely composed of\n"
            "water. It ensnares its foe with its two\n"
            "long tentacles, then stabs with the poison\n"
            "stingers at their tips."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tentacool, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Tentacool,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Tentacool, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Tentacool),
        ICON(Tentacool, 0),
        FOOTPRINT(Tentacool)
        LEARNSETS(Tentacool),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_NORMAL_LYRICA}),
    },

    [SPECIES_NORMAL_LYRICA] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .types = { TYPE_WATER, TYPE_MIASMA },
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 180 : 205,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_NURSE_OUTFIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_HAKUREI_MIKO, ABILITY_STRANGE_MIST, ABILITY_RAIN_DISH },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Tentacruel"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_TENTACRUEL,
        .categoryName = _("Jellyfish"),
        .height = 16,
        .weight = 550,
        .description = COMPOUND_STRING(
            "It lives in complex rock formations on\n"
            "the ocean floor and traps prey using its\n"
            "80 tentacles. Its red orbs glow when it\n"
            "grows excited or agitated."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
        FRONT_PIC(Tentacruel, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Tentacruel,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        BACK_PIC(Tentacruel, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Tentacruel),
        ICON(Tentacruel, 0),
        FOOTPRINT(Tentacruel)
        LEARNSETS(Tentacruel),
    },

    [SPECIES_HELPER_LYRICA] =
    {
        KANTONIAN_GEODUDE_FAMILY_INFO,
        GEODUDE_MISC_INFO,
        .natDexNum = NATIONAL_DEX_GEODUDE,
        .categoryName = _("Rock"),
        .height = 4,
        .weight = 200,
        .description = COMPOUND_STRING(
            "It climbs mountain paths using only the\n"
            "power of its arms. Because they look just\n"
            "like boulders lining paths, hikers may step\n"
            "on them without noticing."),
        FRONT_PIC(Geodude, 64, 32),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_Geodude,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .enemyMonElevation = 10,
        BACK_PIC(Geodude, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Geodude),
        ICON(Geodude, 1),
        LEARNSETS(Geodude),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_PLACEHOLDER_LYRICA}),
    },

    [SPECIES_PLACEHOLDER_LYRICA] =
    {
        KANTONIAN_GEODUDE_FAMILY_INFO,
        GRAVELER_MISC_INFO,
        .natDexNum = NATIONAL_DEX_GRAVELER,
        .categoryName = _("Rock"),
        .height = 10,
        .weight = 1050,
        .description = COMPOUND_STRING(
            "They descend from mountains by tumbling\n"
            "down steep slopes. They are so brutal,\n"
            "they smash aside obstructing trees and\n"
            "massive boulders with thunderous tackles."),
        FRONT_PIC(Graveler, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Graveler,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Graveler, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Graveler),
        ICON(Graveler, 1),
        LEARNSETS(Graveler),
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_CHIBI_LAYLA},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_CHIBI_LAYLA}),
    },

    [SPECIES_CHIBI_LAYLA] =
    {
        KANTONIAN_GEODUDE_FAMILY_INFO,
        GOLEM_MISC_INFO,
        .natDexNum = NATIONAL_DEX_GOLEM,
        .categoryName = _("Megaton"),
        .height = 14,
        .weight = 3000,
        .description = COMPOUND_STRING(
            "It is said to live in volcanic craters\n"
            "on mountain peaks. Once a year, it sheds\n"
            "its hide and grows larger. The shed hide\n"
            "crumbles and returns to the soil."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(Golem, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Golem,
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        BACK_PIC(Golem, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Golem),
        ICON(Golem, 2),
        LEARNSETS(Golem),
    },

    [SPECIES_NORMAL_LAYLA] =
    {
        KANTONIAN_PONYTA_FAMILY_INFO,
        PONYTA_MISC_INFO,
        .natDexNum = NATIONAL_DEX_PONYTA,
        .categoryName = _("Fire Horse"),
        .height = 10,
        .weight = 300,
        .description = COMPOUND_STRING(
            "A Ponyta is very weak at birth. It can\n"
            "barely stand up. Its legs become stronger\n"
            "as it stumbles and falls while trying to\n"
            "keep up with its parent."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ponyta, 56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Ponyta,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 10,
        BACK_PIC(Ponyta, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Ponyta),
        ICON(Ponyta, 3),
        LEARNSETS(Ponyta),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_DEFENSE_LAYLA}),
    },

    [SPECIES_DEFENSE_LAYLA] =
    {
        KANTONIAN_PONYTA_FAMILY_INFO,
        RAPIDASH_MISC_INFO,
        .natDexNum = NATIONAL_DEX_RAPIDASH,
        .categoryName = _("Fire Horse"),
        .height = 17,
        .weight = 950,
        .description = COMPOUND_STRING(
            "It usually canters casually in the fields\n"
            "and plains. But once a Rapidash turns\n"
            "serious, its fiery manes flare and blaze\n"
            "as it gallops its way up to 150 mph."),
        FRONT_PIC(Rapidash, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Rapidash,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Rapidash, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Rapidash),
        ICON(Rapidash, 3),
        LEARNSETS(Rapidash),
    },

    [SPECIES_PLACEHOLDER_LAYLA] =
    {
        SLOWPOKE_MISC_INFO,
        .natDexNum = NATIONAL_DEX_SLOWPOKE,
        .categoryName = _("Dopey"),
        .height = 12,
        .weight = 360,
        .types = { TYPE_WATER, TYPE_REASON },
        .itemRare = ITEM_LAGGING_TAIL,
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .cryId = CRY_PORYGON,
        .description = COMPOUND_STRING(
            "It catches prey by dipping its tail in\n"
            "water at the side of a river. But it often\n"
            "forgets what it is doing and spends entire\n"
            "days just loafing at water's edge."),
        FRONT_PIC(Slowpoke, 64, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Slowpoke,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Slowpoke, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Slowpoke),
        ICON(Slowpoke, 0),
        LEARNSETS(Slowpoke),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING},
                                {EVO_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING}),
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