#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoTouhou17[] =
{
#endif

    [SPECIES_CHIBI_SAKI] =
    {
        .baseHP        = 60,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 260 : 234,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PLUS, ABILITY_MINUS, ABILITY_HAKUREI_MIKO },
        .sourceGame = SOURCE_IN,
        .noFlip = TRUE,
        .speciesName = _("Klinklang"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_KLINKLANG,
        .categoryName = _("Gear"),
        .height = 6,
        .weight = 810,
        .description = COMPOUND_STRING(
            "Its red core functions as an energy tank.\n"
            "It is rotated at high speed for a rapid\n"
            "energy charge. It fires the charged energy\n"
            "through its spikes into an area."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Klinklang,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Klinklang,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Klinklang,
        .shinyPalette = gMonShinyPalette_Klinklang,
        .iconSprite = gMonIcon_Klinklang,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Klinklang)
        OVERWORLD(
            sPicTable_Klinklang,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Klinklang,
            gShinyOverworldPalette_Klinklang
        )
        .levelUpLearnset = sKlinklangLevelUpLearnset,
        .teachableLearnset = sKlinklangTeachableLearnset,
    },

    [SPECIES_NORMAL_SAKI] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 45,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_WIND),
        .catchRate = 190,
        .expYield = 55,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Tynamo"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_TYNAMO,
        .categoryName = _("EleFish"),
        .height = 2,
        .weight = 3,
        .description = COMPOUND_STRING(
            "These Pokémon move in schools.\n"
            "One alone can emit only a trickle of\n"
            "electricity, so a group of them gathers\n"
            "to unleash a powerful electric shock."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tynamo,
        .frontPicSize = MON_COORDS_SIZE(40, 24),
        .frontPicYOffset = 22,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 16,
        .backPic = gMonBackPic_Tynamo,
        .backPicSize = MON_COORDS_SIZE(64, 24),
        .backPicYOffset = 21,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Tynamo,
        .shinyPalette = gMonShinyPalette_Tynamo,
        .iconSprite = gMonIcon_Tynamo,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Tynamo)
        OVERWORLD(
            sPicTable_Tynamo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tynamo,
            gShinyOverworldPalette_Tynamo
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sTynamoLevelUpLearnset,
        .teachableLearnset = sTynamoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_EELEKTRIK}),
    },

#ifdef __INTELLISENSE__
};
#endif
