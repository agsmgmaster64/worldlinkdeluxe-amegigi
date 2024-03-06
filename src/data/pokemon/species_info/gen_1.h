#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen1[] =
{
#endif

#if P_FAMILY_BULBASAUR
#define VENUSAUR_MISC_INFO                                                  \
        .types = MON_TYPES(TYPE_NATURE, TYPE_MIASMA),                        \
        .catchRate = 45,                                                    \
        .evYield_SpAttack = 2,                                              \
        .evYield_SpDefense = 1,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                                \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),    \
        .sourceGame = SOURCE_LLS,                                      \
        .speciesName = _("Venusaur"),                                       \
        .natDexNum = NATIONAL_DEX_ATTACK_REIMU,                                 \
        .categoryName = _("Seed"),                                          \
        FOOTPRINT(Venusaur)                                                 \
        LEARNSETS(Venusaur),                                                \
        .formSpeciesIdTable = sVenusaurFormSpeciesIdTable,                  \
        .formChangeTable = sVenusaurFormChangeTable

#if P_MEGA_EVOLUTIONS
    [SPECIES_VENUSAUR_MEGA] =
    {
        VENUSAUR_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 123,
        .baseSpeed     = 80,
        .baseSpAttack  = 122,
        .baseSpDefense = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 313 : 281,
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_WALL_OF_ICE, ABILITY_WALL_OF_ICE },
        .cryId = CRY_PORYGON,
        .height = 24,
        .weight = 1555,
        .description = COMPOUND_STRING(
            "In order to support its flower, which\n"
            "has grown larger due to Mega Evolution,\n"
            "its back and legs have become stronger."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        FRONT_PIC(VenusaurMega, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_VenusaurMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(VenusaurMega, 64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        PALETTES(VenusaurMega),
        ICON(VenusaurMega, 4),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_VENUSAUR_GIGANTAMAX] =
    {
        VENUSAUR_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 83,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .expYield = 236,
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .cryId = CRY_PORYGON,
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Spits big amounts of pollen like a volcano.\n"
            "Breathing too much of it causes fainting.\n"
            "In battle, it swings around two thick vines\n"
            "that can easily topple 10-story buildings."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        FRONT_PIC(VenusaurGigantamax, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_VenusaurGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(VenusaurGigantamax, 64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(VenusaurGigantamax),
        ICON(VenusaurGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BULBASAUR

#if P_FAMILY_CHARMANDER
#define CHARIZARD_MISC_INFO                                             \
        .catchRate = 45,                                                \
        .evYield_SpAttack = 3,                                          \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 20,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),\
        .speciesName = _("Charizard"),                                  \
        .natDexNum = NATIONAL_DEX_NORMAL_MARISA,                            \
        .categoryName = _("Flame"),                                     \
        FOOTPRINT(Charizard)                                            \
        LEARNSETS(Charizard),                                           \
        .formSpeciesIdTable = sCharizardFormSpeciesIdTable,             \
        .formChangeTable = sCharizardFormChangeTable

#if P_MEGA_EVOLUTIONS
    [SPECIES_CHARIZARD_MEGA_X] =
    {
        CHARIZARD_MISC_INFO,
        .baseHP        = 78,
        .baseAttack    = 130,
        .baseDefense   = 111,
        .baseSpeed     = 100,
        .baseSpAttack  = 130,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FAITH),
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 317 : 285,
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .sourceGame = SOURCE_MS,
        .cryId = CRY_PORYGON,
        .height = 17,
        .weight = 1105,
        .description = COMPOUND_STRING(
            "The overwhelming power that fills its\n"
            "entire body causes it to turn black\n"
            "and creates intense blue flames."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        FRONT_PIC(CharizardMegaX, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CharizardMegaX,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CharizardMegaX, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(CharizardMegaX),
        ICON(CharizardMegaX, 0),
        .isMegaEvolution = TRUE,
    },

    [SPECIES_CHARIZARD_MEGA_Y] =
    {
        CHARIZARD_MISC_INFO,
        .baseHP        = 78,
        .baseAttack    = 104,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 159,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 317 : 285,
        .abilities = { ABILITY_DROUGHT, ABILITY_DROUGHT, ABILITY_DROUGHT },
        .sourceGame = SOURCE_HRTP,
        .cryId = CRY_PORYGON,
        .height = 17,
        .weight = 1005,
        .description = COMPOUND_STRING(
            "Its bond with its Trainer is the source\n"
            "of its power. It boasts speed and\n"
            "maneuverability greater than that of a\n"
            "jet fighter."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        FRONT_PIC(CharizardMegaY, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CharizardMegaY,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CharizardMegaY, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(CharizardMegaY),
        ICON(CharizardMegaY, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_CHARIZARD_GIGANTAMAX] =
    {
        CHARIZARD_MISC_INFO,
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .expYield = 240,
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .sourceGame = SOURCE_HRTP,
        .cryId = CRY_PORYGON,
        .height = 280,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The flame inside its body burns\n"
            "hotter than 3,600 degrees Fahrenheit.\n"
            "When Charizard roars, that\n"
            "temperature climbs even higher."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        FRONT_PIC(CharizardGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CharizardGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CharizardGigantamax, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(CharizardGigantamax),
        ICON(CharizardGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHARMANDER

#if P_FAMILY_SQUIRTLE
#define BLASTOISE_MISC_INFO                                                 \
        .types = MON_TYPES(TYPE_WATER),                                     \
        .catchRate = 45,                                                    \
        .evYield_SpDefense = 3,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                                \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),  \
        .sourceGame = SOURCE_SOEW,                                       \
        .speciesName = _("Blastoise"),                                      \
        .natDexNum = NATIONAL_DEX_CHIBI_DAIYOUSEI,                                \
        .categoryName = _("Shellfish"),                                     \
        FOOTPRINT(Blastoise)                                                \
        LEARNSETS(Blastoise),                                               \
        .formSpeciesIdTable = sBlastoiseFormSpeciesIdTable,                 \
        .formChangeTable = sBlastoiseFormChangeTable

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLASTOISE_MEGA] =
    {
        BLASTOISE_MISC_INFO,
        .baseHP        = 79,
        .baseAttack    = 103,
        .baseDefense   = 120,
        .baseSpeed     = 78,
        .baseSpAttack  = 135,
        .baseSpDefense = 115,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .abilities = { ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER },
        .cryId = CRY_PORYGON,
        .height = 16,
        .weight = 1011,
        .description = COMPOUND_STRING(
            "The cannon on its back is as powerful\n"
            "as a tank gun. Its tough legs and back\n"
            "enable it to withstand the recoil from\n"
            "firing the cannon."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(BlastoiseMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_BlastoiseMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(BlastoiseMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(BlastoiseMega),
        ICON(BlastoiseMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_BLASTOISE_GIGANTAMAX] =
    {
        BLASTOISE_MISC_INFO,
        .baseHP        = 79,
        .baseAttack    = 83,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .expYield = 239,
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .cryId = CRY_PORYGON,
        .height = 250,
        .weight = 0,
        .description = COMPOUND_STRING(
            "It's not very good at precision\n"
            "shooting. When attacking, it just fires\n"
            "its 31 cannons over and over and\n"
            "over."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(BlastoiseGigantamax, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_BlastoiseGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(BlastoiseGigantamax, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(BlastoiseGigantamax),
        ICON(BlastoiseGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SQUIRTLE

#if P_FAMILY_CATERPIE
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define BUTTERFREE_EXP_YIELD 198
#elif P_UPDATED_EXP_YIELDS >= GEN_7
    #define BUTTERFREE_EXP_YIELD 178
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define BUTTERFREE_EXP_YIELD 173
#else
    #define BUTTERFREE_EXP_YIELD 160
#endif

#define BUTTERFREE_MISC_INFO                                                        \
        .baseHP        = 60,                                                        \
        .baseAttack    = 45,                                                        \
        .baseDefense   = 50,                                                        \
        .baseSpeed     = 70,                                                        \
        .baseSpDefense = 80,                                                        \
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 90 : 80,                        \
        .types = MON_TYPES(TYPE_HEART, TYPE_FLYING),                                  \
        .catchRate = 45,                                                            \
        .expYield = BUTTERFREE_EXP_YIELD,                                           \
        .evYield_SpAttack = 2,                                                      \
        .evYield_SpDefense = 1,                                                     \
        .itemRare = ITEM_BLAZER,                                             \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 15,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_MEDIUM_FAST,                                           \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),                                 \
        .abilities = { ABILITY_FOCUS, ABILITY_NONE, ABILITY_TINTED_LENS },  \
        .sourceGame = SOURCE_POFV,                                              \
        .speciesName = _("Butterfree"),                                             \
        .cryId = CRY_PORYGON,                                                    \
        .natDexNum = NATIONAL_DEX_DEFENSE_DAIYOUSEI,                                       \
        .categoryName = _("Butterfly"),                                             \
        FOOTPRINT(Butterfree)                                                       \
        LEARNSETS(Butterfree),                                                      \
        .formSpeciesIdTable = sButterfreeFormSpeciesIdTable,                        \
        .formChangeTable = sButterfreeFormChangeTable

#if P_GIGANTAMAX_FORMS
    [SPECIES_BUTTERFREE_GIGANTAMAX] =
    {
        BUTTERFREE_MISC_INFO,
        .height = 170,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Once it has opponents trapped in a\n"
            "tornado that could blow away a 10-\n"
            "ton truck, it finishes them off with\n"
            "its poisonous scales."),
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(ButterfreeGigantamax, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_ButterfreeGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        BACK_PIC(ButterfreeGigantamax, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ButterfreeGigantamax),
        ICON(ButterfreeGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CATERPIE

#if P_FAMILY_WEEDLE
#define BEEDRILL_ATTACK (P_UPDATED_STATS >= GEN_6 ? 90 : 80)

#define BEEDRILL_MISC_INFO                                  \
        .types = MON_TYPES(TYPE_HEART, TYPE_MIASMA),          \
        .catchRate = 45,                                    \
        .evYield_Attack = 2,                                \
        .evYield_SpDefense = 1,                             \
        .itemRare = ITEM_NURSE_OUTFIT,                       \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 15,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),         \
        .sourceGame = SOURCE_PODD,                     \
        .speciesName = _("Beedrill"),                       \
        .natDexNum = NATIONAL_DEX_SPEED_CIRNO,                 \
        .categoryName = _("Poison Bee"),                    \
        FOOTPRINT(Beedrill)                                 \
        LEARNSETS(Beedrill),                                \
        .formSpeciesIdTable = sBeedrillFormSpeciesIdTable,  \
        .formChangeTable = sBeedrillFormChangeTable

#if P_MEGA_EVOLUTIONS
    [SPECIES_BEEDRILL_MEGA] =
    {
        BEEDRILL_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = BEEDRILL_ATTACK + 60,
        .baseDefense   = 40,
        .baseSpeed     = 145,
        .baseSpAttack  = 15,
        .baseSpDefense = 80,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 248 : 223,
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY },
        .cryId = CRY_PORYGON,
        .height = 14,
        .weight = 405,
        .description = COMPOUND_STRING(
            "Its legs have become poison stingers.\n"
            "It stabs its prey repeatedly with the\n"
            "stingers on its limbs, dealing the final\n"
            "blow with the stinger on its rear."),
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(BeedrillMega, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_BeedrillMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        BACK_PIC(BeedrillMega, 64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(BeedrillMega),
        ICON(BeedrillMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_WEEDLE

#if P_FAMILY_PIDGEY
#define PIDGEOT_SPEED (P_UPDATED_STATS >= GEN_6 ? 101 : 91)

#define PIDGEOT_MISC_INFO                                   \
        .types = MON_TYPES(TYPE_ILLUSION, TYPE_FLYING),       \
        .catchRate = 45,                                    \
        .evYield_Speed = 3,                                 \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 15,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),      \
        .sourceGame = SOURCE_EOSD,                      \
        .speciesName = _("Pidgeot"),                        \
        .natDexNum = NATIONAL_DEX_NORMAL_RUMIA,                  \
        .categoryName = _("Bird"),                          \
        FOOTPRINT(Pidgeot)                                  \
        LEARNSETS(Pidgeot),                                 \
        .formSpeciesIdTable = sPidgeotFormSpeciesIdTable,   \
        .formChangeTable = sPidgeotFormChangeTable

#if P_MEGA_EVOLUTIONS
    [SPECIES_PIDGEOT_MEGA] =
    {
        PIDGEOT_MISC_INFO,
        .baseHP        = 83,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = PIDGEOT_SPEED + 20,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 290 : 261,
        .abilities = { ABILITY_NO_GUARD, ABILITY_NO_GUARD, ABILITY_NO_GUARD },
        .cryId = CRY_PORYGON,
        .height = 22,
        .weight = 505,
        .description = COMPOUND_STRING(
            "With its muscular strength now greatly\n"
            "increased, it can fly continuously\n"
            "for two weeks without resting."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(PidgeotMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_PidgeotMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        BACK_PIC(PidgeotMega, 64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(PidgeotMega),
        ICON(PidgeotMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif
#endif //P_FAMILY_PIDGEY

#if P_FAMILY_PIKACHU
#if P_GEN_2_CROSS_EVOS
#define PICHU_MISC_INFO                                                                 \
        .baseHP        = 20,                                                            \
        .baseAttack    = 40,                                                            \
        .baseDefense   = 15,                                                            \
        .baseSpeed     = 60,                                                            \
        .baseSpAttack  = 35,                                                            \
        .baseSpDefense = 35,                                                            \
        .types = MON_TYPES(TYPE_WIND),                                              \
        .catchRate = 190,                                                               \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 41 : 42,                          \
        .evYield_Speed = 1,                                                             \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 10,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                      \
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },           \
        .sourceGame = SOURCE_PODD,                                                 \
        .speciesName = _("Pichu"),                                                      \
        .cryId = CRY_PORYGON,                                                             \
        .natDexNum = NATIONAL_DEX_PICHU,                                                \
        .categoryName = _("Tiny Mouse"),                                                \
        .height = 3,                                                                    \
        .weight = 20,                                                                   \
        .description = gPichuPokedexText,                                               \
        .pokemonScale = 508,                                                            \
        .pokemonOffset = 20,                                                            \
        .trainerScale = 256,                                                            \
        .trainerOffset = 0,                                                             \
        FOOTPRINT(Pichu)                                                                \
        LEARNSETS(Pichu),                                                               \
        .formSpeciesIdTable = sPichuFormSpeciesIdTable

    [SPECIES_PICHU] =
    {
        PICHU_MISC_INFO,
        FRONT_PIC(Pichu, 32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Pichu,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        BACK_PIC(Pichu, 48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Pichu),
        ICON(Pichu, 1),
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_CHIBI_KOAKUMA}),
    },

    [SPECIES_PICHU_SPIKY_EARED] =
    {
        PICHU_MISC_INFO,
        .noFlip = TRUE,
        FRONT_PIC(PichuSpikyEared, 32, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_PichuSpikyEared,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PichuSpikyEared, 48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PichuSpikyEared),
        ICON(PichuSpikyEared, 1),
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_UPDATED_EXP_YIELDS >= GEN_6
    #define PIKACHU_EXP_YIELD 112
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define PIKACHU_EXP_YIELD 105
#else
    #define PIKACHU_EXP_YIELD 82
#endif

#define PIKACHU_MISC_INFO                                                       \
        .baseHP        = 35,                                                    \
        .baseAttack    = 55,                                                    \
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,                    \
        .baseSpeed     = 90,                                                    \
        .baseSpAttack  = 50,                                                    \
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,                    \
        .types = MON_TYPES(TYPE_WIND),                                      \
        .catchRate = 190,                                                       \
        .expYield = PIKACHU_EXP_YIELD,                                          \
        .evYield_Speed = 2,                                                     \
        .itemRare = ITEM_LIGHT_BALL,                                            \
        .eggCycles = 10,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },   \
        .sourceGame = SOURCE_PODD,                                         \
        .speciesName = _("Pikachu"),                                            \
        .cryId = CRY_PORYGON,                                                   \
        .natDexNum = NATIONAL_DEX_CHIBI_KOAKUMA,                                      \
        .categoryName = _("Mouse"),                                             \
        FOOTPRINT(Pikachu)                                                      \
        LEARNSETS(Pikachu),                                                     \
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable

#define PIKACHU_REGULAR_SIZE_INFO   \
        .height = 4,                \
        .weight = 60,               \
        .pokemonScale = 479,        \
        .pokemonOffset = 19,        \
        .trainerScale = 256,        \
        .trainerOffset = 0

#if P_COSPLAY_PIKACHU_FORMS
#define PIKACHU_COSPLAY_MISC_INFO                               \
    PIKACHU_MISC_INFO,                                          \
    PIKACHU_REGULAR_SIZE_INFO,                                  \
    .genderRatio = MON_FEMALE,                                  \
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),  \
    .description = gPikachuPokedexText

    [SPECIES_PIKACHU_COSPLAY]   =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        FRONT_PIC(PikachuCosplay, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuCosplay,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuCosplay, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuCosplay),
        ICON(PikachuCosplay, 2),
    },

    [SPECIES_PIKACHU_ROCK_STAR] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        FRONT_PIC(PikachuRockStar, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuRockStar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuRockStar, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuRockStar),
        ICON(PikachuRockStar, 1),
    },

    [SPECIES_PIKACHU_BELLE] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        .noFlip = TRUE,
        FRONT_PIC(PikachuBelle, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuBelle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuBelle, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuBelle),
        ICON(PikachuBelle, 0),
    },

    [SPECIES_PIKACHU_POP_STAR] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        .noFlip = TRUE,
        FRONT_PIC(PikachuPopStar, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuPopStar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuPopStar, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuPopStar),
        ICON(PikachuPopStar, 0),
    },

    [SPECIES_PIKACHU_PH_D] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        FRONT_PIC(PikachuPhD, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuPhD,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuPhD, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuPhD),
        ICON(PikachuPhD, 1),
    },

    [SPECIES_PIKACHU_LIBRE] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        FRONT_PIC(PikachuLibre, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuLibre,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuLibre, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuLibre),
        ICON(PikachuLibre, 0),
    },

#endif //P_COSPLAY_PIKACHU_FORMS

#if P_CAP_PIKACHU_FORMS

#define PIKACHU_CAP_MISC_INFO                                                   \
    PIKACHU_MISC_INFO,                                                          \
    PIKACHU_REGULAR_SIZE_INFO,                                                  \
    .genderRatio = MON_MALE,                                                    \
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED)

    [SPECIES_PIKACHU_ORIGINAL_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .noFlip = TRUE,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed during adventures\n"
            "across many different regions."),
        FRONT_PIC(PikachuOriginalCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuOriginalCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuOriginalCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuOriginalCap),
        ICON(PikachuOriginalCap, 0),
    },

    [SPECIES_PIKACHU_HOENN_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed during adventures\n"
            "across the Hoenn region together."),
        FRONT_PIC(PikachuHoennCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuHoennCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuHoennCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuHoennCap),
        ICON(PikachuHoennCap, 0),
    },

    [SPECIES_PIKACHU_SINNOH_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed during adventures\n"
            "across the Sinnoh region together."),
        FRONT_PIC(PikachuSinnohCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuSinnohCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuSinnohCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuSinnohCap),
        ICON(PikachuSinnohCap, 0),
    },

    [SPECIES_PIKACHU_UNOVA_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed during adventures\n"
            "across the Unova region together."),
        FRONT_PIC(PikachuUnovaCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuUnovaCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuUnovaCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuUnovaCap),
        ICON(PikachuUnovaCap, 0),
    },

    [SPECIES_PIKACHU_KALOS_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed during adventures\n"
            "across the Kalos region together."),
        FRONT_PIC(PikachuKalosCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuKalosCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuKalosCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuKalosCap),
        ICON(PikachuKalosCap, 0),
    },

    [SPECIES_PIKACHU_ALOLA_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed during adventures\n"
            "across the Alola region together."),
        FRONT_PIC(PikachuAlolaCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuAlolaCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuAlolaCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuAlolaCap),
        ICON(PikachuAlolaCap, 0),
    },

    [SPECIES_PIKACHU_PARTNER_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .noFlip = TRUE,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed as the two overcame\n"
            "many hardships together."),
        FRONT_PIC(PikachuPartnerCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuPartnerCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuPartnerCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuPartnerCap),
        ICON(PikachuPartnerCap, 0),
    },

    [SPECIES_PIKACHU_WORLD_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING(
            "This Pikachu wears its partner's cap, which\n"
            "is proof of the strong bond Pikachu and\n"
            "its partner formed during adventures\n"
            "across the world together."),
        FRONT_PIC(PikachuWorldCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuWorldCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuWorldCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuWorldCap),
        ICON(PikachuWorldCap, 0),
    },

#endif //P_CAP_PIKACHU_FORMS

#if P_GIGANTAMAX_FORMS
    [SPECIES_PIKACHU_GIGANTAMAX] =
    {
        PIKACHU_MISC_INFO,
        .genderRatio = PERCENT_FEMALE(50),
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .height = 210,
        .weight = 0,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .description = COMPOUND_STRING(
            "When it smashes its opponents with\n"
            "its bolt-shaped tail, it delivers a\n"
            "surge of electricity equivalent to a\n"
            "lightning strike."),
        FRONT_PIC(PikachuGigantamax, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_PikachuGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuGigantamax, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuGigantamax),
        ICON(PikachuGigantamax, 2),
        .formChangeTable = sPikachuFormChangeTable,
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_PIKACHU

#if P_FAMILY_SANDSHREW
#define SANDSHREW_FAMILY_MISC_INFO                          \
        .itemRare = ITEM_GRIP_CLAW,                         \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD)

#define SANDSLASH_MISC_INFO                                         \
        .catchRate = 90,                                            \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 163,    \
        .evYield_Defense = 2,                                       \
        .speciesName = _("Sandslash"),                              \
        .cryId = CRY_PORYGON,                                     \
        .natDexNum = NATIONAL_DEX_PLCEHOLDER1_KOAKUMA,                        \
        .categoryName = _("Mouse"),                                 \
        FOOTPRINT(Sandslash)                                        \
        .formSpeciesIdTable = sSandslashFormSpeciesIdTable,         \
        SANDSHREW_FAMILY_MISC_INFO

#if P_ALOLAN_FORMS
    [SPECIES_CHIBI_MOMIJI_SANNIAN] =
    {
        SANDSLASH_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 65,
        .baseSpAttack  = 25,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ICE, TYPE_STEEL),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH },
        .sourceGame = SOURCE_SOEW,
        .height = 12,
        .weight = 550,
        .description = COMPOUND_STRING(
            "It uses large, hooked claws to cut a path\n"
            "through deep snow as it runs.\n"
            "On snowy mountains, this Sandslash\n"
            "is faster than any other Pokémon."),
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(SandslashAlolan, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SandslashAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SandslashAlolan, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SandslashAlolan),
        ICON(SandslashAlolan, 0),
        LEARNSETS(SandslashAlolan),
        .isSannianForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_SANDSHREW

#if P_FAMILY_CLEFAIRY
#if P_UPDATED_TYPES >= GEN_6
    #define CLEFAIRY_FAMILY_TYPES { TYPE_COSMIC, TYPE_COSMIC }
#else
    #define CLEFAIRY_FAMILY_TYPES { TYPE_ILLUSION, TYPE_ILLUSION }
#endif

#if P_GEN_2_CROSS_EVOS
    [SPECIES_CLEFFA] =
    {
        .baseHP        = 50,
        .baseAttack    = 25,
        .baseDefense   = 28,
        .baseSpeed     = 15,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = CLEFAIRY_FAMILY_TYPES,
        .catchRate = 150,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 44 : 37,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_CHROME_HEART,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_FRIEND_GUARD },
        .sourceGame = SOURCE_MOF,
        .noFlip = TRUE,
        .speciesName = _("Cleffa"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CLEFFA,
        .categoryName = _("Star Shape"),
        .height = 3,
        .weight = 30,
        .description = COMPOUND_STRING(
            "On nights with many shooting stars,\n"
            "Cleffa can be seen dancing in a ring.\n"
            "They dance until daybreak, when they\n"
            "quench their thirst with the morning dew."),
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cleffa, 32, 32),
        .frontPicYOffset = 18,
        .frontAnimFrames = sAnims_Cleffa,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Cleffa, 48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Cleffa),
        ICON(Cleffa, 0),
        FOOTPRINT(Cleffa)
        LEARNSETS(Cleffa),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_CLEFAIRY

#if P_FAMILY_VULPIX
#define VULPIX_FAMILY_MISC_INFO                             \
        .genderRatio = PERCENT_FEMALE(75),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD)

#define VULPIX_MISC_INFO                                        \
        .baseHP        = 38,                                    \
        .baseAttack    = 41,                                    \
        .baseDefense   = 40,                                    \
        .baseSpeed     = 65,                                    \
        .baseSpAttack  = 50,                                    \
        .baseSpDefense = 65,                                    \
        .catchRate = 190,                                       \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 63,  \
        .evYield_Speed = 1,                                     \
        .speciesName = _("Vulpix"),                             \
        .cryId = CRY_PORYGON,                                    \
        .natDexNum = NATIONAL_DEX_CHIBI_REMILIA,                       \
        .categoryName = _("Fox"),                               \
        .height = 6,                                            \
        .weight = 99,                                           \
        .pokemonScale = 542,                                    \
        .pokemonOffset = 19,                                    \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        FOOTPRINT(Vulpix)                                       \
        .formSpeciesIdTable = sVulpixFormSpeciesIdTable,        \
        VULPIX_FAMILY_MISC_INFO

#define NINETALES_MISC_INFO                                         \
        .catchRate = 75,                                            \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 177 : 178,    \
        .evYield_Speed = 1,                                         \
        .evYield_SpDefense = 1,                                     \
        .speciesName = _("Ninetales"),                              \
        .cryId = CRY_PORYGON,                                     \
        .natDexNum = NATIONAL_DEX_NORMAL_REMILIA,                        \
        .categoryName = _("Fox"),                                   \
        .height = 11,                                               \
        .weight = 199,                                              \
        .pokemonScale = 339,                                        \
        .pokemonOffset = 10,                                        \
        .trainerScale = 256,                                        \
        .trainerOffset = 0,                                         \
        FOOTPRINT(Ninetales)                                        \
        .formSpeciesIdTable = sNinetalesFormSpeciesIdTable,         \
        VULPIX_FAMILY_MISC_INFO

#if P_ALOLAN_FORMS
    [SPECIES_NORMAL_MOMIJI_SANNIAN] =
    {
        VULPIX_MISC_INFO,
        .types = MON_TYPES(TYPE_ICE),
        .itemRare = ITEM_SNOWBALL,
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .sourceGame = SOURCE_SOEW,
        .description = COMPOUND_STRING(
            "They live together in a skulk, helping\n"
            "one another. In hot weather, this Pokémon\n"
            "makes ice shards with its six tails and\n"
            "sprays them around to cool itself off."),
        FRONT_PIC(VulpixAlolan, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_VulpixAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(VulpixAlolan, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(VulpixAlolan),
        ICON(VulpixAlolan, 2),
        LEARNSETS(VulpixAlolan),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_HELPER_HEART, SPECIES_NINETALES_ALOLAN}),
        .isSannianForm = TRUE,
    },

    [SPECIES_NINETALES_ALOLAN] =
    {
        NINETALES_MISC_INFO,
        .baseHP        = 73,
        .baseAttack    = 67,
        .baseDefense   = 75,
        .baseSpeed     = 109,
        .baseSpAttack  = 81,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ICE, TYPE_COSMIC),
        .itemRare = ITEM_SNOWBALL,
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .sourceGame = SOURCE_SOEW,
        .description = COMPOUND_STRING(
            "While it will guide travelers who get lost\n"
            "on a snowy mountain down to the\n"
            "mountain's base, it won't forgive anyone\n"
            "who harms nature."),
        FRONT_PIC(NinetalesAlolan, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_NinetalesAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(NinetalesAlolan, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(NinetalesAlolan),
        ICON(NinetalesAlolan, 2),
        LEARNSETS(NinetalesAlolan),
        .isSannianForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_VULPIX

#if P_FAMILY_JIGGLYPUFF
#if P_UPDATED_TYPES >= GEN_6
    #define JIGGLYPUFF_FAMILY_TYPES { TYPE_ILLUSION, TYPE_COSMIC}
#else
    #define JIGGLYPUFF_FAMILY_TYPES { TYPE_ILLUSION, TYPE_ILLUSION}
#endif

#if P_GEN_2_CROSS_EVOS
    [SPECIES_IGGLYBUFF] =
    {
        .baseHP        = 90,
        .baseAttack    = 30,
        .baseDefense   = 15,
        .baseSpeed     = 15,
        .baseSpAttack  = 40,
        .baseSpDefense = 20,
        .types = JIGGLYPUFF_FAMILY_TYPES,
        .catchRate = 170,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 42 : 39,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRIEND_GUARD },
        .sourceGame = SOURCE_MOF,
        .noFlip = TRUE,
        .speciesName = _("Igglybuff"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_IGGLYBUFF,
        .categoryName = _("Balloon"),
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Its soft and pliable body is very bouncy.\n"
            "When it sings continuously with all its\n"
            "might, its body steadily turns a deepening\n"
            "pink color."),
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Igglybuff, 32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Igglybuff,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST,
        BACK_PIC(Igglybuff, 40, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Igglybuff),
        ICON(Igglybuff, 1),
        FOOTPRINT(Igglybuff)
        LEARNSETS(Igglybuff),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_JIGGLYPUFF

#if P_FAMILY_ZUBAT
#if P_GEN_2_CROSS_EVOS
    [SPECIES_CROBAT] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_MIASMA, TYPE_FLYING),
        .catchRate = 90,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 204,
    #endif
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_INFILTRATOR },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Crobat"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CROBAT,
        .categoryName = _("Bat"),
        .height = 18,
        .weight = 750,
        .description = COMPOUND_STRING(
            "Over the course of evolution, its hind legs\n"
            "turned into wings. By alternately resting\n"
            "its front and rear wings, it can fly all day\n"
            "without having to stop."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
        FRONT_PIC(Crobat, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Crobat,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        BACK_PIC(Crobat, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Crobat),
        ICON(Crobat, 2),
        FOOTPRINT(Crobat)
        LEARNSETS(Crobat),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ZUBAT

#if P_FAMILY_ODDISH
#if P_GEN_2_CROSS_EVOS
    [SPECIES_BELLOSSOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 95 : 85,
        .baseSpeed     = 50,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_NATURE),
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
        .evYield_SpDefense = 3,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HEALER },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Bellossom"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BELLOSSOM,
        .categoryName = _("Flower"),
        .height = 4,
        .weight = 58,
        .description = COMPOUND_STRING(
            "Its flower petals deepen in color through\n"
            "exposure to sunlight. When cloudy weather\n"
            "persists, it does a dance that is thought\n"
            "to be a ritual for summoning the sun."),
        .pokemonScale = 472,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bellossom, 32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Bellossom,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Bellossom, 48, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Bellossom),
        ICON(Bellossom, 1),
        FOOTPRINT(Bellossom)
        LEARNSETS(Bellossom),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ODDISH

#if P_FAMILY_PARAS
#endif //P_FAMILY_PARAS

#if P_FAMILY_VENONAT
#endif //P_FAMILY_VENONAT

#if P_FAMILY_DIGLETT
#define DIGLETT_FAMILY_MISC_INFO                      \
        .itemRare = ITEM_GYM_SUIT,                   \
        .genderRatio = PERCENT_FEMALE(50),            \
        .eggCycles = 20,                              \
        .friendship = STANDARD_FRIENDSHIP,            \
        .growthRate = GROWTH_MEDIUM_FAST,             \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD), \
        .sourceGame = SOURCE_EOSD

#define DIGLETT_MISC_INFO                                       \
        .catchRate = 255,                                       \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 53 : 81,  \
        .evYield_Speed = 1,                                     \
        .speciesName = _("Diglett"),                            \
        .cryId = CRY_PORYGON,                                   \
        .natDexNum = NATIONAL_DEX_HOURAI,                      \
        .categoryName = _("Mole"),                              \
        .height = 2,                                            \
        .pokemonScale = 833,                                    \
        .pokemonOffset = 25,                                    \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        FOOTPRINT(Diglett)                                      \
        .formSpeciesIdTable = sDiglettFormSpeciesIdTable,       \
        DIGLETT_FAMILY_MISC_INFO

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define DUGTRIO_EXP_YIELD 149
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define DUGTRIO_EXP_YIELD 142
#else
    #define DUGTRIO_EXP_YIELD 153
#endif

#define DUGTRIO_MISC_INFO                                   \
        .catchRate = 50,                                    \
        .expYield = DUGTRIO_EXP_YIELD,                      \
        .evYield_Speed = 2,                                 \
        .speciesName = _("Dugtrio"),                        \
        .cryId = CRY_PORYGON,                               \
        .natDexNum = NATIONAL_DEX_GOLIATH,                  \
        .categoryName = _("Mole"),                          \
        .height = 7,                                        \
        .pokemonScale = 406,                                \
        .pokemonOffset = 18,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        FOOTPRINT(Dugtrio)                                  \
        .formSpeciesIdTable = sDugtrioFormSpeciesIdTable,   \
        DIGLETT_FAMILY_MISC_INFO

#define DUGTRIO_ATTACK (P_UPDATED_STATS >= GEN_7 ? 100 : 80)

#if P_ALOLAN_FORMS
    [SPECIES_DIGLETT_ALOLAN] =
    {
        DIGLETT_MISC_INFO,
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_EARTH, TYPE_STEEL),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE },
        .weight = 10,
        .description = COMPOUND_STRING(
            "The metal-rich geology of its habitat\n"
            "caused it to develop steel whiskers on its\n"
            "head that change shape depending on its\n"
            "mood and when communicating with others."),
        FRONT_PIC(DiglettAlolan, 32, 40),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_DiglettAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(DiglettAlolan, 40, 48),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(DiglettAlolan),
        ICON(DiglettAlolan, 2),
        LEARNSETS(DiglettAlolan),
        .isSannianForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_DUGTRIO_ALOLAN}),
    },

    [SPECIES_DUGTRIO_ALOLAN] =
    {
        DUGTRIO_MISC_INFO,
        .baseHP        = 35,
        .baseAttack    = DUGTRIO_ATTACK,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_EARTH, TYPE_STEEL),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE },
        .noFlip = TRUE,
        .weight = 666,
        .description = COMPOUND_STRING(
            "Their beautiful, metallic whiskers create\n"
            "a sort of protective helmet on\n"
            "heir heads, and they also function\n"
            "as highly precise sensors."),
        FRONT_PIC(DugtrioAlolan, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_DugtrioAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(DugtrioAlolan, 64, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(DugtrioAlolan),
        ICON(DugtrioAlolan, 2),
        LEARNSETS(DugtrioAlolan),
        .isSannianForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_DIGLETT

#if P_FAMILY_MEOWTH
#define MEOWTH_MISC_INFO                                        \
        .catchRate = 255,                                       \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 69,  \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),           \
        .speciesName = _("Meowth"),                             \
        .cryId = CRY_PORYGON,                                    \
        .natDexNum = NATIONAL_DEX_CHIBI_ALICE,                       \
        .categoryName = _("Scratch Cat"),                       \
        FOOTPRINT(Meowth)                                       \
        .formSpeciesIdTable = sMeowthFormSpeciesIdTable

#define PERSIAN_MISC_INFO                                           \
        .catchRate = 90,                                            \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 154 : 148,    \
        .evYield_Speed = 2,                                         \
        .itemRare = ITEM_QUICK_CLAW,                                \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 20,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_FAST,                           \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),               \
        .speciesName = _("Persian"),                                \
        .cryId = CRY_PORYGON,                                       \
        .natDexNum = NATIONAL_DEX_NORMAL_ALICE,                          \
        .categoryName = _("Classy Cat"),                            \
        FOOTPRINT(Persian)                                          \
        .formSpeciesIdTable = sPersianFormSpeciesIdTable

#if P_ALOLAN_FORMS
    [SPECIES_MEOWTH_ALOLAN] =
    {
        MEOWTH_MISC_INFO,
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .evYield_Speed = 1,
        .types = MON_TYPES(TYPE_DARK),
        .itemRare = ITEM_QUICK_CLAW,
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_RATTLED },
        .sourceGame = SOURCE_IN,
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING(
            "It's accustomed to luxury because it used\n"
            "to live with Alolan royalty. Highly smart\n"
            "and proud, it's famously difficult to\n"
            "handle, but that also makes it popular."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MeowthAlolan, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_MeowthAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MeowthAlolan, 64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MeowthAlolan),
        ICON(MeowthAlolan, 2),
        LEARNSETS(MeowthAlolan),
        .isSannianForm = TRUE,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_PERSIAN_ALOLAN}),
    },

    [SPECIES_PERSIAN_ALOLAN] =
    {
        PERSIAN_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 75,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DARK),
        .abilities = { ABILITY_FUR_COAT, ABILITY_TECHNICIAN, ABILITY_RATTLED },
        .sourceGame = SOURCE_IN,
        .height = 11,
        .weight = 330,
        .description = COMPOUND_STRING(
            "It looks down on everyone other than\n"
            "itself. In contrast to its lovely face, it\n"
            "is so brutal that it tortures its weakened\n"
            "prey rather than finishing them off."),
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(PersianAlolan, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_PersianAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PersianAlolan, 64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PersianAlolan),
        ICON(PersianAlolan, 2),
        LEARNSETS(PersianAlolan),
        .isSannianForm = TRUE,
    },
#endif //P_ALOLAN_FORMS

#if P_GALARIAN_FORMS
    [SPECIES_MEOWTH_GALARIAN] =
    {
        MEOWTH_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .evYield_Attack = 1,
        .types = MON_TYPES(TYPE_STEEL),
        .abilities = { ABILITY_PICKUP, ABILITY_TOUGH_CLAWS, ABILITY_UNNERVE },
        .sourceGame = SOURCE_EOSD,
        .height = 4,
        .weight = 75,
        .description = COMPOUND_STRING(
            "Living with a savage, seafaring people has\n"
            "hardened its body so much that parts of it\n"
            "turned to iron. Darker coins are harder\n"
            "and garner more respect among Meowth."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MeowthGalarian, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_MeowthGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MeowthGalarian, 64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MeowthGalarian),
        ICON(MeowthGalarian, 0),
        LEARNSETS(MeowthGalarian),
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PERRSERKER}),
    },

    [SPECIES_PERRSERKER] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 90,
        .expYield = 154,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GUARD_ARMOR, ABILITY_TOUGH_CLAWS, ABILITY_STEELY_SPIRIT },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Perrserker"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PERRSERKER,
        .categoryName = _("Viking"),
        .height = 8,
        .weight = 280,
        .description = COMPOUND_STRING(
            "What appears to be an iron helmet is\n"
            "actually hardened hair. This Pokémon\n"
            "lives for the thrill of battle."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Perrserker, 48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Perrserker,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Perrserker, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Perrserker),
        ICON(Perrserker, 2),
        FOOTPRINT(Perrserker)
        LEARNSETS(Perrserker),
    },
#endif //P_GALARIAN_FORMS

#if P_GIGANTAMAX_FORMS
    [SPECIES_MEOWTH_GIGANTAMAX] =
    {
        MEOWTH_MISC_INFO,
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .evYield_Speed = 1,
        .types = MON_TYPES(TYPE_ILLUSION),
        .itemRare = ITEM_QUICK_CLAW,
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_UNNERVE },
        .sourceGame = SOURCE_PODD,
        .height = 330,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The pattern that has appeared on\n"
            "its giant coin is thought to be the\n"
            "key to unlocking the secrets of the\n"
            "Dynamax phenomenon."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MeowthGigantamax, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_MeowthGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MeowthGigantamax, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MeowthGigantamax),
        ICON(MeowthGigantamax, 1),
        LEARNSETS(Meowth),
        .isGigantamax = TRUE,
        .formChangeTable = sMeowthFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MEOWTH

#if P_FAMILY_PSYDUCK
#endif //P_FAMILY_PSYDUCK

#if P_FAMILY_MANKEY
#if P_GEN_9_CROSS_EVOS
    [SPECIES_ANNIHILAPE] =
    {
        .baseHP        = 110,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DREAM, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 268,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_INNER_FOCUS, ABILITY_DEFIANT },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Annihilape"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ANNIHILAPE,
        .categoryName = _("Rage Monkey"),
        .height = 12,
        .weight = 560,
        .description = COMPOUND_STRING(
            "When its anger rose beyond a\n"
            "critical point, this Pokémon gained power\n"
            "that is unfettered by the limits of\n"
            "its physical body."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Annihilape, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Annihilape,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Annihilape, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Annihilape),
        ICON(Annihilape, 0),
        //FOOTPRINT(Annihilape)
        LEARNSETS(Annihilape),
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_MANKEY

#if P_FAMILY_GROWLITHE
#define GROWLITHE_FAMILY_MISC_INFO                      \
        .genderRatio = PERCENT_FEMALE(25),              \
        .eggCycles = 20,                                \
        .friendship = STANDARD_FRIENDSHIP,              \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),   \
        .sourceGame = SOURCE_EOSD

#define GROWLITHE_MISC_INFO                                     \
        .catchRate = 190,                                       \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 91,  \
        .evYield_Attack = 1,                                    \
        .speciesName = _("Growlithe"),                          \
        .cryId = CRY_PORYGON,                                 \
        .natDexNum = NATIONAL_DEX_ATTACK_LILY_WHITE,                    \
        FOOTPRINT(Growlithe)                                    \
        .formSpeciesIdTable = sGrowlitheFormSpeciesIdTable,     \
        GROWLITHE_FAMILY_MISC_INFO

#define ARCANINE_MISC_INFO                                          \
        .catchRate = 75,                                            \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 194 : 213,    \
        .evYield_Attack = 2,                                        \
        .speciesName = _("Arcanine"),                               \
        .cryId = CRY_PORYGON,                                      \
        .natDexNum = NATIONAL_DEX_HELPER_LILY_WHITE,                         \
        .categoryName = _("Legendary"),                             \
        FOOTPRINT(Arcanine)                                         \
        .formSpeciesIdTable = sArcanineFormSpeciesIdTable,          \
        GROWLITHE_FAMILY_MISC_INFO

#if P_HISUIAN_FORMS
    [SPECIES_GROWLITHE_HISUIAN] =
    {
        GROWLITHE_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE, TYPE_BEAST),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_ROCK_HEAD },
        .categoryName = _("Scout"),
        .height = 8,
        .weight = 227,
        .description = COMPOUND_STRING(
            "They patrol their territory in pairs.\n"
            "It's believed the igneous rock components\n"
            "in the fur of this species are the result\n"
            "of volcanic activity in its habitat."),
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(GrowlitheHisuian, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_GrowlitheHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GrowlitheHisuian, 56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GrowlitheHisuian),
        ICON(GrowlitheHisuian, 0),
        LEARNSETS(GrowlitheHisuian),
        .isHisuianForm = TRUE,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_POWER_HEART, SPECIES_ARCANINE_HISUIAN}),
    },

    [SPECIES_ARCANINE_HISUIAN] =
    {
        ARCANINE_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_BEAST),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_ROCK_HEAD },
        .height = 20,
        .weight = 1680,
        .description = COMPOUND_STRING(
            "Snaps at its foes with fangs cloaked in\n"
            "blazing flame. Despite its bulk, it deftly\n"
            "feints every which way, leading opponents\n"
            "on a deceptively merry chase."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
        FRONT_PIC(ArcanineHisuian, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ArcanineHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ArcanineHisuian, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ArcanineHisuian),
        ICON(ArcanineHisuian, 0),
        LEARNSETS(ArcanineHisuian),
        .isHisuianForm = TRUE,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GROWLITHE

#if P_FAMILY_POLIWAG
#if P_GEN_2_CROSS_EVOS
    [SPECIES_POLITOED] =
    {
        .baseHP        = 90,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 250,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 225,
    #else
        .expYield = 185,
    #endif
        .evYield_SpDefense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_DRIZZLE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("Politoed"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_POLITOED,
        .categoryName = _("Frog"),
        .height = 11,
        .weight = 339,
        .description = COMPOUND_STRING(
            "The curled hair on its head proves its\n"
            "status as a king. It is said that the\n"
            "longer and curlier the hair, the more\n"
            "respect it earns from its peers."),
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Politoed, 48, 56),
        FRONT_PIC_FEMALE(Politoed, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Politoed,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 40,
        BACK_PIC(Politoed, 56, 56),
        BACK_PIC_FEMALE(Politoed, 56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Politoed),
        ICON(Politoed, 1),
        FOOTPRINT(Politoed)
        LEARNSETS(Politoed),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_POLIWAG

#if P_FAMILY_ABRA
#define ALAKAZAM_SP_DEF (P_UPDATED_STATS >= GEN_6 ? 95 : 85)

#define ALAKAZAM_MISC_INFO                                  \
        .types = MON_TYPES(TYPE_REASON),                   \
        .catchRate = 50,                                    \
        .evYield_SpAttack = 3,                              \
        .itemRare = ITEM_WITCHS_ROBE,                     \
        .genderRatio = PERCENT_FEMALE(25),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),  \
        .sourceGame = SOURCE_EOSD,                      \
        .speciesName = _("Alakazam"),                       \
        .natDexNum = NATIONAL_DEX_NORMAL_LUNASA,                 \
        .categoryName = _("Psi"),                           \
        FOOTPRINT(Alakazam)                                 \
        LEARNSETS(Alakazam),                                \
        .formSpeciesIdTable = sAlakazamFormSpeciesIdTable,  \
        .formChangeTable = sAlakazamFormChangeTable

#if P_MEGA_EVOLUTIONS
    [SPECIES_ALAKAZAM_MEGA] =
    {
        ALAKAZAM_MISC_INFO,
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 65,
        .baseSpeed     = 150,
        .baseSpAttack  = 175,
        .baseSpDefense = ALAKAZAM_SP_DEF + 10,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .abilities = { ABILITY_TRACE, ABILITY_TRACE, ABILITY_TRACE },
        .cryId = CRY_PORYGON,
        .height = 12,
        .weight = 480,
        .description = COMPOUND_STRING(
            "Having traded away its muscles, Alakazam's\n"
            "true power has been unleashed. With its\n"
            "psychic powers, it can foresee all things."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(AlakazamMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_AlakazamMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        BACK_PIC(AlakazamMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(AlakazamMega),
        ICON(AlakazamMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABRA

#if P_FAMILY_MACHOP
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define MACHAMP_EXP_YIELD 253
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define MACHAMP_EXP_YIELD 227
#else
    #define MACHAMP_EXP_YIELD 193
#endif

#define MACHAMP_MISC_INFO                                                   \
        .baseHP        = 90,                                                \
        .baseAttack    = 130,                                               \
        .baseDefense   = 80,                                                \
        .baseSpeed     = 55,                                                \
        .baseSpAttack  = 65,                                                \
        .baseSpDefense = 85,                                                \
        .types = MON_TYPES(TYPE_DREAM),                                  \
        .catchRate = 45,                                                    \
        .expYield = MACHAMP_EXP_YIELD,                                      \
        .evYield_Attack = 3,                                                \
        .itemRare = ITEM_FOCUS_BAND,                                        \
        .genderRatio = PERCENT_FEMALE(25),                                  \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),                  \
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST }, \
        .sourceGame = SOURCE_IN,                                       \
        .speciesName = _("Machamp"),                                        \
        .cryId = CRY_PORYGON,                                               \
        .natDexNum = NATIONAL_DEX_CHIBI_MERLIN,                                  \
        .categoryName = _("Superpower"),                                    \
        FOOTPRINT(Machamp)                                                  \
        LEARNSETS(Machamp),                                                 \
        .formSpeciesIdTable = sMachampFormSpeciesIdTable,                   \
        .formChangeTable = sMachampFormChangeTable

#if P_GIGANTAMAX_FORMS
    [SPECIES_MACHAMP_GIGANTAMAX] =
    {
        MACHAMP_MISC_INFO,
        .height = 250,
        .weight = 0,
        .description = COMPOUND_STRING(
            "One of these Pokémon once used\n"
            "its immeasurable strength to lift a\n"
            "large ship that was in trouble. It\n"
            "then carried the ship to port."),
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
        FRONT_PIC(MachampGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MachampGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MachampGigantamax, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MachampGigantamax),
        ICON(MachampGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MACHOP

#if P_FAMILY_BELLSPROUT
#endif //P_FAMILY_BELLSPROUT

#if P_FAMILY_TENTACOOL
#endif //P_FAMILY_TENTACOOL

#if P_FAMILY_GEODUDE
#define KANTONIAN_GEODUDE_FAMILY_INFO                                       \
        .types = MON_TYPES(TYPE_BEAST, TYPE_EARTH),                         \
        .itemRare = ITEM_EVERSTONE,                                         \
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SAND_VEIL }

#define GEODUDE_FAMILY_MISC_INFO                        \
        .genderRatio = PERCENT_FEMALE(50),              \
        .eggCycles = 15,                                \
        .friendship = STANDARD_FRIENDSHIP,              \
        .growthRate = GROWTH_MEDIUM_SLOW,               \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL), \
        .sourceGame = SOURCE_EOSD

#if P_UPDATED_EXP_YIELDS >= GEN_5
    #define GEODUDE_EXP_YIELD 60
#elif P_UPDATED_EXP_YIELDS >= GEN_4
    #define GEODUDE_EXP_YIELD 73
#else
    #define GEODUDE_EXP_YIELD 86
#endif

#define GEODUDE_MISC_INFO                                   \
        .baseHP        = 40,                                \
        .baseAttack    = 80,                                \
        .baseDefense   = 100,                               \
        .baseSpeed     = 20,                                \
        .baseSpAttack  = 30,                                \
        .baseSpDefense = 30,                                \
        .catchRate = 255,                                   \
        .expYield = GEODUDE_EXP_YIELD,                      \
        .evYield_Defense = 1,                               \
        .speciesName = _("Geodude"),                        \
        .cryId = CRY_PORYGON,                               \
        .natDexNum = NATIONAL_DEX_HELPER_LYRICA,                  \
        .categoryName = _("Rock"),                          \
        .height = 4,                                        \
        .pokemonScale = 347,                                \
        .pokemonOffset = 18,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        FOOTPRINT(Geodude)                                  \
        .formSpeciesIdTable = sGeodudeFormSpeciesIdTable,   \
        GEODUDE_FAMILY_MISC_INFO

#define GRAVELER_MISC_INFO                                          \
        .baseHP        = 55,                                        \
        .baseAttack    = 95,                                        \
        .baseDefense   = 115,                                       \
        .baseSpeed     = 35,                                        \
        .baseSpAttack  = 45,                                        \
        .baseSpDefense = 45,                                        \
        .catchRate = 120,                                           \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 137 : 134,    \
        .evYield_Defense = 2,                                       \
        .speciesName = _("Graveler"),                               \
        .cryId = CRY_PORYGON,                                      \
        .natDexNum = NATIONAL_DEX_PLACEHOLD_LYRICA,                         \
        .categoryName = _("Rock"),                                  \
        .height = 10,                                               \
        .pokemonScale = 256,                                        \
        .pokemonOffset = 2,                                         \
        .trainerScale = 256,                                        \
        .trainerOffset = 0,                                         \
        FOOTPRINT(Graveler)                                         \
        .formSpeciesIdTable = sGravelerFormSpeciesIdTable,          \
        GEODUDE_FAMILY_MISC_INFO

#define GOLEM_ATTACK (P_UPDATED_STATS >= GEN_6 ? 120 : 110)

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define GOLEM_EXP_YIELD 248
#elif P_UPDATED_EXP_YIELDS >= GEN_7
    #define GOLEM_EXP_YIELD 223
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define GOLEM_EXP_YIELD 218
#else
    #define GOLEM_EXP_YIELD 177
#endif

#define GOLEM_MISC_INFO                                 \
        .baseHP        = 80,                            \
        .baseAttack    = GOLEM_ATTACK,                  \
        .baseDefense   = 130,                           \
        .baseSpeed     = 45,                            \
        .baseSpAttack  = 55,                            \
        .baseSpDefense = 65,                            \
        .catchRate = 45,                                \
        .expYield = GOLEM_EXP_YIELD,                    \
        .evYield_Defense = 3,                           \
        .speciesName = _("Golem"),                      \
        .cryId = CRY_PORYGON,                             \
        .natDexNum = NATIONAL_DEX_CHIBI_LAYLA,                \
        .categoryName = _("Megaton"),                   \
        FOOTPRINT(Golem)                                \
        .formSpeciesIdTable = sGolemFormSpeciesIdTable, \
        GEODUDE_FAMILY_MISC_INFO

#if P_ALOLAN_FORMS
#define ALOLAN_GEODUDE_FAMILY_INFO                                              \
        .types = MON_TYPES(TYPE_BEAST, TYPE_WIND),                           \
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE },\
        .isSannianForm = TRUE

    [SPECIES_GEODUDE_ALOLAN] =
    {
        ALOLAN_GEODUDE_FAMILY_INFO,
        GEODUDE_MISC_INFO,
        .itemRare = ITEM_CELL_BATTERY,
        .weight = 203,
        .description = COMPOUND_STRING(
            "Its body is a magnetic stone. Iron sand\n"
            "attach to parts of its body with stronger\n"
            "magnetism. If you carelessly step on one,\n"
            "it will headbutt and shock you in anger."),
        FRONT_PIC(GeodudeAlolan, 48, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_GeodudeAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 16,
        BACK_PIC(GeodudeAlolan, 64, 56),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GeodudeAlolan),
        ICON(GeodudeAlolan, 2),
        LEARNSETS(GeodudeAlolan),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_GRAVELER_ALOLAN}),
    },

    [SPECIES_GRAVELER_ALOLAN] =
    {
        ALOLAN_GEODUDE_FAMILY_INFO,
        GRAVELER_MISC_INFO,
        .itemRare = ITEM_CELL_BATTERY,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "When two Graveler smash each other over\n"
            "dravite, their favorite food, they cause\n"
            "flashes of light and booming noises.\n"
            "People call them “fireworks of the earth.”"),
        FRONT_PIC(GravelerAlolan, 64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_GravelerAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GravelerAlolan, 64, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GravelerAlolan),
        ICON(GravelerAlolan, 2),
        LEARNSETS(GravelerAlolan),
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOLEM_ALOLAN},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOLEM_ALOLAN}),
    },

    [SPECIES_GOLEM_ALOLAN] =
    {
        ALOLAN_GEODUDE_FAMILY_INFO,
        GOLEM_MISC_INFO,
        .itemCommon = ITEM_CELL_BATTERY,
        .height = 17,
        .weight = 3160,
        .description = COMPOUND_STRING(
            "It fires rocks charged with electricity.\n"
            "Even if the rock isn't fired that\n"
            "accurately, just grazing an opponent\n"
            "will cause numbness and fainting."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(GolemAlolan, 56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_GolemAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GolemAlolan, 64, 48),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GolemAlolan),
        ICON(GolemAlolan, 2),
        LEARNSETS(GolemAlolan),
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GEODUDE

#if P_FAMILY_PONYTA
#define KANTONIAN_PONYTA_FAMILY_INFO                                                \
        .types = MON_TYPES(TYPE_FIRE),                                              \
        .abilities = { ABILITY_RUN_AWAY, ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY },  \
        .sourceGame = SOURCE_PODD

#define PONYTA_FAMILY_MISC_INFO                             \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD)

#define PONYTA_MISC_INFO                                        \
        .baseHP        = 50,                                    \
        .baseAttack    = 85,                                    \
        .baseDefense   = 55,                                    \
        .baseSpeed     = 90,                                    \
        .baseSpAttack  = 65,                                    \
        .baseSpDefense = 65,                                    \
        .catchRate = 190,                                       \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 82 : 152, \
        .evYield_Speed = 1,                                     \
        .speciesName = _("Ponyta"),                             \
        .cryId = CRY_PORYGON,                                    \
        .natDexNum = NATIONAL_DEX_NORMAL_LAYLA,                       \
        FOOTPRINT(Ponyta)                                       \
        .formSpeciesIdTable = sPonytaFormSpeciesIdTable,        \
        PONYTA_FAMILY_MISC_INFO

#define RAPIDASH_MISC_INFO                                          \
        .baseHP        = 65,                                        \
        .baseAttack    = 100,                                       \
        .baseDefense   = 70,                                        \
        .baseSpeed     = 105,                                       \
        .baseSpAttack  = 80,                                        \
        .baseSpDefense = 80,                                        \
        .catchRate = 60,                                            \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 192,    \
        .evYield_Speed = 2,                                         \
        .speciesName = _("Rapidash"),                               \
        .cryId = CRY_PORYGON,                                      \
        .natDexNum = NATIONAL_DEX_DEFENSE_LAYLA,                         \
        .height = 17,                                               \
        .pokemonScale = 256,                                        \
        .pokemonOffset = 0,                                         \
        .trainerScale = 289,                                        \
        .trainerOffset = 1,                                         \
        FOOTPRINT(Rapidash)                                         \
        .formSpeciesIdTable = sRapidashFormSpeciesIdTable,          \
        PONYTA_FAMILY_MISC_INFO

#define GALARIAN_PONYTA_FAMILY_INFO                                                 \
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PASTEL_VEIL, ABILITY_ANTICIPATION },\
        .sourceGame = SOURCE_POFV,                                              \
        .isGalarianForm = TRUE

#if P_GALARIAN_FORMS
    [SPECIES_PONYTA_GALARIAN] =
    {
        GALARIAN_PONYTA_FAMILY_INFO,
        PONYTA_MISC_INFO,
        .types = MON_TYPES(TYPE_REASON),
        .categoryName = _("Unique Horn"),
        .height = 8,
        .weight = 240,
        .description = COMPOUND_STRING(
            "Its small horn hides a healing power.\n"
            "This Pokémon will look into your eyes and\n"
            "read the contents of your heart. If it\n"
            "finds evil there, it promptly hides away."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(PonytaGalarian, 64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_PonytaGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PonytaGalarian, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PonytaGalarian),
        ICON(PonytaGalarian, 2),
        LEARNSETS(PonytaGalarian),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_RAPIDASH_GALARIAN}),
    },

    [SPECIES_RAPIDASH_GALARIAN] =
    {
        GALARIAN_PONYTA_FAMILY_INFO,
        RAPIDASH_MISC_INFO,
        .types = MON_TYPES(TYPE_REASON, TYPE_COSMIC),
        .categoryName = _("Unique Horn"),
        .weight = 800,
        .description = COMPOUND_STRING(
            "Little can stand up to its psycho cut.\n"
            "Unleashed from this Pokémon's horn,\n"
            "the move will punch a hole right\n"
            "through a thick metal sheet."),
        FRONT_PIC(RapidashGalarian, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RapidashGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(RapidashGalarian, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(RapidashGalarian),
        ICON(RapidashGalarian, 2),
        LEARNSETS(RapidashGalarian),
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PONYTA

#if P_FAMILY_SLOWPOKE
#define SLOWPOKE_MISC_INFO                                                 \
        .baseHP        = 90,                                               \
        .baseAttack    = 65,                                               \
        .baseDefense   = 65,                                               \
        .baseSpeed     = 15,                                               \
        .baseSpAttack  = 40,                                               \
        .baseSpDefense = 40,                                               \
        .catchRate = 190,                                                  \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 63 : 99,             \
        .evYield_HP = 1,                                                   \
        .genderRatio = PERCENT_FEMALE(50),                                 \
        .eggCycles = 20,                                                   \
        .friendship = STANDARD_FRIENDSHIP,                                 \
        .growthRate = GROWTH_MEDIUM_FAST,                                  \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1), \
        .sourceGame = SOURCE_MOF,                                      \
        .speciesName = _("Slowpoke"),                                      \
        .natDexNum = NATIONAL_DEX_PLACEHOLD_LAYLA,                                \
        .categoryName = _("Dopey"),                                        \
        .height = 12,                                                      \
        .weight = 360,                                                     \
        .pokemonScale = 256,                                               \
        .pokemonOffset = 10,                                               \
        .trainerScale = 256,                                               \
        .trainerOffset = 0,                                                \
        FOOTPRINT(Slowpoke)                                                \
        .formSpeciesIdTable = sSlowpokeFormSpeciesIdTable

#define SLOWBRO_MISC_INFO                                                  \
        .catchRate = 75,                                                   \
        .itemRare = ITEM_KINGS_ROCK,                                       \
        .genderRatio = PERCENT_FEMALE(50),                                 \
        .eggCycles = 20,                                                   \
        .friendship = STANDARD_FRIENDSHIP,                                 \
        .growthRate = GROWTH_MEDIUM_FAST,                                  \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1), \
        .sourceGame = SOURCE_MOF,                                      \
        .speciesName = _("Slowbro"),                                       \
        .cryId = CRY_PORYGON,                                              \
        .natDexNum = NATIONAL_DEX_CHIBI_YOUMU,                                 \
        .categoryName = _("Hermit Crab"),                                  \
        FOOTPRINT(Slowbro)                                                 \
        .formSpeciesIdTable = sSlowbroFormSpeciesIdTable

#define SLOWKING_MISC_INFO                                                 \
        .catchRate = 70,                                                   \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 164,           \
        .genderRatio = PERCENT_FEMALE(50),                                 \
        .eggCycles = 20,                                                   \
        .friendship = STANDARD_FRIENDSHIP,                                 \
        .growthRate = GROWTH_MEDIUM_FAST,                                  \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1), \
        .sourceGame = SOURCE_MOF,                                      \
        .speciesName = _("Slowking"),                                      \
        .cryId = CRY_PORYGON,                                             \
        .natDexNum = NATIONAL_DEX_SLOWKING,                                \
        .weight = 795,                                                     \
        FOOTPRINT(Slowking)                                                \
        .formSpeciesIdTable = sSlowkingFormSpeciesIdTable

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SLOWKING] =
    {
        SLOWKING_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_WATER, TYPE_REASON),
        .evYield_SpDefense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .categoryName = _("Royal"),
        .height = 20,
        .description = COMPOUND_STRING(
            "It undertakes research every day to\n"
            "solve the mysteries of the world.\n"
            "However, it apparently forgets everything\n"
            "if the Shellder on its head comes off."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        FRONT_PIC(Slowking, 48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Slowking,
        .frontAnimId = ANIM_SHRINK_GROW,
        BACK_PIC(Slowking, 56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Slowking),
        ICON(Slowking, 0),
        LEARNSETS(Slowking),
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_MEGA_EVOLUTIONS
    [SPECIES_SLOWBRO_MEGA] =
    {
        SLOWBRO_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 180,
        .baseSpeed     = 30,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER, TYPE_REASON),
        .expYield = 207,
        .evYield_Defense = 2,
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR },
        .height = 20,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "When bathed in the energy of Mega\n"
            "Evolution, Shellder converts into\n"
            "impregnable armor. There is virtually no\n"
            "change in Slowpoke."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(SlowbroMega, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SlowbroMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SlowbroMega, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(SlowbroMega),
        ICON(SlowbroMega, 0),
        LEARNSETS(Slowbro),
        .formChangeTable = sSlowbroFormChangeTable,
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GALARIAN_FORMS
    [SPECIES_SLOWPOKE_GALARIAN] =
    {
        SLOWPOKE_MISC_INFO,
        .types = MON_TYPES(TYPE_REASON),
        .abilities = { ABILITY_GLUTTONY, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .cryId = CRY_PORYGON,
        .description = COMPOUND_STRING(
            "Although it is normally zoned out, its\n"
            "expression abruptly sharpens on occasion.\n"
            "The cause seems to lie in Slowpoke's diet,\n"
            "which also give their tails a spicy flavor."),
        FRONT_PIC(SlowpokeGalarian, 56, 32),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_SlowpokeGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SlowpokeGalarian, 64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SlowpokeGalarian),
        ICON(SlowpokeGalarian, 1),
        LEARNSETS(SlowpokeGalarian),
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_GALARICA_CUFF, SPECIES_SLOWBRO_GALARIAN},
                                {EVO_ITEM, ITEM_GALARICA_WREATH, SPECIES_SLOWKING_GALARIAN}),
    },

    [SPECIES_SLOWBRO_GALARIAN] =
    {
        SLOWBRO_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 100,
        .baseDefense   = 95,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_MIASMA, TYPE_REASON),
        .expYield = 172,
        .evYield_Attack = 2,
        .abilities = { ABILITY_QUICK_DRAW, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .height = 16,
        .weight = 705,
        .description = COMPOUND_STRING(
            "A Shellder bite set off a chemical reaction\n"
            "with the spices inside Slowbro's body,\n"
            "causing Slowbro to become a\n"
            "Poison-type Pokémon."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(SlowbroGalarian, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SlowbroGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SlowbroGalarian, 64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SlowbroGalarian),
        ICON(SlowbroGalarian, 0),
        LEARNSETS(SlowbroGalarian),
        .isGalarianForm = TRUE,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SLOWKING_GALARIAN] =
    {
        SLOWKING_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 110,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_MIASMA, TYPE_REASON),
        .evYield_SpDefense = 2,
        .abilities = { ABILITY_CURIOUS_MEDICINE, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .categoryName = _("Hexpert"),
        .height = 18,
        .description = COMPOUND_STRING(
            "A combination of toxins and the shock of\n"
            "evolving has increased Shellder's\n"
            "intelligence to the point that Shellder\n"
            "now controls Slowking."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        FRONT_PIC(SlowkingGalarian, 48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SlowkingGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SlowkingGalarian, 56, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SlowkingGalarian),
        ICON(SlowkingGalarian, 2),
        LEARNSETS(SlowkingGalarian),
        .isGalarianForm = TRUE,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_SLOWPOKE

#if P_FAMILY_MAGNEMITE
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAGNEZONE] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 115,
        .baseSpeed     = 60,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_WIND, TYPE_STEEL),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 211,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_MAID_UNIFORM,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Magnezone"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MAGNEZONE,
        .categoryName = _("Magnet Area"),
        .height = 12,
        .weight = 1800,
        .description = COMPOUND_STRING(
            "As it zooms through the sky, this\n"
            "Pokémon seems to be receiving signals\n"
            "of unknown origin, while transmitting its\n"
            "own signals of unknown purpose."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magnezone, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Magnezone,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 4,
        BACK_PIC(Magnezone, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Magnezone),
        ICON(Magnezone, 0),
        FOOTPRINT(Magnezone)
        LEARNSETS(Magnezone),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGNEMITE

#if P_FAMILY_FARFETCHD
#define FARFETCHD_ATTACK (P_UPDATED_STATS >= GEN_7 ? 90 : 65)

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define FARFETCHD_EXP_YIELD 132
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define FARFETCHD_EXP_YIELD 123
#else
    #define FARFETCHD_EXP_YIELD 94
#endif

#define FARFETCHD_MISC_INFO                                            \
        .catchRate = 45,                                               \
        .expYield = FARFETCHD_EXP_YIELD,                               \
        .evYield_Attack = 1,                                           \
        .genderRatio = PERCENT_FEMALE(50),                             \
        .eggCycles = 20,                                               \
        .friendship = STANDARD_FRIENDSHIP,                             \
        .growthRate = GROWTH_MEDIUM_FAST,                              \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FIELD),\
        .sourceGame = SOURCE_EOSD,                                 \
        .speciesName = _("Farfetch'd"),                                \
        .cryId = CRY_PORYGON,                                        \
        .natDexNum = NATIONAL_DEX_SPEED_YOUMU,                           \
        .categoryName = _("Wild Duck"),                                \
        FOOTPRINT(Farfetchd)                                           \
        .formSpeciesIdTable = sFarfetchdFormSpeciesIdTable

#if P_GALARIAN_FORMS
    [SPECIES_FARFETCHD_GALARIAN] =
    {
        FARFETCHD_MISC_INFO,
        .baseHP        = 52,
        .baseAttack    = FARFETCHD_ATTACK + 5,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 58,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_DREAM),
        .itemCommon = ITEM_LEEK,
        .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY },
        .height = 8,
        .weight = 420,
        .description = COMPOUND_STRING(
            "The stalks of leeks are thicker and longer\n"
            "in the Galar region. Brave Farfetch'd\n"
            "warriors that adapted to these stalks\n"
            "took on a unique form."),
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(FarfetchdGalarian, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_FarfetchdGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(FarfetchdGalarian, 64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(FarfetchdGalarian),
        ICON(FarfetchdGalarian, 1),
        LEARNSETS(FarfetchdGalarian),
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_CRITICAL_HITS, 3, SPECIES_SIRFETCHD}),
    },

    [SPECIES_SIRFETCHD] =
    {
        .baseHP        = 62,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 65,
        .baseSpAttack  = 68,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_DREAM),
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack = 2,
        .itemRare = ITEM_LEEK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FIELD),
        .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Sirfetch'd"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SIRFETCHD,
        .categoryName = _("Wild Duck"),
        .height = 8,
        .weight = 1170,
        .description = COMPOUND_STRING(
            "Only Farfetch'd that have survived many\n"
            "battles can attain this evolution. When\n"
            "this Pokémon's leek withers, it will\n"
            "retire from combat."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Sirfetchd, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sirfetchd,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Sirfetchd, 64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Sirfetchd),
        ICON(Sirfetchd, 1),
        FOOTPRINT(Sirfetchd)
        LEARNSETS(Sirfetchd),
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_FARFETCHD

#if P_FAMILY_DODUO
    [SPECIES_DODUO] =
    {
        .baseHP        = 35,
        .baseAttack    = 85,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ILLUSION, TYPE_FLYING),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 96,
        .evYield_Attack = 1,
        .itemRare = ITEM_STEWARDESS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_EARLY_BIRD, ABILITY_TANGLED_FEET },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Doduo"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DODUO,
        .categoryName = _("Twin Bird"),
        .height = 14,
        .weight = 392,
        .description = COMPOUND_STRING(
            "Even while eating or sleeping, one of the\n"
            "heads remains always vigilant for any sign\n"
            "of danger. When threatened, it flees at\n"
            "over 60 miles per hour."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
        FRONT_PIC(Doduo, 64, 56),
        FRONT_PIC_FEMALE(Doduo, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Doduo,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        BACK_PIC(Doduo, 64, 56),
        BACK_PIC_FEMALE(Doduo, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Doduo),
        ICON(Doduo, 2),
        FOOTPRINT(Doduo)
        LEARNSETS(Doduo),
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_DODRIO}),
    },

    [SPECIES_DODRIO] =
    {
        .baseHP        = 60,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 110 : 100,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ILLUSION, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 165,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 161,
    #else
        .expYield = 158,
    #endif
        .evYield_Attack = 2,
        .itemRare = ITEM_STEWARDESS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_EARLY_BIRD, ABILITY_TANGLED_FEET },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Dodrio"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DODRIO,
        .categoryName = _("Triple Bird"),
        .height = 18,
        .weight = 852,
        .description = COMPOUND_STRING(
            "A peculiar Pokémon species with three\n"
            "heads. It vigorously races across grassy\n"
            "plains even in arid seasons with little\n"
            "rainfall."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
        FRONT_PIC(Dodrio, 64, 64),
        FRONT_PIC_FEMALE(Dodrio, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Dodrio,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Dodrio, 64, 64),
        BACK_PIC_FEMALE(Dodrio, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Dodrio),
        ICON(Dodrio, 2),
        FOOTPRINT(Dodrio)
        LEARNSETS(Dodrio),
    },
#endif //P_FAMILY_DODUO

#if P_FAMILY_SEEL
    [SPECIES_SEEL] =
    {
        .baseHP        = 65,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 100,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_HYDRATION, ABILITY_ICE_BODY },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Seel"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SEEL,
        .categoryName = _("Sea Lion"),
        .height = 11,
        .weight = 900,
        .description = COMPOUND_STRING(
            "Seel hunt for prey in frigid, ice-covered\n"
            "seas. When it needs to breathe, it punches\n"
            "a hole through the ice with the sharply\n"
            "protruding section of its head."),
        .pokemonScale = 297,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Seel, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Seel,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Seel, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Seel),
        ICON(Seel, 0),
        FOOTPRINT(Seel)
        LEARNSETS(Seel),
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_DEWGONG}),
    },

    [SPECIES_DEWGONG] =
    {
        .baseHP        = 90,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_WATER, TYPE_ICE),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 176,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_HYDRATION, ABILITY_ICE_BODY },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Dewgong"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DEWGONG,
        .categoryName = _("Sea Lion"),
        .height = 17,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "It loves to snooze on bitterly cold ice.\n"
            "The sight of this Pokémon sleeping on\n"
            "a glacier was mistakenly thought to be\n"
            "a mermaid by a mariner long ago."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 275,
        .trainerOffset = 0,
        FRONT_PIC(Dewgong, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Dewgong,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Dewgong, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Dewgong),
        ICON(Dewgong, 2),
        FOOTPRINT(Dewgong)
        LEARNSETS(Dewgong),
    },
#endif //P_FAMILY_SEEL

#if P_FAMILY_GRIMER
#define GRIMER_FAMILY_MISC_INFO                                     \
        .itemRare = ITEM_BLACK_SLUDGE,                              \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 20,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_FAST,                           \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS)

#define GRIMER_MISC_INFO                                        \
        .baseHP        = 80,                                    \
        .baseAttack    = 80,                                    \
        .baseDefense   = 50,                                    \
        .baseSpeed     = 25,                                    \
        .baseSpAttack  = 40,                                    \
        .baseSpDefense = 50,                                    \
        .catchRate = 190,                                       \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 90,  \
        .evYield_HP = 1,                                        \
        .speciesName = _("Grimer"),                             \
        .cryId = CRY_PORYGON,                                    \
        .natDexNum = NATIONAL_DEX_GRIMER,                       \
        .categoryName = _("Sludge"),                            \
        FOOTPRINT(Grimer)                                       \
        .formSpeciesIdTable = sGrimerFormSpeciesIdTable,        \
        GRIMER_FAMILY_MISC_INFO

#define MUK_MISC_INFO                                           \
        .baseHP        = 105,                                   \
        .baseAttack    = 105,                                   \
        .baseDefense   = 75,                                    \
        .baseSpeed     = 50,                                    \
        .baseSpAttack  = 65,                                    \
        .baseSpDefense = 100,                                   \
        .catchRate = 75,                                        \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 157,\
        .evYield_HP = 1,                                        \
        .evYield_Attack = 1,                                    \
        .speciesName = _("Muk"),                                \
        .cryId = CRY_PORYGON,                                       \
        .natDexNum = NATIONAL_DEX_MUK,                          \
        .categoryName = _("Sludge"),                            \
        FOOTPRINT(Muk)                                          \
        .formSpeciesIdTable = sMukFormSpeciesIdTable,           \
        GRIMER_FAMILY_MISC_INFO

#define KANTONIAN_GRIMER_FAMILY_INFO                                                \
        .types = MON_TYPES(TYPE_MIASMA),                                            \
        .abilities = { ABILITY_JEALOUSY, ABILITY_COLLECTOR, ABILITY_POISON_TOUCH }, \
        .sourceGame = SOURCE_PCB

    [SPECIES_GRIMER] =
    {
        KANTONIAN_GRIMER_FAMILY_INFO,
        GRIMER_MISC_INFO,
        .height = 9,
        .weight = 300,
        .description = COMPOUND_STRING(
            "Born from polluted sludge in the sea,\n"
            "Grimer's favorite food is anything filthy.\n"
            "They feed on wastewater pumped out from\n"
            "factories."),
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Grimer, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Grimer,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Grimer, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Grimer),
        ICON(Grimer, 2),
        LEARNSETS(Grimer),
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_MUK}),
    },

    [SPECIES_MUK] =
    {
        KANTONIAN_GRIMER_FAMILY_INFO,
        MUK_MISC_INFO,
        .height = 12,
        .weight = 300,
        .description = COMPOUND_STRING(
            "It prefers warm and humid habitats.\n"
            "In the summertime, the toxic substances\n"
            "in its body intensify, making Muk reek like\n"
            "putrid kitchen garbage."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Muk, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Muk,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 45,
        BACK_PIC(Muk, 64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_STRETCH,
        PALETTES(Muk),
        ICON(Muk, 2),
        LEARNSETS(Muk),
    },

#if P_ALOLAN_FORMS
#define ALOLAN_GRIMER_FAMILY_INFO                                                           \
        .types = MON_TYPES(TYPE_MIASMA, TYPE_DARK),                                         \
        .abilities = { ABILITY_POISON_TOUCH, ABILITY_GLUTTONY, ABILITY_POWER_OF_ALCHEMY },  \
        .sourceGame = SOURCE_LLS,                                                      \
        .isSannianForm = TRUE

    [SPECIES_GRIMER_ALOLAN] =
    {
        ALOLAN_GRIMER_FAMILY_INFO,
        GRIMER_MISC_INFO,
        .height = 7,
        .weight = 420,
        .description = COMPOUND_STRING(
            "There are a hundred or so of them living\n"
            "in Alola's waste-disposal site. They're all\n"
            "hard workers who eat a lot of trash. Grimer\n"
            "seems to relish any and all kinds of trash."),
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(GrimerAlolan, 56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_GrimerAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GrimerAlolan, 64, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GrimerAlolan),
        ICON(GrimerAlolan, 1),
        LEARNSETS(GrimerAlolan),
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_MUK_ALOLAN}),
    },

    [SPECIES_MUK_ALOLAN] =
    {
        MUK_MISC_INFO,
        ALOLAN_GRIMER_FAMILY_INFO,
        .noFlip = TRUE,
        .height = 10,
        .weight = 520,
        .description = COMPOUND_STRING(
            "While it's unexpectedly quiet and friendly,\n"
            "if it's not fed any trash for a while,,\n"
            "it will smash its Trainer's furnishings,\n"
            "and eat up the fragments."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MukAlolan, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_MukAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MukAlolan, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MukAlolan),
        ICON(MukAlolan, 0),
        LEARNSETS(MukAlolan),
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GRIMER

#if P_FAMILY_SHELLDER
    [SPECIES_SHELLDER] =
    {
        .baseHP        = 30,
        .baseAttack    = 65,
        .baseDefense   = 100,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 61 : 97,
        .evYield_Defense = 1,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_SKILL_LINK, ABILITY_OVERCOAT },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Shellder"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SHELLDER,
        .categoryName = _("Bivalve"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "At night, it burrows a hole in the seafloor\n"
            "with its broad tongue to make a place to\n"
            "sleep. While asleep, it closes its shell,\n"
            "but leaves its tongue hanging out."),
        .pokemonScale = 675,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shellder, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Shellder,
        .frontAnimId = ANIM_TWIST,
        .frontAnimDelay = 20,
        BACK_PIC(Shellder, 48, 24),
        .backPicYOffset = 21,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Shellder),
        ICON(Shellder, 2),
        FOOTPRINT(Shellder)
        LEARNSETS(Shellder),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_GUARD_HEART, SPECIES_CLOYSTER}),
    },

    [SPECIES_CLOYSTER] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 180,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_WATER, TYPE_ICE),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 203,
        .evYield_Defense = 2,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_SKILL_LINK, ABILITY_OVERCOAT },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Cloyster"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CLOYSTER,
        .categoryName = _("Bivalve"),
        .height = 15,
        .weight = 1325,
        .description = COMPOUND_STRING(
            "It swims in the sea by swallowing water,\n"
            "then jetting it out toward the rear.\n"
            "The Cloyster shoots spikes from its\n"
            "shell using the same system."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 269,
        .trainerOffset = 1,
        FRONT_PIC(Cloyster, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Cloyster,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Cloyster, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Cloyster),
        ICON(Cloyster, 2),
        FOOTPRINT(Cloyster)
        LEARNSETS(Cloyster),
    },
#endif //P_FAMILY_SHELLDER

#if P_FAMILY_GASTLY
    [SPECIES_GASTLY] =
    {
        .baseHP        = 30,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_GHOST, TYPE_MIASMA),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 95,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Gastly"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GASTLY,
        .categoryName = _("Gas"),
        .height = 13,
        .weight = 1,
        .description = COMPOUND_STRING(
            "When exposed to a strong wind, a Gastly's\n"
            "gaseous body quickly dwindles away.\n"
            "They cluster under the eaves of houses\n"
            "to escape the ravages of wind."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Gastly, 64, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Gastly,
        .frontAnimId = ANIM_SHRINK_GROW,
        .enemyMonElevation = 13,
        BACK_PIC(Gastly, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Gastly),
        ICON(Gastly, 2),
        FOOTPRINT(Gastly)
        LEARNSETS(Gastly),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_HAUNTER}),
    },

    [SPECIES_HAUNTER] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 115,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_MIASMA),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 126,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Haunter"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_HAUNTER,
        .categoryName = _("Gas"),
        .height = 16,
        .weight = 1,
        .description = COMPOUND_STRING(
            "If a Haunter beckons you while it is\n"
            "floating in darkness, don't approach it.\n"
            "This Pokémon will try to lick you with its\n"
            "tongue and steal your life away."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(Haunter, 64, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Haunter,
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .frontAnimDelay = 23,
        .enemyMonElevation = 14,
        BACK_PIC(Haunter, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Haunter),
        ICON(Haunter, 2),
        FOOTPRINT(Haunter)
        LEARNSETS(Haunter),
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GENGAR},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GENGAR}),
    },

#if P_UPDATED_ABILITIES >= GEN_7
#define GENGAR_ABILITIES {ABILITY_CURSED_BODY, ABILITY_NONE}
#else
#define GENGAR_ABILITIES {ABILITY_LEVITATE, ABILITY_NONE}
#endif

#define GENGAR_MISC_INFO                                \
        .types = MON_TYPES(TYPE_GHOST, TYPE_MIASMA),    \
        .catchRate = 45,                                \
        .evYield_SpAttack = 3,                          \
        .genderRatio = PERCENT_FEMALE(50),              \
        .eggCycles = 20,                                \
        .friendship = STANDARD_FRIENDSHIP,              \
        .growthRate = GROWTH_MEDIUM_SLOW,               \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),\
        .sourceGame = SOURCE_PCB,                 \
        .speciesName = _("Gengar"),                     \
        .natDexNum = NATIONAL_DEX_GENGAR,               \
        .categoryName = _("Shadow"),                    \
        FOOTPRINT(Gengar)                               \
        LEARNSETS(Gengar),                              \
        .formSpeciesIdTable = sGengarFormSpeciesIdTable,\
        .formChangeTable = sGengarFormChangeTable

    [SPECIES_GENGAR] =
    {
        GENGAR_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 75,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 250,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 225,
    #else
        .expYield = 190,
    #endif
        .abilities = GENGAR_ABILITIES,
        .height = 15,
        .weight = 405,
        .description = COMPOUND_STRING(
            "Deep in the night, your shadow cast by\n"
            "a streetlight may suddenly overtake you.\n"
            "It is actually a Gengar running past\n"
            "you, pretending to be your shadow."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        FRONT_PIC(Gengar, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Gengar,
        .frontAnimId = ANIM_GROW_IN_STAGES,
        BACK_PIC(Gengar, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Gengar),
        ICON(Gengar, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GENGAR_MEGA] =
    {
        GENGAR_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 170,
        .baseSpDefense = 95,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG },
        .isMegaEvolution = TRUE,
        .height = 14,
        .weight = 405,
        .description = COMPOUND_STRING(
            "Gengar's relationships are warped. It\n"
            "tries to take the lives of anyone and\n"
            "everyone. It will even try to curse the\n"
            "Trainer who is its master!"),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        FRONT_PIC(GengarMega, 64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_GengarMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GengarMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(GengarMega),
        ICON(GengarMega, 2),
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_GENGAR_GIGANTAMAX] =
    {
        GENGAR_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 75,
        .expYield = 225,
        .abilities = GENGAR_ABILITIES,
        .isGigantamax = TRUE,
        .height = 200,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Rumor has it that its gigantic\n"
            "mouth leads not into its body, filled\n"
            "with cursed energy, but instead\n"
            "directly to the afterlife."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        FRONT_PIC(GengarGigantamax, 64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_GengarGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GengarGigantamax, 64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GengarGigantamax),
        ICON(GengarGigantamax, 2),
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GASTLY

#if P_FAMILY_ONIX
    [SPECIES_ONIX] =
    {
        .baseHP        = 35,
        .baseAttack    = 45,
        .baseDefense   = 160,
        .baseSpeed     = 70,
        .baseSpAttack  = 30,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_BEAST, TYPE_EARTH),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 77 : 108,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_WEAK_ARMOR },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Onix"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ONIX,
        .categoryName = _("Rock Snake"),
        .height = 88,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "There is a magnet in its brain that\n"
            "prevents an Onix from losing direction\n"
            "while tunneling. As it grows older, its body\n"
            "becomes steadily rounder and smoother."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
        FRONT_PIC(Onix, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Onix,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Onix, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Onix),
        ICON(Onix, 2),
        FOOTPRINT(Onix)
        LEARNSETS(Onix),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_MAID_UNIFORM, SPECIES_STEELIX},
                                {EVO_ITEM, ITEM_MAID_UNIFORM, SPECIES_STEELIX}),
    },

#if P_GEN_2_CROSS_EVOS
#define STEELIX_MISC_INFO                                       \
        .types = MON_TYPES(TYPE_STEEL, TYPE_EARTH),            \
        .catchRate = 25,                                        \
        .evYield_Defense = 2,                                   \
        .itemRare = ITEM_MAID_UNIFORM,                            \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 25,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),         \
        .sourceGame = SOURCE_IN,                           \
        .speciesName = _("Steelix"),                            \
        .natDexNum = NATIONAL_DEX_STEELIX,                      \
        .categoryName = _("Iron Snake"),                        \
        FOOTPRINT(Steelix)                                      \
        LEARNSETS(Steelix),                                     \
        .formSpeciesIdTable = sSteelixFormSpeciesIdTable,       \
        .formChangeTable = sSteelixFormChangeTable

    [SPECIES_STEELIX] =
    {
        STEELIX_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 85,
        .baseDefense   = 200,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 179 : 196,
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SHEER_FORCE },
        .cryId = CRY_PORYGON,
        .height = 92,
        .weight = 4000,
        .description = COMPOUND_STRING(
            "Steelix live even further underground\n"
            "than Onix. This Pokémon is known to dig\n"
            "toward the earth's core, reaching a depth\n"
            "of over six-tenths of a mile underground."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
        FRONT_PIC(Steelix, 64, 64),
        FRONT_PIC_FEMALE(Steelix, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Steelix,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 45,
        BACK_PIC(Steelix, 64, 64),
        BACK_PIC_FEMALE(Steelix, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Steelix),
        ICON(Steelix, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_STEELIX_MEGA] =
    {
        STEELIX_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 230,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .expYield = 214,
        .abilities = { ABILITY_SAND_FORCE, ABILITY_SAND_FORCE, ABILITY_SAND_FORCE },
        .cryId = CRY_PORYGON,
        .height = 105,
        .weight = 7400,
        .description = COMPOUND_STRING(
            "The cells within its body, crystallized by\n"
            "the energy produced from Mega Evolution,\n"
            "are stronger than any mineral and able\n"
            "to withstand any temperature."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
        FRONT_PIC(SteelixMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SteelixMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SteelixMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(SteelixMega),
        ICON(SteelixMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ONIX

#if P_FAMILY_DROWZEE
    [SPECIES_DROWZEE] =
    {
        .baseHP        = 60,
        .baseAttack    = 48,
        .baseDefense   = 45,
        .baseSpeed     = 42,
        .baseSpAttack  = 43,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 102,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_INSOMNIA, ABILITY_FOREWARN, ABILITY_INNER_FOCUS },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Drowzee"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DROWZEE,
        .categoryName = _("Hypnosis"),
        .height = 10,
        .weight = 324,
        .description = COMPOUND_STRING(
            "If your nose becomes itchy while you are\n"
            "sleeping, it's a sure sign that a Drowzee is\n"
            "standing above your pillow and trying to\n"
            "eat your dream through your nostrils."),
        .pokemonScale = 274,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Drowzee, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Drowzee,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 48,
        BACK_PIC(Drowzee, 56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Drowzee),
        ICON(Drowzee, 2),
        FOOTPRINT(Drowzee)
        LEARNSETS(Drowzee),
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_HYPNO}),
    },

    [SPECIES_HYPNO] =
    {
        .baseHP        = 85,
        .baseAttack    = 73,
        .baseDefense   = 70,
        .baseSpeed     = 67,
        .baseSpAttack  = 73,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 169 : 165,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_INSOMNIA, ABILITY_FOREWARN, ABILITY_INNER_FOCUS },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Hypno"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_HYPNO,
        .categoryName = _("Hypnosis"),
        .height = 16,
        .weight = 756,
        .description = COMPOUND_STRING(
            "The arcing movement and glitter of the\n"
            "pendulum in a Hypno's hand lull the foe\n"
            "into deep hypnosis. While searching for\n"
            "prey, it polishes the pendulum."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Hypno, 64, 64),
        FRONT_PIC_FEMALE(Hypno, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Hypno,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 40,
        BACK_PIC(Hypno, 64, 56),
        BACK_PIC_FEMALE(Hypno, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Hypno),
        ICON(Hypno, 2),
        FOOTPRINT(Hypno)
        LEARNSETS(Hypno),
    },
#endif //P_FAMILY_DROWZEE

#if P_FAMILY_KRABBY
    [SPECIES_KRABBY] =
    {
        .baseHP        = 30,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 50,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 115,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_HIGH_STRENGTH, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Krabby"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_KRABBY,
        .categoryName = _("River Crab"),
        .height = 4,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Krabby live in holes dug into beaches.\n"
            "On sandy shores with little in the way\n"
            "of food, they can be seen squabbling with\n"
            "each other over territory."),
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Krabby, 64, 48),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Krabby,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Krabby, 56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Krabby),
        ICON(Krabby, 0),
        FOOTPRINT(Krabby)
        LEARNSETS(Krabby),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_KINGLER}),
    },

#define KINGLER_MISC_INFO                                                               \
        .baseHP        = 55,                                                            \
        .baseAttack    = 130,                                                           \
        .baseDefense   = 115,                                                           \
        .baseSpeed     = 75,                                                            \
        .baseSpAttack  = 50,                                                            \
        .baseSpDefense = 50,                                                            \
        .types = MON_TYPES(TYPE_WATER),                                                 \
        .catchRate = 60,                                                                \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 206,                        \
        .evYield_Attack = 2,                                                            \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 20,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),                                 \
        .abilities = { ABILITY_HIGH_STRENGTH, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE },\
        .sourceGame = SOURCE_HRTP,                                                    \
        .noFlip = TRUE,                                                                 \
        .speciesName = _("Kingler"),                                                    \
        .cryId = CRY_PORYGON,                                                           \
        .natDexNum = NATIONAL_DEX_KINGLER,                                              \
        .categoryName = _("Pincer"),                                                    \
        FOOTPRINT(Kingler)                                                              \
        LEARNSETS(Kingler),                                                             \
        .formSpeciesIdTable = sKinglerFormSpeciesIdTable,                               \
        .formChangeTable = sKinglerFormChangeTable

    [SPECIES_KINGLER] =
    {
        KINGLER_MISC_INFO,
        .height = 13,
        .weight = 600,
        .description = COMPOUND_STRING(
            "It waves its huge, oversized claw in the\n"
            "air to communicate with others.\n"
            "But since the claw is so heavy, this\n"
            "Pokémon quickly tires."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kingler, 64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Kingler,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = 4,
        BACK_PIC(Kingler, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Kingler),
        ICON(Kingler, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_KINGLER_GIGANTAMAX] =
    {
        KINGLER_MISC_INFO,
        .height = 190,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The flow of Gigantamax energy has\n"
            "spurred this Pokémon's left pincer\n"
            "to grow to an enormous size. That\n"
            "claw can pulverize anything."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(KinglerGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KinglerGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(KinglerGigantamax, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(KinglerGigantamax),
        ICON(KinglerGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KRABBY

#if P_FAMILY_VOLTORB
#define VOLTORB_FAMILY_MISC_INFO                                                \
        .genderRatio = MON_GENDERLESS,                                          \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),                         \
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH }, \
        .sourceGame = SOURCE_HRTP

#define VOLTORB_MISC_INFO                                       \
        .baseHP        = 40,                                    \
        .baseAttack    = 30,                                    \
        .baseDefense   = 50,                                    \
        .baseSpeed     = 100,                                   \
        .baseSpAttack  = 55,                                    \
        .baseSpDefense = 55,                                    \
        .catchRate = 190,                                       \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 103, \
        .evYield_Speed = 1,                                     \
        .speciesName = _("Voltorb"),                            \
        .cryId = CRY_PORYGON,                                   \
        .natDexNum = NATIONAL_DEX_VOLTORB,                      \
        .height = 5,                                            \
        .pokemonScale = 364,                                    \
        .pokemonOffset = -8,                                    \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        FOOTPRINT(Voltorb)                                      \
        .formSpeciesIdTable = sVoltorbFormSpeciesIdTable,       \
        VOLTORB_FAMILY_MISC_INFO

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define ELECTRODE_EXP_YIELD 172
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define ELECTRODE_EXP_YIELD 168
#else
    #define ELECTRODE_EXP_YIELD 150
#endif

#define ELECTRODE_MISC_INFO                                     \
        .baseHP        = 60,                                    \
        .baseAttack    = 50,                                    \
        .baseDefense   = 70,                                    \
        .baseSpAttack  = 80,                                    \
        .baseSpDefense = 80,                                    \
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 150 : 140,  \
        .catchRate = 60,                                        \
        .expYield = ELECTRODE_EXP_YIELD,                        \
        .evYield_Speed = 2,                                     \
        .speciesName = _("Electrode"),                          \
        .cryId = CRY_PORYGON,                                 \
        .natDexNum = NATIONAL_DEX_ELECTRODE,                    \
        .height = 12,                                           \
        .pokemonScale = 256,                                    \
        .pokemonOffset = 0,                                     \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        FOOTPRINT(Electrode)                                    \
        .formSpeciesIdTable = sElectrodeFormSpeciesIdTable,     \
        VOLTORB_FAMILY_MISC_INFO

    [SPECIES_VOLTORB] =
    {
        VOLTORB_MISC_INFO,
        .types = MON_TYPES(TYPE_WIND),
        .categoryName = _("Ball"),
        .weight = 104,
        .description = COMPOUND_STRING(
            "It bears an uncanny and unexplained\n"
            "resemblance to a Poké Ball. Because it\n"
            "explodes at the slightest shock, even\n"
            "veteran Trainers treat it with caution."),
        FRONT_PIC(Voltorb, 32, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Voltorb,
        .frontAnimId = ANIM_SWING_CONCAVE,
        BACK_PIC(Voltorb, 48, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Voltorb),
        ICON(Voltorb, 0),
        LEARNSETS(Voltorb),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ELECTRODE}),
    },

    [SPECIES_ELECTRODE] =
    {
        ELECTRODE_MISC_INFO,
        .types = MON_TYPES(TYPE_WIND),
        .categoryName = _("Ball"),
        .weight = 666,
        .description = COMPOUND_STRING(
            "They appear in great numbers at electric\n"
            "power plants. Because they feed on\n"
            "electricity, they cause massive and\n"
            "chaotic blackouts in nearby cities."),
        FRONT_PIC(Electrode, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Electrode,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_SLOW,
        BACK_PIC(Electrode, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Electrode),
        ICON(Electrode, 0),
        LEARNSETS(Electrode),
    },

#if P_HISUIAN_FORMS
    [SPECIES_VOLTORB_HISUIAN] =
    {
        VOLTORB_MISC_INFO,
        .types = MON_TYPES(TYPE_WIND, TYPE_NATURE),
        .categoryName = _("Sphere"),
        .weight = 130,
        .description = COMPOUND_STRING(
            "It esembles an ancient Poké Ball design.\n"
            "When excited, it discharges the electric\n"
            "current it has stored in its belly, then\n"
            "lets out a great, uproarious laugh."),
        FRONT_PIC(VoltorbHisuian, 32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_VoltorbHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(VoltorbHisuian, 48, 32),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(VoltorbHisuian),
        ICON(VoltorbHisuian, 0),
        LEARNSETS(VoltorbHisuian),
        .isHisuianForm = TRUE,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_TECH_HEART, SPECIES_ELECTRODE_HISUIAN}),
    },

    [SPECIES_ELECTRODE_HISUIAN] =
    {
        ELECTRODE_MISC_INFO,
        .types = MON_TYPES(TYPE_WIND, TYPE_NATURE),
        .categoryName = _("Sphere"),
        .weight = 710,
        .description = COMPOUND_STRING(
            "The tissue on the surface of its body is\n"
            "similar in composition to an Apricorn.\n"
            "When irritated, it lets loose an electric\n"
            "current equal to 20 lightning bolts."),
        FRONT_PIC(ElectrodeHisuian, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_ElectrodeHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ElectrodeHisuian, 64, 40),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ElectrodeHisuian),
        ICON(ElectrodeHisuian, 1),
        LEARNSETS(ElectrodeHisuian),
        .isHisuianForm = TRUE,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_VOLTORB

#if P_FAMILY_EXEGGCUTE
    [SPECIES_EXEGGCUTE] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 80,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_NATURE, TYPE_REASON),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 98,
        .evYield_Defense = 1,
        .itemRare = ITEM_PSYCHIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HARVEST },
        .sourceGame = SOURCE_MOF,
        .speciesName = _("Exeggcute"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_EXEGGCUTE,
        .categoryName = _("Egg"),
        .height = 4,
        .weight = 25,
        .description = COMPOUND_STRING(
            "It consists of six eggs that care for each\n"
            "other. The eggs attract each other and\n"
            "spin around. When cracks increasingly\n"
            "appear, it is close to evolution."),
        .pokemonScale = 489,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Exeggcute, 56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Exeggcute,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Exeggcute, 64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Exeggcute),
        ICON(Exeggcute, 0),
        FOOTPRINT(Exeggcute)
        LEARNSETS(Exeggcute),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_TECH_HEART, SPECIES_EXEGGUTOR},
                                {EVO_NONE, 0, SPECIES_EXEGGUTOR_ALOLAN}),
    },

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define EXEGGUTOR_EXP_YIELD 186
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define EXEGGUTOR_EXP_YIELD 182
#else
    #define EXEGGUTOR_EXP_YIELD 212
#endif

#define EXEGGUTOR_MISC_INFO                                 \
        .catchRate = 45,                                    \
        .expYield = EXEGGUTOR_EXP_YIELD,                    \
        .evYield_SpAttack = 2,                              \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),       \
        .sourceGame = SOURCE_PODD,                     \
        .speciesName = _("Exeggutor"),                      \
        .cryId = CRY_PORYGON,                             \
        .natDexNum = NATIONAL_DEX_EXEGGUTOR,                \
        .categoryName = _("Coconut"),                       \
        FOOTPRINT(Exeggutor)                                \
        .formSpeciesIdTable = sExeggutorFormSpeciesIdTable

#define EXEGGUTOR_SP_DEF (P_UPDATED_STATS >= GEN_7 ? 75 : 65)

    [SPECIES_EXEGGUTOR] =
    {
        EXEGGUTOR_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 55,
        .baseSpAttack  = 125,
        .baseSpDefense = EXEGGUTOR_SP_DEF,
        .types = MON_TYPES(TYPE_NATURE, TYPE_REASON),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HARVEST },
        .height = 20,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Originally from the tropics, Exeggutor's\n"
            "heads grow larger from exposure to strong\n"
            "sunlight. It is said that when the heads\n"
            "fall, they group to form an Exeggcute."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        FRONT_PIC(Exeggutor, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Exeggutor,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Exeggutor, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Exeggutor),
        ICON(Exeggutor, 1),
        LEARNSETS(Exeggutor),
    },

#if P_ALOLAN_FORMS
    [SPECIES_EXEGGUTOR_ALOLAN] =
    {
        EXEGGUTOR_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 125,
        .baseSpDefense = EXEGGUTOR_SP_DEF,
        .types = MON_TYPES(TYPE_NATURE, TYPE_FAITH),
        .abilities = { ABILITY_FRISK, ABILITY_NONE, ABILITY_HARVEST },
        .height = 109,
        .weight = 4156,
        .description = COMPOUND_STRING(
            "Alola is the best environment for\n"
            "this Pokémon. Local people take pride\n"
            "in its appearance, saying this is how\n"
            "Exeggutor ought to look."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        FRONT_PIC(ExeggutorAlolan, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_ExeggutorAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ExeggutorAlolan, 64, 56),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ExeggutorAlolan),
        ICON(ExeggutorAlolan, 1),
        LEARNSETS(ExeggutorAlolan),
        .isSannianForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_EXEGGCUTE

#if P_FAMILY_CUBONE
    [SPECIES_CUBONE] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_EARTH),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 64 : 87,
        .evYield_Defense = 1,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_LIGHTNING_ROD, ABILITY_GUARD_ARMOR },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Cubone"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CUBONE,
        .categoryName = _("Lonely"),
        .height = 4,
        .weight = 65,
        .description = COMPOUND_STRING(
            "It pines for the mother it will never see\n"
            "again. Seeing a likeness of its mother in\n"
            "the full moon, it cries. The stains on the\n"
            "skull it wears are from its tears."),
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cubone, 56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Cubone,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 30,
        BACK_PIC(Cubone, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Cubone),
        ICON(Cubone, 2),
        FOOTPRINT(Cubone)
        LEARNSETS(Cubone),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_MAROWAK},
                                {EVO_NONE, 0, SPECIES_MAROWAK_ALOLAN}),
    },

#define MAROWAK_MISC_INFO                                       \
        .baseHP        = 60,                                    \
        .baseAttack    = 80,                                    \
        .baseDefense   = 110,                                   \
        .baseSpeed     = 45,                                    \
        .baseSpAttack  = 50,                                    \
        .baseSpDefense = 80,                                    \
        .catchRate = 75,                                        \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 149 : 124,\
        .evYield_Defense = 2,                                   \
        .itemRare = ITEM_THICK_CLUB,                            \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),         \
        .speciesName = _("Marowak"),                            \
        .cryId = CRY_PORYGON,                                   \
        .natDexNum = NATIONAL_DEX_MAROWAK,                      \
        .categoryName = _("Bone Keeper"),                       \
        .height = 10,                                           \
        .pokemonScale = 293,                                    \
        .pokemonOffset = 12,                                    \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        FOOTPRINT(Marowak)                                      \
        .formSpeciesIdTable = sMarowakFormSpeciesIdTable

    [SPECIES_MAROWAK] =
    {
        MAROWAK_MISC_INFO,
        .types = MON_TYPES(TYPE_EARTH),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_LIGHTNING_ROD, ABILITY_GUARD_ARMOR },
        .sourceGame = SOURCE_EOSD,
        .weight = 450,
        .description = COMPOUND_STRING(
            "A Marowak is the evolved form of a Cubone\n"
            "that has grown tough by overcoming the\n"
            "grief of losing its mother. Its tempered\n"
            "and hardened spirit is not easily broken."),
        FRONT_PIC(Marowak, 56, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Marowak,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        BACK_PIC(Marowak, 48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Marowak),
        ICON(Marowak, 2),
        LEARNSETS(Marowak),
    },

#if P_ALOLAN_FORMS
    [SPECIES_MAROWAK_ALOLAN] =
    {
        MAROWAK_MISC_INFO,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .abilities = { ABILITY_CURSED_BODY, ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD },
        .sourceGame = SOURCE_PCB,
        .weight = 340,
        .description = COMPOUND_STRING(
            "The cursed flames that light up the bone\n"
            "carried by this Pokémon are said\n"
            "to cause both mental and physical\n"
            "pain that will never fade."),
        FRONT_PIC(MarowakAlolan, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_MarowakAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MarowakAlolan, 56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MarowakAlolan),
        ICON(MarowakAlolan, 1),
        LEARNSETS(MarowakAlolan),
        .isSannianForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_CUBONE

#if P_FAMILY_HITMONS
#if P_GEN_2_CROSS_EVOS
    [SPECIES_TYROGUE] =
    {
        .baseHP        = 35,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_DREAM),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 42 : 91,
        .evYield_Attack = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GUTS, ABILITY_STEADFAST, ABILITY_VITAL_SPIRIT },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Tyrogue"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_TYROGUE,
        .categoryName = _("Scuffle"),
        .height = 7,
        .weight = 210,
        .description = COMPOUND_STRING(
            "Tyrogue become stressed out if they do\n"
            "not get to train every day. When raising\n"
            "this Pokémon, the Trainer must establish\n"
            "a regular training schedule."),
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tyrogue, 40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Tyrogue,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        BACK_PIC(Tyrogue, 48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Tyrogue),
        ICON(Tyrogue, 2),
        FOOTPRINT(Tyrogue)
        LEARNSETS(Tyrogue),
        .evolutions = EVOLUTION({EVO_LEVEL_ATK_LT_DEF, 20, SPECIES_HITMONCHAN},
                                {EVO_LEVEL_ATK_GT_DEF, 20, SPECIES_HITMONLEE},
                                {EVO_LEVEL_ATK_EQ_DEF, 20, SPECIES_HITMONTOP}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_HITMONLEE] =
    {
        .baseHP        = 50,
        .baseAttack    = 120,
        .baseDefense   = 53,
        .baseSpeed     = 87,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_DREAM),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 139,
        .evYield_Attack = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_LIMBER, ABILITY_RECKLESS, ABILITY_UNBURDEN },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Hitmonlee"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_HITMONLEE,
        .categoryName = _("Kicking"),
        .height = 15,
        .weight = 498,
        .description = COMPOUND_STRING(
            "Its legs freely stretch and contract.\n"
            "Using these springlike limbs, it bowls over\n"
            "foes with devastating kicks. After battle,\n"
            "it rubs down its tired legs."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
        FRONT_PIC(Hitmonlee, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Hitmonlee,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Hitmonlee, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Hitmonlee),
        ICON(Hitmonlee, 2),
        FOOTPRINT(Hitmonlee)
        LEARNSETS(Hitmonlee),
    },

    [SPECIES_HITMONCHAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 79,
        .baseSpeed     = 76,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_DREAM),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 140,
        .evYield_SpDefense = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_IRON_FIST, ABILITY_INNER_FOCUS },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Hitmonchan"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_HITMONCHAN,
        .categoryName = _("Punching"),
        .height = 14,
        .weight = 502,
        .description = COMPOUND_STRING(
            "A Hitmonchan is said to possess the\n"
            "spirit of a boxer who aimed to become the\n"
            "world champion. Having an indomitable\n"
            "spirit means that it will never give up."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
        FRONT_PIC(Hitmonchan, 48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Hitmonchan,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Hitmonchan, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Hitmonchan),
        ICON(Hitmonchan, 2),
        FOOTPRINT(Hitmonchan)
        LEARNSETS(Hitmonchan),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_HITMONTOP] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_DREAM),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 138,
        .evYield_SpDefense = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_TECHNICIAN, ABILITY_STEADFAST },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Hitmontop"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_HITMONTOP,
        .categoryName = _("Handstand"),
        .height = 14,
        .weight = 480,
        .description = COMPOUND_STRING(
            "Its technique of kicking while spinning is\n"
            "a remarkable mix of both offense and\n"
            "defense. Hitmontop travel faster\n"
            "spinning than they do walking."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Hitmontop, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Hitmontop,
        .frontAnimId = ANIM_SWING_CONCAVE,
        BACK_PIC(Hitmontop, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        PALETTES(Hitmontop),
        ICON(Hitmontop, 2),
        FOOTPRINT(Hitmontop)
        LEARNSETS(Hitmontop),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS

#if P_FAMILY_LICKITUNG
    [SPECIES_LICKITUNG] =
    {
        .baseHP        = 90,
        .baseAttack    = 55,
        .baseDefense   = 75,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 77 : 127,
        .evYield_HP = 2,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS, ABILITY_CLOUD_NINE },
        .sourceGame = SOURCE_MOF,
        .speciesName = _("Lickitung"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LICKITUNG,
        .categoryName = _("Licking"),
        .height = 12,
        .weight = 655,
        .description = COMPOUND_STRING(
            "Whenever it sees something unfamiliar,\n"
            "it always licks the object because it\n"
            "memorizes things by texture and taste.\n"
            "It is somewhat put off by sour things."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lickitung, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Lickitung,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Lickitung, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Lickitung),
        ICON(Lickitung, 0),
        FOOTPRINT(Lickitung)
        LEARNSETS(Lickitung),
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_TREMORS, SPECIES_LICKILICKY}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_LICKILICKY] =
    {
        .baseHP        = 110,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 180 : 193,
        .evYield_HP = 3,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS, ABILITY_CLOUD_NINE },
        .sourceGame = SOURCE_MOF,
        .speciesName = _("Lickilicky"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LICKILICKY,
        .categoryName = _("Licking"),
        .height = 17,
        .weight = 1400,
        .description = COMPOUND_STRING(
            "The long tongue is always soggy with\n"
            "slobber. The saliva contains a solvent\n"
            "that causes numbness. Getting too close\n"
            "to it will leave you soaked with drool."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        FRONT_PIC(Lickilicky, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Lickilicky,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Lickilicky, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Lickilicky),
        ICON(Lickilicky, 1),
        FOOTPRINT(Lickilicky)
        LEARNSETS(Lickilicky),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LICKITUNG

#if P_FAMILY_KOFFING
    [SPECIES_KOFFING] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_MIASMA),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 68 : 114,
        .evYield_Defense = 1,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        #if P_UPDATED_ABILITIES >= GEN_8
            .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_JEALOUSY },
        #else
            .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        #endif
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Koffing"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_KOFFING,
        .categoryName = _("Poison Gas"),
        .height = 6,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Getting up close to a Koffing will give\n"
            "you a chance to observe, through its thin\n"
            "skin, the toxic gases swirling inside. It\n"
            "blows up at the slightest stimulation."),
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Koffing, 56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Koffing,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 14,
        BACK_PIC(Koffing, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_GROW,
        PALETTES(Koffing),
        ICON(Koffing, 2),
        FOOTPRINT(Koffing)
        LEARNSETS(Koffing),
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_WEEZING},
                                {EVO_NONE, 0, SPECIES_WEEZING_GALARIAN}),
    },

#define WEEZING_MISC_INFO                                           \
        .baseHP        = 65,                                        \
        .baseAttack    = 90,                                        \
        .baseDefense   = 120,                                       \
        .baseSpeed     = 60,                                        \
        .baseSpAttack  = 85,                                        \
        .baseSpDefense = 70,                                        \
        .catchRate = 60,                                            \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 173,    \
        .evYield_Defense = 2,                                       \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 20,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_FAST,                           \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),           \
        .noFlip = TRUE,                                             \
        .speciesName = _("Weezing"),                                \
        .cryId = CRY_PORYGON,                                       \
        .natDexNum = NATIONAL_DEX_WEEZING,                          \
        .categoryName = _("Poison Gas"),                            \
        FOOTPRINT(Weezing)                                          \
        .formSpeciesIdTable = sWeezingFormSpeciesIdTable

    [SPECIES_WEEZING] =
    {
        WEEZING_MISC_INFO,
        .types = MON_TYPES(TYPE_MIASMA),
        .itemRare = ITEM_SMOKE_BALL,
        #if P_UPDATED_ABILITIES >= GEN_8
            .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_JEALOUSY },
        #else
            .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        #endif
        .sourceGame = SOURCE_PCB,
        .height = 12,
        .weight = 95,
        .description = COMPOUND_STRING(
            "By diluting its toxic gases with a special\n"
            "process, the highest grade of perfume can\n"
            "be extracted. To Weezing, gases emanating\n"
            "from garbage are the ultimate feast."),
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Weezing, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Weezing,
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = 3,
        BACK_PIC(Weezing, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_GROW,
        PALETTES(Weezing),
        ICON(Weezing, 2),
        LEARNSETS(Weezing),
    },

#if P_GALARIAN_FORMS
    [SPECIES_WEEZING_GALARIAN] =
    {
        WEEZING_MISC_INFO,
        .types = MON_TYPES(TYPE_MIASMA, TYPE_COSMIC),
        .itemRare = ITEM_MISTY_SEED,
        .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_MISTY_SURGE },
        .sourceGame = SOURCE_IN,
        .isGalarianForm = TRUE,
        .height = 30,
        .weight = 160,
        .description = COMPOUND_STRING(
            "Long ago, when droves of factories fouled\n"
            "the air with pollution, it changed into this\n"
            "form for some reason. It consumes air\n"
            "pollutant particles, expelling clean air."),
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(WeezingGalarian, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_WeezingGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        BACK_PIC(WeezingGalarian, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(WeezingGalarian),
        ICON(WeezingGalarian, 1),
        LEARNSETS(WeezingGalarian),
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_KOFFING

#if P_FAMILY_RHYHORN
    [SPECIES_RHYHORN] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 25,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_EARTH, TYPE_BEAST),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 69 : 135,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_RECKLESS },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Rhyhorn"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_RHYHORN,
        .categoryName = _("Spikes"),
        .height = 10,
        .weight = 1150,
        .description = COMPOUND_STRING(
            "Once it starts running, it doesn't stop.\n"
            "Its tiny brain makes it so stupid that it\n"
            "can't remember why it started running in\n"
            "the first place."),
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Rhyhorn, 56, 40),
        FRONT_PIC_FEMALE(Rhyhorn, 56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Rhyhorn,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Rhyhorn, 64, 48),
        BACK_PIC_FEMALE(Rhyhorn, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Rhyhorn),
        ICON(Rhyhorn, 1),
        FOOTPRINT(Rhyhorn)
        LEARNSETS(Rhyhorn),
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_RHYDON}),
    },

    [SPECIES_RHYDON] =
    {
        .baseHP        = 105,
        .baseAttack    = 130,
        .baseDefense   = 120,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_EARTH, TYPE_BEAST),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 170 : 204,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_RECKLESS },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Rhydon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_RHYDON,
        .categoryName = _("Drill"),
        .height = 19,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Its horn, which rotates like a drill,\n"
            "destroys tall buildings with one strike.\n"
            "It stands on its hind legs, and its brain\n"
            "is well developed."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
        FRONT_PIC(Rhydon, 64, 56),
        FRONT_PIC_FEMALE(Rhydon, 64, 56),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Rhydon,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Rhydon, 64, 56),
        BACK_PIC_FEMALE(Rhydon, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Rhydon),
        ICON(Rhydon, 1),
        FOOTPRINT(Rhydon)
        LEARNSETS(Rhydon),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_PROTECTOR, SPECIES_RHYPERIOR},
                                {EVO_ITEM, ITEM_PROTECTOR, SPECIES_RHYPERIOR}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_RHYPERIOR] =
    {
        .baseHP        = 115,
        .baseAttack    = 140,
        .baseDefense   = 130,
        .baseSpeed     = 40,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_EARTH, TYPE_BEAST),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 217,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_SOLID_ROCK, ABILITY_RECKLESS },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Rhyperior"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_RHYPERIOR,
        .categoryName = _("Drill"),
        .height = 24,
        .weight = 2828,
        .description = COMPOUND_STRING(
            "It can launch a rock held in its hand\n"
            "like a missile by tightening and then\n"
            "expanding its muscles instantaneously.\n"
            "Geodude are shot at rare times."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        FRONT_PIC(Rhyperior, 64, 64),
        FRONT_PIC_FEMALE(Rhyperior, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Rhyperior,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Rhyperior, 64, 64),
        BACK_PIC_FEMALE(Rhyperior, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Rhyperior),
        ICON(Rhyperior, 0),
        FOOTPRINT(Rhyperior)
        LEARNSETS(Rhyperior),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RHYHORN

#if P_FAMILY_CHANSEY
#if P_GEN_4_CROSS_EVOS
    [SPECIES_HAPPINY] =
    {
        .baseHP        = 100,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 30,
        .baseSpAttack  = 15,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 130,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 110 : 255,
        .evYield_HP = 1,
        .itemCommon = ITEM_OVAL_STONE,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_FRIEND_GUARD },
        .sourceGame = SOURCE_MOF,
        .speciesName = _("Happiny"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_HAPPINY,
        .categoryName = _("Playhouse"),
        .height = 6,
        .weight = 244,
        .description = COMPOUND_STRING(
            "It carries a round white rock in its\n"
            "belly pouch. If it gets along well with\n"
            "someone, it will sometimes give that\n"
            "person the rock."),
        .pokemonScale = 422,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Happiny, 32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Happiny,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Happiny, 48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Happiny),
        ICON(Happiny, 0),
        FOOTPRINT(Happiny)
        LEARNSETS(Happiny),
        .evolutions = EVOLUTION({EVO_ITEM_HOLD_DAY, ITEM_OVAL_STONE, SPECIES_CHANSEY},
                                {EVO_ITEM_DAY, ITEM_OVAL_STONE, SPECIES_CHANSEY}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_CHANSEY] =
    {
        .baseHP        = 250,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 395 : 255,
        .evYield_HP = 2,
        .itemCommon = ITEM_LUCKY_PUNCH,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_HEALER },
        .sourceGame = SOURCE_MOF,
        .speciesName = _("Chansey"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CHANSEY,
        .categoryName = _("Egg"),
        .height = 11,
        .weight = 346,
        .description = COMPOUND_STRING(
            "Chansey lay nutritionally excellent eggs\n"
            "every day. The eggs are so delicious, they\n"
            "are eagerly devoured by even those people\n"
            "who have lost their appetite."),
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Chansey, 56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Chansey,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Chansey, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Chansey),
        ICON(Chansey, 0),
        FOOTPRINT(Chansey)
        LEARNSETS(Chansey),
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_BLISSEY}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_BLISSEY] =
    {
        .baseHP        = 255,
        .baseAttack    = 10,
        .baseDefense   = 10,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 608 : 255,
        .evYield_HP = (P_UPDATED_EVS >= GEN_4) ? 3 : 2,
        .itemRare = ITEM_LUCKY_EGG,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_HEALER },
        .sourceGame = SOURCE_MOF,
        .speciesName = _("Blissey"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BLISSEY,
        .categoryName = _("Happiness"),
        .height = 15,
        .weight = 468,
        .description = COMPOUND_STRING(
            "If it senses sadness with its fluffy fur,\n"
            "a Blissey will rush over to the sad person,\n"
            "however far away, to share an egg of\n"
            "happiness that brings a smile to any face."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
        FRONT_PIC(Blissey, 56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Blissey,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Blissey, 64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Blissey),
        ICON(Blissey, 0),
        FOOTPRINT(Blissey)
        LEARNSETS(Blissey),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_CHANSEY

#if P_FAMILY_TANGELA
    [SPECIES_TANGELA] =
    {
        .baseHP        = 65,
        .baseAttack    = 55,
        .baseDefense   = 115,
        .baseSpeed     = 60,
        .baseSpAttack  = 100,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_NATURE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 87 : 166,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Tangela"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_TANGELA,
        .categoryName = _("Vine"),
        .height = 10,
        .weight = 350,
        .description = COMPOUND_STRING(
            "Its vines snap off easily and painlessly\n"
            "if they are grabbed, allowing it to make a\n"
            "quick getaway. The lost vines are replaced\n"
            "by new growth the very next day."),
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tangela, 48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Tangela,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Tangela, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Tangela),
        ICON(Tangela, 0),
        FOOTPRINT(Tangela)
        LEARNSETS(Tangela),
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_TANGROWTH}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_TANGROWTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 110,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NATURE),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 187 : 211,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Tangrowth"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_TANGROWTH,
        .categoryName = _("Vine"),
        .height = 20,
        .weight = 1286,
        .description = COMPOUND_STRING(
            "It ensnares prey by extending arms made\n"
            "of vines. Even if one of its arms is eaten,\n"
            "it's fine. The Pokémon regenerates quickly\n"
            "and will go right back to normal."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        FRONT_PIC(Tangrowth, 64, 64),
        FRONT_PIC_FEMALE(Tangrowth, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Tangrowth,
        .frontAnimId = ANIM_H_STRETCH,
        BACK_PIC(Tangrowth, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW,
        PALETTES(Tangrowth),
        ICON(Tangrowth, 0),
        FOOTPRINT(Tangrowth)
        LEARNSETS(Tangrowth),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TANGELA

#if P_FAMILY_KANGASKHAN
#define KANGASKHAN_MISC_INFO                                    \
        .types = MON_TYPES(TYPE_ILLUSION),                        \
        .catchRate = 45,                                        \
        .evYield_HP = 2,                                        \
        .genderRatio = MON_FEMALE,                              \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),         \
        .sourceGame = SOURCE_EOSD,                          \
        .speciesName = _("Kangaskhan"),                         \
        .natDexNum = NATIONAL_DEX_KANGASKHAN,                   \
        .categoryName = _("Parent"),                            \
        .height = 22,                                           \
        .pokemonScale = 256,                                    \
        .pokemonOffset = 0,                                     \
        .trainerScale = 387,                                    \
        .trainerOffset = 8,                                     \
        FOOTPRINT(Kangaskhan)                                   \
        LEARNSETS(Kangaskhan),                                  \
        .formSpeciesIdTable = sKangaskhanFormSpeciesIdTable,    \
        .formChangeTable = sKangaskhanFormChangeTable

    [SPECIES_KANGASKHAN] =
    {
        KANGASKHAN_MISC_INFO,
        .baseHP        = 105,
        .baseAttack    = 95,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 175,
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_SCRAPPY, ABILITY_INNER_FOCUS },
        .cryId = CRY_PORYGON,
        .weight = 800,
        .description = COMPOUND_STRING(
            "If you come across a young Kangaskhan\n"
            "playing by itself, never try to catch it.\n"
            "The baby's parent is sure to be in the area,\n"
            "and it will become violently enraged."),
        FRONT_PIC(Kangaskhan, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Kangaskhan,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Kangaskhan, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Kangaskhan),
        ICON(Kangaskhan, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_KANGASKHAN_MEGA] =
    {
        KANGASKHAN_MISC_INFO,
        .baseHP        = 105,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .expYield = 207,
        .abilities = { ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND },
        .isMegaEvolution = TRUE,
        .cryId = CRY_PORYGON,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "When the mother sees the back of her\n"
            "Mega-Evolved child, it makes her think\n"
            "of the day when her child will inevitably\n"
            "leave her."),
        FRONT_PIC(KangaskhanMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KangaskhanMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(KangaskhanMega, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(KangaskhanMega),
        ICON(KangaskhanMega, 2),
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_KANGASKHAN

#if P_FAMILY_HORSEA
    [SPECIES_HORSEA] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 59 : 83,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SNIPER, ABILITY_DAMP },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Horsea"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_HORSEA,
        .categoryName = _("Dragon"),
        .height = 4,
        .weight = 80,
        .description = COMPOUND_STRING(
            "By cleverly flicking the fins on its back\n"
            "side to side, it moves in any direction\n"
            "while facing forward. It spits ink to\n"
            "escape if it senses danger."),
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Horsea, 32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Horsea,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Horsea, 48, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Horsea),
        ICON(Horsea, 0),
        FOOTPRINT(Horsea)
        LEARNSETS(Horsea),
    },

    [SPECIES_CHIBI_REISEN] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 60,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_BLAZER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_KEEN_EYE },
        .sourceGame = SOURCE_IN,
        .speciesName = _("CReisen"),
        .cryId = CRY_REISEN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_CHIBI_REISEN,
        .categoryName = _("Dragon"),
        .height = 12,
        .weight = 250,
        .description = COMPOUND_STRING(
            "The poisonous barbs all over its body are\n"
            "highly valued as ingredients for making\n"
            "traditional herbal medicine. It shows no\n"
            "mercy to anything approaching its nest."),
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(CReisen, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Seadra,
        BACK_PIC(CReisen, 64, 64),
        .backPicYOffset = 0,
        PALETTES(CReisen),
        ICON(CReisen, 1),
        FOOTPRINT(CReisen)
        LEARNSETS(CReisen),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_NORMAL_REISEN},
                                {EVO_HEART, ITEM_GUARD_HEART, SPECIES_DEFENSE_REISEN},
                                {EVO_HEART, ITEM_TECH_HEART, SPECIES_TECH_REISEN}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_KINGDRA] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_WATER, TYPE_FAITH),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 270,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 243,
    #else
        .expYield = 207,
    #endif
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SNIPER, ABILITY_DAMP },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Kingdra"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_KINGDRA,
        .categoryName = _("Dragon"),
        .height = 18,
        .weight = 1520,
        .description = COMPOUND_STRING(
            "It sleeps quietly, deep on the seafloor.\n"
            "When it comes up to the surface, it\n"
            "creates a huge whirlpool that can swallow\n"
            "even ships."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
        FRONT_PIC(Kingdra, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Kingdra,
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        BACK_PIC(Kingdra, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Kingdra),
        ICON(Kingdra, 0),
        FOOTPRINT(Kingdra)
        LEARNSETS(Kingdra),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HORSEA

#if P_FAMILY_GOLDEEN
    [SPECIES_NORMAL_REISEN] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 75,
        .baseSpeed     = 105,
        .baseSpAttack  = 125,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 45,
        .expYield = 212,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_INSOMNIA, ABILITY_SNIPER },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Reisen"),
        .cryId = CRY_REISEN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_NORMAL_REISEN,
        .categoryName = _("Goldfish"),
        .height = 6,
        .weight = 150,
        .description = COMPOUND_STRING(
            "In the springtime, schools of Goldeen\n"
            "can be seen swimming up falls and rivers.\n"
            "It metes out staggering damage with its\n"
            "single horn."),
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Reisen, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Goldeen,
        BACK_PIC(Reisen, 64, 64),
        .backPicYOffset = 0,
        PALETTES(Reisen),
        ICON(Reisen, 1),
        FOOTPRINT(Reisen)
        LEARNSETS(Reisen),
    },

    [SPECIES_DEFENSE_REISEN] =
    {
        .baseHP        = 85,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 45,
        .expYield = 212,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_INSOMNIA, ABILITY_SNIPER },
        .sourceGame = SOURCE_IN,
        .speciesName = _("DReisen"),
        .cryId = CRY_REISEN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_DEFENSE_REISEN,
        .categoryName = _("Goldfish"),
        .height = 13,
        .weight = 390,
        .description = COMPOUND_STRING(
            "It punches holes in boulders on stream-\n"
            "beds. This is a clever innovation that\n"
            "prevents its eggs from being attacked or\n"
            "washed away by the current."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(DReisen, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Seaking,
        BACK_PIC(DReisen, 64, 64),
        .backPicYOffset = 0,
        PALETTES(DReisen),
        ICON(DReisen, 1),
        FOOTPRINT(DReisen)
        LEARNSETS(DReisen),
    },
#endif //P_FAMILY_GOLDEEN

#if P_FAMILY_STARYU
    [SPECIES_TECH_REISEN] =
    {
        .baseHP        = 80,
        .baseAttack    = 75,
        .baseDefense   = 100,
        .baseSpeed     = 90,
        .baseSpAttack  = 105,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 45,
        .expYield = 212,
        .evYield_Defense = 1,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_INSOMNIA, ABILITY_UNWAVERING },
        .sourceGame = SOURCE_IN,
        .speciesName = _("TReisen"),
        .cryId = CRY_REISEN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_TECH_REISEN,
        .categoryName = _("Star Shape"),
        .height = 8,
        .weight = 345,
        .description = COMPOUND_STRING(
            "It gathers with others in the night and\n"
            "makes its red core glow on and off with\n"
            "the twinkling stars. It can regenerate\n"
            "limbs if they are severed from its body."),
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(TReisen, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Staryu,
        BACK_PIC(TReisen, 64, 64),
        .backPicYOffset = 0,
        PALETTES(TReisen),
        ICON(TReisen, 1),
        FOOTPRINT(TReisen)
        LEARNSETS(TReisen),
    },

    [SPECIES_STARMIE] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 115,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_WATER, TYPE_REASON),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 182 : 207,
        .evYield_Speed = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_DIVA, ABILITY_NATURAL_CURE, ABILITY_ANALYTIC },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Starmie"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_STARMIE,
        .categoryName = _("Mysterious"),
        .height = 11,
        .weight = 800,
        .description = COMPOUND_STRING(
            "People in ancient times imagined that\n"
            "Starmie were transformed from the\n"
            "reflections of stars that twinkled on\n"
            "gentle waves at night."),
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Starmie, 56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Starmie,
        .frontAnimId = ANIM_TWIST,
        BACK_PIC(Starmie, 64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Starmie),
        ICON(Starmie, 2),
        FOOTPRINT(Starmie)
        LEARNSETS(Starmie),
    },
#endif //P_FAMILY_STARYU

#if P_FAMILY_MR_MIME
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MIME_JR] =
    {
        .baseHP        = 20,
        .baseAttack    = 25,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
        #if P_UPDATED_TYPES >= GEN_6
            .types = MON_TYPES(TYPE_REASON, TYPE_COSMIC),
        #else
            .types = MON_TYPES(TYPE_REASON),
        #endif
        .catchRate = 145,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 78,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_FILTER, ABILITY_TECHNICIAN },
        .sourceGame = SOURCE_MOF,
        .speciesName = _("Mime Jr."),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MIME_JR,
        .categoryName = _("Mime"),
        .height = 6,
        .weight = 130,
        .description = COMPOUND_STRING(
            "In an attempt to confuse its enemy,\n"
            "it mimics the enemy's movements.\n"
            "Once mimicked, the foe cannot take\n"
            "its eyes off this Pokémon."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MimeJr, 32, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_MimeJr,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(MimeJr, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(MimeJr),
        ICON(MimeJr, 0),
        FOOTPRINT(MimeJr)
        LEARNSETS(MimeJr),
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_MIMIC, SPECIES_MR_MIME},
                                {EVO_NONE, 0, SPECIES_MR_MIME_GALARIAN}),
    },
#endif //P_GEN_4_CROSS_EVOS

#define MR_MIME_MISC_INFO                                           \
        .catchRate = 45,                                            \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 136,    \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 25,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_FAST,                           \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),          \
        .speciesName = _("Mr. Mime"),                               \
        .cryId = CRY_PORYGON,                                       \
        .natDexNum = NATIONAL_DEX_MR_MIME,                          \
        FOOTPRINT(MrMime)                                           \
        .formSpeciesIdTable = sMrMimeFormSpeciesIdTable

    [SPECIES_MR_MIME] =
    {
        MR_MIME_MISC_INFO,
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 120,
        #if P_UPDATED_TYPES >= GEN_6
            .types = MON_TYPES(TYPE_REASON, TYPE_COSMIC),
        #else
            .types = MON_TYPES(TYPE_REASON),
        #endif
        .evYield_SpDefense = 2,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_FILTER, ABILITY_TECHNICIAN },
        .sourceGame = SOURCE_MOF,
        .categoryName = _("Barrier"),
        .height = 13,
        .weight = 545,
        .description = COMPOUND_STRING(
            "A Mr. Mime is a master of pantomime. It can\n"
            "convince others that something unseeable\n"
            "actually exists. Once believed, the\n"
            "imaginary object does become real."),
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MrMime, 56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_MrMime,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(MrMime, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(MrMime),
        ICON(MrMime, 0),
        LEARNSETS(MrMime),
    },

#if P_GALARIAN_FORMS
    [SPECIES_MR_MIME_GALARIAN] =
    {
        MR_MIME_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ICE, TYPE_REASON),
        .evYield_Speed = 2,
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY },
        .sourceGame = SOURCE_POFV,
        .categoryName = _("Dancing"),
        .height = 14,
        .weight = 568,
        .description = COMPOUND_STRING(
            "Its talent is tap-dancing. It can radiate\n"
            "chilliness from the bottoms of its feet to\n"
            "to create a floor of ice, which this\n"
            "Pokémon can kick up to use as a barrier."),
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MrMimeGalarian, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_MrMimeGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MrMimeGalarian, 64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MrMimeGalarian),
        ICON(MrMimeGalarian, 0),
        LEARNSETS(MrMimeGalarian),
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_MR_RIME}),
    },

    [SPECIES_MR_RIME] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 110,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ICE, TYPE_REASON),
        .catchRate = 45,
        .expYield = 182,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_TANGLED_FEET, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Mr. Rime"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MR_RIME,
        .categoryName = _("Comedian"),
        .height = 15,
        .weight = 582,
        .description = COMPOUND_STRING(
            "It's highly skilled at tap-dancing. It\n"
            "waves its cane of ice in time with its\n"
            "graceful movements."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        FRONT_PIC(MrRime, 56, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_MrRime,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MrRime, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MrRime),
        ICON(MrRime, 0),
        FOOTPRINT(MrRime)
        LEARNSETS(MrRime),
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MR_MIME

#if P_FAMILY_SCYTHER
    [SPECIES_SCYTHER] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 105,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_HEART, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 100 : 187,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_INNER_POWER, ABILITY_TECHNICIAN, ABILITY_STEADFAST },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Scyther"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SCYTHER,
        .categoryName = _("Mantis"),
        .height = 15,
        .weight = 560,
        .description = COMPOUND_STRING(
            "Its blindingly fast speed adds to the\n"
            "sharpness of its twin forearm scythes.\n"
            "The scythes can slice through thick logs\n"
            "in one wicked stroke."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(Scyther, 56, 64),
        FRONT_PIC_FEMALE(Scyther, 56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Scyther,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 10,
        BACK_PIC(Scyther, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Scyther),
        ICON(Scyther, 1),
        FOOTPRINT(Scyther)
        LEARNSETS(Scyther),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_MAID_UNIFORM, SPECIES_SCIZOR},
                                {EVO_ITEM, ITEM_BLACK_AUGURITE, SPECIES_KLEAVOR},
                                {EVO_ITEM, ITEM_MAID_UNIFORM, SPECIES_SCIZOR}),
    },

#if P_GEN_2_CROSS_EVOS
#define SCIZOR_MISC_INFO                                \
        .types = MON_TYPES(TYPE_HEART, TYPE_STEEL),       \
        .catchRate = 25,                                \
        .evYield_Attack = 2,                            \
        .genderRatio = PERCENT_FEMALE(50),              \
        .eggCycles = 25,                                \
        .friendship = STANDARD_FRIENDSHIP,              \
        .growthRate = GROWTH_MEDIUM_FAST,               \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),     \
        .sourceGame = SOURCE_HRTP,                    \
        .speciesName = _("Scizor"),                     \
        .natDexNum = NATIONAL_DEX_SCIZOR,               \
        .categoryName = _("Pincer"),                    \
        FOOTPRINT(Scizor)                               \
        LEARNSETS(Scizor),                              \
        .formSpeciesIdTable = sScizorFormSpeciesIdTable,\
        .formChangeTable = sScizorFormChangeTable

    [SPECIES_SCIZOR] =
    {
        SCIZOR_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 200,
        .abilities = { ABILITY_INNER_POWER, ABILITY_TECHNICIAN, ABILITY_LIGHT_METAL },
        .cryId = CRY_PORYGON,
        .height = 18,
        .weight = 1180,
        .description = COMPOUND_STRING(
            "A Scizor has a body with the hardness of\n"
            "steel. It is not easily fazed by ordinary\n"
            "sorts of attacks. It flaps its wings to\n"
            "regulate its body temperature."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Scizor, 64, 64),
        FRONT_PIC_FEMALE(Scizor, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Scizor,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 19,
        BACK_PIC(Scizor, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Scizor),
        ICON(Scizor, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SCIZOR_MEGA] =
    {
        SCIZOR_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .expYield = 210,
        .abilities = { ABILITY_TECHNICIAN, ABILITY_TECHNICIAN, ABILITY_TECHNICIAN },
        .isMegaEvolution = TRUE,
        .cryId = CRY_PORYGON,
        .height = 20,
        .weight = 1250,
        .description = COMPOUND_STRING(
            "The excess energy that bathes this\n"
            "Pokémon keeps it in constant danger of\n"
            "overflow. It can't sustain a battle over\n"
            "long periods of time."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(ScizorMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ScizorMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ScizorMega, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(ScizorMega),
        ICON(ScizorMega, 0),
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_8_CROSS_EVOS
    [SPECIES_KLEAVOR] =
    {
        .baseHP        = 70,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 45,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_HEART, TYPE_BEAST),
        .catchRate = 15,
        .expYield = 175,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_INNER_POWER, ABILITY_SHEER_FORCE, ABILITY_SHARPNESS },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Kleavor"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_KLEAVOR,
        .categoryName = _("Axe"),
        .height = 18,
        .weight = 890,
        .description = COMPOUND_STRING(
            "A violent creature that fells trees with\n"
            "its crude axes and shields itself with hard\n"
            "stone. Should one encounter this Pokémon\n"
            "in the wild, one's only recourse is to flee."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        FRONT_PIC(Kleavor, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kleavor,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Kleavor, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Kleavor),
        ICON(Kleavor, 2),
        //FOOTPRINT(Kleavor)
        LEARNSETS(Kleavor),
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_SCYTHER

#if P_FAMILY_JYNX
#if P_GEN_2_CROSS_EVOS
    [SPECIES_SMOOCHUM] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 15,
        .baseSpeed     = 65,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ICE, TYPE_REASON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 61 : 87,
        .evYield_SpAttack = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_FOREWARN, ABILITY_HYDRATION },
        .sourceGame = SOURCE_MOF,
        .speciesName = _("Smoochum"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SMOOCHUM,
        .categoryName = _("Kiss"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "It actively runs about, but also falls\n"
            "often. Whenever it falls, it will check its\n"
            "reflection on a lake's surface to make\n"
            "sure its face hasn't become dirty."),
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Smoochum, 32, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Smoochum,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 40,
        BACK_PIC(Smoochum, 40, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Smoochum),
        ICON(Smoochum, 1),
        FOOTPRINT(Smoochum)
        LEARNSETS(Smoochum),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_JYNX}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_JYNX] =
    {
        .baseHP        = 65,
        .baseAttack    = 50,
        .baseDefense   = 35,
        .baseSpeed     = 95,
        .baseSpAttack  = 115,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ICE, TYPE_REASON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 137,
        .evYield_SpAttack = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_FOREWARN, ABILITY_DRY_SKIN },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Jynx"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_JYNX,
        .categoryName = _("Human Shape"),
        .height = 14,
        .weight = 406,
        .description = COMPOUND_STRING(
            "A Jynx sashays rhythmically as if it were\n"
            "dancing. Its motions are so bouncingly\n"
            "alluring, people seeing it are compelled to\n"
            "shake their hips without noticing."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
        FRONT_PIC(Jynx, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Jynx,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Jynx, 56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Jynx),
        ICON(Jynx, 2),
        FOOTPRINT(Jynx)
        LEARNSETS(Jynx),
    },
#endif //P_FAMILY_JYNX

#if P_FAMILY_ELECTABUZZ
#if P_GEN_2_CROSS_EVOS
    [SPECIES_ELEKID] =
    {
        .baseHP        = 45,
        .baseAttack    = 63,
        .baseDefense   = 37,
        .baseSpeed     = 95,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WIND),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 72 : 106,
        .evYield_Speed = 1,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .sourceGame = SOURCE_PODD,
        .noFlip = TRUE,
        .speciesName = _("Elekid"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ELEKID,
        .categoryName = _("Electric"),
        .height = 6,
        .weight = 235,
        .description = COMPOUND_STRING(
            "If it touches metal and discharges the\n"
            "electricity it has stored in its body, an\n"
            "Elekid begins swinging its arms in circles\n"
            "to recharge itself."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Elekid, 48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Elekid,
        .frontAnimId = ANIM_FLASH_YELLOW,
        BACK_PIC(Elekid, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Elekid),
        ICON(Elekid, 1),
        FOOTPRINT(Elekid)
        LEARNSETS(Elekid),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ELECTABUZZ}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_ELECTABUZZ] =
    {
        .baseHP        = 65,
        .baseAttack    = 83,
        .baseDefense   = 57,
        .baseSpeed     = 105,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_WIND),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 156,
        .evYield_Speed = 2,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .sourceGame = SOURCE_PODD,
        .noFlip = TRUE,
        .speciesName = _("Electabuzz"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ELECTABUZZ,
        .categoryName = _("Electric"),
        .height = 11,
        .weight = 300,
        .description = COMPOUND_STRING(
            "When a storm approaches, it competes with\n"
            "others to scale heights that are likely to\n"
            "be stricken by lightning. Some towns use\n"
            "Electabuzz in place of lightning rods."),
        .pokemonScale = 351,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Electabuzz, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Electabuzz,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW,
        BACK_PIC(Electabuzz, 64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Electabuzz),
        ICON(Electabuzz, 1),
        FOOTPRINT(Electabuzz)
        LEARNSETS(Electabuzz),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_ELECTIRIZER, SPECIES_ELECTIVIRE},
                                {EVO_ITEM, ITEM_ELECTIRIZER, SPECIES_ELECTIVIRE}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_ELECTIVIRE] =
    {
        .baseHP        = 75,
        .baseAttack    = 123,
        .baseDefense   = 67,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_WIND),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 270,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 243,
    #else
        .expYield = 199,
    #endif
        .evYield_Attack = 3,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_MOTOR_DRIVE, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Electivire"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ELECTIVIRE,
        .categoryName = _("Thunderbolt"),
        .height = 18,
        .weight = 1386,
        .description = COMPOUND_STRING(
            "When it gets excited, it thumps its chest.\n"
            "With every thud, thunder roars, electric\n"
            "sparks shower all around and blue sparks\n"
            "begin to crackle between its horns."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        FRONT_PIC(Electivire, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Electivire,
        .frontAnimId = ANIM_GLOW_YELLOW,
        BACK_PIC(Electivire, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Electivire),
        ICON(Electivire, 1),
        FOOTPRINT(Electivire)
        LEARNSETS(Electivire),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ELECTABUZZ

#if P_FAMILY_MAGMAR
#if P_GEN_2_CROSS_EVOS
    [SPECIES_MAGBY] =
    {
        .baseHP        = 45,
        .baseAttack    = 75,
        .baseDefense   = 37,
        .baseSpeed     = 83,
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 73 : 117,
        .evYield_Speed = 1,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .sourceGame = SOURCE_HRTP,
        .noFlip = TRUE,
        .speciesName = _("Magby"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MAGBY,
        .categoryName = _("Live Coal"),
        .height = 7,
        .weight = 214,
        .description = COMPOUND_STRING(
            "If a Magby is spouting yellow flames from\n"
            "its mouth, it is in good health. When it is\n"
            "fatigued, black smoke will be mixed in with\n"
            "the flames."),
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magby, 32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Magby,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Magby, 40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Magby),
        ICON(Magby, 0),
        FOOTPRINT(Magby)
        LEARNSETS(Magby),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MAGMAR}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_MAGMAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 57,
        .baseSpeed     = 93,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 167,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Magmar"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MAGMAR,
        .categoryName = _("Spitfire"),
        .height = 13,
        .weight = 445,
        .description = COMPOUND_STRING(
            "In battle, it blows out intense flames from\n"
            "all over its body to intimidate its foe.\n"
            "These fiery bursts create heat waves that\n"
            "ignite grass and trees in the area."),
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magmar, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Magmar,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Magmar, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Magmar),
        ICON(Magmar, 0),
        FOOTPRINT(Magmar)
        LEARNSETS(Magmar),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_MAGMARIZER, SPECIES_MAGMORTAR},
                                {EVO_ITEM, ITEM_MAGMARIZER, SPECIES_MAGMORTAR}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAGMORTAR] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 83,
        .baseSpAttack  = 125,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 270,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 243,
    #else
        .expYield = 199,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .sourceGame = SOURCE_HRTP,
        .noFlip = TRUE,
        .speciesName = _("Magmortar"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MAGMORTAR,
        .categoryName = _("Blast"),
        .height = 16,
        .weight = 680,
        .description = COMPOUND_STRING(
            "According to what is known, a single pair\n"
            "of male and female Magmortar lives in\n"
            "one volcano. From its arm, it launches\n"
            "fireballs hotter than 3,600ºF."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        FRONT_PIC(Magmortar, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Magmortar,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Magmortar, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Magmortar),
        ICON(Magmortar, 0),
        FOOTPRINT(Magmortar)
        LEARNSETS(Magmortar),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGMAR

#if P_FAMILY_PINSIR
#define PINSIR_MISC_INFO                                \
        .catchRate = 45,                                \
        .evYield_Attack = 2,                            \
        .genderRatio = PERCENT_FEMALE(50),              \
        .eggCycles = 25,                                \
        .friendship = STANDARD_FRIENDSHIP,              \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),     \
        .sourceGame = SOURCE_EOSD,                  \
        .speciesName = _("Pinsir"),                     \
        .natDexNum = NATIONAL_DEX_PINSIR,               \
        .categoryName = _("Stag Beetle"),               \
        FOOTPRINT(Pinsir)                               \
        LEARNSETS(Pinsir),                              \
        .formSpeciesIdTable = sPinsirFormSpeciesIdTable,\
        .formChangeTable = sPinsirFormChangeTable

    [SPECIES_PINSIR] =
    {
        PINSIR_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_HEART),
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 200,
        .abilities = { ABILITY_HIGH_STRENGTH, ABILITY_MOLD_BREAKER, ABILITY_MOXIE },
        .cryId = CRY_PORYGON,
        .height = 15,
        .weight = 550,
        .description = COMPOUND_STRING(
            "Their pincers are strong enough to\n"
            "shatter thick logs. Because they dislike\n"
            "cold, Pinsir burrow and sleep under\n"
            "the ground on chilly nights."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Pinsir, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Pinsir,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Pinsir, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Pinsir),
        ICON(Pinsir, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_PINSIR_MEGA] =
    {
        PINSIR_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 155,
        .baseDefense   = 120,
        .baseSpeed     = 105,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_HEART, TYPE_FLYING),
        .expYield = 210,
        .abilities = { ABILITY_AERILATE, ABILITY_AERILATE, ABILITY_AERILATE },
        .cryId = CRY_PORYGON,
        .height = 17,
        .weight = 590,
        .description = COMPOUND_STRING(
            "The influence of Mega Evolution leaves it\n"
            "in a state of constant excitement.\n"
            "It pierces enemies with its two large\n"
            "horns before shredding them."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(PinsirMega, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_PinsirMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        BACK_PIC(PinsirMega, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(PinsirMega),
        ICON(PinsirMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_PINSIR

#if P_FAMILY_TAUROS
#define TAUROS_MISC_INFO                                        \
        .catchRate = 45,                                        \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 211,\
        .genderRatio = MON_MALE,                                \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_SLOW,                              \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),           \
        .speciesName = _("Tauros"),                             \
        .cryId = CRY_PORYGON,                                    \
        .natDexNum = NATIONAL_DEX_TAUROS,                       \
        .categoryName = _("Wild Bull"),                         \
        .height = 14,                                           \
        .pokemonScale = 256,                                    \
        .pokemonOffset = 0,                                     \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        FOOTPRINT(Tauros)                                       \
        .formSpeciesIdTable = sTaurosFormSpeciesIdTable

    [SPECIES_TAUROS] =
    {
        TAUROS_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ILLUSION),
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_SHEER_FORCE },
        .sourceGame = SOURCE_EOSD,
        .weight = 884,
        .description = COMPOUND_STRING(
            "It is not satisfied unless it is rampaging\n"
            "at all times. If there is no opponent for\n"
            "Tauros to battle, it will charge at thick\n"
            "trees and knock them down to calm itself."),
        FRONT_PIC(Tauros, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Tauros,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = 10,
        BACK_PIC(Tauros, 64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Tauros),
        ICON(Tauros, 2),
        LEARNSETS(Tauros),
    },

#if P_PALDEAN_FORMS
#define TAUROS_PALDEAN_MISC_INFO                                                    \
        .baseHP        = 75,                                                        \
        .baseAttack    = 110,                                                       \
        .baseDefense   = 105,                                                       \
        .baseSpeed     = 100,                                                       \
        .baseSpAttack  = 30,                                                        \
        .baseSpDefense = 70,                                                        \
        .evYield_Attack = 2,                                                        \
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_CUD_CHEW }, \
        .sourceGame = SOURCE_EOSD,                                              \
        .frontAnimFrames = sAnims_TaurosPaldean,                                    \
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/                                \
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,                                        \
        .isPaldeanForm = TRUE

    [SPECIES_TAUROS_PALDEAN_COMBAT_BREED] =
    {
        TAUROS_MISC_INFO,
        TAUROS_PALDEAN_MISC_INFO,
        .types = MON_TYPES(TYPE_DREAM),
        .weight = 1150,
        .description = COMPOUND_STRING(
            "This Pokémon has a muscular body\n"
            "and excels at close-quarters combat.\n"
            "It uses its short horns to strike\n"
            "the opponent’s weak spots."),
        FRONT_PIC(TaurosPaldeanCombatBreed, 64, 64),
        .frontPicYOffset = 5,
        BACK_PIC(TaurosPaldeanCombatBreed, 64, 48),
        .backPicYOffset = 9,
        PALETTES(TaurosPaldeanCombatBreed),
        ICON(TaurosPaldeanCombatBreed, 0),
        LEARNSETS(TaurosPaldeanCombatBreed),
    },

    [SPECIES_TAUROS_PALDEAN_BLAZE_BREED] =
    {
        TAUROS_MISC_INFO,
        TAUROS_PALDEAN_MISC_INFO,
        .types = MON_TYPES(TYPE_DREAM, TYPE_FIRE),
        .weight = 850,
        .description = COMPOUND_STRING(
            "When heated by fire energy, its horns can\n"
            "get hotter than 1,800 degrees Fahrenheit.\n"
            "Those gored by them will suffer\n"
            "both wounds and burns."),
        FRONT_PIC(TaurosPaldeanBlazeBreed, 64, 64),
        .frontPicYOffset = 5,
        BACK_PIC(TaurosPaldeanBlazeBreed, 64, 48),
        .backPicYOffset = 9,
        PALETTES(TaurosPaldeanBlazeBreed),
        ICON(TaurosPaldeanBlazeBreed, 0),
        LEARNSETS(TaurosPaldeanBlazeBreed),
    },

    [SPECIES_TAUROS_PALDEAN_AQUA_BREED] =
    {
        TAUROS_MISC_INFO,
        TAUROS_PALDEAN_MISC_INFO,
        .types = MON_TYPES(TYPE_DREAM, TYPE_WATER),
        .weight = 1100,
        .description = COMPOUND_STRING(
            "This Pokémon blasts water from holes on\n"
            "the tips of its horns--the high-pressure\n"
            "jets pierce right through\n"
            "Tauros’s enemies."),
        FRONT_PIC(TaurosPaldeanAquaBreed, 64, 64),
        .frontPicYOffset = 5,
        BACK_PIC(TaurosPaldeanAquaBreed, 64, 48),
        .backPicYOffset = 9,
        PALETTES(TaurosPaldeanAquaBreed),
        ICON(TaurosPaldeanAquaBreed, 0),
        LEARNSETS(TaurosPaldeanAquaBreed),
    },
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_TAUROS

#if P_FAMILY_MAGIKARP
    [SPECIES_MAGIKARP] =
    {
        .baseHP        = 20,
        .baseAttack    = 10,
        .baseDefense   = 55,
        .baseSpeed     = 80,
        .baseSpAttack  = 15,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 40 : 20,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_RATTLED },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Magikarp"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MAGIKARP,
        .categoryName = _("Fish"),
        .height = 9,
        .weight = 100,
        .description = COMPOUND_STRING(
            "Its swimming muscles are weak, so it is\n"
            "easily washed away by currents. In places\n"
            "where water pools, you can see many\n"
            "Magikarp deposited there by the flow."),
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magikarp, 48, 56),
        FRONT_PIC_FEMALE(Magikarp, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Magikarp,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        BACK_PIC(Magikarp, 64, 56),
        BACK_PIC_FEMALE(Magikarp, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Magikarp),
        ICON(Magikarp, 0),
        FOOTPRINT(Magikarp)
        LEARNSETS(Magikarp),
        .tmIlliterate = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_GYARADOS}),
    },

#define GYARADOS_MISC_INFO                                              \
        .catchRate = 45,                                                \
        .evYield_Attack = 2,                                            \
        .genderRatio = PERCENT_FEMALE(50),                              \
        .eggCycles = 5,                                                 \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2, EGG_GROUP_DRAGON),\
        .sourceGame = SOURCE_SOEW,                                   \
        .speciesName = _("Gyarados"),                                   \
        .natDexNum = NATIONAL_DEX_GYARADOS,                             \
        .categoryName = _("Atrocious"),                                 \
        .height = 65,                                                   \
        .pokemonScale = 256,                                            \
        .pokemonOffset = 6,                                             \
        .trainerScale = 481,                                            \
        .trainerOffset = 13,                                            \
        FOOTPRINT(Gyarados)                                             \
        LEARNSETS(Gyarados),                                            \
        .formSpeciesIdTable = sGyaradosFormSpeciesIdTable,              \
        .formChangeTable = sGyaradosFormChangeTable

    [SPECIES_GYARADOS] =
    {
        GYARADOS_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 125,
        .baseDefense   = 79,
        .baseSpeed     = 81,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_WATER, TYPE_FLYING),
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 189 : 214,
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_MOXIE },
        .cryId = CRY_PORYGON,
        .weight = 2350,
        .description = COMPOUND_STRING(
            "It is an extremely vicious and violent\n"
            "Pokémon. When humans begin to fight,\n"
            "it will appear and burn everything to the\n"
            "ground with intensely hot flames."),
        FRONT_PIC(Gyarados, 64, 64),
        FRONT_PIC_FEMALE(Gyarados, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Gyarados,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        BACK_PIC(Gyarados, 64, 64),
        BACK_PIC_FEMALE(Gyarados, 64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Gyarados),
        ICON(Gyarados, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GYARADOS_MEGA] =
    {
        GYARADOS_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 155,
        .baseDefense   = 109,
        .baseSpeed     = 81,
        .baseSpAttack  = 70,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .expYield = 224,
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER },
        .cryId = CRY_PORYGON,
        .weight = 3050,
        .description = COMPOUND_STRING(
            "Although it obeys its instinctive drive to\n"
            "destroy everything within its reach, it\n"
            "will respond to orders from a Trainer it\n"
            "truly trusts."),
        FRONT_PIC(GyaradosMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GyaradosMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        BACK_PIC(GyaradosMega, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(GyaradosMega),
        ICON(GyaradosMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAGIKARP

#if P_FAMILY_LAPRAS
#define LAPRAS_MISC_INFO                                                                \
        .baseHP        = 130,                                                           \
        .baseAttack    = 85,                                                            \
        .baseDefense   = 80,                                                            \
        .baseSpeed     = 60,                                                            \
        .baseSpAttack  = 85,                                                            \
        .baseSpDefense = 95,                                                            \
        .types = MON_TYPES(TYPE_WATER, TYPE_ICE),                                       \
        .catchRate = 45,                                                                \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 187 : 219,                        \
        .evYield_HP = 2,                                                                \
        .itemCommon = ITEM_SWIMSUIT,                                                \
        .itemRare = ITEM_SWIMSUIT,                                                  \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 40,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_SLOW,                                                      \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),              \
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_SHELL_ARMOR, ABILITY_HYDRATION },  \
        .sourceGame = SOURCE_SOEW,                                                   \
        .speciesName = _("Lapras"),                                                     \
        .cryId = CRY_PORYGON,                                                            \
        .natDexNum = NATIONAL_DEX_LAPRAS,                                               \
        .categoryName = _("Transport"),                                                 \
        FOOTPRINT(Lapras)                                                               \
        LEARNSETS(Lapras),                                                              \
        .formSpeciesIdTable = sLaprasFormSpeciesIdTable,                                \
        .formChangeTable = sLaprasFormChangeTable

    [SPECIES_LAPRAS] =
    {
        LAPRAS_MISC_INFO,
        .height = 25,
        .weight = 2200,
        .description = COMPOUND_STRING(
            "People have driven Lapras almost to the\n"
            "point of extinction. In the evenings,\n"
            "it is said to sing plaintively as it seeks\n"
            "what few others of its kind still remain."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        FRONT_PIC(Lapras, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Lapras,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Lapras, 56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Lapras),
        ICON(Lapras, 2),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_LAPRAS_GIGANTAMAX] =
    {
        LAPRAS_MISC_INFO,
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Over 5,000 people can ride on its\n"
            "shell at once. And it's a very\n"
            "comfortable ride, without the slightest\n"
            "shaking or swaying."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        FRONT_PIC(LaprasGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LaprasGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(LaprasGigantamax, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(LaprasGigantamax),
        ICON(LaprasGigantamax, 2),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_LAPRAS

#if P_FAMILY_DITTO
    [SPECIES_DITTO] =
    {
        .baseHP        = 48,
        .baseAttack    = 48,
        .baseDefense   = 48,
        .baseSpeed     = 48,
        .baseSpAttack  = 48,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 35,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 101 : 61,
        .evYield_HP = 1,
        .itemCommon = ITEM_QUICK_POWDER,
        .itemRare = ITEM_METAL_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DITTO),
        .abilities = { ABILITY_LIMBER, ABILITY_NONE, ABILITY_IMPOSTER },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Ditto"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DITTO,
        .categoryName = _("Transform"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "A Ditto rearranges its cell structure to\n"
            "transform itself. However, if it tries to\n"
            "change based on its memory, it will get\n"
            "details wrong."),
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ditto, 40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Ditto,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        BACK_PIC(Ditto, 48, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        PALETTES(Ditto),
        ICON(Ditto, 2),
        FOOTPRINT(Ditto)
        LEARNSETS(Ditto),
        .tmIlliterate = TRUE,
    },
#endif //P_FAMILY_DITTO

#if P_FAMILY_EEVEE
#define EEVEE_MISC_INFO                                                                 \
        .baseHP        = 55,                                                            \
        .baseAttack    = 55,                                                            \
        .baseDefense   = 50,                                                            \
        .baseSpeed     = 55,                                                            \
        .baseSpAttack  = 45,                                                            \
        .baseSpDefense = 65,                                                            \
        .types = MON_TYPES(TYPE_ILLUSION),                                                \
        .catchRate = 45,                                                                \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 92,                          \
        .evYield_SpDefense = 1,                                                         \
        .genderRatio = PERCENT_FEMALE(12.5),                                            \
        .eggCycles = 35,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),                                   \
        .abilities = { ABILITY_RUN_AWAY, ABILITY_ADAPTABILITY, ABILITY_ANTICIPATION },  \
        .sourceGame = SOURCE_EOSD,                                                  \
        .speciesName = _("Eevee"),                                                      \
        .cryId = CRY_PORYGON,                                                             \
        .natDexNum = NATIONAL_DEX_EEVEE,                                                \
        .categoryName = _("Evolution"),                                                 \
        FOOTPRINT(Eevee)                                                                \
        LEARNSETS(Eevee),                                                               \
        .formSpeciesIdTable = sEeveeFormSpeciesIdTable,                                 \
        .formChangeTable = sEeveeFormChangeTable

    [SPECIES_EEVEE] =
    {
        EEVEE_MISC_INFO,
        .height = 3,
        .weight = 65,
        .description = COMPOUND_STRING(
            "An Eevee has an unstable genetic makeup\n"
            "that suddenly mutates due to its\n"
            "environment. Radiation from various\n"
            "Stones causes this Pokémon to evolve."),
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Eevee, 40, 48),
        FRONT_PIC_FEMALE(Eevee, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Eevee,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Eevee, 56, 48),
        BACK_PIC_FEMALE(Eevee, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Eevee),
        ICON(Eevee, 2),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SWIFT_HEART, SPECIES_JOLTEON},
                                {EVO_ITEM, ITEM_GUARD_HEART, SPECIES_VAPOREON},
                                {EVO_ITEM, ITEM_POWER_HEART, SPECIES_FLAREON},
                                {EVO_FRIENDSHIP_DAY, 0, SPECIES_ESPEON},
                                {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_UMBREON},
                                {EVO_SPECIFIC_MAP, MAP_PETALBURG_WOODS, SPECIES_LEAFEON},
                                {EVO_ITEM, ITEM_TECH_HEART, SPECIES_LEAFEON},
                                {EVO_SPECIFIC_MAP, MAP_SHOAL_CAVE_LOW_TIDE_ICE_ROOM, SPECIES_GLACEON},
                                {EVO_ITEM, ITEM_HELPER_HEART, SPECIES_GLACEON},
                                {EVO_FRIENDSHIP_MOVE_TYPE, TYPE_COSMIC, SPECIES_SYLVEON}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_EEVEE_GIGANTAMAX] =
    {
        EEVEE_MISC_INFO,
        .height = 180,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Having gotten even friendlier and\n"
            "more innocent, Eevee tries to play\n"
            "with anyone around, only to end up\n"
            "crushing them with its immense body."),
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(EeveeGigantamax, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_EeveeGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(EeveeGigantamax, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(EeveeGigantamax),
        ICON(EeveeGigantamax, 2),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_VAPOREON] =
    {
        .baseHP        = 130,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 196,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_WATER_ABSORB, ABILITY_HYDRATION },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Vaporeon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_VAPOREON,
        .categoryName = _("Bubble Jet"),
        .height = 10,
        .weight = 290,
        .description = COMPOUND_STRING(
            "Vaporeon underwent a spontaneous\n"
            "mutation and grew fins and gills that\n"
            "allow them to live underwater. They have\n"
            "the ability to freely control water."),
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Vaporeon, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Vaporeon,
        .frontAnimId = ANIM_GLOW_BLUE,
        BACK_PIC(Vaporeon, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Vaporeon),
        ICON(Vaporeon, 0),
        FOOTPRINT(Vaporeon)
        LEARNSETS(Vaporeon),
    },

    [SPECIES_JOLTEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 130,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_WIND),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 197,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_VOLT_ABSORB, ABILITY_QUICK_FEET },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Jolteon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_JOLTEON,
        .categoryName = _("Lightning"),
        .height = 8,
        .weight = 245,
        .description = COMPOUND_STRING(
            "Its cells generate weak power that is\n"
            "amplified by its fur's static electricity\n"
            "to drop thunderbolts. The bristling fur is\n"
            "made of electrically charged needles."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Jolteon, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Jolteon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Jolteon, 56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Jolteon),
        ICON(Jolteon, 2),
        FOOTPRINT(Jolteon)
        LEARNSETS(Jolteon),
    },

    [SPECIES_FLAREON] =
    {
        .baseHP        = 65,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 198,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_FLASH_FIRE, ABILITY_GUTS },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Flareon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_FLAREON,
        .categoryName = _("Flame"),
        .height = 9,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Flareon's fluffy fur releases heat into\n"
            "the air so that its body does not get\n"
            "excessively hot. Its body temperature can\n"
            "rise to a maximum of 1,650 degrees F."),
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Flareon, 56, 56),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Flareon,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Flareon, 64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Flareon),
        ICON(Flareon, 3),
        FOOTPRINT(Flareon)
        LEARNSETS(Flareon),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_ESPEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 197,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_SYNCHRONIZE, ABILITY_MAGIC_BOUNCE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Espeon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ESPEON,
        .categoryName = _("Sun"),
        .height = 9,
        .weight = 265,
        .description = COMPOUND_STRING(
            "An Espeon is extremely loyal to any\n"
            "Trainer it considers to be worthy. It is\n"
            "said to have developed precognitive\n"
            "powers to protect its Trainer from harm."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Espeon, 48, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Espeon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Espeon, 64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Espeon),
        ICON(Espeon, 2),
        FOOTPRINT(Espeon)
        LEARNSETS(Espeon),
    },

    [SPECIES_UMBREON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 197,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS },
        .sourceGame = SOURCE_MS,
        .speciesName = _("Umbreon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_UMBREON,
        .categoryName = _("Moonlight"),
        .height = 10,
        .weight = 270,
        .description = COMPOUND_STRING(
            "Umbreon evolved from exposure to the\n"
            "moon's energy pulses. It lurks in darkness\n"
            "and waits for its foes to move. The rings\n"
            "on its body glow when it leaps to attack."),
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Umbreon, 40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Umbreon,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Umbreon, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Umbreon),
        ICON(Umbreon, 0),
        FOOTPRINT(Umbreon)
        LEARNSETS(Umbreon),
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_LEAFEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 110,
        .baseDefense   = 130,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NATURE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 196,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_LEAF_GUARD, ABILITY_CHLOROPHYLL },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Leafeon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LEAFEON,
        .categoryName = _("Verdant"),
        .height = 10,
        .weight = 255,
        .description = COMPOUND_STRING(
            "Its cellular composition is closer to\n"
            "that of a plant than an animal. It uses\n"
            "photosynthesis to produce its energy\n"
            "supply without eating food."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Leafeon, 56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Leafeon,
        .frontAnimId = ANIM_SHRINK_GROW,
        BACK_PIC(Leafeon, 48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Leafeon),
        ICON(Leafeon, 1),
        FOOTPRINT(Leafeon)
        LEARNSETS(Leafeon),
    },

    [SPECIES_GLACEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 130,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 196,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_SNOW_CLOAK, ABILITY_ICE_BODY },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Glaceon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GLACEON,
        .categoryName = _("Fresh Snow"),
        .height = 8,
        .weight = 259,
        .description = COMPOUND_STRING(
            "It can control its body temperature\n"
            "at will. This enables it to freeze the\n"
            "moisture in the atmosphere, creating\n"
            "flurries of diamond dust."),
        .pokemonScale = 366,
        .pokemonOffset = 10,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Glaceon, 64, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Glaceon,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Glaceon, 56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Glaceon),
        ICON(Glaceon, 0),
        FOOTPRINT(Glaceon)
        LEARNSETS(Glaceon),
    },
#endif //P_GEN_4_CROSS_EVOS

#if P_GEN_6_CROSS_EVOS
    [SPECIES_SYLVEON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_COSMIC),
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_CUTE_CHARM, ABILITY_PIXILATE },
        .sourceGame = SOURCE_MOF,
        .noFlip = TRUE,
        .speciesName = _("Sylveon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SYLVEON,
        .categoryName = _("Intertwine"),
        .height = 10,
        .weight = 235,
        .description = COMPOUND_STRING(
            "Its ribbonlike feelers give off an aura\n"
            "that weakens hostility in its prey, causing\n"
            "them to let down their guard. A moment\n"
            "later, it pounces."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Sylveon, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Sylveon,
        .frontAnimId = ANIM_SHRINK_GROW,
        BACK_PIC(Sylveon, 64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Sylveon),
        ICON(Sylveon, 0),
        FOOTPRINT(Sylveon)
        LEARNSETS(Sylveon),
    },
#endif //P_GEN_6_CROSS_EVOS
#endif //P_FAMILY_EEVEE

#if P_FAMILY_PORYGON
    [SPECIES_PORYGON] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 79 : 130,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_TRACE, ABILITY_DOWNLOAD, ABILITY_ANALYTIC },
        .sourceGame = SOURCE_MOF,
        .speciesName = _("Porygon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PORYGON,
        .categoryName = _("Virtual"),
        .height = 8,
        .weight = 365,
        .description = COMPOUND_STRING(
            "It is capable of reverting itself entirely\n"
            "back to program data in order to enter\n"
            "cyberspace. A Porygon is copy-\n"
            "protected so it cannot be duplicated."),
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Porygon, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Porygon,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Porygon, 56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Porygon),
        ICON(Porygon, 0),
        FOOTPRINT(Porygon)
        LEARNSETS(Porygon),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_UPGRADE, SPECIES_PORYGON2},
                                {EVO_ITEM, ITEM_UPGRADE, SPECIES_PORYGON2}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_PORYGON2] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 105,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 45,
        .expYield = 180,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_TRACE, ABILITY_DOWNLOAD, ABILITY_ANALYTIC },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Porygon2"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PORYGON2,
        .categoryName = _("Virtual"),
        .height = 6,
        .weight = 325,
        .description = COMPOUND_STRING(
            "It was created by humans using the power\n"
            "of science. It has been given artificial\n"
            "intelligence that enables it to learn new\n"
            "gestures and emotions on its own."),
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Porygon2, 40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Porygon2,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        BACK_PIC(Porygon2, 56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Porygon2),
        ICON(Porygon2, 0),
        FOOTPRINT(Porygon2)
        LEARNSETS(Porygon2),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z},
                                {EVO_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_PORYGON_Z] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 135,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 185,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_DOWNLOAD, ABILITY_ANALYTIC },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Porygon-Z"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PORYGON_Z,
        .categoryName = _("Virtual"),
        .height = 9,
        .weight = 340,
        .description = COMPOUND_STRING(
            "In order to create a more advanced\n"
            "Pokémon, an additional program was\n"
            "installed, but apparently it contained a\n"
            "defect that made it move oddly."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(PorygonZ, 40, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Porygon_Z,
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 12,
        BACK_PIC(PorygonZ, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(PorygonZ),
        ICON(PorygonZ, 0),
        FOOTPRINT(PorygonZ)
        LEARNSETS(PorygonZ),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_PORYGON

#if P_FAMILY_OMANYTE
    [SPECIES_OMANYTE] =
    {
        .baseHP        = 35,
        .baseAttack    = 40,
        .baseDefense   = 100,
        .baseSpeed     = 35,
        .baseSpAttack  = 90,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_BEAST, TYPE_WATER),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 71,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 99,
    #else
        .expYield = 120,
    #endif
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Omanyte"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_OMANYTE,
        .categoryName = _("Spiral"),
        .height = 4,
        .weight = 75,
        .description = COMPOUND_STRING(
            "One of the ancient and long-since-extinct\n"
            "Pokémon that have been regenerated\n"
            "from fossils by humans. If attacked,\n"
            "it withdraws into its hard shell."),
        .pokemonScale = 521,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Omanyte, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Omanyte,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        BACK_PIC(Omanyte, 48, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Omanyte),
        ICON(Omanyte, 0),
        FOOTPRINT(Omanyte)
        LEARNSETS(Omanyte),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_OMASTAR}),
    },

    [SPECIES_OMASTAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 125,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_BEAST, TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 199,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Omastar"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_OMASTAR,
        .categoryName = _("Spiral"),
        .height = 10,
        .weight = 350,
        .description = COMPOUND_STRING(
            "An Omastar uses its tentacles to capture\n"
            "its prey. It is believed to have become\n"
            "extinct because its shell grew too large,\n"
            "making its movements slow and ponderous."),
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Omastar, 64, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Omastar,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Omastar, 56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Omastar),
        ICON(Omastar, 0),
        FOOTPRINT(Omastar)
        LEARNSETS(Omastar),
    },
#endif //P_FAMILY_OMANYTE

#if P_FAMILY_KABUTO
    [SPECIES_KABUTO] =
    {
        .baseHP        = 30,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 55,
        .baseSpAttack  = 55,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_BEAST, TYPE_WATER),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 71,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 99,
    #else
        .expYield = 119,
    #endif
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_GUARD_ARMOR, ABILITY_WEAK_ARMOR },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Kabuto"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_KABUTO,
        .categoryName = _("Shellfish"),
        .height = 5,
        .weight = 115,
        .description = COMPOUND_STRING(
            "It is a Pokémon that has been regenerated\n"
            "from a fossil. However, in rare cases, living\n"
            "examples have been discovered. Kabuto\n"
            "have not changed for 300 million years."),
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kabuto, 40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Kabuto,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        BACK_PIC(Kabuto, 48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Kabuto),
        ICON(Kabuto, 2),
        FOOTPRINT(Kabuto)
        LEARNSETS(Kabuto),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_KABUTOPS}),
    },

    [SPECIES_KABUTOPS] =
    {
        .baseHP        = 60,
        .baseAttack    = 115,
        .baseDefense   = 105,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_BEAST, TYPE_WATER),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 173,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 199,
    #else
        .expYield = 201,
    #endif
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_GUARD_ARMOR, ABILITY_WEAK_ARMOR },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Kabutops"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_KABUTOPS,
        .categoryName = _("Shellfish"),
        .height = 13,
        .weight = 405,
        .description = COMPOUND_STRING(
            "Kabutops once swam underwater to hunt \n"
            "for prey. It was apparently evolving from\n"
            "being a water dweller to living on land as\n"
            "evident from changes in its gills and legs."),
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kabutops, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Kabutops,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Kabutops, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Kabutops),
        ICON(Kabutops, 2),
        FOOTPRINT(Kabutops)
        LEARNSETS(Kabutops),
    },
#endif //P_FAMILY_KABUTO

#if P_FAMILY_AERODACTYL
#define AERODACTYL_MISC_INFO                                \
        .types = MON_TYPES(TYPE_BEAST, TYPE_FLYING),         \
        .catchRate = 45,                                    \
        .evYield_Speed = 2,                                 \
        .genderRatio = PERCENT_FEMALE(12.5),                \
        .eggCycles = 35,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),      \
        .sourceGame = SOURCE_PCB,                     \
        .speciesName = _("Aerodactyl"),                     \
        .natDexNum = NATIONAL_DEX_AERODACTYL,               \
        .categoryName = _("Fossil"),                        \
        FOOTPRINT(Aerodactyl)                               \
        LEARNSETS(Aerodactyl),                              \
        .formSpeciesIdTable = sAerodactylFormSpeciesIdTable,\
        .formChangeTable = sAerodactylFormChangeTable

    [SPECIES_AERODACTYL] =
    {
        AERODACTYL_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 130,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 180 : 202,
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_PRESSURE, ABILITY_UNNERVE },
        .cryId = CRY_PORYGON,
        .height = 18,
        .weight = 590,
        .description = COMPOUND_STRING(
            "Aerodactyl is a Pokémon from the age\n"
            "of dinosaurs. It was regenerated from DNA\n"
            "extracted from amber. It is imagined to\n"
            "have been the king of the skies."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
        FRONT_PIC(Aerodactyl, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Aerodactyl,
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .enemyMonElevation = 9,
        BACK_PIC(Aerodactyl, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Aerodactyl),
        ICON(Aerodactyl, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AERODACTYL_MEGA] =
    {
        AERODACTYL_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 85,
        .baseSpeed     = 150,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .expYield = 215,
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .cryId = CRY_PORYGON,
        .height = 21,
        .weight = 790,
        .description = COMPOUND_STRING(
            "The power of Mega Evolution has\n"
            "completely restored its genes. The rocks\n"
            "on its body are harder than diamond."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
        FRONT_PIC(AerodactylMega, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_AerodactylMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        BACK_PIC(AerodactylMega, 64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(AerodactylMega),
        ICON(AerodactylMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AERODACTYL

#if P_FAMILY_SNORLAX
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MUNCHLAX] =
    {
        .baseHP        = 135,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 5,
        .baseSpAttack  = 40,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 50,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 78 : 94,
        .evYield_HP = 1,
        .itemCommon = ITEM_LEFTOVERS,
        .itemRare = ITEM_LEFTOVERS,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PICKUP, ABILITY_WALL_OF_ICE, ABILITY_GLUTTONY },
        .sourceGame = SOURCE_MS,
        .speciesName = _("Munchlax"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MUNCHLAX,
        .categoryName = _("Big Eater"),
        .height = 6,
        .weight = 1050,
        .description = COMPOUND_STRING(
            "When it finds something that looks like\n"
            "it might be edible, it goes right ahead\n"
            "and swallows it whole. That's why it gets\n"
            "fatter day by day."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Munchlax, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Munchlax,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Munchlax, 48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_GROW,
        PALETTES(Munchlax),
        ICON(Munchlax, 3),
        FOOTPRINT(Munchlax)
        LEARNSETS(Munchlax),
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_SNORLAX}),
    },
#endif //P_GEN_4_CROSS_EVOS

#define SNORLAX_MISC_INFO                                                       \
        .baseHP        = 160,                                                   \
        .baseAttack    = 110,                                                   \
        .baseDefense   = 65,                                                    \
        .baseSpeed     = 30,                                                    \
        .baseSpAttack  = 65,                                                    \
        .baseSpDefense = 110,                                                   \
        .types = MON_TYPES(TYPE_ILLUSION),                                        \
        .catchRate = 25,                                                        \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 189 : 154,                \
        .evYield_HP = 2,                                                        \
        .itemCommon = ITEM_LEFTOVERS,                                           \
        .itemRare = ITEM_LEFTOVERS,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                                    \
        .eggCycles = 40,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_SLOW,                                              \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),                         \
        .abilities = { ABILITY_IMMUNITY, ABILITY_WALL_OF_ICE, ABILITY_GLUTTONY }, \
        .sourceGame = SOURCE_MS,                                          \
        .speciesName = _("Snorlax"),                                            \
        .cryId = CRY_PORYGON,                                                   \
        .natDexNum = NATIONAL_DEX_SNORLAX,                                      \
        .categoryName = _("Sleeping"),                                          \
        FOOTPRINT(Snorlax)                                                      \
        LEARNSETS(Snorlax),                                                     \
        .formSpeciesIdTable = sSnorlaxFormSpeciesIdTable,                       \
        .formChangeTable = sSnorlaxFormChangeTable

    [SPECIES_SNORLAX] =
    {
        SNORLAX_MISC_INFO,
        .height = 21,
        .weight = 4600,
        .description = COMPOUND_STRING(
            "Snorlax's typical day consists of nothing\n"
            "more than eating and sleeping. It is such\n"
            "a docile Pokémon that there are children\n"
            "who use its big belly as a place to play."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
        FRONT_PIC(Snorlax, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Snorlax,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Snorlax, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Snorlax),
        ICON(Snorlax, 3),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_SNORLAX_GIGANTAMAX] =
    {
        SNORLAX_MISC_INFO,
        .height = 350,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Gigantamax energy has affected\n"
            "stray seeds and even pebbles that\n"
            "got stuck to Snorlax, making them grow\n"
            "to a huge size."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
        FRONT_PIC(SnorlaxGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SnorlaxGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SnorlaxGigantamax, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SnorlaxGigantamax),
        ICON(SnorlaxGigantamax, 3),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SNORLAX

#if P_FAMILY_ARTICUNO
#define ARTICUNO_MISC_INFO                                                          \
        .catchRate = 3,                                                             \
        .genderRatio = MON_GENDERLESS,                                              \
        .friendship = 35,                                                           \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                  \
        .speciesName = _("Articuno"),                                               \
        .cryId = CRY_PORYGON,                                                      \
        .natDexNum = NATIONAL_DEX_ARTICUNO,                                         \
        .height = 17,                                                               \
        .pokemonScale = 256,                                                        \
        .pokemonOffset = 0,                                                         \
        .trainerScale = 309,                                                        \
        .trainerOffset = 2,                                                         \
        FOOTPRINT(Articuno)                                                         \
        .formSpeciesIdTable = sArticunoFormSpeciesIdTable,                          \
        .isLegendary = TRUE

    [SPECIES_ARTICUNO] =
    {
        ARTICUNO_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 100,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 125,
        .types = MON_TYPES(TYPE_ICE, TYPE_FLYING),
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 215,
    #endif
        .evYield_SpDefense = 3,
        .eggCycles = 80,
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_SNOW_CLOAK },
        .sourceGame = SOURCE_SOEW,
        .categoryName = _("Freeze"),
        .weight = 554,
        .description = COMPOUND_STRING(
            "Articuno is a legendary bird Pokémon that\n"
            "can control ice. The flapping of its wings\n"
            "chills the air. As a result, it is said that\n"
            "when this Pokémon flies, snow will fall."),
        FRONT_PIC(Articuno, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Articuno,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Articuno, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Articuno),
        ICON(Articuno, 2),
        LEARNSETS(Articuno),
    },

#if P_GALARIAN_FORMS
    [SPECIES_ARTICUNO_GALARIAN] =
    {
        ARTICUNO_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 95,
        .baseSpAttack  = 125,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_REASON, TYPE_FLYING),
        .expYield = 290,
        .evYield_SpAttack = 3,
        .eggCycles = 120,
        .abilities = { ABILITY_COMPETITIVE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_PCB,
        .categoryName = _("Cruel"),
        .weight = 509,
        .description = COMPOUND_STRING(
            "It fires beams that immobilize opponents\n"
            "as if they had been frozen solid.\n"
            "Its feather-like blades of psychic energy\n"
            "rip through thick iron sheets like paper."),
        FRONT_PIC(ArticunoGalarian, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_ArticunoGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        BACK_PIC(ArticunoGalarian, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ArticunoGalarian),
        ICON(ArticunoGalarian, 2),
        LEARNSETS(ArticunoGalarian),
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ARTICUNO

#if P_FAMILY_ZAPDOS
#define ZAPDOS_MISC_INFO                                                \
        .catchRate = 3,                                                 \
        .genderRatio = MON_GENDERLESS,                                  \
        .friendship = 35,                                               \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),      \
        .sourceGame = SOURCE_PODD,                                 \
        .speciesName = _("Zapdos"),                                     \
        .cryId = CRY_PORYGON,                                            \
        .natDexNum = NATIONAL_DEX_ZAPDOS,                               \
        .height = 16,                                                   \
        .pokemonScale = 256,                                            \
        .pokemonOffset = 0,                                             \
        .trainerScale = 318,                                            \
        .trainerOffset = 3,                                             \
        FOOTPRINT(Zapdos)                                               \
        .formSpeciesIdTable = sZapdosFormSpeciesIdTable,                \
        .isLegendary = TRUE

    [SPECIES_ZAPDOS] =
    {
        ZAPDOS_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_WIND, TYPE_FLYING),
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 216,
    #endif
        .evYield_SpAttack = 3,
        .eggCycles = 80,
        #if P_UPDATED_ABILITIES >= GEN_6
            .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_STATIC },
        #else
            .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        #endif
        .categoryName = _("Electric"),
        .weight = 526,
        .description = COMPOUND_STRING(
            "Zapdos is a legendary bird Pokémon that\n"
            "has the ability to control electricity.\n"
            "It usually lives in thunderclouds. It gains\n"
            "power if it is stricken by lightning bolts."),
        FRONT_PIC(Zapdos, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Zapdos,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .enemyMonElevation = 8,
        BACK_PIC(Zapdos, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Zapdos),
        ICON(Zapdos, 0),
        LEARNSETS(Zapdos),
    },

#if P_GALARIAN_FORMS
    [SPECIES_ZAPDOS_GALARIAN] =
    {
        ZAPDOS_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 125,
        .baseDefense   = 90,
        .baseSpeed     = 100,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DREAM, TYPE_FLYING),
        .expYield = 290,
        .evYield_Attack = 3,
        .eggCycles = 120,
        .abilities = { ABILITY_DEFIANT, ABILITY_NONE, ABILITY_NONE },
        .categoryName = _("Strong Legs"),
        .weight = 582,
        .description = COMPOUND_STRING(
            "When its feathers rub together, they\n"
            "produce a crackling sound like the\n"
            "zapping of electricity. Apparently, it runs\n"
            "through the mountains at over 180 mph."),
        FRONT_PIC(ZapdosGalarian, 48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ZapdosGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ZapdosGalarian, 56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ZapdosGalarian),
        ICON(ZapdosGalarian, 0),
        LEARNSETS(ZapdosGalarian),
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZAPDOS

#if P_FAMILY_MOLTRES
#define MOLTRES_MISC_INFO                                               \
        .catchRate = 3,                                                 \
        .genderRatio = MON_GENDERLESS,                                  \
        .friendship = 35,                                               \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),      \
        .speciesName = _("Moltres"),                                    \
        .cryId = CRY_PORYGON,                                           \
        .natDexNum = NATIONAL_DEX_MOLTRES,                              \
        .height = 20,                                                   \
        .pokemonScale = 270,                                            \
        .pokemonOffset = 0,                                             \
        .trainerScale = 387,                                            \
        .trainerOffset = 8,                                             \
        FOOTPRINT(Moltres)                                              \
        .formSpeciesIdTable = sMoltresFormSpeciesIdTable,               \
        .isLegendary = TRUE

    [SPECIES_MOLTRES] =
    {
        MOLTRES_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 125,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 217,
    #endif
        .evYield_SpAttack = 3,
        .eggCycles = 80,
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FLAME_BODY },
        .sourceGame = SOURCE_PODD,
        .categoryName = _("Flame"),
        .weight = 600,
        .description = COMPOUND_STRING(
            "Moltres is a legendary bird Pokémon\n"
            "that can control fire. If injured, it is said\n"
            "to dip its body in the molten magma of\n"
            "a volcano to burn and heal itself."),
        FRONT_PIC(Moltres, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Moltres,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Moltres, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Moltres),
        ICON(Moltres, 0),
        LEARNSETS(Moltres),
    },

#if P_GALARIAN_FORMS
    [SPECIES_MOLTRES_GALARIAN] =
    {
        MOLTRES_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 125,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .expYield = 290,
        .evYield_SpDefense = 3,
        .eggCycles = 120,
        .abilities = { ABILITY_BERSERK, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .categoryName = _("Malevolent"),
        .weight = 660,
        .description = COMPOUND_STRING(
            "This Pokémon's sinister, flame-like aura\n"
            "will consume the spirit of any creature\n"
            "it hits. Victims become burned-out\n"
            "shadows of themselves."),
        FRONT_PIC(MoltresGalarian, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_MoltresGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MoltresGalarian, 56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MoltresGalarian),
        ICON(MoltresGalarian, 0),
        LEARNSETS(MoltresGalarian),
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MOLTRES

#if P_FAMILY_DRATINI
    [SPECIES_DRATINI] =
    {
        .baseHP        = 41,
        .baseAttack    = 64,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FAITH),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 67,
        .evYield_Attack = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_MAINTENANCE, ABILITY_NONE, ABILITY_SPRING_CHARM },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Dratini"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DRATINI,
        .categoryName = _("Dragon"),
        .height = 18,
        .weight = 33,
        .description = COMPOUND_STRING(
            "A Dratini continually molts and sloughs\n"
            "off its old skin. It does so because the\n"
            "life energy within its body steadily builds\n"
            "to reach uncontrollable levels."),
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
        FRONT_PIC(Dratini, 56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Dratini,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Dratini, 56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Dratini),
        ICON(Dratini, 0),
        FOOTPRINT(Dratini)
        LEARNSETS(Dratini),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_DRAGONAIR}),
    },

    [SPECIES_DRAGONAIR] =
    {
        .baseHP        = 61,
        .baseAttack    = 84,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FAITH),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 144,
        .evYield_Attack = 2,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_MAINTENANCE, ABILITY_NONE, ABILITY_SPRING_CHARM },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Dragonair"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DRAGONAIR,
        .categoryName = _("Dragon"),
        .height = 40,
        .weight = 165,
        .description = COMPOUND_STRING(
            "A Dragonair stores an enormous amount of\n"
            "energy inside its body. It is said to alter\n"
            "the weather around it by loosing energy\n"
            "from the crystals on its neck and tail."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
        FRONT_PIC(Dragonair, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Dragonair,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Dragonair, 40, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Dragonair),
        ICON(Dragonair, 0),
        FOOTPRINT(Dragonair)
        LEARNSETS(Dragonair),
        .evolutions = EVOLUTION({EVO_LEVEL, 55, SPECIES_DRAGONITE}),
    },

    [SPECIES_DRAGONITE] =
    {
        .baseHP        = 91,
        .baseAttack    = 134,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_FAITH, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 218,
    #endif
        .evYield_Attack = 3,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_MULTISCALE },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Dragonite"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DRAGONITE,
        .categoryName = _("Dragon"),
        .height = 22,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "It can circle the globe in just 16 hours.\n"
            "It is a kindhearted Pokémon that leads\n"
            "lost and foundering ships in a storm\n"
            "to the safety of land."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        FRONT_PIC(Dragonite, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Dragonite,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Dragonite, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Dragonite),
        ICON(Dragonite, 2),
        FOOTPRINT(Dragonite)
        LEARNSETS(Dragonite),
    },
#endif //P_FAMILY_DRATINI

#if P_FAMILY_MEWTWO
#define SPECIES_MEWTWO_MISC_INFO                                        \
        .catchRate = 3,                                                 \
        .evYield_SpAttack = 3,                                          \
        .genderRatio = MON_GENDERLESS,                                  \
        .eggCycles = 120,                                               \
        .friendship = 0,                                                \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),      \
        .sourceGame = SOURCE_PCB,                                 \
        .speciesName = _("Mewtwo"),                                     \
        .natDexNum = NATIONAL_DEX_MEWTWO,                               \
        .categoryName = _("Genetic"),                                   \
        FOOTPRINT(Mewtwo)                                               \
        LEARNSETS(Mewtwo),                                              \
        .formSpeciesIdTable = sMewtwoFormSpeciesIdTable,                \
        .formChangeTable = sMewtwoFormChangeTable,                      \
        .isLegendary = TRUE

    [SPECIES_MEWTWO] =
    {
        SPECIES_MEWTWO_MISC_INFO,
        .baseHP        = 106,
        .baseAttack    = 110,
        .baseDefense   = 90,
        .baseSpeed     = 130,
        .baseSpAttack  = 154,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_REASON),
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 340,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 306,
    #else
        .expYield = 220,
    #endif
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_UNNERVE },
        .cryId = CRY_PORYGON,
        .height = 20,
        .weight = 1220,
        .description = COMPOUND_STRING(
            "A Pokémon that was created by genetic\n"
            "manipulation. However, even though the\n"
            "scientific power of humans made its body,\n"
            "they failed to give it a warm heart."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        FRONT_PIC(Mewtwo, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Mewtwo,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Mewtwo, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(Mewtwo),
        ICON(Mewtwo, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MEWTWO_MEGA_X] =
    {
        SPECIES_MEWTWO_MISC_INFO,
        .baseHP        = 106,
        .baseAttack    = 190,
        .baseDefense   = 100,
        .baseSpeed     = 130,
        .baseSpAttack  = 154,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_REASON, TYPE_DREAM),
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 390 : 351,
        .abilities = { ABILITY_STEADFAST, ABILITY_STEADFAST, ABILITY_STEADFAST },
        .isMegaEvolution = TRUE,
        .cryId = CRY_PORYGON,
        .height = 23,
        .weight = 1270,
        .description = COMPOUND_STRING(
            "Psychic power has augmented its muscles.\n"
            "It has a grip strength of one ton and can\n"
            "sprint a hundred meters in two seconds\n"
            "flat!"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        FRONT_PIC(MewtwoMegaX, 48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MewtwoMegaX,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MewtwoMegaX, 56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(MewtwoMegaX),
        ICON(MewtwoMegaX, 2),
    },

    [SPECIES_MEWTWO_MEGA_Y] =
    {
        SPECIES_MEWTWO_MISC_INFO,
        .baseHP        = 106,
        .baseAttack    = 150,
        .baseDefense   = 70,
        .baseSpeed     = 140,
        .baseSpAttack  = 194,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_REASON),
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 390 : 351,
        .abilities = { ABILITY_INSOMNIA, ABILITY_INSOMNIA, ABILITY_INSOMNIA },
        .isMegaEvolution = TRUE,
        .cryId = CRY_PORYGON,
        .height = 15,
        .weight = 330,
        .description = COMPOUND_STRING(
            "Despite its diminished size, its mental\n"
            "power has grown phenomenally. With a mere\n"
            "thought, it can smash a skyscraper to\n"
            "smithereens."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        FRONT_PIC(MewtwoMegaY, 40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MewtwoMegaY,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 3,
        BACK_PIC(MewtwoMegaY, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(MewtwoMegaY),
        ICON(MewtwoMegaY, 2),
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MEWTWO

#if P_FAMILY_MEW
    [SPECIES_MEW] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 64,
    #endif
        .evYield_HP = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_NONE },
        .sourceGame = SOURCE_MOF,
        .isMythical = TRUE,
        .speciesName = _("Mew"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MEW,
        .categoryName = _("New Species"),
        .height = 4,
        .weight = 40,
        .description = COMPOUND_STRING(
            "A Mew is said to possess the genes of all\n"
            "Pokémon. It is capable of making itself\n"
            "invisible at will, so it entirely avoids\n"
            "notice even if it approaches people."),
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Mew, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Mew,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 11,
        BACK_PIC(Mew, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Mew),
        ICON(Mew, 0),
        FOOTPRINT(Mew)
        LEARNSETS(Mew),
    },
#endif //P_FAMILY_MEW

#ifdef __INTELLISENSE__
};
#endif