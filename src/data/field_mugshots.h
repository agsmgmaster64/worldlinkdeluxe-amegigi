static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/amelia/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");

static const u32 sFieldMugshotGfx_AmeliaNormal[] = INCBIN_U32("graphics/field_mugshots/amelia/normal.4bpp.lz");
static const u16 sFieldMugshotPal_AmeliaNormal[] = INCBIN_U16("graphics/field_mugshots/amelia/normal.gbapal");

static const u32 sFieldMugshotGfx_GigiNormal[] = INCBIN_U32("graphics/field_mugshots/gigi/normal.4bpp.lz");
static const u16 sFieldMugshotPal_GigiNormal[] = INCBIN_U16("graphics/field_mugshots/gigi/normal.gbapal");

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
};
