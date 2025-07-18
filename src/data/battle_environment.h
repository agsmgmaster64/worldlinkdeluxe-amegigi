const u32 gBattleEnvironmentTiles_TallGrass[] = INCBIN_U32("graphics/battle_environment/tall_grass/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_TallGrass[] = INCBIN_U16("graphics/battle_environment/tall_grass/palette.gbapal");
const u32 gBattleEnvironmentTilemap_TallGrass[] = INCBIN_U32("graphics/battle_environment/tall_grass/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_LongGrass[] = INCBIN_U32("graphics/battle_environment/long_grass/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_LongGrass[] = INCBIN_U16("graphics/battle_environment/long_grass/palette.gbapal");
const u32 gBattleEnvironmentTilemap_LongGrass[] = INCBIN_U32("graphics/battle_environment/long_grass/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Sand[] = INCBIN_U32("graphics/battle_environment/sand/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Sand[] = INCBIN_U16("graphics/battle_environment/sand/palette.gbapal");
const u32 gBattleEnvironmentTilemap_Sand[] = INCBIN_U32("graphics/battle_environment/sand/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Underwater[] = INCBIN_U32("graphics/battle_environment/underwater/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Underwater[] = INCBIN_U16("graphics/battle_environment/underwater/palette.gbapal");
const u32 gBattleEnvironmentTilemap_Underwater[] = INCBIN_U32("graphics/battle_environment/underwater/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Water[] = INCBIN_U32("graphics/battle_environment/water/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Water[] = INCBIN_U16("graphics/battle_environment/water/palette.gbapal");
const u32 gBattleEnvironmentTilemap_Water[] = INCBIN_U32("graphics/battle_environment/water/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_PondWater[] = INCBIN_U32("graphics/battle_environment/pond_water/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_PondWater[] = INCBIN_U16("graphics/battle_environment/pond_water/palette.gbapal");
const u32 gBattleEnvironmentTilemap_PondWater[] = INCBIN_U32("graphics/battle_environment/pond_water/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Rock[] = INCBIN_U32("graphics/battle_environment/rock/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Rock[] = INCBIN_U16("graphics/battle_environment/rock/palette.gbapal");
const u32 gBattleEnvironmentTilemap_Rock[] = INCBIN_U32("graphics/battle_environment/rock/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Cave[] = INCBIN_U32("graphics/battle_environment/cave/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Cave[] = INCBIN_U16("graphics/battle_environment/cave/palette.gbapal");
const u32 gBattleEnvironmentTilemap_Cave[] = INCBIN_U32("graphics/battle_environment/cave/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Plain[] = INCBIN_U32("graphics/battle_environment/plain/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Plain[] = INCBIN_U16("graphics/battle_environment/plain/palette.gbapal");
const u32 gBattleEnvironmentTilemap_Plain[] = INCBIN_U32("graphics/battle_environment/plain/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Building[] = INCBIN_U32("graphics/battle_environment/building/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Frontier[] = INCBIN_U16("graphics/battle_environment/stadium/battle_frontier.gbapal"); // this is also used for link battles
const u32 gBattleEnvironmentTilemap_Building[] = INCBIN_U32("graphics/battle_environment/building/map.bin.smolTM");

const u32 gBattleEnvironmentTiles_Ice[] = INCBIN_U32("graphics/battle_environment/ice/tiles.4bpp.smol");
const u16 gBattleEnvironmentPalette_Ice[] = INCBIN_U16("graphics/battle_environment/ice/palette.gbapal");
const u32 gBattleEnvironmentTilemap_Ice[] = INCBIN_U32("graphics/battle_environment/ice/map.bin.smolTM");

#define ENVIRONMENT_BACKGROUND(background)                      \
{                                                               \
    .tileset = gBattleEnvironmentTiles_##background,            \
    .tilemap = gBattleEnvironmentTilemap_##background,          \
    .entryTileset = gBattleEnvironmentAnimTiles_##background,   \
    .entryTilemap = gBattleEnvironmentAnimTilemap_##background, \
    .palette = gBattleEnvironmentPalette_##background,          \
}

const struct BattleEnvironment gBattleEnvironmentInfo[BATTLE_ENVIRONMENT_COUNT] =
{
    [BATTLE_ENVIRONMENT_GRASS] =
    {
        .naturePower = MOVE_ENERGY_LIGHT,
        .secretPowerEffect = MOVE_EFFECT_SLEEP,
        .camouflageType = TYPE_NATURE,
        .background = ENVIRONMENT_BACKGROUND(TallGrass),
    },

    [BATTLE_ENVIRONMENT_LONG_GRASS] =
    {
        .naturePower = MOVE_ENERGY_LIGHT,
        .secretPowerEffect = MOVE_EFFECT_SLEEP,
        .camouflageType = TYPE_NATURE,
        .background = ENVIRONMENT_BACKGROUND(LongGrass),
    },

    [BATTLE_ENVIRONMENT_SAND] =
    {
        .naturePower = MOVE_EARTH_POWER,
        .secretPowerEffect = MOVE_EFFECT_ACC_MINUS_1,
        .camouflageType = TYPE_EARTH,
        .background = ENVIRONMENT_BACKGROUND(Sand),
    },

    [BATTLE_ENVIRONMENT_UNDERWATER] =
    {
        .naturePower = MOVE_HYDRO_PUMP,
        .secretPowerEffect = MOVE_EFFECT_ATK_MINUS_1,
        .camouflageType = TYPE_WATER,
        .background = ENVIRONMENT_BACKGROUND(Underwater),
    },

    [BATTLE_ENVIRONMENT_WATER] =
    {
        .naturePower = MOVE_HYDRO_PUMP,
        .secretPowerEffect = MOVE_EFFECT_ATK_MINUS_1,
        .camouflageType = TYPE_WATER,
        .background = ENVIRONMENT_BACKGROUND(Water),
    },

    [BATTLE_ENVIRONMENT_POND] =
    {
        .naturePower = MOVE_HYDRO_PUMP,
        .secretPowerEffect = MOVE_EFFECT_ATK_MINUS_1,
        .camouflageType = TYPE_WATER,
        .background = ENVIRONMENT_BACKGROUND(PondWater),
    },

    [BATTLE_ENVIRONMENT_MOUNTAIN] =
    {
        .naturePower = MOVE_EARTH_POWER,
        .secretPowerEffect = MOVE_EFFECT_ACC_MINUS_1,
        .camouflageType = TYPE_EARTH,
        .background = ENVIRONMENT_BACKGROUND(Rock),
    },

    [BATTLE_ENVIRONMENT_CAVE] =
    {
        .naturePower = MOVE_EARTH_POWER,
        .secretPowerEffect = MOVE_EFFECT_FLINCH,
        .camouflageType = TYPE_BEAST,
        .background = ENVIRONMENT_BACKGROUND(Cave),
    },

    [BATTLE_ENVIRONMENT_BUILDING] =
    {
        .naturePower = MOVE_TRI_ATTACK,
        .secretPowerEffect = MOVE_EFFECT_PARALYSIS,
        .camouflageType = TYPE_ILLUSION,
        .background = ENVIRONMENT_BACKGROUND(Building),
    },

    [BATTLE_ENVIRONMENT_PLAIN] =
    {
        .naturePower = MOVE_TRI_ATTACK,
        .secretPowerEffect = MOVE_EFFECT_PARALYSIS,
        .camouflageType = TYPE_EARTH,
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Plain,
            .tilemap = gBattleEnvironmentTilemap_Plain,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_Plain,
        },
    },

    [BATTLE_ENVIRONMENT_FRONTIER] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Building,
            .tilemap = gBattleEnvironmentTilemap_Building,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_Frontier,
        },
    },

    [BATTLE_ENVIRONMENT_GYM] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Building,
            .tilemap = gBattleEnvironmentTilemap_Building,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_BuildingGym,
        },
    },

    [BATTLE_ENVIRONMENT_LEADER] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Building,
            .tilemap = gBattleEnvironmentTilemap_Building,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_BuildingLeader,
        },
    },

    [BATTLE_ENVIRONMENT_MAGMA] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Stadium,
            .tilemap = gBattleEnvironmentTilemap_Stadium,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_StadiumMagma,
        },
    },

    [BATTLE_ENVIRONMENT_AQUA] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Stadium,
            .tilemap = gBattleEnvironmentTilemap_Stadium,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_StadiumAqua,
        },
    },

    [BATTLE_ENVIRONMENT_SIDNEY] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Stadium,
            .tilemap = gBattleEnvironmentTilemap_Stadium,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_StadiumSidney,
        },
    },

    [BATTLE_ENVIRONMENT_PHOEBE] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Stadium,
            .tilemap = gBattleEnvironmentTilemap_Stadium,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_StadiumPhoebe,
        },
    },

    [BATTLE_ENVIRONMENT_GLACIA] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Stadium,
            .tilemap = gBattleEnvironmentTilemap_Stadium,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_StadiumGlacia,
        },
    },

    [BATTLE_ENVIRONMENT_DRAKE] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Stadium,
            .tilemap = gBattleEnvironmentTilemap_Stadium,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_StadiumDrake,
        },
    },

    [BATTLE_ENVIRONMENT_CHAMPION] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Stadium,
            .tilemap = gBattleEnvironmentTilemap_Stadium,
            .entryTileset = gBattleEnvironmentAnimTiles_Building,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Building,
            .palette = gBattleEnvironmentPalette_StadiumWallace,
        },
    },

    [BATTLE_ENVIRONMENT_GROUDON] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Cave,
            .tilemap = gBattleEnvironmentTilemap_Cave,
            .entryTileset = gBattleEnvironmentAnimTiles_Cave,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Cave,
            .palette = gBattleEnvironmentPalette_Groudon,
        },
    },

    [BATTLE_ENVIRONMENT_KYOGRE] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Water,
            .tilemap = gBattleEnvironmentTilemap_Water,
            .entryTileset = gBattleEnvironmentAnimTiles_Underwater,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Underwater,
            .palette = gBattleEnvironmentPalette_Kyogre,
        },
    },

    [BATTLE_ENVIRONMENT_RAYQUAZA] =
    {
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Rayquaza,
            .tilemap = gBattleEnvironmentTilemap_Rayquaza,
            .entryTileset = gBattleEnvironmentAnimTiles_Rayquaza,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Rayquaza,
            .palette = gBattleEnvironmentPalette_Rayquaza,
        },
    },

    [BATTLE_ENVIRONMENT_SOARING] =
    {
        .naturePower = MOVE_AIR_SLASH,
        .secretPowerEffect = MOVE_EFFECT_SPD_MINUS_1,
        .camouflageType = TYPE_FLYING,
        .background = ENVIRONMENT_BACKGROUND(TallGrass),
    },

    [BATTLE_ENVIRONMENT_SKY_PILLAR] =
    {
        .naturePower = MOVE_AIR_SLASH,
        .secretPowerEffect = MOVE_EFFECT_SPD_MINUS_1,
        .camouflageType = TYPE_FLYING,
        .background = ENVIRONMENT_BACKGROUND(TallGrass),
    },

    [BATTLE_ENVIRONMENT_BURIAL_GROUND] =
    {
        .naturePower = MOVE_SHADOW_BALL,
        .secretPowerEffect = MOVE_EFFECT_FLINCH,
        .camouflageType = TYPE_GHOST,
        .background = ENVIRONMENT_BACKGROUND(TallGrass),
    },

    [BATTLE_ENVIRONMENT_PUDDLE] =
    {
        .naturePower = MOVE_MUD_BOMB,
        .secretPowerEffect = B_SECRET_POWER_EFFECT >= GEN_5 ? MOVE_EFFECT_SPD_MINUS_1 : MOVE_EFFECT_ACC_MINUS_1,
        .camouflageType = TYPE_EARTH,
        .background = ENVIRONMENT_BACKGROUND(TallGrass),
    },

    [BATTLE_ENVIRONMENT_MARSH] =
    {
        .naturePower = MOVE_MUD_BOMB,
        .secretPowerEffect = MOVE_EFFECT_SPD_MINUS_1,
        .camouflageType = TYPE_EARTH,
        .background = ENVIRONMENT_BACKGROUND(TallGrass),
    },

    [BATTLE_ENVIRONMENT_SWAMP] =
    {
        .naturePower = MOVE_MUD_BOMB,
        .secretPowerEffect = MOVE_EFFECT_SPD_MINUS_1,
        .camouflageType = TYPE_EARTH,
        .background = ENVIRONMENT_BACKGROUND(TallGrass),
    },

    [BATTLE_ENVIRONMENT_SNOW] =
    {
        .naturePower = MOVE_ICE_BEAM,
        .secretPowerEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
        .camouflageType = TYPE_ICE,
        .background = ENVIRONMENT_BACKGROUND(TallGrass),
    },

    [BATTLE_ENVIRONMENT_ICE] =
    {
        .naturePower = MOVE_ICE_BEAM,
        .secretPowerEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
        .camouflageType = TYPE_ICE,
        .background =
        {
            .tileset = gBattleEnvironmentTiles_Ice,
            .tilemap = gBattleEnvironmentTilemap_Ice,
            .entryTileset = gBattleEnvironmentAnimTiles_Cave,
            .entryTilemap = gBattleEnvironmentAnimTilemap_Cave,
            .palette = gBattleEnvironmentPalette_Ice,
        },
    },

    [BATTLE_ENVIRONMENT_VOLCANO] =
    {
        .naturePower = MOVE_LAVA_PLUME,
        .secretPowerEffect = MOVE_EFFECT_BURN,
        .camouflageType = TYPE_FIRE,
        .background = ENVIRONMENT_BACKGROUND(TallGrass),
    },

    [BATTLE_ENVIRONMENT_DISTORTION_WORLD] =
    {
        .naturePower = MOVE_TRI_ATTACK,
        .secretPowerEffect = MOVE_EFFECT_PARALYSIS,
        .camouflageType = TYPE_ILLUSION,
        .background = ENVIRONMENT_BACKGROUND(TallGrass),
    },

    [BATTLE_ENVIRONMENT_SPACE] =
    {
        .naturePower = MOVE_DRACO_METEOR,
        .secretPowerEffect = MOVE_EFFECT_FLINCH,
        .camouflageType = TYPE_COSMIC,
        .background = ENVIRONMENT_BACKGROUND(TallGrass),
    },

    [BATTLE_ENVIRONMENT_ULTRA_SPACE] =
    {
        .naturePower = MOVE_PSYSHOCK,
        .secretPowerEffect = MOVE_EFFECT_DEF_MINUS_1,
        .camouflageType = TYPE_COSMIC,
        .background = ENVIRONMENT_BACKGROUND(TallGrass),
    },
};

static const struct {
    u8 mapScene;
    u8 battleEnvironment;
} sMapBattleSceneMapping[] = {
    {MAP_BATTLE_SCENE_GYM,      BATTLE_ENVIRONMENT_GYM},
    {MAP_BATTLE_SCENE_MAGMA,    BATTLE_ENVIRONMENT_MAGMA},
    {MAP_BATTLE_SCENE_AQUA,     BATTLE_ENVIRONMENT_AQUA},
    {MAP_BATTLE_SCENE_SIDNEY,   BATTLE_ENVIRONMENT_SIDNEY},
    {MAP_BATTLE_SCENE_PHOEBE,   BATTLE_ENVIRONMENT_PHOEBE},
    {MAP_BATTLE_SCENE_GLACIA,   BATTLE_ENVIRONMENT_GLACIA},
    {MAP_BATTLE_SCENE_DRAKE,    BATTLE_ENVIRONMENT_DRAKE},
    {MAP_BATTLE_SCENE_FRONTIER, BATTLE_ENVIRONMENT_FRONTIER}
};
