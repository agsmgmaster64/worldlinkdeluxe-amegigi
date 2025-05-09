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

// Notes regarding custom data:
// - The "generic" field is large enough that the text for TYPE_ELECTRIC will exceed TEXT_BUFF_ARRAY_COUNT.
// - In this array there's commented-out data such as references to type-resist berries that would otherwise would go unused.
//   However, we figured this information would be useful for users that want to add their own types as a reminder of
//   what data would they need to add in order to have their new types be fully fledged like official types.
// - Changing "isHiddenPowerType" for any type will change the distribution of all Hidden Power types from vanilla.
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
        .shopItem = ITEM_NONE,
        .isHiddenPowerType = FALSE,
    },
    [TYPE_ILLUSION] =
    {
        .name = _("Illusion"),
        .generic = _("an Illusion move"),
        .palette = TYPE_ICON_PAL_2,
        .zMove = MOVE_BREAKNECK_BLITZ,
        .maxMove = MOVE_MAX_STRIKE,
        .teraTypeRGBValue = RGB(10, 18, 27),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_IllusionTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_BRIDAL_GOWN,
        .isHiddenPowerType = FALSE,
        //.enhanceItem = ITEM_BRIDAL_GOWN,
        //.berry = ITEM_CHILAN_BERRY,
        //.gem = ITEM_ILLUSION_CARD,
        //.zCrystal = ITEM_NORMALIUM_Z,
        //.teraShard = ITEM_NORMAL_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_NORMAL,
    },
    [TYPE_DREAM] =
    {
        .name = _("Dream"),
        .generic = _("a Dream move"),
        .palette = TYPE_ICON_PAL_3,
        .zMove = MOVE_ALL_OUT_PUMMELING,
        .maxMove = MOVE_MAX_KNUCKLE,
        .teraTypeRGBValue = RGB_WHITE,
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_DreamTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_CHINESE_DRESS,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_CHINESE_DRESS,
        //.berry = ITEM_CHOPLE_BERRY,
        //.gem = ITEM_DREAM_CARD,
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
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_STEWARDESS,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_STEWARDESS,
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
        .palette = TYPE_ICON_PAL_3,
        .zMove = MOVE_ACID_DOWNPOUR,
        .maxMove = MOVE_MAX_OOZE,
        .teraTypeRGBValue = RGB(26, 10, 25), // custom
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_MiasmaTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_NURSE_UNIFORM,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_NURSE_UNIFORM,
        //.berry = ITEM_KEBIA_BERRY,
        //.gem = ITEM_MIASMA_CARD,
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
        .paletteTMHM = gItemIconPalette_EarthTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_GYM_SUIT,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_GYM_SUIT,
        //.berry = ITEM_SHUCA_BERRY,
        //.gem = ITEM_EARTH_CARD,
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
        .paletteTMHM = gItemIconPalette_BeastTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_BUNNY_SUIT,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_BUNNY_SUIT,
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
        .palette = TYPE_ICON_PAL_3,
        .zMove = MOVE_SAVAGE_SPIN_OUT,
        .maxMove = MOVE_MAX_FLUTTERBY,
        .teraTypeRGBValue = RGB(31, 15, 21),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_HeartTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_BLAZER,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_BLAZER,
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
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_BURIAL_DRESS,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_BURIAL_DRESS,
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
        .palette = TYPE_ICON_PAL_2,
        .zMove = MOVE_CORKSCREW_CRASH,
        .maxMove = MOVE_MAX_STEELSPIKE,
        .teraTypeRGBValue = RGB(19, 19, 20),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_SteelTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_MAID_UNIFORM,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_MAID_UNIFORM,
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
        .paletteTMHM = gItemIconPalette_NormalTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = TRUE,
        .shopItem = ITEM_NONE,
        .isHiddenPowerType = FALSE,
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
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_GOTHIC_DRESS,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_GOTHIC_DRESS,
        //.berry = ITEM_OCCA_BERRY,
        //.gem = ITEM_FIRE_CARD,
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
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_SWIMSUIT,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_SWIMSUIT,
        //.berry = ITEM_PASSHO_BERRY,
        //.gem = ITEM_WATER_CARD,
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
        .palette = TYPE_ICON_PAL_1,
        .zMove = MOVE_BLOOM_DOOM,
        .maxMove = MOVE_MAX_OVERGROWTH,
        .teraTypeRGBValue = RGB(12, 24, 11),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_NatureTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_CAMOUFLAGE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_CAMOUFLAGE,
        //.berry = ITEM_RINDO_BERRY,
        //.gem = ITEM_NATURE_CARD,
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
        .palette = TYPE_ICON_PAL_1,
        .zMove = MOVE_GIGAVOLT_HAVOC,
        .maxMove = MOVE_MAX_LIGHTNING,
        .teraTypeRGBValue = RGB(30, 26, 7),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_WindTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_NINJA_SUIT,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_NINJA_SUIT,
        //.berry = ITEM_WACAN_BERRY,
        //.gem = ITEM_WIND_CARD,
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
        .palette = TYPE_ICON_PAL_3,
        .zMove = MOVE_SHATTERED_PSYCHE,
        .maxMove = MOVE_MAX_MINDSTORM,
        .teraTypeRGBValue = RGB(31, 14, 15),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_ReasonTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_WITCHS_ROBE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_WITCHS_ROBE,
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
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_THICK_FUR,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_THICK_FUR,
        //.berry = ITEM_YACHE_BERRY,
        //.gem = ITEM_ICE_CARD,
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
        .paletteTMHM = gItemIconPalette_FaithTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_PRIESTESS,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_PRIESTESS,
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
        .palette = TYPE_ICON_PAL_3,
        .zMove = MOVE_BLACK_HOLE_ECLIPSE,
        .maxMove = MOVE_MAX_DARKNESS,
        .teraTypeRGBValue = RGB(6, 5, 8),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_DarkTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_BLACK_GLASSES,
        .isHiddenPowerType = TRUE,
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
        .paletteTMHM = gItemIconPalette_CosmicTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .shopItem = ITEM_FAIRY_FEATHER,
        .isHiddenPowerType = FALSE,
        //.enhanceItem = ITEM_FAIRY_FEATHER,
        //.berry = ITEM_ROSELI_BERRY,
        //.gem = ITEM_COSMIC_CARD,
        //.zCrystal = ITEM_FAIRIUM_Z,
        //.plate = ITEM_PIXIE_PLATE,
        //.memory = ITEM_FAIRY_MEMORY,
        //.teraShard = ITEM_FAIRY_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_FAIRY,
    },
    [TYPE_STELLAR] =
    {
        .name = _("Stellar"),
        .generic = _("a STELLAR move"),
        .palette = TYPE_ICON_PAL_1,
        .zMove = MOVE_BREAKNECK_BLITZ,
        .maxMove = MOVE_MAX_STRIKE,
        .teraTypeRGBValue = RGB(10, 18, 27),
        .paletteTMHM = gItemIconPalette_NormalTMHM, // failsafe
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = TRUE,
        .shopItem = ITEM_STELLAR_TERA_SHARD,
        .isHiddenPowerType = FALSE,
        // .teraShard = ITEM_STELLAR_TERA_SHARD,
    },
};
