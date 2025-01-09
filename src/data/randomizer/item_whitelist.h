#include "global.h"
#include "item.h"

// Randomizer item whitelist
// Lifted initially from TheXaman's tx_randomizer_and_challenges_branch

static const u16 sRandomizerItemWhitelist[] =
{
    // Poké Balls
    ITEM_TOHO_ORB,
    ITEM_GREAT_ORB,
    ITEM_ULTRA_ORB,
    ITEM_MASTER_ORB,
    ITEM_PREMIER_ORB,
    ITEM_FOUL_ORB,
    ITEM_NET_ORB,
    ITEM_NEST_ORB,
    ITEM_DIVE_ORB,
    ITEM_DUSK_ORB,
    ITEM_TIMER_ORB,
    ITEM_QUICK_ORB,
    ITEM_REPEAT_ORB,
    ITEM_LUXURY_ORB,
    ITEM_LEVEL_BALL,
    ITEM_LURE_BALL,
    ITEM_POKE_BALL_HISUI,
    ITEM_GREAT_BALL_HISUI,
    ITEM_ULTRA_BALL_HISUI,
    ITEM_FAST_BALL,
    ITEM_HEAVY_BALL,
    ITEM_DREAM_BALL,
    ITEM_SAFARI_ORB,
    //ITEM_SPORT_BALL,
    //ITEM_PARK_BALL,
    ITEM_BEAST_BALL,
    ITEM_CHERISH_BALL,
    // Medicine
    ITEM_POTION,
    ITEM_SUPER_POTION,
    ITEM_HYPER_POTION,
    ITEM_MAX_POTION,
    ITEM_FULL_RESTORE,
    ITEM_REVIVE,
    ITEM_MAX_REVIVE,
    ITEM_FRESH_WATER,
    ITEM_SODA_POP,
    ITEM_LEMONADE,
    ITEM_MOOMOO_MILK,
    ITEM_ENERGY_POWDER,
    ITEM_ENERGY_ROOT,
    ITEM_HEAL_POWDER,
    ITEM_REVIVAL_HERB,
    ITEM_ANTIDOTE,
    ITEM_PARALYZE_HEAL,
    ITEM_BURN_HEAL,
    ITEM_ICE_HEAL,
    ITEM_AWAKENING,
    ITEM_FULL_HEAL,
    ITEM_ETHER,
    ITEM_MAX_ETHER,
    ITEM_ELIXIR,
    ITEM_MAX_ELIXIR,
    ITEM_BERRY_JUICE,
    ITEM_SACRED_ASH,
    ITEM_MAX_HONEY,
    // Regional Specialties
    ITEM_LAVA_COOKIE,
    // Vitamins
    ITEM_HP_UP,
    ITEM_PROTEIN,
    ITEM_IRON,
    ITEM_CALCIUM,
    ITEM_ZINC,
    ITEM_CARBOS,
    ITEM_PP_UP,
    ITEM_PP_MAX,
    // EV Feathers
    ITEM_HEALTH_FEATHER,
    ITEM_MUSCLE_FEATHER,
    ITEM_RESIST_FEATHER,
    ITEM_GENIUS_FEATHER,
    ITEM_CLEVER_FEATHER,
    ITEM_SWIFT_FEATHER,
    // Ability Modifiers
    ITEM_ABILITY_CAPSULE,
    ITEM_ABILITY_PATCH,
    // Mints
    ITEM_LONELY_MINT,
    ITEM_ADAMANT_MINT,
    ITEM_NAUGHTY_MINT,
    ITEM_BRAVE_MINT,
    ITEM_BOLD_MINT,
    ITEM_IMPISH_MINT,
    ITEM_LAX_MINT,
    ITEM_RELAXED_MINT,
    ITEM_MODEST_MINT,
    ITEM_MILD_MINT,
    ITEM_RASH_MINT,
    ITEM_QUIET_MINT,
    ITEM_CALM_MINT,
    ITEM_GENTLE_MINT,
    ITEM_CAREFUL_MINT,
    ITEM_SASSY_MINT,
    ITEM_TIMID_MINT,
    ITEM_HASTY_MINT,
    ITEM_JOLLY_MINT,
    ITEM_NAIVE_MINT,
    ITEM_SERIOUS_MINT,
    // Candy
    ITEM_RARE_CANDY,
    ITEM_EXP_CANDY_XS,
    ITEM_EXP_CANDY_S,
    ITEM_EXP_CANDY_M,
    ITEM_EXP_CANDY_L,
    ITEM_EXP_CANDY_XL,
    //ITEM_DYNAMAX_CANDY,
    // Medicinal Flutes
    ITEM_BLUE_FLUTE,
    ITEM_YELLOW_FLUTE,
    ITEM_RED_FLUTE,
    // Encounter-modifying Flutes
    ITEM_BLACK_FLUTE,
    ITEM_WHITE_FLUTE,
    // Encounter Modifiers
    ITEM_REPEL,
    ITEM_SUPER_REPEL,
    ITEM_MAX_REPEL,
    ITEM_LURE,
    ITEM_SUPER_LURE,
    ITEM_MAX_LURE,
    ITEM_ESCAPE_ROPE,
    // X Items
    ITEM_X_ATTACK,
    ITEM_X_DEFENSE,
    ITEM_X_SP_ATK,
    ITEM_X_SP_DEF,
    ITEM_X_SPEED,
    ITEM_X_ACCURACY,
    ITEM_DIRE_HIT,
    ITEM_GUARD_SPEC,
    // Escape Items
    ITEM_POKE_DOLL,
    ITEM_FLUFFY_TAIL,
    ITEM_POKE_TOY,
    //ITEM_MAX_MUSHROOMS,
    // Treasures
    ITEM_BOTTLE_CAP,
    ITEM_GOLD_BOTTLE_CAP,
    ITEM_NUGGET,
    ITEM_BIG_NUGGET,
    ITEM_GREEN_UFO,
    ITEM_RED_UFO,
    ITEM_BLUE_UFO,
    ITEM_PEARL,
    ITEM_BIG_PEARL,
    ITEM_PEARL_STRING,
    ITEM_STARDUST,
    ITEM_STAR_PIECE,
    ITEM_COMET_SHARD,
    ITEM_SHOAL_SALT,
    ITEM_SHOAL_SHELL,
    ITEM_RED_SHARD,
    ITEM_BLUE_SHARD,
    ITEM_YELLOW_SHARD,
    ITEM_GREEN_SHARD,
    ITEM_HEART_SCALE,
    ITEM_HONEY,
    ITEM_RARE_BONE,
    ITEM_ODD_KEYSTONE,
    ITEM_PRETTY_FEATHER,
    //ITEM_RELIC_COPPER,
    //ITEM_RELIC_SILVER,
    //ITEM_RELIC_GOLD,
    //ITEM_RELIC_VASE,
    //ITEM_RELIC_BAND,
    //ITEM_RELIC_STATUE,
    //ITEM_RELIC_CROWN,
    ITEM_STRANGE_SOUVENIR,
    // Fossils
    //ITEM_HELIX_FOSSIL,
    //ITEM_DOME_FOSSIL,
    //ITEM_OLD_AMBER,
    ITEM_ROOT_FOSSIL,
    ITEM_CLAW_FOSSIL,
    //ITEM_ARMOR_FOSSIL,
    //ITEM_SKULL_FOSSIL,
    //ITEM_COVER_FOSSIL,
    //ITEM_PLUME_FOSSIL,
    //ITEM_JAW_FOSSIL,
    //ITEM_SAIL_FOSSIL,
    //ITEM_FOSSILIZED_BIRD,
    //ITEM_FOSSILIZED_FISH,
    //ITEM_FOSSILIZED_DRAKE,
    //ITEM_FOSSILIZED_DINO,
    // Mulch
    //ITEM_GROWTH_MULCH,
    //ITEM_DAMP_MULCH,
    //ITEM_STABLE_MULCH,
    //ITEM_GOOEY_MULCH,
    //ITEM_RICH_MULCH,
    //ITEM_SURPRISE_MULCH,
    //ITEM_BOOST_MULCH,
    //ITEM_AMAZE_MULCH,
    // Apricorns
    //ITEM_RED_APRICORN,
    //ITEM_BLUE_APRICORN,
    //ITEM_YELLOW_APRICORN,
    //ITEM_GREEN_APRICORN,
    //ITEM_PINK_APRICORN,
    //ITEM_WHITE_APRICORN,
    //ITEM_BLACK_APRICORN,
    //ITEM_WISHING_PIECE,
    //ITEM_GALARICA_TWIG,
    //ITEM_ARMORITE_ORE,
    //ITEM_DYNITE_ORE,
    // Mail
    //ITEM_ORANGE_MAIL,
    //ITEM_HARBOR_MAIL,
    //ITEM_GLITTER_MAIL,
    //ITEM_MECH_MAIL,
    //ITEM_WOOD_MAIL,
    //ITEM_WAVE_MAIL,
    //ITEM_BEAD_MAIL,
    //ITEM_SHADOW_MAIL,
    //ITEM_TROPIC_MAIL,
    //ITEM_DREAM_MAIL,
    //ITEM_FAB_MAIL,
    //ITEM_RETRO_MAIL,
    // Evolution Items
    ITEM_POWER_HEART,
    ITEM_GUARD_HEART,
    ITEM_SWIFT_HEART,
    ITEM_TECH_HEART,
    ITEM_HELPER_HEART,
    ITEM_JUST_HEART,
    ITEM_CHROME_HEART,
    ITEM_SHINY_STONE,
    ITEM_DUSK_STONE,
    ITEM_DAWN_STONE,
    ITEM_UPGRADE,
    ITEM_DUBIOUS_DISC,
    ITEM_EVERSTONE,
    // Nectars
    ITEM_RED_NECTAR,
    ITEM_YELLOW_NECTAR,
    ITEM_PINK_NECTAR,
    ITEM_PURPLE_NECTAR,
    // Plates
    ITEM_FLAME_PLATE,
    ITEM_SPLASH_PLATE,
    ITEM_ZAP_PLATE,
    ITEM_MEADOW_PLATE,
    ITEM_ICICLE_PLATE,
    ITEM_FIST_PLATE,
    ITEM_TOXIC_PLATE,
    ITEM_EARTH_PLATE,
    ITEM_SKY_PLATE,
    ITEM_MIND_PLATE,
    ITEM_INSECT_PLATE,
    ITEM_STONE_PLATE,
    ITEM_SPOOKY_PLATE,
    ITEM_DRACO_PLATE,
    ITEM_DREAD_PLATE,
    ITEM_IRON_PLATE,
    ITEM_PIXIE_PLATE,
    // Drives
    ITEM_DOUSE_DRIVE,
    ITEM_SHOCK_DRIVE,
    ITEM_BURN_DRIVE,
    ITEM_CHILL_DRIVE,
    // Memories
    ITEM_FIRE_MEMORY,
    ITEM_WATER_MEMORY,
    ITEM_ELECTRIC_MEMORY,
    ITEM_GRASS_MEMORY,
    ITEM_ICE_MEMORY,
    ITEM_FIGHTING_MEMORY,
    ITEM_POISON_MEMORY,
    ITEM_GROUND_MEMORY,
    ITEM_FLYING_MEMORY,
    ITEM_PSYCHIC_MEMORY,
    ITEM_BUG_MEMORY,
    ITEM_ROCK_MEMORY,
    ITEM_GHOST_MEMORY,
    ITEM_DRAGON_MEMORY,
    ITEM_DARK_MEMORY,
    ITEM_STEEL_MEMORY,
    ITEM_FAIRY_MEMORY,
    ITEM_RUSTED_SWORD,
    ITEM_RUSTED_SHIELD,
    // Colored Orbs
    ITEM_RED_ORB,
    ITEM_BLUE_ORB,
    // Gems
    ITEM_ILLUSION_CARD,
    ITEM_FIRE_CARD,
    ITEM_WATER_CARD,
    ITEM_WIND_CARD,
    ITEM_NATURE_CARD,
    ITEM_ICE_CARD,
    ITEM_DREAM_CARD,
    ITEM_MIASMA_CARD,
    ITEM_EARTH_CARD,
    ITEM_FLYING_GEM,
    ITEM_PSYCHIC_GEM,
    ITEM_BUG_GEM,
    ITEM_ROCK_GEM,
    ITEM_GHOST_GEM,
    ITEM_DRAGON_GEM,
    ITEM_DARK_GEM,
    ITEM_STEEL_GEM,
    ITEM_COSMIC_CARD,
    // Species-specific Held Items
    ITEM_ICY_BALL,
    ITEM_ASSIST_BALL,
    ITEM_DARK_BALL,
    ITEM_GLOW_BALL,
    ITEM_MUSIC_BALL,
    ITEM_BLOOMERS,
    ITEM_DARK_RIBBON,
    ITEM_BIG_CLOUD,
    ITEM_QUICK_POWDER,
    ITEM_KUSANAGI,
    ITEM_YATA_MIRROR,
    ITEM_DOUBLE_SOUL,
    // Incenses
    ITEM_SEA_INCENSE,
    ITEM_LAX_INCENSE,
    ITEM_ODD_INCENSE,
    ITEM_ROCK_INCENSE,
    ITEM_FULL_INCENSE,
    ITEM_WAVE_INCENSE,
    ITEM_ROSE_INCENSE,
    ITEM_LUCK_INCENSE,
    ITEM_PURE_INCENSE,
    // Contest Scarves
    ITEM_RED_SCARF,
    ITEM_BLUE_SCARF,
    ITEM_PINK_SCARF,
    ITEM_GREEN_SCARF,
    ITEM_YELLOW_SCARF,
    // EV Gain Modifiers
    ITEM_MACHO_BRACE,
    ITEM_POWER_WEIGHT,
    ITEM_POWER_BRACER,
    ITEM_POWER_BELT,
    ITEM_POWER_LENS,
    ITEM_POWER_BAND,
    ITEM_POWER_ANKLET,
    // Type-boosting Held Items
    ITEM_BRIDAL_GOWN,
    ITEM_GOTHIC_DRESS,
    ITEM_SWIMSUIT,
    ITEM_NINJA_SUIT,
    ITEM_CAMOUFLAGE,
    ITEM_THICK_FUR,
    ITEM_CHINESE_DRESS,
    ITEM_NURSE_UNIFORM,
    ITEM_GYM_SUIT,
    ITEM_STEWARDESS,
    ITEM_WITCHS_ROBE,
    ITEM_BLAZER,
    ITEM_BUNNY_SUIT,
    ITEM_BURIAL_DRESS,
    ITEM_PRIESTESS,
    ITEM_BLACK_GLASSES,
    ITEM_MAID_UNIFORM,
    // Choice Items
    ITEM_CHOICE_BAND,
    ITEM_CHOICE_SPECS,
    ITEM_CHOICE_SCARF,
    // Status Orbs
    ITEM_FLAME_ORB,
    ITEM_TOXIC_ORB,
    // Weather Rocks
    ITEM_DAMP_ROCK,
    ITEM_HEAT_ROCK,
    ITEM_SMOOTH_ROCK,
    ITEM_ICY_ROCK,
    // Terrain Seeds
    ITEM_ELECTRIC_SEED,
    ITEM_PSYCHIC_SEED,
    ITEM_MISTY_SEED,
    ITEM_GRASSY_SEED,
    // Type-activated Stat Modifiers
    ITEM_ABSORB_BULB,
    ITEM_CELL_BATTERY,
    ITEM_LUMINOUS_MOSS,
    ITEM_SNOWBALL,
    // Misc. Held Items
    ITEM_BRIGHT_POWDER,
    ITEM_WHITE_HERB,
    ITEM_EXP_SHARE,
    ITEM_QUICK_CLAW,
    ITEM_SOOTHE_BELL,
    ITEM_MENTAL_HERB,
    ITEM_KINGS_ROCK,
    ITEM_DONATION_BOX,
    ITEM_CLEANSE_TAG,
    ITEM_SMOKE_BALL,
    ITEM_FOCUS_BAND,
    ITEM_LUCKY_EGG,
    ITEM_SCOPE_LENS,
    ITEM_BENTO_BOX,
    ITEM_SHELL_BELL,
    ITEM_WIDE_LENS,
    ITEM_MUSCLE_BAND,
    ITEM_WISE_GLASSES,
    ITEM_EXPERT_BELT,
    ITEM_LIGHT_CLAY,
    ITEM_LIFE_ORB,
    ITEM_POWER_HERB,
    ITEM_FOCUS_SASH,
    ITEM_ZOOM_LENS,
    ITEM_METRONOME,
    ITEM_IRON_BALL,
    ITEM_LAGGING_TAIL,
    ITEM_DESTINY_KNOT,
    ITEM_BLACK_SLUDGE,
    ITEM_GRIP_CLAW,
    ITEM_STICKY_BARB,
    ITEM_SHED_SHELL,
    ITEM_BIG_ROOT,
    ITEM_RAZOR_CLAW,
    ITEM_RAZOR_FANG,
    ITEM_EVIOLITE,
    ITEM_FLOAT_STONE,
    ITEM_ROCKY_HELMET,
    ITEM_AIR_BALLOON,
    ITEM_RED_CARD,
    ITEM_RING_TARGET,
    ITEM_BINDING_BAND,
    ITEM_EJECT_BUTTON,
    ITEM_WEAKNESS_POLICY,
    ITEM_ASSAULT_VEST,
    ITEM_SAFETY_GOGGLES,
    ITEM_ADRENALINE_ORB,
    ITEM_TERRAIN_EXTENDER,
    ITEM_PROTECTIVE_PADS,
    ITEM_THROAT_SPRAY,
    ITEM_EJECT_PACK,
    ITEM_HEAVY_DUTY_BOOTS,
    ITEM_BLUNDER_POLICY,
    ITEM_ROOM_SERVICE,
    ITEM_UTILITY_UMBRELLA,
    // Berries
    ITEM_CHERI_BERRY,
    ITEM_CHESTO_BERRY,
    ITEM_PECHA_BERRY,
    ITEM_RAWST_BERRY,
    ITEM_ASPEAR_BERRY,
    ITEM_LEPPA_BERRY,
    ITEM_ORAN_BERRY,
    ITEM_PERSIM_BERRY,
    ITEM_LUM_BERRY,
    ITEM_SITRUS_BERRY,
    ITEM_FIGY_BERRY,
    ITEM_WIKI_BERRY,
    ITEM_MAGO_BERRY,
    ITEM_AGUAV_BERRY,
    ITEM_IAPAPA_BERRY,
    ITEM_RAZZ_BERRY,
    ITEM_BLUK_BERRY,
    ITEM_NANAB_BERRY,
    ITEM_WEPEAR_BERRY,
    ITEM_PINAP_BERRY,
    ITEM_POMEG_BERRY,
    ITEM_KELPSY_BERRY,
    ITEM_QUALOT_BERRY,
    ITEM_HONDEW_BERRY,
    ITEM_GREPA_BERRY,
    ITEM_TAMATO_BERRY,
    ITEM_CORNN_BERRY,
    ITEM_MAGOST_BERRY,
    ITEM_RABUTA_BERRY,
    ITEM_NOMEL_BERRY,
    ITEM_SPELON_BERRY,
    ITEM_PAMTRE_BERRY,
    ITEM_WATMEL_BERRY,
    ITEM_DURIN_BERRY,
    ITEM_BELUE_BERRY,
    ITEM_CHILAN_BERRY,
    ITEM_OCCA_BERRY,
    ITEM_PASSHO_BERRY,
    ITEM_WACAN_BERRY,
    ITEM_RINDO_BERRY,
    ITEM_YACHE_BERRY,
    ITEM_CHOPLE_BERRY,
    ITEM_KEBIA_BERRY,
    ITEM_SHUCA_BERRY,
    ITEM_COBA_BERRY,
    ITEM_PAYAPA_BERRY,
    ITEM_TANGA_BERRY,
    ITEM_CHARTI_BERRY,
    ITEM_KASIB_BERRY,
    ITEM_HABAN_BERRY,
    ITEM_COLBUR_BERRY,
    ITEM_BABIRI_BERRY,
    ITEM_ROSELI_BERRY,
    ITEM_LIECHI_BERRY,
    ITEM_GANLON_BERRY,
    ITEM_SALAC_BERRY,
    ITEM_PETAYA_BERRY,
    ITEM_APICOT_BERRY,
    ITEM_LANSAT_BERRY,
    ITEM_STARF_BERRY,
    ITEM_ENIGMA_BERRY,
    ITEM_MICLE_BERRY,
    ITEM_CUSTAP_BERRY,
    ITEM_JABOCA_BERRY,
    ITEM_ROWAP_BERRY,
    ITEM_KEE_BERRY,
    ITEM_MARANGA_BERRY,
    // GEN IX ITEMS
    ITEM_ABILITY_SHIELD,
    ITEM_CLEAR_AMULET,
    ITEM_PUNCHING_GLOVE,
    ITEM_COVERT_CLOAK,
    ITEM_LOADED_DICE,
    ITEM_BOOSTER_ENERGY,
    ITEM_BIG_BAMBOO_SHOOT,
    ITEM_GIMMIGHOUL_COIN,
    //ITEM_LEADERS_CREST,
    ITEM_MIRROR_HERB,
    //ITEM_SCROLL_OF_DARKNESS,
    //ITEM_SCROLL_OF_WATERS,
    ITEM_TINY_BAMBOO_SHOOT,
};

#define ITEM_WHITELIST_SIZE     (NELEMS(sRandomizerItemWhitelist))