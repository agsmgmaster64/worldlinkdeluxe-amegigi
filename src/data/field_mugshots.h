#include "global.h"
#include "main.h"
#include "constants/field_mugshots.h"

static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/amelia/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");

static const u32 sFieldMugshotGfx_AmeliaNormal[] = INCBIN_U32("graphics/field_mugshots/amelia/normal.4bpp.lz");
static const u16 sFieldMugshotPal_AmeliaGeneral[] = INCBIN_U16("graphics/field_mugshots/amelia/general.gbapal");

static const u32 sFieldMugshotGfx_GigiNormal[] = INCBIN_U32("graphics/field_mugshots/gigi/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_GigiHappy[] = INCBIN_U32("graphics/field_mugshots/gigi/colon_3.4bpp.lz");
static const u16 sFieldMugshotPal_GigiGeneral[] = INCBIN_U16("graphics/field_mugshots/gigi/general.gbapal");

static const u32 sFieldMugshotGfx_KroniiNormal[] = INCBIN_U32("graphics/field_mugshots/kronii/normal.4bpp.lz");
static const u16 sFieldMugshotPal_KroniiGeneral[] = INCBIN_U16("graphics/field_mugshots/kronii/general.gbapal");

static const u32 sFieldMugshotGfx_RenkoSerious[] = INCBIN_U32("graphics/field_mugshots/renko/serious.4bpp.lz");
static const u16 sFieldMugshotPal_RenkoSerious[] = INCBIN_U16("graphics/field_mugshots/renko/serious.gbapal");

static const u32 sFieldMugshotGfx_MaribelNormal[] = INCBIN_U32("graphics/field_mugshots/maribel/normal.4bpp.lz");
static const u16 sFieldMugshotPal_MaribelNormal[] = INCBIN_U16("graphics/field_mugshots/maribel/normal.gbapal");

static const u32 sFieldMugshotGfx_ShioriNormal[] = INCBIN_U32("graphics/field_mugshots/shiori/normal.4bpp.lz");
static const u16 sFieldMugshotPal_ShioriNormal[] = INCBIN_U16("graphics/field_mugshots/shiori/normal.gbapal");

static const u32 sFieldMugshotGfx_BaelzNormal[] = INCBIN_U32("graphics/field_mugshots/baelz/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_BaelzHappy[] = INCBIN_U32("graphics/field_mugshots/baelz/happy.4bpp.lz");
static const u32 sFieldMugshotGfx_BaelzSerious[] = INCBIN_U32("graphics/field_mugshots/baelz/serious.4bpp.lz");
static const u16 sFieldMugshotPal_BaelzNormal[] = INCBIN_U16("graphics/field_mugshots/baelz/normal.gbapal");

static const u32 sFieldMugshotGfx_SusieHappy[] = INCBIN_U32("graphics/field_mugshots/susie/happy.4bpp.lz");
static const u32 sFieldMugshotGfx_SusieSlightSmile[] = INCBIN_U32("graphics/field_mugshots/susie/slight_smile.4bpp.lz");
static const u32 sFieldMugshotGfx_SusieAnnoyed[] = INCBIN_U32("graphics/field_mugshots/susie/annoyed.4bpp.lz");
static const u32 sFieldMugshotGfx_SusieSad[] = INCBIN_U32("graphics/field_mugshots/susie/sad.4bpp.lz");
static const u32 sFieldMugshotGfx_SusieSerious[] = INCBIN_U32("graphics/field_mugshots/susie/serious.4bpp.lz");
static const u32 sFieldMugshotGfx_SusieAngry[] = INCBIN_U32("graphics/field_mugshots/susie/angry.4bpp.lz");
static const u32 sFieldMugshotGfx_SusieDeadpan[] = INCBIN_U32("graphics/field_mugshots/susie/deadpan.4bpp.lz");
static const u32 sFieldMugshotGfx_SusieWhereAreWe[] = INCBIN_U32("graphics/field_mugshots/susie/where_are_we.4bpp.lz");
static const u32 sFieldMugshotGfx_SusieLookAwaySerious[] = INCBIN_U32("graphics/field_mugshots/susie/look_away_serious.4bpp.lz");
static const u32 sFieldMugshotGfx_SusieLookDownSerious[] = INCBIN_U32("graphics/field_mugshots/susie/look_down_serious.4bpp.lz");
static const u16 sFieldMugshotPal_SusieGeneral[] = INCBIN_U16("graphics/field_mugshots/susie/happy.gbapal");

struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
    u16 x;
    u16 y;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{
    [MUGSHOT_TEST] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_TestNormal,
            .pal = sFieldMugshotPal_TestNormal,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },

        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_TestAlt,
            .pal = sFieldMugshotPal_TestAlt,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_AMELIA] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_AmeliaNormal,
            .pal = sFieldMugshotPal_AmeliaGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_GIGI] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_GigiNormal,
            .pal = sFieldMugshotPal_GigiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_GigiHappy,
            .pal = sFieldMugshotPal_GigiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_RENKO] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_RenkoSerious,
            .pal = sFieldMugshotPal_RenkoSerious,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_MARIBEL] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_MaribelNormal,
            .pal = sFieldMugshotPal_MaribelNormal,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_SHIORI] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_ShioriNormal,
            .pal = sFieldMugshotPal_ShioriNormal,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_BAELZ] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_BaelzNormal,
            .pal = sFieldMugshotPal_BaelzNormal,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_BaelzHappy,
            .pal = sFieldMugshotPal_BaelzNormal,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_SERIOUS] =
        {
            .gfx = sFieldMugshotGfx_BaelzSerious,
            .pal = sFieldMugshotPal_BaelzNormal,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_SUSIE] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_SusieSlightSmile,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_SusieHappy,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_SAD] =
        {
            .gfx = sFieldMugshotGfx_SusieSad,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_SERIOUS] =
        {
            .gfx = sFieldMugshotGfx_SusieSerious,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ANNOYED] =
        {
            .gfx = sFieldMugshotGfx_SusieAnnoyed,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ANGRY] =
        {
            .gfx = sFieldMugshotGfx_SusieAngry,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_DEADPAN] =
        {
            .gfx = sFieldMugshotGfx_SusieDeadpan,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ALT_7] =
        {
            .gfx = sFieldMugshotGfx_SusieLookAwaySerious,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ALT_8] =
        {
            .gfx = sFieldMugshotGfx_SusieLookDownSerious,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ALT_9] =
        {
            .gfx = sFieldMugshotGfx_SusieWhereAreWe,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_KRONII] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_KroniiNormal,
            .pal = sFieldMugshotPal_KroniiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

};
