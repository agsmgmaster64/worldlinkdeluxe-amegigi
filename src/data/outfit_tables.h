#include "global.h"
#include "main.h"
#include "data.h"
#include "global.fieldmap.h"
#include "constants/global.h"
#include "constants/event_objects.h"
#include "constants/outfits.h"

static const u16 sRegionMapPlayerIcon_BrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/brendan_icon.4bpp");

static const u16 sRegionMapPlayerIcon_RSBrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/rs_brendan_icon.4bpp");

static const u16 sRegionMapPlayerIcon_MayGfx[] = INCBIN_U16("graphics/pokenav/region_map/may_icon.4bpp");

static const u16 sRegionMapPlayerIcon_RSMayGfx[] = INCBIN_U16("graphics/pokenav/region_map/rs_may_icon.4bpp");

//! TODO: Should the gfx here be seperated?

static const u8 sFrontierPassPlayerIcons_BrendanMay_Gfx[] = INCBIN_U8("graphics/frontier_pass/map_heads.4bpp");

static const u8 sFrontierPassPlayerIcons_RSBrendanMay_Gfx[] = INCBIN_U8("graphics/frontier_pass/rs_map_heads.4bpp");

#define REGION_MAP_GFX(m, f) { sRegionMapPlayerIcon_ ## m ## Gfx, sRegionMapPlayerIcon_ ## f ## Gfx }

const struct Outfit gOutfits[OUTFIT_COUNT] =
{
    [OUTFIT_NONE] = {
        .isHidden = TRUE
    },
    [OUTFIT_HIFUU_USUAL] = {
        //! DESC: if sets to TRUE, it will not be shown in the OUTFIT menu if it's locked.
        .isHidden = FALSE,

        //! DESC: prices for purchasing them.
        .prices = { 0, 0 },

        //! DESC: outfit's name
        .name = COMPOUND_STRING("Hifuu Usual"),
        //! DESC: outfit's description
        .desc = COMPOUND_STRING("The usual, but\nbasic OUTFIT."),

        //! DESC: trainer front & back pic index
        //! (see include/constants/trainers.h)
        .trainerPics = {
            [MALE] =   { TRAINER_PIC_RENKO, TRAINER_BACK_PIC_RENKO, },
            [FEMALE] = { TRAINER_PIC_MARIBEL, TRAINER_BACK_PIC_MARIBEL, },
        },

        //! DESC: overworld avatars, consisting of: walking, cycling,
        //! surfing, and underwater. (see include/constants/event_object.h)
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_RENKO_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_RENKO_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_RENKO_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_RENKO_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_MARIBEL_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_MARIBEL_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_MARIBEL_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_MARIBEL_UNDERWATER
           },
        },

        //! DESC: overworld anims, consisting of: field move, fishing,
        //! water, and decorating. (see include/constants/event_object.h)
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_RENKO_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_RENKO_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_RENKO_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_RENKO_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_RENKO_VS_SEEKER,
                [PLAYER_AVATAR_GFX_VSSEEKER_BIKE] = OBJ_EVENT_GFX_RENKO_VS_SEEKER_BIKE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_MARIBEL_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_MARIBEL_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_MARIBEL_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_MARIBEL_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_MARIBEL_VS_SEEKER,
                [PLAYER_AVATAR_GFX_VSSEEKER_BIKE] = OBJ_EVENT_GFX_MARIBEL_VS_SEEKER_BIKE
            },
        },

        //! DESC: head icons gfx&pal for region map
        .iconsRM = { sRegionMapPlayerIcon_BrendanGfx, sRegionMapPlayerIcon_MayGfx },

        //! DESC: head icons gfx&pal for frontier pass
        //! note that frontier pass needs to be in one sprite instead of two,
        //! unlike region map. (probably should split them tbh)
        .iconsFP = sFrontierPassPlayerIcons_BrendanMay_Gfx,
    },
    [OUTFIT_THE_ALTERNATE] = {
        .isHidden = FALSE,
        .prices = { 200, 200 },
        .name = COMPOUND_STRING("The Alternate"),
        .desc = COMPOUND_STRING("The one you\ndidn't end up\nchoosing first."),
        .trainerPics = {
            [MALE]   = {TRAINER_PIC_MARIBEL, TRAINER_BACK_PIC_MARIBEL},
            [FEMALE] = {TRAINER_PIC_RENKO, TRAINER_BACK_PIC_RENKO}
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_MARIBEL_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_MARIBEL_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_MARIBEL_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_MARIBEL_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_RENKO_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_RENKO_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_RENKO_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_RENKO_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_MARIBEL_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_MARIBEL_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_MARIBEL_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_MARIBEL_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_MARIBEL_VS_SEEKER,
                [PLAYER_AVATAR_GFX_VSSEEKER_BIKE] = OBJ_EVENT_GFX_MARIBEL_VS_SEEKER_BIKE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_RENKO_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_RENKO_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_RENKO_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_RENKO_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_RENKO_VS_SEEKER,
                [PLAYER_AVATAR_GFX_VSSEEKER_BIKE] = OBJ_EVENT_GFX_RENKO_VS_SEEKER_BIKE
            },
        },
        .iconsRM = { sRegionMapPlayerIcon_MayGfx, sRegionMapPlayerIcon_BrendanGfx },
        .iconsFP = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
    },
    [OUTFIT_YOUNG_START] = {
        .isHidden = FALSE,
        .prices = { 100, 100 },
        .name = COMPOUND_STRING("Young Start"),
        .desc = COMPOUND_STRING("The usual, but\nbasic OUTFIT."),
        .trainerPics = {
            [MALE] =   { TRAINER_PIC_RENKO_YOUNG, TRAINER_BACK_PIC_RENKO_YOUNG, },
            [FEMALE] = { TRAINER_PIC_MARIBEL_YOUNG, TRAINER_BACK_PIC_MARIBEL_YOUNG, },
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_RENKO_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_RENKO_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_RENKO_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_RENKO_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_MARIBEL_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_MARIBEL_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_MARIBEL_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_MARIBEL_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_RENKO_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_RENKO_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_RENKO_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_RENKO_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_RENKO_VS_SEEKER,
                [PLAYER_AVATAR_GFX_VSSEEKER_BIKE] = OBJ_EVENT_GFX_RENKO_VS_SEEKER_BIKE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_MARIBEL_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_MARIBEL_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_MARIBEL_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_MARIBEL_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_MARIBEL_VS_SEEKER,
                [PLAYER_AVATAR_GFX_VSSEEKER_BIKE] = OBJ_EVENT_GFX_MARIBEL_VS_SEEKER_BIKE
            },
        },
        .iconsRM = { sRegionMapPlayerIcon_BrendanGfx, sRegionMapPlayerIcon_MayGfx },
        .iconsFP = sFrontierPassPlayerIcons_BrendanMay_Gfx,
    },
    [OUTFIT_ALTERED_YOUTH] = {
        .isHidden = FALSE,
        .prices = { 200, 200 },
        .name = COMPOUND_STRING("Altered Youth"),
        .desc = COMPOUND_STRING("The one you\ndidn't end up\nchoosing first."),
        .trainerPics = {
            [MALE]   = { TRAINER_PIC_MARIBEL_YOUNG, TRAINER_BACK_PIC_MARIBEL_YOUNG, },
            [FEMALE] = { TRAINER_PIC_RENKO_YOUNG, TRAINER_BACK_PIC_RENKO_YOUNG, },
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_MARIBEL_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_MARIBEL_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_MARIBEL_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_MARIBEL_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_RENKO_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_RENKO_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_RENKO_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_RENKO_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_MARIBEL_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_MARIBEL_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_MARIBEL_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_MARIBEL_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_MARIBEL_VS_SEEKER,
                [PLAYER_AVATAR_GFX_VSSEEKER_BIKE] = OBJ_EVENT_GFX_MARIBEL_VS_SEEKER_BIKE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_RENKO_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_RENKO_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_RENKO_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_RENKO_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_RENKO_VS_SEEKER,
                [PLAYER_AVATAR_GFX_VSSEEKER_BIKE] = OBJ_EVENT_GFX_RENKO_VS_SEEKER_BIKE
            },
        },
        .iconsRM = { sRegionMapPlayerIcon_MayGfx, sRegionMapPlayerIcon_BrendanGfx },
        .iconsFP = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
    },
    [OUTFIT_GIGI_MURIN] = {
        .isHidden = TRUE,
        .prices = { 200, 200 },
        .name = COMPOUND_STRING("Gigi Cosplay"),
        .desc = COMPOUND_STRING("Cosplay of the\norange gremlin\nherself."),
        .trainerPics = {
            [MALE]   = { TRAINER_PIC_GIGI_MURIN, TRAINER_PIC_GIGI_MURIN, },
            [FEMALE] = { TRAINER_PIC_RENKO_YOUNG, TRAINER_BACK_PIC_RENKO_YOUNG, },
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_GIGI_MURIN,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_MARIBEL_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_MARIBEL_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_MARIBEL_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_GIGI_MURIN,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_RENKO_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_RENKO_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_RENKO_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_MARIBEL_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_MARIBEL_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_MARIBEL_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_MARIBEL_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_MARIBEL_VS_SEEKER,
                [PLAYER_AVATAR_GFX_VSSEEKER_BIKE] = OBJ_EVENT_GFX_MARIBEL_VS_SEEKER_BIKE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_RENKO_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_RENKO_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_RENKO_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_RENKO_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_RENKO_VS_SEEKER,
                [PLAYER_AVATAR_GFX_VSSEEKER_BIKE] = OBJ_EVENT_GFX_RENKO_VS_SEEKER_BIKE
            },
        },
        .iconsRM = { sRegionMapPlayerIcon_MayGfx, sRegionMapPlayerIcon_BrendanGfx },
        .iconsFP = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
    },
};
