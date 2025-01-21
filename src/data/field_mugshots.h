#include "global.h"
#include "main.h"
#include "constants/field_mugshots.h"

static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/amelia/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");

static const u32 sFieldMugshotGfx_AmeliaNormal[] = INCBIN_U32("graphics/field_mugshots/amelia/normal.4bpp.lz");
static const u16 sFieldMugshotPal_AmeliaNormal[] = INCBIN_U16("graphics/field_mugshots/amelia/normal.gbapal");

static const u32 sFieldMugshotGfx_GigiNormal[] = INCBIN_U32("graphics/field_mugshots/gigi/normal.4bpp.lz");
static const u16 sFieldMugshotPal_GigiNormal[] = INCBIN_U16("graphics/field_mugshots/gigi/normal.gbapal");

static const u32 sFieldMugshotGfx_RenkoSerious[] = INCBIN_U32("graphics/field_mugshots/renko/serious.4bpp.lz");
static const u16 sFieldMugshotPal_RenkoSerious[] = INCBIN_U16("graphics/field_mugshots/renko/serious.gbapal");

static const u32 sFieldMugshotGfx_MaribelNormal[] = INCBIN_U32("graphics/field_mugshots/maribel/normal.4bpp.lz");
static const u16 sFieldMugshotPal_MaribelNormal[] = INCBIN_U16("graphics/field_mugshots/maribel/normal.gbapal");

static const u32 sFieldMugshotGfx_ShioriNormal[] = INCBIN_U32("graphics/field_mugshots/shiori/normal.4bpp.lz");
static const u16 sFieldMugshotPal_ShioriNormal[] = INCBIN_U16("graphics/field_mugshots/shiori/normal.gbapal");

static const u32 sFieldMugshotGfx_BaelzNormal[] = INCBIN_U32("graphics/field_mugshots/baelz/normal.4bpp.lz");
static const u16 sFieldMugshotPal_BaelzNormal[] = INCBIN_U16("graphics/field_mugshots/baelz/normal.gbapal");

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

        [EMOTE_ALT] =
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
            .pal = sFieldMugshotPal_AmeliaNormal,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_GIGI] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_GigiNormal,
            .pal = sFieldMugshotPal_GigiNormal,
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
        [EMOTE_ALT] =
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
    },
};
