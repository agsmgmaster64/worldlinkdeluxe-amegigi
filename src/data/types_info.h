#include "constants/battle.h"
#include "constants/pokemon.h"

#define X UQ_4_12
#define ______ X(1.0) // Regular effectiveness.

// Type matchup updates.                                                Attacker      Defender
#define STL_RS (B_UPDATED_TYPE_MATCHUPS >= GEN_6 ? X(1.0) : X(0.5))  // Ghost/Dark -> Steel
#define PSN_RS (B_UPDATED_TYPE_MATCHUPS >= GEN_2 ? X(0.5) : X(2.0))  // Bug        -> Poison
#define BUG_RS (B_UPDATED_TYPE_MATCHUPS >= GEN_2 ? X(1.0) : X(2.0))  // Poison     -> Bug
#define PSY_RS (B_UPDATED_TYPE_MATCHUPS >= GEN_2 ? X(2.0) : X(0.0))  // Ghost      -> Psychic
#define FIR_RS (B_UPDATED_TYPE_MATCHUPS >= GEN_2 ? X(0.5) : X(1.0))  // Ice        -> Fire

const uq4_12_t gTypeEffectivenessTable[NUMBER_OF_MON_TYPES][NUMBER_OF_MON_TYPES] =
{//                   Defender -->
 //  Attacker           None  Illusion Dream   Flying  Miasma  Earth   Beast   Heart   Ghost   Steel   Mystery  Fire   Water   Nature  Wind    Reason    Ice   Faith   Dark    Cosmic  Stellar
    [TYPE_NONE]     = {______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______},
    [TYPE_ILLUSION] = {______, ______, X(0.5), ______, ______, ______, ______, ______, X(0.0), ______, ______, ______, ______, ______, ______, ______, ______, ______, X(0.5), ______, ______},
    [TYPE_DREAM]    = {______, ______, X(0.5), X(0.5), ______, ______, ______, X(2.0), ______, X(2.0), ______, ______, ______, ______, ______, X(0.5), ______, ______, X(0.5), ______, ______},
    [TYPE_FLYING]   = {______, ______, ______, ______, ______, ______, X(2.0), ______, ______, X(0.5), ______, ______, ______, X(2.0), X(0.5), ______, ______, ______, ______, X(2.0), ______},
    [TYPE_MIASMA]   = {______, ______, ______, ______, X(0.5), X(0.5), ______, ______, X(0.5), X(0.0), ______, ______, X(2.0), X(2.0), ______, X(0.5), ______, ______, ______, ______, ______},
    [TYPE_EARTH]    = {______, ______, ______, X(0.0), X(2.0), ______, X(0.5), ______, ______, X(2.0), ______, X(2.0), ______, X(0.5), X(2.0), ______, ______, ______, ______, ______, ______},
    [TYPE_BEAST]    = {______, ______, ______, X(0.5), ______, ______, ______, ______, X(2.0), ______, ______, ______, ______, X(0.5), ______, ______, ______, X(2.0), ______, ______, ______},
    [TYPE_HEART]    = {______, ______, X(0.5), ______, X(0.5), ______, ______, X(0.5), ______, ______, ______, ______, ______, ______, ______, X(2.0), ______, X(0.5), X(2.0), ______, ______},
    [TYPE_GHOST]    = {______, X(0.0), ______, ______, ______, ______, X(0.5), X(0.5), X(2.0), ______, ______, ______, ______, ______, ______, X(2.0), ______, ______, X(0.0), ______, ______},
    [TYPE_STEEL]    = {______, ______, ______, X(2.0), ______, ______, ______, ______, ______, X(0.5), ______, X(0.5), X(0.5), ______, ______, ______, X(2.0), ______, X(2.0), X(2.0), ______},
    [TYPE_MYSTERY]  = {______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______},
    [TYPE_FIRE]     = {______, ______, ______, ______, ______, X(0.5), X(2.0), ______, ______, X(2.0), ______, X(0.5), X(0.5), X(2.0), ______, ______, X(2.0), X(0.5), ______, X(0.5), ______},
    [TYPE_WATER]    = {______, ______, ______, ______, ______, X(2.0), X(2.0), ______, ______, ______, ______, X(2.0), X(0.5), X(0.5), ______, ______, X(0.5), X(0.5), ______, X(0.5), ______},
    [TYPE_NATURE]   = {______, ______, ______, X(0.5), X(0.5), X(2.0), ______, ______, ______, ______, ______, X(0.5), X(2.0), X(0.5), ______, ______, ______, ______, ______, ______, ______},
    [TYPE_WIND]     = {______, ______, ______, X(2.0), ______, X(0.0), ______, ______, ______, ______, ______, ______, X(2.0), X(0.5), X(0.5), ______, ______, X(0.5), ______, ______, ______},
    [TYPE_REASON]   = {______, ______, X(2.0), ______, X(2.0), ______, ______, X(0.5), X(0.5), X(0.5), ______, ______, ______, ______, ______, ______, ______, X(2.0), ______, X(2.0), ______},
    [TYPE_ICE]      = {______, ______, ______, X(2.0), ______, ______, ______, ______, ______, ______, ______, ______, X(0.5), X(2.0), ______, ______, X(0.5), ______, ______, X(0.5), ______},
    [TYPE_FAITH]    = {______, ______, ______, ______, X(0.5), ______, ______, X(2.0), ______, ______, ______, ______, ______, ______, ______, X(0.5), ______, ______, X(2.0), ______, ______},
    [TYPE_DARK]     = {______, ______, X(2.0), ______, ______, ______, ______, X(0.5), X(0.0), ______, ______, ______, ______, ______, ______, X(2.0), ______, ______, X(0.5), X(0.5), ______},
    [TYPE_COSMIC]   = {______, ______, ______, ______, ______, ______, X(2.0), ______, ______, ______, ______, X(2.0), ______, ______, X(2.0), ______, X(0.5), ______, X(0.5), ______, ______},
    [TYPE_STELLAR]  = {______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______},
};

#undef ______
#undef X

#if B_EXPANDED_TYPE_NAMES == TRUE
#define HANDLE_EXPANDED_TYPE_NAME(_name, ...) _(DEFAULT(_name, __VA_ARGS__))
#else
#define HANDLE_EXPANDED_TYPE_NAME(_name, ...) _(_name)
#endif

// .generic is large enough that the text for TYPE_ELECTRIC will exceed TEXT_BUFF_ARRAY_COUNT.
// In this array there's commented-out data such as references to type-resist berries that would otherwise would go unused.
// However, we figured this information would be useful for users that want to add their own types as a reminder of
// what data would they need to add in order to have their new types be fully fledged like official types.
const struct TypeInfo gTypesInfo[NUMBER_OF_MON_TYPES] =
{
    [TYPE_NONE] =
    {
        .name = _("None"),
        .generic = _("a move"),
        .palette = TYPE_ICON_PAL_3, // Uses TYPE_MYSTERY's icon
        .teraTypeRGBValue = RGB_WHITE,
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_NormalTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = TRUE,
    },
    [TYPE_ILLUSION] =
    {
        .name = HANDLE_EXPANDED_TYPE_NAME("Illusn", "Illusion"),
        .generic = _("an Illusion move"),
        .palette = TYPE_ICON_PAL_3,
        .zMove = MOVE_BREAKNECK_BLITZ,
        .maxMove = MOVE_MAX_STRIKE,
        .teraTypeRGBValue = RGB(10, 18, 27),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
<<<<<<< HEAD
        .paletteTMHM = gItemIconPalette_IllusionTMHM,
        //.enhanceItem = ITEM_BRIDAL_GOWN,
=======
        .paletteTMHM = gItemIconPalette_NormalTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_SILK_SCARF,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_CHILAN_BERRY,
        //.gem = ITEM_NORMAL_GEM,
        //.zCrystal = ITEM_NORMALIUM_Z,
        //.teraShard = ITEM_NORMAL_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_NORMAL,
    },
    [TYPE_DREAM] =
    {
        .name = _("Dream"),
        .generic = _("a Dream move"),
        .palette = TYPE_ICON_PAL_1,
        .zMove = MOVE_ALL_OUT_PUMMELING,
        .maxMove = MOVE_MAX_KNUCKLE,
        .teraTypeRGBValue = RGB_WHITE,
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
<<<<<<< HEAD
        .paletteTMHM = gItemIconPalette_DreamTMHM,
        //.enhanceItem = ITEM_CHINA_DRESS,
=======
        .paletteTMHM = gItemIconPalette_FightingTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_BLACK_BELT,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_CHOPLE_BERRY,
        //.gem = ITEM_FIGHTING_GEM,
        //.zCrystal = ITEM_FIGHTINIUM_Z,
        //.plate = ITEM_FIST_PLATE,
        //.memory = ITEM_FIGHTING_MEMORY,
        //.teraShard = ITEM_FIGHTING_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_FIGHTING,
    },
    [TYPE_FLYING] =
    {
        .name = _("Flying"),
        .generic = _("a Flying move"),
        .palette = TYPE_ICON_PAL_2,
        .zMove = MOVE_SUPERSONIC_SKYSTRIKE,
        .maxMove = MOVE_MAX_AIRSTREAM,
        .teraTypeRGBValue = RGB(31, 26, 7),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_FlyingTMHM,
<<<<<<< HEAD
        //.enhanceItem = ITEM_STEWARDESS,
=======
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_SHARP_BEAK,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_COBA_BERRY,
        //.gem = ITEM_FLYING_GEM,
        //.zCrystal = ITEM_FLYINIUM_Z,
        //.plate = ITEM_SKY_PLATE,
        //.memory = ITEM_FLYING_MEMORY,
        //.teraShard = ITEM_FLYING_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_FLYING,
    },
    [TYPE_MIASMA] =
    {
        .name = _("Miasma"),
        .generic = _("a Miasma move"),
        .palette = TYPE_ICON_PAL_2,
        .zMove = MOVE_ACID_DOWNPOUR,
        .maxMove = MOVE_MAX_OOZE,
        .teraTypeRGBValue = RGB(26, 10, 25), // custom
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
<<<<<<< HEAD
        .paletteTMHM = gItemIconPalette_MiasmaTMHM,
        //.enhanceItem = ITEM_NURSE_OUTFIT,
=======
        .paletteTMHM = gItemIconPalette_PoisonTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_POISON_BARB,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_KEBIA_BERRY,
        //.gem = ITEM_POISON_GEM,
        //.zCrystal = ITEM_POISONIUM_Z,
        //.plate = ITEM_TOXIC_PLATE,
        //.memory = ITEM_POISON_MEMORY,
        //.teraShard = ITEM_POISON_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_POISON,
    },
    [TYPE_EARTH] =
    {
        .name = _("Earth"),
        .generic = _("a Earth move"),
        .palette = TYPE_ICON_PAL_1,
        .zMove = MOVE_TECTONIC_RAGE,
        .maxMove = MOVE_MAX_QUAKE,
        .teraTypeRGBValue = RGB(25, 23, 18),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
<<<<<<< HEAD
        .paletteTMHM = gItemIconPalette_EarthTMHM,
        //.enhanceItem = ITEM_GYM_SUIT,
=======
        .paletteTMHM = gItemIconPalette_GroundTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_SOFT_SAND,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_SHUCA_BERRY,
        //.gem = ITEM_GROUND_GEM,
        //.zCrystal = ITEM_GROUNDIUM_Z,
        //.plate = ITEM_EARTH_PLATE,
        //.memory = ITEM_GROUND_MEMORY,
        //.teraShard = ITEM_GROUND_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_GROUND,
    },
    [TYPE_BEAST] =
    {
        .name = _("Beast"),
        .generic = _("a Beast move"),
        .palette = TYPE_ICON_PAL_1,
        .zMove = MOVE_CONTINENTAL_CRUSH,
        .maxMove = MOVE_MAX_ROCKFALL,
        .teraTypeRGBValue = RGB(18, 16, 8),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
<<<<<<< HEAD
        .paletteTMHM = gItemIconPalette_BeastTMHM,
        //.enhanceItem = ITEM_BUNNY_SUIT,
=======
        .paletteTMHM = gItemIconPalette_RockTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_HARD_STONE,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_CHARTI_BERRY,
        //.gem = ITEM_ROCK_GEM,
        //.zCrystal = ITEM_ROCKIUM_Z,
        //.plate = ITEM_STONE_PLATE,
        //.memory = ITEM_ROCK_MEMORY,
        //.teraShard = ITEM_ROCK_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_ROCK,
    },
    [TYPE_HEART] =
    {
        .name = _("Heart"),
        .generic = _("a Heart move"),
        .palette = TYPE_ICON_PAL_2,
        .zMove = MOVE_SAVAGE_SPIN_OUT,
        .maxMove = MOVE_MAX_FLUTTERBY,
        .teraTypeRGBValue = RGB(31, 15, 21),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
<<<<<<< HEAD
        .paletteTMHM = gItemIconPalette_HeartTMHM,
        //.enhanceItem = ITEM_BLAZER,
=======
        .paletteTMHM = gItemIconPalette_BugTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_SILVER_POWDER,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_TANGA_BERRY,
        //.gem = ITEM_BUG_GEM,
        //.zCrystal = ITEM_BUGINIUM_Z,
        //.plate = ITEM_INSECT_PLATE,
        //.memory = ITEM_BUG_MEMORY,
        //.teraShard = ITEM_BUG_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_BUG,
    },
    [TYPE_GHOST] =
    {
        .name = _("Ghost"),
        .generic = _("a Ghost move"),
        .palette = TYPE_ICON_PAL_2,
        .zMove = MOVE_NEVER_ENDING_NIGHTMARE,
        .maxMove = MOVE_MAX_PHANTASM,
        .teraTypeRGBValue = RGB(12, 10, 16),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_GhostTMHM,
<<<<<<< HEAD
        //.enhanceItem = ITEM_BURIAL_DRESS,
=======
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_SPELL_TAG,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_KASIB_BERRY,
        //.gem = ITEM_GHOST_GEM,
        //.zCrystal = ITEM_GHOSTIUM_Z,
        //.plate = ITEM_SPOOKY_PLATE,
        //.memory = ITEM_GHOST_MEMORY,
        //.teraShard = ITEM_GHOST_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_GHOST,
    },
    [TYPE_STEEL] =
    {
        .name = _("Steel"),
        .generic = _("a Steel move"),
        .palette = TYPE_ICON_PAL_1,
        .zMove = MOVE_CORKSCREW_CRASH,
        .maxMove = MOVE_MAX_STEELSPIKE,
        .teraTypeRGBValue = RGB(19, 19, 20),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_SteelTMHM,
<<<<<<< HEAD
        //.enhanceItem = ITEM_MAID_UNIFORM,
=======
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_METAL_COAT,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_BABIRI_BERRY,
        //.gem = ITEM_STEEL_GEM,
        //.zCrystal = ITEM_STEELIUM_Z,
        //.plate = ITEM_IRON_PLATE,
        //.memory = ITEM_STEEL_MEMORY,
        //.teraShard = ITEM_STEEL_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_STEEL,
    },
    [TYPE_MYSTERY] =
    {
        .name = _("???"),
        .generic = _("a ??? move"),
        .palette = TYPE_ICON_PAL_3,
        .teraTypeRGBValue = RGB_WHITE,
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = TRUE,
    },
    [TYPE_FIRE] =
    {
        .name = _("Fire"),
        .generic = _("a Fire move"),
        .palette = TYPE_ICON_PAL_1,
        .zMove = MOVE_INFERNO_OVERDRIVE,
        .maxMove = MOVE_MAX_FLARE,
        .teraTypeRGBValue = RGB(31, 20, 11),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_FireTMHM,
<<<<<<< HEAD
        //.enhanceItem = ITEM_GOTHIC_DRESS,
=======
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_CHARCOAL,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_OCCA_BERRY,
        //.gem = ITEM_FIRE_GEM,
        //.zCrystal = ITEM_FIRIUM_Z,
        //.plate = ITEM_FLAME_PLATE,
        //.memory = ITEM_FIRE_MEMORY,
        //.teraShard = ITEM_FIRE_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_FIRE,
    },
    [TYPE_WATER] =
    {
        .name = _("Water"),
        .generic = _("a Water move"),
        .palette = TYPE_ICON_PAL_2,
        .zMove = MOVE_HYDRO_VORTEX,
        .maxMove = MOVE_MAX_GEYSER,
        .teraTypeRGBValue = RGB(10, 18, 27),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_WaterTMHM,
<<<<<<< HEAD
        //.enhanceItem = ITEM_SWIMSUIT,
=======
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_MYSTIC_WATER,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_PASSHO_BERRY,
        //.gem = ITEM_WATER_GEM,
        //.zCrystal = ITEM_WATERIUM_Z,
        //.plate = ITEM_SPLASH_PLATE,
        //.memory = ITEM_WATER_MEMORY,
        //.teraShard = ITEM_WATER_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_WATER,
    },
    [TYPE_NATURE] =
    {
        .name = _("Nature"),
        .generic = _("a Nature move"),
        .palette = TYPE_ICON_PAL_3,
        .zMove = MOVE_BLOOM_DOOM,
        .maxMove = MOVE_MAX_OVERGROWTH,
        .teraTypeRGBValue = RGB(12, 24, 11),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
<<<<<<< HEAD
        .paletteTMHM = gItemIconPalette_NatureTMHM,
        //.enhanceItem = ITEM_CAMOUFLAGE,
=======
        .paletteTMHM = gItemIconPalette_GrassTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_MIRACLE_SEED,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_RINDO_BERRY,
        //.gem = ITEM_GRASS_GEM,
        //.zCrystal = ITEM_GRASSIUM_Z,
        //.plate = ITEM_MEADOW_PLATE,
        //.memory = ITEM_GRASS_MEMORY,
        //.teraShard = ITEM_GRASS_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_GRASS,
    },
    [TYPE_WIND] =
    {
        .name = _("Wind"),
        .generic = _("a Wind move"),
        .palette = TYPE_ICON_PAL_3,
        .zMove = MOVE_GIGAVOLT_HAVOC,
        .maxMove = MOVE_MAX_LIGHTNING,
        .teraTypeRGBValue = RGB(30, 26, 7),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
<<<<<<< HEAD
        .paletteTMHM = gItemIconPalette_WindTMHM,
        //.enhanceItem = ITEM_NINJA_SUIT,
=======
        .paletteTMHM = gItemIconPalette_ElectricTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_MAGNET,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_WACAN_BERRY,
        //.gem = ITEM_ELECTRIC_GEM,
        //.zCrystal = ITEM_ELECTRIUM_Z,
        //.plate = ITEM_ZAP_PLATE,
        //.memory = ITEM_ELECTRIC_MEMORY,
        //.teraShard = ITEM_ELECTRIC_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_ELECTRIC,
    },
    [TYPE_REASON] =
    {
        .name = _("Reason"),
        .generic = _("a Reason move"),
        .palette = TYPE_ICON_PAL_2,
        .zMove = MOVE_SHATTERED_PSYCHE,
        .maxMove = MOVE_MAX_MINDSTORM,
        .teraTypeRGBValue = RGB(31, 14, 15),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
<<<<<<< HEAD
        .paletteTMHM = gItemIconPalette_ReasonTMHM,
        //.enhanceItem = ITEM_WITCHS_ROBE,
=======
        .paletteTMHM = gItemIconPalette_PsychicTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_TWISTED_SPOON,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_PAYAPA_BERRY,
        //.gem = ITEM_PSYCHIC_GEM,
        //.zCrystal = ITEM_PSYCHIUM_Z,
        //.plate = ITEM_MIND_PLATE,
        //.memory = ITEM_PSYCHIC_MEMORY,
        //.teraShard = ITEM_PSYCHIC_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_PSYCHIC,
    },
    [TYPE_ICE] =
    {
        .name = _("Ice"),
        .generic = _("an Ice move"),
        .palette = TYPE_ICON_PAL_2,
        .zMove = MOVE_SUBZERO_SLAMMER,
        .maxMove = MOVE_MAX_HAILSTORM,
        .teraTypeRGBValue = RGB(14, 26, 25),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_IceTMHM,
<<<<<<< HEAD
        //.enhanceItem = ITEM_THICK_FUR,
=======
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_NEVER_MELT_ICE,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_YACHE_BERRY,
        //.gem = ITEM_ICE_GEM,
        //.zCrystal = ITEM_ICIUM_Z,
        //.plate = ITEM_ICICLE_PLATE,
        //.memory = ITEM_ICE_MEMORY,
        //.teraShard = ITEM_ICE_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_ICE,
    },
    [TYPE_FAITH] =
    {
        .name = _("Faith"),
        .generic = _("a Faith move"),
        .palette = TYPE_ICON_PAL_1,
        .zMove = MOVE_DEVASTATING_DRAKE,
        .maxMove = MOVE_MAX_WYRMWIND,
        .teraTypeRGBValue = RGB(30, 26, 7),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
<<<<<<< HEAD
        .paletteTMHM = gItemIconPalette_FaithTMHM,
        //.enhanceItem = ITEM_PRIESTESS,
=======
        .paletteTMHM = gItemIconPalette_DragonTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_DRAGON_FANG,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.berry = ITEM_HABAN_BERRY,
        //.gem = ITEM_DRAGON_GEM,
        //.zCrystal = ITEM_DRAGONIUM_Z,
        //.plate = ITEM_DRACO_PLATE,
        //.memory = ITEM_DRAGON_MEMORY,
        //.teraShard = ITEM_DRAGON_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_DRAGON,
    },
    [TYPE_DARK] =
    {
        .name = _("Dark"),
        .generic = _("a Dark move"),
        .palette = TYPE_ICON_PAL_1,
        .zMove = MOVE_BLACK_HOLE_ECLIPSE,
        .maxMove = MOVE_MAX_DARKNESS,
        .teraTypeRGBValue = RGB(6, 5, 8),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_DarkTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        //.enhanceItem = ITEM_BLACK_GLASSES,
        //.berry = ITEM_COLBUR_BERRY,
        //.gem = ITEM_DARK_GEM,
        //.zCrystal = ITEM_DARKINIUM_Z,
        //.plate = ITEM_DREAD_PLATE,
        //.memory = ITEM_DARK_MEMORY,
        //.teraShard = ITEM_DARK_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_DARK,
    },
    [TYPE_COSMIC] =
    {
        .name = _("Cosmic"),
        .generic = _("a Cosmic move"),
        .palette = TYPE_ICON_PAL_3,
        .zMove = MOVE_TWINKLE_TACKLE,
        .maxMove = MOVE_MAX_STARFALL,
        .teraTypeRGBValue = RGB(18, 6, 24),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
<<<<<<< HEAD
        .paletteTMHM = gItemIconPalette_CosmicTMHM,
=======
        .paletteTMHM = gItemIconPalette_FairyTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
>>>>>>> c74ad262cb5e6a2267e0115a3554e8b4181f2c8e
        //.enhanceItem = ITEM_FAIRY_FEATHER,
        //.berry = ITEM_ROSELI_BERRY,
        //.gem = ITEM_FAIRY_GEM,
        //.zCrystal = ITEM_FAIRIUM_Z,
        //.plate = ITEM_PIXIE_PLATE,
        //.memory = ITEM_FAIRY_MEMORY,
        //.teraShard = ITEM_FAIRY_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_FAIRY,
    },
    [TYPE_STELLAR] =
    {
        .name = HANDLE_EXPANDED_TYPE_NAME("Stellr", "Stellar"),
        .generic = _("a STELLAR move"),
        .palette = TYPE_ICON_PAL_3,
        .zMove = MOVE_BREAKNECK_BLITZ,
        .maxMove = MOVE_MAX_STRIKE,
        .teraTypeRGBValue = RGB(10, 18, 27),
        .paletteTMHM = gItemIconPalette_NormalTMHM, // failsafe
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = TRUE,
        // .teraShard = ITEM_STELLAR_TERA_SHARD,
    },
};
