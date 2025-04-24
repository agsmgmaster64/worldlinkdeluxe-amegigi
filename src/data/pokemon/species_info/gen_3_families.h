#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen3[] =
{
#endif

#if P_FAMILY_TREECKO
#if P_MEGA_EVOLUTIONS
    [SPECIES_SCEPTILE_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 75,
        .baseSpeed     = 145,
        .baseSpAttack  = 145,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_NATURE, TYPE_FAITH),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD },
        .sourceGame = SOURCE_OTHER,
        .speciesName = _("Sceptile"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SCEPTILE,
        .categoryName = _("Forest"),
        .height = 19,
        .weight = 552,
        .description = COMPOUND_STRING(
            "Thanks to the power in its quick legs,\n"
            "Mega Sceptile can be on its opponent in a\n"
            "flash. It can cut off a portion of its tail\n"
            "to fire it like a missile at an opponent."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_SceptileMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SceptileMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_SceptileMega,
        .shinyPalette = gMonShinyPalette_SceptileMega,
        .iconSprite = gMonIcon_SceptileMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 11, SHADOW_SIZE_L)
        FOOTPRINT(Sceptile)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_SceptileMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SceptileMega,
            gShinyOverworldPalette_SceptileMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSceptileLevelUpLearnset,
        .teachableLearnset = sSceptileTeachableLearnset,
        .formSpeciesIdTable = sSceptileFormSpeciesIdTable,
        .formChangeTable = sSceptileFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TREECKO

#if P_FAMILY_TORCHIC
#if P_MEGA_EVOLUTIONS
    [SPECIES_BLAZIKEN_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 160,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DREAM),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_SPEED_BOOST, ABILITY_SPEED_BOOST },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Blaziken"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BLAZIKEN,
        .categoryName = _("Blaze"),
        .height = 19,
        .weight = 520,
        .description = COMPOUND_STRING(
            "As it unleashes a flurry of savage kicks,\n"
            "its legs can begin to burn from the\n"
            "friction of the surrounding atmosphere.\n"
            "They're always a source of pride to it."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_BlazikenMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BlazikenMega,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_BlazikenMega,
        .shinyPalette = gMonShinyPalette_BlazikenMega,
        .iconSprite = gMonIcon_BlazikenMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Blaziken)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_BlazikenMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BlazikenMega,
            gShinyOverworldPalette_BlazikenMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBlazikenLevelUpLearnset,
        .teachableLearnset = sBlazikenTeachableLearnset,
        .formSpeciesIdTable = sBlazikenFormSpeciesIdTable,
        .formChangeTable = sBlazikenFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TORCHIC

#if P_FAMILY_MUDKIP
#if P_MEGA_EVOLUTIONS
    [SPECIES_SWAMPERT_MEGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 110,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_WATER, TYPE_EARTH),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 318 : 286,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SWIFT_SWIM, ABILITY_SWIFT_SWIM },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Swampert"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SWAMPERT,
        .categoryName = _("Mud Fish"),
        .height = 19,
        .weight = 1020,
        .description = COMPOUND_STRING(
            "When it Mega Evolves, the strength that it\n"
            "needs to act in the water is increased.\n"
            "It can use its tenacious power\n"
            "both on land and in the water."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SwampertMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SwampertMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_SwampertMega,
        .shinyPalette = gMonShinyPalette_SwampertMega,
        .iconSprite = gMonIcon_SwampertMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Swampert)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_SwampertMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SwampertMega,
            gShinyOverworldPalette_SwampertMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSwampertLevelUpLearnset,
        .teachableLearnset = sSwampertTeachableLearnset,
        .formSpeciesIdTable = sSwampertFormSpeciesIdTable,
        .formChangeTable = sSwampertFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MUDKIP

#if P_FAMILY_ZIGZAGOON
#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define ZIGZAGOON_EXP_YIELD 56
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define ZIGZAGOON_EXP_YIELD 48
#else
    #define ZIGZAGOON_EXP_YIELD 60
#endif

#if P_GALARIAN_FORMS
    [SPECIES_ZIGZAGOON_GALAR] =
    {
        .baseHP        = 38,
        .baseAttack    = 30,
        .baseDefense   = 41,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_DARK, TYPE_ILLUSION),
        .catchRate = 255,
        .expYield = ZIGZAGOON_EXP_YIELD,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Zigzagoon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ZIGZAGOON,
        .categoryName = _("Tiny Raccoon"),
        .height = 4,
        .weight = 175,
        .description = COMPOUND_STRING(
            "Its restlessness has it constantly moving\n"
            "in zigzags. It will purposely run into other\n"
            "Pokémon to start fights. It's thought to\n"
            "be the oldest form of Zigzagoon."),
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ZigzagoonGalar,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZigzagoonGalar,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ZigzagoonGalar,
        .shinyPalette = gMonShinyPalette_ZigzagoonGalar,
        .iconSprite = gMonIcon_ZigzagoonGalar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-5, 0, SHADOW_SIZE_M)
        FOOTPRINT(Zigzagoon)
        OVERWORLD(
            sPicTable_ZigzagoonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ZigzagoonGalar,
            gShinyOverworldPalette_ZigzagoonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sZigzagoonGalarLevelUpLearnset,
        .teachableLearnset = sZigzagoonGalarTeachableLearnset,
        .formSpeciesIdTable = sZigzagoonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LINOONE_GALAR}),
    },

    [SPECIES_LINOONE_GALAR] =
    {
        .baseHP        = 78,
        .baseAttack    = 70,
        .baseDefense   = 61,
        .baseSpeed     = 100,
        .baseSpAttack  = 50,
        .baseSpDefense = 61,
        .types = MON_TYPES(TYPE_DARK, TYPE_ILLUSION),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 128,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Linoone"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LINOONE,
        .categoryName = _("Rushing"),
        .height = 5,
        .weight = 325,
        .description = COMPOUND_STRING(
            "This very aggressive Pokémon will\n"
            "recklessly challenge opponents stronger\n"
            "than itself. It uses its long tongue to\n"
            "taunt them to then tackle forcefully."),
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LinooneGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LinooneGalar,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_LinooneGalar,
        .shinyPalette = gMonShinyPalette_LinooneGalar,
        .iconSprite = gMonIcon_LinooneGalar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-4, 0, SHADOW_SIZE_L)
        FOOTPRINT(Linoone)
        OVERWORLD(
            sPicTable_LinooneGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_LinooneGalar,
            gShinyOverworldPalette_LinooneGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sLinooneGalarLevelUpLearnset,
        .teachableLearnset = sLinooneGalarTeachableLearnset,
        .formSpeciesIdTable = sLinooneFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_OBSTAGOON, CONDITIONS({IF_TIME, TIME_NIGHT})}),
    },

    [SPECIES_OBSTAGOON] =
    {
        .baseHP        = 93,
        .baseAttack    = 90,
        .baseDefense   = 101,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_DARK, TYPE_ILLUSION),
        .catchRate = 45,
        .expYield = 260,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RECKLESS, ABILITY_GUTS, ABILITY_DEFIANT },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Obstagoon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_OBSTAGOON,
        .categoryName = _("Blocking"),
        .height = 16,
        .weight = 460,
        .description = COMPOUND_STRING(
            "Its voice is staggering in volume.\n"
            "Obstagoon has a tendency to take on a\n"
            "threatening posture and shout--this move\n"
            "is known as Obstruct."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Obstagoon,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Obstagoon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Obstagoon,
        .shinyPalette = gMonShinyPalette_Obstagoon,
        .iconSprite = gMonIcon_Obstagoon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Obstagoon)
        OVERWORLD(
            sPicTable_Obstagoon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Obstagoon,
            gShinyOverworldPalette_Obstagoon
        )
        .levelUpLearnset = sObstagoonLevelUpLearnset,
        .teachableLearnset = sObstagoonTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZIGZAGOON

#if P_FAMILY_RALTS
#define RALTS_FAMILY_TYPE2 (P_UPDATED_TYPES >= GEN_6 ? TYPE_COSMIC : TYPE_REASON)

#if P_UPDATED_EGG_GROUPS >= GEN_8
    #define RALTS_FAMILY_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_AMORPHOUS)
#else
    #define RALTS_FAMILY_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS)
#endif

#if P_MEGA_EVOLUTIONS
    [SPECIES_GARDEVOIR_MEGA] =
    {
        .baseHP        = 68,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 165,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_REASON, RALTS_FAMILY_TYPE2),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 309 : 278,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_PIXILATE, ABILITY_PIXILATE, ABILITY_PIXILATE },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Gardevoir"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GARDEVOIR,
        .categoryName = _("Embrace"),
        .height = 16,
        .weight = 484,
        .description = COMPOUND_STRING(
            "By opening its heart, Mega Gardevoir\n"
            "becomes able to use tremendous psychic\n"
            "power. The red plate in its chest is said to\n"
            "be a physical manifestation of its heart."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GardevoirMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GardevoirMega,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_GardevoirMega,
        .shinyPalette = gMonShinyPalette_GardevoirMega,
        .iconSprite = gMonIcon_GardevoirMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 14, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gardevoir)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GardevoirMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GardevoirMega,
            gShinyOverworldPalette_GardevoirMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sGardevoirLevelUpLearnset,
        .teachableLearnset = sGardevoirTeachableLearnset,
        .formSpeciesIdTable = sGardevoirFormSpeciesIdTable,
        .formChangeTable = sGardevoirFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_PLACEHOLD_SATSUKI] =
    {
        .baseHP        = 68,
        .baseAttack    = 125,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_REASON, TYPE_DREAM),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 259,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 233,
    #else
        .expYield = 208,
    #endif
        .evYield_Attack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,
    #if P_UPDATED_ABILITIES >= GEN_9
        .abilities = { ABILITY_STEADFAST, ABILITY_SHARPNESS, ABILITY_JUSTIFIED },
    #else
        .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_JUSTIFIED },
    #endif
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Gallade"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GALLADE,
        .categoryName = _("Blade"),
        .height = 16,
        .weight = 520,
        .description = COMPOUND_STRING(
            "A master of courtesy and swordsmanship,\n"
            "it fights using extending swords on its\n"
            "elbows when trying to protect someone.\n"
            "It can sense what its foe is thinking."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Gallade,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Gallade,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Gallade,
        .shinyPalette = gMonShinyPalette_Gallade,
        .iconSprite = gMonIcon_Gallade,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 13, SHADOW_SIZE_L)
        FOOTPRINT(Gallade)
        OVERWORLD(
            sPicTable_Gallade,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gallade,
            gShinyOverworldPalette_Gallade
        )
        .levelUpLearnset = sGalladeLevelUpLearnset,
        .teachableLearnset = sGalladeTeachableLearnset,
        .formSpeciesIdTable = sGalladeFormSpeciesIdTable,
        .formChangeTable = sGalladeFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GALLADE_MEGA] =
    {
        .baseHP        = 68,
        .baseAttack    = 165,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_REASON, TYPE_DREAM),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 309 : 278,
        .evYield_Attack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Gallade"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GALLADE,
        .categoryName = _("Blade"),
        .height = 16,
        .weight = 564,
        .description = COMPOUND_STRING(
            "Mega Gallade has a knightly appearance.\n"
            "It can use its psychic power to reshape\n"
            "both arms into blades simultaneously and\n"
            "fight using a dual-wielding style."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_GalladeMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GalladeMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_GalladeMega,
        .shinyPalette = gMonShinyPalette_GalladeMega,
        .iconSprite = gMonIcon_GalladeMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Gallade)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GalladeMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GalladeMega,
            gShinyOverworldPalette_GalladeMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sGalladeLevelUpLearnset,
        .teachableLearnset = sGalladeTeachableLearnset,
        .formSpeciesIdTable = sGalladeFormSpeciesIdTable,
        .formChangeTable = sGalladeFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RALTS

#if P_FAMILY_NOSEPASS
#if P_GEN_4_CROSS_EVOS
    [SPECIES_ISAMI] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 145,
        .baseSpeed     = 40,
        .baseSpAttack  = 75,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_BEAST, TYPE_STEEL),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 198,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_NINJA_SUIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_MAGNET_PULL, ABILITY_SAND_FORCE },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Probopass"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PROBOPASS,
        .categoryName = _("Compass"),
        .height = 14,
        .weight = 3400,
        .description = COMPOUND_STRING(
            "It freely controls three units called\n"
            "Mini-Noses using magnetic force.\n"
            "With them, it can attack its foes from\n"
            "three directions."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Probopass,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Probopass,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Probopass,
        .shinyPalette = gMonShinyPalette_Probopass,
        .iconSprite = gMonIcon_Probopass,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_L)
        FOOTPRINT(Probopass)
        OVERWORLD(
            sPicTable_Probopass,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Probopass,
            gShinyOverworldPalette_Probopass
        )
        .levelUpLearnset = sProbopassLevelUpLearnset,
        .teachableLearnset = sProbopassTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_NOSEPASS

#if P_FAMILY_SABLEYE
#if P_MEGA_EVOLUTIONS
    [SPECIES_SABLEYE_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 125,
        .baseSpeed     = 20,
        .baseSpAttack  = 85,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_DARK, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Sableye"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SABLEYE,
        .categoryName = _("Darkness"),
        .height = 5,
        .weight = 1610,
        .description = COMPOUND_STRING(
            "Bathed in the energy of Mega Evolution,\n"
            "the gemstone on its chest expands, rips\n"
            "through its skin, and falls out."),
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SableyeMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SableyeMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_SableyeMega,
        .shinyPalette = gMonShinyPalette_SableyeMega,
        .iconSprite = gMonIcon_SableyeMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(3, 7, SHADOW_SIZE_S)
        FOOTPRINT(Sableye)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_SableyeMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SableyeMega,
            gShinyOverworldPalette_SableyeMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSableyeLevelUpLearnset,
        .teachableLearnset = sSableyeTeachableLearnset,
        .formSpeciesIdTable = sSableyeFormSpeciesIdTable,
        .formChangeTable = sSableyeFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SABLEYE

#if P_FAMILY_MAWILE
#if P_UPDATED_TYPES >= GEN_6
    #define MAWILE_TYPES { TYPE_STEEL, TYPE_COSMIC }
#else
    #define MAWILE_TYPES { TYPE_STEEL, TYPE_STEEL }
#endif

#if P_MEGA_EVOLUTIONS
    [SPECIES_MAWILE_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .types = MAWILE_TYPES,
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_UNZAN, ABILITY_UNZAN, ABILITY_UNZAN },
        .sourceGame = SOURCE_MS,
        .speciesName = _("Mawile"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MAWILE,
        .categoryName = _("Deceiver"),
        .height = 10,
        .weight = 235,
        .description = COMPOUND_STRING(
            "Its two sets of jaws thrash about\n"
            "violently as if they each had a will of\n"
            "their own. One gnash from them can turn a\n"
            "boulder to dust."),
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MawileMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MawileMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_MawileMega,
        .shinyPalette = gMonShinyPalette_MawileMega,
        .iconSprite = gMonIcon_MawileMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Mawile)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_MawileMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MawileMega,
            gShinyOverworldPalette_MawileMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sMawileLevelUpLearnset,
        .teachableLearnset = sMawileTeachableLearnset,
        .formSpeciesIdTable = sMawileFormSpeciesIdTable,
        .formChangeTable = sMawileFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAWILE

#if P_FAMILY_ARON
#if P_MEGA_EVOLUTIONS
    [SPECIES_AGGRON_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 140,
        .baseDefense   = 230,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .evYield_Defense = 3,
        .itemRare = ITEM_BUNNY_SUIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_FILTER, ABILITY_FILTER, ABILITY_FILTER },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Aggron"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_AGGRON,
        .categoryName = _("Iron Armor"),
        .height = 22,
        .weight = 3950,
        .description = COMPOUND_STRING(
            "When Aggron Mega Evolves into\n"
            "Mega Aggron, the destructive ability of\n"
            "its fearsome horns can turn a steel-clad\n"
            "tank into so much scrap metal."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_AggronMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AggronMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_AggronMega,
        .shinyPalette = gMonShinyPalette_AggronMega,
        .iconSprite = gMonIcon_AggronMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Aggron)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_AggronMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_AggronMega,
            gShinyOverworldPalette_AggronMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sAggronLevelUpLearnset,
        .teachableLearnset = sAggronTeachableLearnset,
        .formSpeciesIdTable = sAggronFormSpeciesIdTable,
        .formChangeTable = sAggronFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ARON

#if P_FAMILY_MEDITITE
#if P_MEGA_EVOLUTIONS
    [SPECIES_MEDICHAM_MEGA] =
    {
        .baseHP        = 60,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DREAM, TYPE_REASON),
        .catchRate = 90,
        .expYield = 179,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PURE_POWER, ABILITY_PURE_POWER, ABILITY_PURE_POWER },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Medicham"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_NORMAL_SHINMYOUMARU,
        .categoryName = _("Meditate"),
        .height = 13,
        .weight = 315,
        .description = COMPOUND_STRING(
            "It uses its amped-up willpower to create\n"
            "additional arms for itself. The more it\n"
            "has trained its spirit, the more realistic\n"
            "and dexterous these arms become."),
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MedichamMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MedichamMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_MedichamMega,
        .shinyPalette = gMonShinyPalette_MedichamMega,
        .iconSprite = gMonIcon_MedichamMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_S)
        FOOTPRINT(Medicham)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_MedichamMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MedichamMega,
            gShinyOverworldPalette_MedichamMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sMedichamLevelUpLearnset,
        .teachableLearnset = sMedichamTeachableLearnset,
        .formSpeciesIdTable = sMedichamFormSpeciesIdTable,
        .formChangeTable = sMedichamFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MEDITITE

#if P_FAMILY_ELECTRIKE
#if P_MEGA_EVOLUTIONS
    [SPECIES_MANECTRIC_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 135,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WIND),
        .catchRate = 45,
        .expYield = 201,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_INTIMIDATE, ABILITY_INTIMIDATE },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Manectric"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DEFENSE_SHINMYOUMARU,
        .categoryName = _("Discharge"),
        .height = 18,
        .weight = 440,
        .description = COMPOUND_STRING(
            "Too much electricity has built up in its\n"
            "body, irritating Manectric. Its explosive\n"
            "speed is equal to that of a lightning bolt."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ManectricMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ManectricMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_ManectricMega,
        .shinyPalette = gMonShinyPalette_ManectricMega,
        .iconSprite = gMonIcon_ManectricMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Manectric)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_ManectricMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ManectricMega,
            gShinyOverworldPalette_ManectricMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sManectricLevelUpLearnset,
        .teachableLearnset = sManectricTeachableLearnset,
        .formSpeciesIdTable = sManectricFormSpeciesIdTable,
        .formChangeTable = sManectricFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ELECTRIKE

#if P_FAMILY_CARVANHA
#if P_MEGA_EVOLUTIONS
    [SPECIES_SHARPEDO_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 140,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 110,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 60,
        .expYield = 196,
        .evYield_Attack = 2,
        .itemRare = ITEM_KUSANAGI,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_STRONG_JAW, ABILITY_STRONG_JAW },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Sharpedo"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CHIBI_TENSHI,
        .categoryName = _("Brutal"),
        .height = 25,
        .weight = 1303,
        .description = COMPOUND_STRING(
            "The yellow patterns it bears are old scars.\n"
            "The energy from Mega Evolution runs\n"
            "through them, causing it sharp pain and\n"
            "suffering."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_SharpedoMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 1,
        .backPic = gMonBackPic_SharpedoMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_SharpedoMega,
        .shinyPalette = gMonShinyPalette_SharpedoMega,
        .iconSprite = gMonIcon_SharpedoMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Sharpedo)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_SharpedoMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_SharpedoMega,
            gShinyOverworldPalette_SharpedoMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSharpedoLevelUpLearnset,
        .teachableLearnset = sSharpedoTeachableLearnset,
        .formSpeciesIdTable = sSharpedoFormSpeciesIdTable,
        .formChangeTable = sSharpedoFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_CARVANHA

#if P_FAMILY_NUMEL
#if P_MEGA_EVOLUTIONS
    [SPECIES_CAMERUPT_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 20,
        .baseSpAttack  = 145,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_FIRE, TYPE_EARTH),
        .catchRate = 150,
        .expYield = 196,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Camerupt"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CHIBI_HATATE,
        .categoryName = _("Eruption"),
        .height = 25,
        .weight = 3205,
        .description = COMPOUND_STRING(
            "The humps on its back have transformed\n"
            "into one large and very active volcano. It\n"
            "has a deep hatred of water or any moisture\n"
            "and has an explosive personality."),
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_CameruptMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CameruptMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_CameruptMega,
        .shinyPalette = gMonShinyPalette_CameruptMega,
        .iconSprite = gMonIcon_CameruptMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Camerupt)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_CameruptMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_CameruptMega,
            gShinyOverworldPalette_CameruptMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sCameruptLevelUpLearnset,
        .teachableLearnset = sCameruptTeachableLearnset,
        .formSpeciesIdTable = sCameruptFormSpeciesIdTable,
        .formChangeTable = sCameruptFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_NUMEL

#if P_FAMILY_SWABLU
#if P_MEGA_EVOLUTIONS
    [SPECIES_ALTARIA_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 110,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_FAITH, TYPE_COSMIC),
        .catchRate = 45,
        .expYield = 207,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_PIXILATE, ABILITY_PIXILATE, ABILITY_PIXILATE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Altaria"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_TECH_LUNA,
        .categoryName = _("Humming"),
        .height = 15,
        .weight = 206,
        .description = COMPOUND_STRING(
            "It sings with a voice that is even more\n"
            "beautiful than before it Mega Evolved.\n"
            "Its feathers became larger for protection\n"
            "and glimmer with an iridescent sheen."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_AltariaMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_AltariaMega,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_AltariaMega,
        .shinyPalette = gMonShinyPalette_AltariaMega,
        .iconSprite = gMonIcon_AltariaMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 17, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_AltariaMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_AltariaMega,
            gShinyOverworldPalette_AltariaMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sAltariaLevelUpLearnset,
        .teachableLearnset = sAltariaTeachableLearnset,
        .formSpeciesIdTable = sAltariaFormSpeciesIdTable,
        .formChangeTable = sAltariaFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SWABLU

#if P_FAMILY_CASTFORM
    [SPECIES_CASTFORM_SUNNY] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 145,
        .evYield_HP = 1,
        .itemCommon = ITEM_SWIMSUIT,
        .itemRare = ITEM_SWIMSUIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_FORECAST, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Castform"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CASTFORM,
        .categoryName = _("Weather"),
        .height = 3,
        .weight = 8,
        .description = COMPOUND_STRING(
            "Castform takes this form on bright days.\n"
            "In an experiment where is was placed in\n"
            "front of a heater, it didn't change to this\n"
            "form. Its body is warm and toasty."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CastformSunny,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_CastformSunny,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_CastformSunny,
        .shinyPalette = gMonShinyPalette_CastformSunny,
        .iconSprite = gMonIcon_CastformSunny,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformSunny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_CastformSunny,
            gShinyOverworldPalette_CastformSunny
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },

    [SPECIES_CASTFORM_RAINY] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 145,
        .evYield_HP = 1,
        .itemCommon = ITEM_SWIMSUIT,
        .itemRare = ITEM_SWIMSUIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_FORECAST, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Castform"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CASTFORM,
        .categoryName = _("Weather"),
        .height = 3,
        .weight = 8,
        .description = COMPOUND_STRING(
            "This is Castform's form while it's raining.\n"
            "In an experiment where it was placed in a\n"
            "shower, it didn't change to this form. Its\n"
            "body is soft, slightly swollen with water."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CastformRainy,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_SWING_CONVEX_FAST,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_CastformRainy,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_CastformRainy,
        .shinyPalette = gMonShinyPalette_CastformRainy,
        .iconSprite = gMonIcon_CastformRainy,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformRainy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_CastformRainy,
            gShinyOverworldPalette_CastformRainy
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },

    [SPECIES_CASTFORM_SNOWY] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 145,
        .evYield_HP = 1,
        .itemCommon = ITEM_SWIMSUIT,
        .itemRare = ITEM_SWIMSUIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_FORECAST, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Castform"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CASTFORM,
        .categoryName = _("Weather"),
        .height = 3,
        .weight = 8,
        .description = COMPOUND_STRING(
            "This is Castform's form in a hailstorm.\n"
            "In an experiment where it was placed\n"
            "in a freezer, it didn't change to this form.\n"
            "Its cold skin is as smooth as ice."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CastformSnowy,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 29),
            ANIMCMD_FRAME(0, 12),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_CastformSnowy,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_CastformSnowy,
        .shinyPalette = gMonShinyPalette_CastformSnowy,
        .iconSprite = gMonIcon_CastformSnowy,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_S)
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformSnowy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_CastformSnowy,
            gShinyOverworldPalette_CastformSnowy
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_FAMILY_CASTFORM

#if P_FAMILY_SHUPPET
#if P_MEGA_EVOLUTIONS
    [SPECIES_BANETTE_MEGA] =
    {
        .baseHP        = 64,
        .baseAttack    = 165,
        .baseDefense   = 75,
        .baseSpeed     = 75,
        .baseSpAttack  = 93,
        .baseSpDefense = 83,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
        .expYield = 194,
        .evYield_Attack = 2,
        .itemRare = ITEM_BURIAL_DRESS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PRANKSTER, ABILITY_PRANKSTER, ABILITY_PRANKSTER },
        .sourceGame = SOURCE_MS,
        .speciesName = _("Banette"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BANETTE,
        .categoryName = _("Marionette"),
        .height = 12,
        .weight = 130,
        .description = COMPOUND_STRING(
            "Extraordinary energy amplifies its\n"
            "cursing power to such an extent that it\n"
            "can't help but curse its own Trainer."),
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BanetteMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_BanetteMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_BanetteMega,
        .shinyPalette = gMonShinyPalette_BanetteMega,
        .iconSprite = gMonIcon_BanetteMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 16, SHADOW_SIZE_M)
        FOOTPRINT(Banette)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_BanetteMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BanetteMega,
            gShinyOverworldPalette_BanetteMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBanetteLevelUpLearnset,
        .teachableLearnset = sBanetteTeachableLearnset,
        .formSpeciesIdTable = sBanetteFormSpeciesIdTable,
        .formChangeTable = sBanetteFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SHUPPET

#if P_FAMILY_DUSKULL
#if P_GEN_4_CROSS_EVOS
    [SPECIES_DUSKNOIR] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 135,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 263,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 236,
    #else
        .expYield = 210,
    #endif
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_BURIAL_DRESS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FRISK },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
    #endif
        .sourceGame = SOURCE_MS,
        .speciesName = _("Dusknoir"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DUSKNOIR,
        .categoryName = _("Gripper"),
        .height = 22,
        .weight = 1066,
        .description = COMPOUND_STRING(
            "This feared Pokémon is said to travel to\n"
            "worlds unknown. Some even believe that\n"
            "it takes lost spirits into its pliant body\n"
            "and guides them home."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Dusknoir,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Dusknoir,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Dusknoir,
        .shinyPalette = gMonShinyPalette_Dusknoir,
        .iconSprite = gMonIcon_Dusknoir,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 13, SHADOW_SIZE_M)
        FOOTPRINT(Dusknoir)
        OVERWORLD(
            sPicTable_Dusknoir,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dusknoir,
            gShinyOverworldPalette_Dusknoir
        )
        .levelUpLearnset = sDusknoirLevelUpLearnset,
        .teachableLearnset = sDusknoirTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_DUSKULL

#if P_FAMILY_ABSOL
#if P_MEGA_EVOLUTIONS
    [SPECIES_ABSOL_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 150,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 115,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 30,
        .expYield = 198,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE },
        .sourceGame = SOURCE_POFV,
        .noFlip = TRUE,
        .speciesName = _("Absol"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CHIBI_KOSUZU,
        .categoryName = _("Disaster"),
        .height = 12,
        .weight = 490,
        .description = COMPOUND_STRING(
            "As the energy of Mega Evolution fills it,\n"
            "its fur bristles. What you see on its back\n"
            "are not true wings, and this Pokémon isn't\n"
            "able to fly."),
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_AbsolMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AbsolMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_AbsolMega,
        .shinyPalette = gMonShinyPalette_AbsolMega,
        .iconSprite = gMonIcon_AbsolMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Absol)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_AbsolMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_AbsolMega,
            gShinyOverworldPalette_AbsolMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sAbsolLevelUpLearnset,
        .teachableLearnset = sAbsolTeachableLearnset,
        .formSpeciesIdTable = sAbsolFormSpeciesIdTable,
        .formChangeTable = sAbsolFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABSOL

#if P_FAMILY_SNORUNT
#if P_MEGA_EVOLUTIONS
    [SPECIES_GLALIE_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 120,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 75,
        .expYield = 203,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_REFRIGERATE, ABILITY_REFRIGERATE, ABILITY_REFRIGERATE },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Glalie"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PLACEHOLD2_KOSUZU,
        .categoryName = _("Face"),
        .height = 21,
        .weight = 3502,
        .description = COMPOUND_STRING(
            "The power of Mega Evolution was so strong\n"
            "that it smashed Glalie's jaw. Its inability\n"
            "to eat very well leaves Glalie irritated."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GlalieMega,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_GlalieMega,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_GlalieMega,
        .shinyPalette = gMonShinyPalette_GlalieMega,
        .iconSprite = gMonIcon_GlalieMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 18, SHADOW_SIZE_L)
        FOOTPRINT(Glalie)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GlalieMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GlalieMega,
            gShinyOverworldPalette_GlalieMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sGlalieLevelUpLearnset,
        .teachableLearnset = sGlalieTeachableLearnset,
        .formSpeciesIdTable = sGlalieFormSpeciesIdTable,
        .formChangeTable = sGlalieFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_FROSLASS] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ICE, TYPE_GHOST),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 168 : 187,
        .evYield_Speed = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_CURSED_BODY },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Froslass"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_FROSLASS,
        .categoryName = _("Snow Land"),
        .height = 13,
        .weight = 266,
        .description = COMPOUND_STRING(
            "When it finds people or Pokémon it likes,\n"
            "it freezes them and takes them to its\n"
            "chilly den, where they become its\n"
            "decorations."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Froslass,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Froslass,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Froslass,
        .shinyPalette = gMonShinyPalette_Froslass,
        .iconSprite = gMonIcon_Froslass,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 10, SHADOW_SIZE_S)
        FOOTPRINT(Froslass)
        OVERWORLD(
            sPicTable_Froslass,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Froslass,
            gShinyOverworldPalette_Froslass
        )
        .levelUpLearnset = sFroslassLevelUpLearnset,
        .teachableLearnset = sFroslassTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNORUNT

#if P_FAMILY_BAGON
#if P_MEGA_EVOLUTIONS
    [SPECIES_CHIBI_MEIRA_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 145,
        .baseDefense   = 130,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FAITH, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_Attack = 3,
        .itemRare = ITEM_PRIESTESS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_AERILATE, ABILITY_AERILATE, ABILITY_AERILATE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Salamence"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SALAMENCE,
        .categoryName = _("Dragon"),
        .height = 18,
        .weight = 1126,
        .description = COMPOUND_STRING(
            "Mega Evolution fuels its brutality, and it\n"
            "may even turn on the Trainer who raised it.\n"
            "It's been dubbed the blood-soaked.\n"
            "crescent."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SalamenceMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SalamenceMega,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_SalamenceMega,
        .shinyPalette = gMonShinyPalette_SalamenceMega,
        .iconSprite = gMonIcon_SalamenceMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 8, SHADOW_SIZE_L)
        FOOTPRINT(Salamence)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_SalamenceMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SalamenceMega,
            gShinyOverworldPalette_SalamenceMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSalamenceLevelUpLearnset,
        .teachableLearnset = sSalamenceTeachableLearnset,
        .formSpeciesIdTable = sSalamenceFormSpeciesIdTable,
        .formChangeTable = sSalamenceFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BAGON

#if P_FAMILY_BELDUM
#if P_MEGA_EVOLUTIONS
    [SPECIES_METAGROSS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 145,
        .baseDefense   = 150,
        .baseSpeed     = 110,
        .baseSpAttack  = 105,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_STEEL, TYPE_REASON),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_Defense = 3,
        .itemRare = ITEM_MAID_UNIFORM,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Metagross"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_METAGROSS,
        .categoryName = _("Iron Leg"),
        .height = 25,
        .weight = 9429,
        .description = COMPOUND_STRING(
            "When it knows it can't win, it digs the\n"
            "claws on its legs into its opponent and\n"
            "starts the countdown to a big explosion."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
        .frontPic = gMonFrontPic_MetagrossMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_MetagrossMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_MetagrossMega,
        .shinyPalette = gMonShinyPalette_MetagrossMega,
        .iconSprite = gMonIcon_MetagrossMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 15, SHADOW_SIZE_L)
        FOOTPRINT(Metagross)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_MetagrossMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MetagrossMega,
            gShinyOverworldPalette_MetagrossMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sMetagrossLevelUpLearnset,
        .teachableLearnset = sMetagrossTeachableLearnset,
        .formSpeciesIdTable = sMetagrossFormSpeciesIdTable,
        .formChangeTable = sMetagrossFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BELDUM

#if P_FAMILY_LATIAS
#if P_MEGA_EVOLUTIONS
    [SPECIES_LATIAS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 110,
        .baseSpAttack  = 140,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_FAITH, TYPE_REASON),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_SpDefense = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Latias"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LATIAS,
        .categoryName = _("Eon"),
        .height = 18,
        .weight = 520,
        .description = COMPOUND_STRING(
            "Its body is smaller than Mega Latios's\n"
            "body. It is more agile and can make very\n"
            "sharp turns. When it Mega Evolves, its\n"
            "defensive strength grows substantially."),
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LatiasMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_LatiasMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_LatiasMega,
        .shinyPalette = gMonShinyPalette_LatiasMega,
        .iconSprite = gMonIcon_LatiasMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 19, SHADOW_SIZE_L)
        FOOTPRINT(Latias)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_LatiasMega,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_LatiasMega,
            gShinyOverworldPalette_LatiasMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sLatiasLevelUpLearnset,
        .teachableLearnset = sLatiasTeachableLearnset,
        .formSpeciesIdTable = sLatiasFormSpeciesIdTable,
        .formChangeTable = sLatiasFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIAS

#if P_FAMILY_LATIOS
#if P_MEGA_EVOLUTIONS
    [SPECIES_LATIOS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 110,
        .baseSpAttack  = 160,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_FAITH, TYPE_REASON),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_SpAttack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Latios"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LATIOS,
        .categoryName = _("Eon"),
        .height = 23,
        .weight = 700,
        .description = COMPOUND_STRING(
            "It's larger than Mega Latias, and can\n"
            "achieve higher speeds in flight.\n"
            "This Pokémon can use its speed in battle\n"
            "to unleash a flurry of attacks."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_LatiosMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_LatiosMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_LatiosMega,
        .shinyPalette = gMonShinyPalette_LatiosMega,
        .iconSprite = gMonIcon_LatiosMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 19, SHADOW_SIZE_L)
        FOOTPRINT(Latios)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_LatiosMega,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_LatiosMega,
            gShinyOverworldPalette_LatiosMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sLatiosLevelUpLearnset,
        .teachableLearnset = sLatiosTeachableLearnset,
        .formSpeciesIdTable = sLatiosFormSpeciesIdTable,
        .formChangeTable = sLatiosFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIOS

#if P_FAMILY_DEOXYS
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define DEOXYS_EXP_YIELD 300
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define DEOXYS_EXP_YIELD 270
#else
    #define DEOXYS_EXP_YIELD 215
#endif

    [SPECIES_DEOXYS_ATTACK] =
    {
        .baseHP        = 50,
        .baseAttack    = 180,
        .baseDefense   = 20,
        .baseSpeed     = 150,
        .baseSpAttack  = 180,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 3,
        .expYield = DEOXYS_EXP_YIELD,
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Deoxys"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DEOXYS,
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gDeoxysNormalPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_DeoxysAttack,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 26),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_DeoxysAttack,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_DeoxysAttack,
        .shinyPalette = gMonShinyPalette_DeoxysAttack,
        .iconSprite = gMonIcon_DeoxysAttack,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        OVERWORLD(
            sPicTable_DeoxysAttack,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DeoxysAttack,
            gShinyOverworldPalette_DeoxysAttack
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDeoxysAttackLevelUpLearnset,
        .teachableLearnset = sDeoxysAttackTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysAttackFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },

    [SPECIES_DEOXYS_DEFENSE] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 160,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 160,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 3,
        .expYield = DEOXYS_EXP_YIELD,
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Deoxys"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DEOXYS,
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gDeoxysNormalPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_DeoxysDefense,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 26),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_DeoxysDefense,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_DeoxysDefense,
        .shinyPalette = gMonShinyPalette_DeoxysDefense,
        .iconSprite = gMonIcon_DeoxysDefense,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Deoxys)
        OVERWORLD(
            sPicTable_DeoxysDefense,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DeoxysDefense,
            gShinyOverworldPalette_DeoxysDefense
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDeoxysDefenseLevelUpLearnset,
        .teachableLearnset = sDeoxysDefenseTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysDefenseFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },

    [SPECIES_DEOXYS_SPEED] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 90,
        .baseSpeed     = 180,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 3,
        .expYield = DEOXYS_EXP_YIELD,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .noFlip = TRUE,
        .speciesName = _("Deoxys"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DEOXYS,
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gDeoxysNormalPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_DeoxysSpeed,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 26),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_DeoxysSpeed,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_DeoxysSpeed,
        .shinyPalette = gMonShinyPalette_DeoxysSpeed,
        .iconSprite = gMonIcon_DeoxysSpeed,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 13, SHADOW_SIZE_M)
        FOOTPRINT(Deoxys)
        OVERWORLD(
            sPicTable_DeoxysSpeed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DeoxysSpeed,
            gShinyOverworldPalette_DeoxysSpeed
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDeoxysSpeedLevelUpLearnset,
        .teachableLearnset = sDeoxysSpeedTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysSpeedFormChangeTable,
        .randomizerMode = MON_RANDOMIZER_INVALID
    },
#endif //P_FAMILY_DEOXYS

#ifdef __INTELLISENSE__
};
#endif
