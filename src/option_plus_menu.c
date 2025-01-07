#include "global.h"
#include "option_plus_menu.h"
#include "m4a.h"
#include "main.h"
#include "menu.h"
#include "scanline_effect.h"
#include "sound.h"
#include "palette.h"
#include "sprite.h"
#include "task.h"
#include "malloc.h"
#include "bg.h"
#include "gpu_regs.h"
#include "window.h"
#include "text.h"
#include "text_window.h"
#include "international_string_util.h"
#include "strings.h"
#include "gba/m4a_internal.h"
#include "constants/rgb.h"
#include "menu_helpers.h"
#include "decompress.h"

enum
{
    MENU_VISUALS,
    MENU_BATTLE,
    MENU_MISC,
    MENU_COUNT,
};

// Menu items
enum
{
    MENUITEM_VISUALS_TEXTSPEED,
    MENUITEM_VISUALS_FONT,
    MENUITEM_VISUALS_FRAMETYPE,
    MENUITEM_VISUALS_UNIQUE_COLORS,
    MENUITEM_VISUALS_ANIMATIONS,
    MENUITEM_VISUALS_CANCEL,
    MENUITEM_VISUALS_COUNT,
};

enum
{
    MENUITEM_BATTLE_BATTLESCENE,
    MENUITEM_BATTLE_BATTLESTYLE,
    MENUITEM_BATTLE_HP_BAR,
    MENUITEM_BATTLE_EXP_BAR,
    MENUITEM_BATTLE_ANIM_SPEED,
    MENUITEM_BATTLE_IV_VIEW,
    MENUITEM_BATTLE_EFFECTIVENESS,
    MENUITEM_BATTLE_SHOW_TYPES,
    MENUITEM_BATTLE_CANCEL,
    MENUITEM_BATTLE_COUNT,
};

enum
{
    MENUITEM_MISC_SOUND,
    MENUITEM_MISC_MUSIC_VOLUME,
    MENUITEM_MISC_SFX_VOLUME,
    MENUITEM_MISC_CRIES_VOLUME,
    //MENUITEM_MISC_BUTTONMODE,
    MENUITEM_MISC_UNIT_SYSTEM,
    MENUITEM_MISC_MATCHCALL,
    MENUITEM_MISC_L_BUTTONMODE,
    MENUITEM_MISC_R_BUTTONMODE,
    MENUITEM_MISC_DEBUG_MODE,
    MENUITEM_MISC_CANCEL,
    MENUITEM_MISC_COUNT,
};

// Window Ids
enum
{
    WIN_TOPBAR,
    WIN_OPTIONS,
    WIN_DESCRIPTION
};

static const struct WindowTemplate sOptionMenuWinTemplates[] =
{
    {//WIN_TOPBAR
        .bg = 1,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 1,
        .baseBlock = 2
    },
    {//WIN_OPTIONS
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 26,
        .height = 10,
        .paletteNum = 1,
        .baseBlock = 62
    },
    {//WIN_DESCRIPTION
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 15,
        .width = 26,
        .height = 4,
        .paletteNum = 1,
        .baseBlock = 500
    },
    DUMMY_WIN_TEMPLATE
};

static const struct BgTemplate sOptionMenuBgTemplates[] =
{
    {
       .bg = 0,
       .charBaseIndex = 1,
       .mapBaseIndex = 30,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 1,
    },
    {
       .bg = 1,
       .charBaseIndex = 1,
       .mapBaseIndex = 31,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 0,
    },
    {
       .bg = 2,
       .charBaseIndex = 0,
       .mapBaseIndex = 29,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 1,
    },
    {
       .bg = 3,
       .charBaseIndex = 3,
       .mapBaseIndex = 27,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 2,
    },
};

struct OptionMenu
{
    u8 submenu;
    u8 sel_visuals[MENUITEM_VISUALS_COUNT];
    u8 sel_battle[MENUITEM_BATTLE_COUNT];
    u8 sel_misc[MENUITEM_MISC_COUNT];
    int menuCursor[MENU_COUNT];
    int visibleCursor[MENU_COUNT];
    u8 arrowTaskId;
    u8 gfxLoadState;
};

#define Y_DIFF 16 // Difference in pixels between items.
#define OPTIONS_ON_SCREEN 5
#define NUM_OPTIONS_FROM_BORDER 1

// local functions
static void MainCB2(void);
static void VBlankCB(void);
static void DrawTopBarText(void); //top Option text
static void DrawLeftSideOptionText(int selection, int y);
static void DrawRightSideChoiceText(const u8 *str, int x, int y, bool8 choosen, bool8 active);
static void DrawOptionMenuTexts(void); //left side text;
static void DrawChoices(u32 id, int y); //right side draw function
static void HighlightOptionMenuItem(void);
static void Task_OptionMenuFadeIn(u8 taskId);
static void Task_OptionMenuProcessInput(u8 taskId);
static void Task_OptionMenuSave(u8 taskId);
static void Task_OptionMenuFadeOut(u8 taskId);
static void ScrollMenu(int direction);
static void ScrollAll(int direction); // to bottom or top
static int GetMiddleX(const u8 *txt1, const u8 *txt2, const u8 *txt3);
static int XOptions_ProcessInput(int x, int selection);
static int ProcessInput_Options_Two(int selection);
//static int ProcessInput_Options_Three(int selection);
static int ProcessInput_Options_Four(int selection);
static int ProcessInput_Options_Eleven(int selection);
static int ProcessInput_FrameType(int selection);
static int ProcessInput_MusicVolume(int selection);
static int ProcessInput_SoundVolume(int selection);
static const u8 *const OptionTextDescription(void);
static const u8 *OptionTextRight(u8 menuItem);
static u8 MenuItemCount(void);
static u8 MenuItemCancel(void);
static void DrawDescriptionText(void);
static void DrawOptionMenuChoice(const u8 *text, u8 x, u8 y, u8 style, bool8 active);
static void DrawChoices_Options_Four(const u8 *const *const strings, int selection, int y, bool8 active);
static void ReDrawAll(void);
static void DrawChoices_TextSpeed(int selection, int y);
static void DrawChoices_BattleScene(int selection, int y);
static void DrawChoices_BattleStyle(int selection, int y);
static void DrawChoices_Sound(int selection, int y);
//static void DrawChoices_ButtonMode(int selection, int y);
static void DrawChoices_BarSpeed(int selection, int y); //HP and EXP
static void DrawChoices_UnitSystem(int selection, int y);
static void DrawChoices_Font(int selection, int y);
static void DrawChoices_FrameType(int selection, int y);
static void DrawChoices_MatchCall(int selection, int y);
static void DrawChoices_DebugMode(int selection, int y);
static void DrawChoices_AnimSpeed(int selection, int y);
static void DrawChoices_UniqueColors(int selection, int y);
static void DrawChoices_IvView(int selection, int y);
static void DrawChoices_Effectiveness(int selection, int y);
static void DrawChoices_ShowTypes(int selection, int y);
static void DrawChoices_MonAnimations(int selection, int y);
static void DrawChoices_MusicVolume(int selection, int y);
static void DrawChoices_SFXVolume(int selection, int y);
static void DrawChoices_CriesVolume(int selection, int y);
static void DrawChoices_LButtonMode(int selection, int y);
static void DrawChoices_RButtonMode(int selection, int y);
static void DrawBgWindowFrames(void);

// EWRAM vars
EWRAM_DATA static struct OptionMenu *sOptions = NULL;
static EWRAM_DATA u8 *sBg2TilemapBuffer = NULL;
static EWRAM_DATA u8 *sBg3TilemapBuffer = NULL;

// const data
static const u8 sEqualSignGfx[] = INCBIN_U8("graphics/interface/option_menu_equals_sign.4bpp"); // note: this is only used in the Japanese release
static const u16 sOptionMenuBg_Pal[] = {RGB(17, 18, 31)};
static const u16 sOptionMenuText_Pal[] = INCBIN_U16("graphics/interface/option_menu_text_custom.gbapal");

static const u32 sOptionsPlusTiles[] = INCBIN_U32("graphics/ui_options_plus/options_plus_tiles.4bpp.lz");
static const u16 sOptionsPlusPalette[] = INCBIN_U16("graphics/ui_options_plus/options_plus_tiles.gbapal");
static const u32 sOptionsPlusTilemap[] = INCBIN_U32("graphics/ui_options_plus/options_plus_tiles.bin.lz");

// Scrolling Background
static const u32 sScrollBgTiles[] = INCBIN_U32("graphics/ui_options_plus/scroll_tiles.4bpp.lz");
static const u32 sScrollBgTilemap[] = INCBIN_U32("graphics/ui_options_plus/scroll_tiles.bin.lz");
static const u16 sScrollBgPalette[] = INCBIN_U16("graphics/ui_options_plus/scroll_tiles.gbapal");

#define TEXT_COLOR_OPTIONS_WHITE                1
#define TEXT_COLOR_OPTIONS_GRAY_FG              2
#define TEXT_COLOR_OPTIONS_GRAY_SHADOW          3
#define TEXT_COLOR_OPTIONS_GRAY_LIGHT_FG        4
#define TEXT_COLOR_OPTIONS_ORANGE_FG            5
#define TEXT_COLOR_OPTIONS_ORANGE_SHADOW        6
#define TEXT_COLOR_OPTIONS_RED_FG               7
#define TEXT_COLOR_OPTIONS_RED_SHADOW           8
#define TEXT_COLOR_OPTIONS_GREEN_FG             9
#define TEXT_COLOR_OPTIONS_GREEN_SHADOW         10
#define TEXT_COLOR_OPTIONS_GREEN_DARK_FG        11
#define TEXT_COLOR_OPTIONS_GREEN_DARK_SHADOW    12
#define TEXT_COLOR_OPTIONS_RED_DARK_FG          13
#define TEXT_COLOR_OPTIONS_RED_DARK_SHADOW      14

// Menu draw and input functions
struct // MENU_VISUALS
{
    void (*drawChoices)(int selection, int y);
    int (*processInput)(int selection);
} static const sItemFunctionsVisuals[MENUITEM_VISUALS_COUNT] =
{
    [MENUITEM_VISUALS_TEXTSPEED]     = {DrawChoices_TextSpeed,     ProcessInput_Options_Four},
    [MENUITEM_VISUALS_FONT]          = {DrawChoices_Font,          ProcessInput_Options_Two},
    [MENUITEM_VISUALS_FRAMETYPE]     = {DrawChoices_FrameType,     ProcessInput_FrameType},
    [MENUITEM_VISUALS_UNIQUE_COLORS] = {DrawChoices_UniqueColors,  ProcessInput_Options_Two},
    [MENUITEM_VISUALS_ANIMATIONS]    = {DrawChoices_MonAnimations, ProcessInput_Options_Two},
    [MENUITEM_VISUALS_CANCEL]        = {NULL, NULL},
};

struct // MENU_BATTLE
{
    void (*drawChoices)(int selection, int y);
    int (*processInput)(int selection);
} static const sItemFunctionsBattle[MENUITEM_BATTLE_COUNT] =
{
    [MENUITEM_BATTLE_BATTLESCENE]   = {DrawChoices_BattleScene,   ProcessInput_Options_Two},
    [MENUITEM_BATTLE_BATTLESTYLE]   = {DrawChoices_BattleStyle,   ProcessInput_Options_Two},
    [MENUITEM_BATTLE_HP_BAR]        = {DrawChoices_BarSpeed,      ProcessInput_Options_Eleven},
    [MENUITEM_BATTLE_EXP_BAR]       = {DrawChoices_BarSpeed,      ProcessInput_Options_Eleven},
    [MENUITEM_BATTLE_ANIM_SPEED]    = {DrawChoices_AnimSpeed,     ProcessInput_Options_Four},
    [MENUITEM_BATTLE_IV_VIEW]       = {DrawChoices_IvView,        ProcessInput_Options_Two},
    [MENUITEM_BATTLE_EFFECTIVENESS] = {DrawChoices_Effectiveness, ProcessInput_Options_Two},
    [MENUITEM_BATTLE_SHOW_TYPES]    = {DrawChoices_ShowTypes,     ProcessInput_Options_Two},
    [MENUITEM_BATTLE_CANCEL]        = {NULL, NULL},
};

struct // MENU_MISC
{
    void (*drawChoices)(int selection, int y);
    int (*processInput)(int selection);
} static const sItemFunctionsMisc[MENUITEM_MISC_COUNT] =
{
    [MENUITEM_MISC_SOUND]        = {DrawChoices_Sound,       ProcessInput_Options_Two},
    [MENUITEM_MISC_MUSIC_VOLUME] = {DrawChoices_MusicVolume, ProcessInput_MusicVolume},
    [MENUITEM_MISC_SFX_VOLUME]   = {DrawChoices_SFXVolume,   ProcessInput_SoundVolume},
    [MENUITEM_MISC_CRIES_VOLUME] = {DrawChoices_CriesVolume, ProcessInput_SoundVolume},
    //[MENUITEM_MISC_BUTTONMODE]   = {DrawChoices_ButtonMode,  ProcessInput_Options_Three},
    [MENUITEM_MISC_UNIT_SYSTEM]  = {DrawChoices_UnitSystem,  ProcessInput_Options_Two},
    [MENUITEM_MISC_MATCHCALL]    = {DrawChoices_MatchCall,   ProcessInput_Options_Two},
    [MENUITEM_MISC_L_BUTTONMODE] = {DrawChoices_LButtonMode, ProcessInput_Options_Four},
    [MENUITEM_MISC_R_BUTTONMODE] = {DrawChoices_RButtonMode, ProcessInput_Options_Four},
    [MENUITEM_MISC_DEBUG_MODE]   = {DrawChoices_DebugMode,   ProcessInput_Options_Two},
    [MENUITEM_MISC_CANCEL]       = {NULL, NULL},
};

// Menu left side option names text
static const u8 sText_OptionMenuSave[] = _("SAVE");

static const u8 sText_TextSpeed[]    = _("TEXT SPEED");
static const u8 sText_Font[]         = _("FONT");
static const u8 sText_Frame[]        = _("FRAME");
static const u8 sText_UniqueColors[] = _("UNIQUE COLORS");
static const u8 sText_Animations[]   = _("ANIMATIONS");

static const u8 *const sOptionMenuItemsNamesVisuals[MENUITEM_VISUALS_COUNT] =
{
    [MENUITEM_VISUALS_TEXTSPEED]     = sText_TextSpeed,
    [MENUITEM_VISUALS_FONT]          = sText_Font,
    [MENUITEM_VISUALS_FRAMETYPE]     = sText_Frame,
    [MENUITEM_VISUALS_UNIQUE_COLORS] = sText_UniqueColors,
    [MENUITEM_VISUALS_ANIMATIONS]    = sText_Animations,
    [MENUITEM_VISUALS_CANCEL]        = sText_OptionMenuSave,
};

static const u8 sText_BattleScene[]    = _("BATTLE SCENE");
static const u8 sText_BattleStyle[]    = _("BATTLE STYLE");
static const u8 sText_HpBar[]          = _("HP BAR");
static const u8 sText_ExpBar[]         = _("EXP BAR");
static const u8 sText_AnimSpeed[]      = _("ANIM. SPEED");
static const u8 sText_IvView[]         = _("IV VIEW");
static const u8 sText_Effectiveness[]  = _("EFFECTIVENESS");
static const u8 sText_ShowTypes[]      = _("SHOW TYPES");

static const u8 *const sOptionMenuItemsNamesBattle[MENUITEM_BATTLE_COUNT] =
{
    [MENUITEM_BATTLE_BATTLESCENE]   = sText_BattleScene,
    [MENUITEM_BATTLE_BATTLESTYLE]   = sText_BattleStyle,
    [MENUITEM_BATTLE_HP_BAR]        = sText_HpBar,
    [MENUITEM_BATTLE_EXP_BAR]       = sText_ExpBar,
    [MENUITEM_BATTLE_ANIM_SPEED]    = sText_AnimSpeed,
    [MENUITEM_BATTLE_IV_VIEW]       = sText_IvView,
    [MENUITEM_BATTLE_EFFECTIVENESS] = sText_Effectiveness,
    [MENUITEM_BATTLE_SHOW_TYPES]    = sText_ShowTypes,
    [MENUITEM_BATTLE_CANCEL]        = sText_OptionMenuSave,
};

static const u8 sText_Sound[]        = _("SPEAKERS");
static const u8 sText_MusicVolume[]  = _("MUSIC VOLUME");
static const u8 sText_SFXVolume[]    = _("SFX VOLUME");
static const u8 sText_CriesVolume[]  = _("CRIES VOLUME");
static const u8 sText_ButtonMode[]   = _("BUTTON MODE");
static const u8 sText_UnitSystem[]   = _("UNIT SYSTEM");
static const u8 sText_MatchCalls[]   = _("OVERWORLD CALLS");
static const u8 sText_LButtonMode[]  = _("L BUTTON");
static const u8 sText_RButtonMode[]  = _("R BUTTON");
static const u8 sText_DebugMode[]    = _("DEBUG MODE");

static const u8 *const sOptionMenuItemsNamesMisc[MENUITEM_MISC_COUNT] =
{
    [MENUITEM_MISC_SOUND]        = sText_Sound,
    [MENUITEM_MISC_MUSIC_VOLUME] = sText_MusicVolume,
    [MENUITEM_MISC_SFX_VOLUME]   = sText_SFXVolume,
    [MENUITEM_MISC_CRIES_VOLUME] = sText_CriesVolume,
    //[MENUITEM_MISC_BUTTONMODE]   = sText_ButtonMode,
    [MENUITEM_MISC_UNIT_SYSTEM]  = sText_UnitSystem,
    [MENUITEM_MISC_MATCHCALL]    = sText_MatchCalls,
    [MENUITEM_MISC_L_BUTTONMODE] = sText_LButtonMode,
    [MENUITEM_MISC_R_BUTTONMODE] = sText_RButtonMode,
    [MENUITEM_MISC_DEBUG_MODE]   = sText_DebugMode,
    [MENUITEM_MISC_CANCEL]       = sText_OptionMenuSave,
};

static const u8 *OptionTextRight(u8 menuItem)
{
    switch (sOptions->submenu)
    {
    default:
    case MENU_VISUALS:
        return sOptionMenuItemsNamesVisuals[menuItem];
    case MENU_BATTLE:
        return sOptionMenuItemsNamesBattle[menuItem];
    case MENU_MISC:
        return sOptionMenuItemsNamesMisc[menuItem];
    }
}

// Menu left side text conditions
static bool8 CheckConditions(int selection)
{
    switch (sOptions->submenu)
    {
    default:
        return FALSE;
    case MENU_VISUALS:
        switch(selection)
        {
        case MENUITEM_VISUALS_TEXTSPEED:
        case MENUITEM_VISUALS_FONT:
        case MENUITEM_VISUALS_FRAMETYPE:
        case MENUITEM_VISUALS_UNIQUE_COLORS:
        case MENUITEM_VISUALS_ANIMATIONS:
        case MENUITEM_VISUALS_CANCEL:
        case MENUITEM_VISUALS_COUNT:
            return TRUE;
        default:
            return FALSE;
        }
    case MENU_BATTLE:
        switch(selection)
        {
        case MENUITEM_BATTLE_BATTLESCENE:
        case MENUITEM_BATTLE_BATTLESTYLE:
        case MENUITEM_BATTLE_HP_BAR:
        case MENUITEM_BATTLE_EXP_BAR:
        case MENUITEM_BATTLE_ANIM_SPEED:
        case MENUITEM_BATTLE_IV_VIEW:
        case MENUITEM_BATTLE_EFFECTIVENESS:
        case MENUITEM_BATTLE_SHOW_TYPES:
        case MENUITEM_BATTLE_CANCEL:
        case MENUITEM_BATTLE_COUNT:
            return TRUE;
        default:
            return FALSE;
        }
    case MENU_MISC:
        switch(selection)
        {
        case MENUITEM_MISC_SOUND:
        case MENUITEM_MISC_MUSIC_VOLUME:
        case MENUITEM_MISC_SFX_VOLUME:
        case MENUITEM_MISC_CRIES_VOLUME:
        //case MENUITEM_MISC_BUTTONMODE:
        case MENUITEM_MISC_UNIT_SYSTEM:
        case MENUITEM_MISC_MATCHCALL:
        case MENUITEM_MISC_L_BUTTONMODE:
        case MENUITEM_MISC_R_BUTTONMODE:
        case MENUITEM_MISC_DEBUG_MODE:
        case MENUITEM_MISC_CANCEL:
        case MENUITEM_MISC_COUNT:
            return TRUE;
        default:
            return FALSE;
        }
    }
}

// Descriptions
static const u8 sText_Empty[]                   = _("");
static const u8 sText_Desc_Save[]               = _("Save your settings.");
static const u8 sText_Desc_SurfOff[]            = _("Disables the SURF theme when\nusing SURF.");
static const u8 sText_Desc_SurfOn[]             = _("Enables the SURF theme\nwhen using SURF.");
static const u8 sText_Desc_BikeOff[]            = _("Disables the BIKE theme when\nusing the BIKE.");
static const u8 sText_Desc_BikeOn[]             = _("Enables the BIKE theme when\nusing the BIKE.");

static const u8 sText_Desc_TextSpeed[]          = _("Choose one of the four text-display\nspeeds.");
static const u8 sText_Desc_FontType[]           = _("Choose the font design.");
static const u8 sText_Desc_FrameType[]          = _("Choose the frame surrounding the\nwindows.");
static const u8 sText_Desc_UniqueColorsOn[]     = _("Enables unique colors for\nPuppets.");
static const u8 sText_Desc_UniqueColorsOff[]    = _("Disables unique colors for\nPuppets.");
static const u8 sText_Desc_MonAnimationsOn[]    = _("Animations will play for\nPuppets.");
static const u8 sText_Desc_MonAnimationsOff[]   = _("Animations are disabled\nfor Puppets.");

static const u8 *const sOptionMenuItemDescriptionsVisuals[MENUITEM_VISUALS_COUNT][2] =
{
    [MENUITEM_VISUALS_TEXTSPEED]     = {sText_Desc_TextSpeed,          sText_Empty},
    [MENUITEM_VISUALS_FONT]          = {sText_Desc_FontType,           sText_Desc_FontType},
    [MENUITEM_VISUALS_FRAMETYPE]     = {sText_Desc_FrameType,          sText_Empty},
    [MENUITEM_VISUALS_UNIQUE_COLORS] = {sText_Desc_UniqueColorsOn,     sText_Desc_UniqueColorsOff},
    [MENUITEM_VISUALS_ANIMATIONS]    = {sText_Desc_MonAnimationsOn,    sText_Desc_MonAnimationsOff},
    [MENUITEM_VISUALS_CANCEL]        = {sText_Desc_Save,               sText_Empty},
};

static const u8 sText_Desc_BattleScene_On[]     = _("Show the Puppet battle animations.");
static const u8 sText_Desc_BattleScene_Off[]    = _("Skip the Puppet battle animations.");
static const u8 sText_Desc_BattleStyle_Shift[]  = _("Get the option to switch your\nPuppet after the enemies faints.");
static const u8 sText_Desc_BattleStyle_Set[]    = _("No free switch after fainting the\nenemy Puppets.");
static const u8 sText_Desc_BattleHPBar[]        = _("Choose how fast the HP BAR will get\ndrained in battles.");
static const u8 sText_Desc_BattleExpBar[]       = _("Choose how fast the EXP BAR will get\nfilled in battles.");
static const u8 sText_Desc_AnimSpeed[]          = _("Choose the speed for battle\nanimations.");
static const u8 sText_Desc_IvViewOn[]           = _("IVs can be viewed in the\nsummary by pressing {A_BUTTON}.");
static const u8 sText_Desc_IvViewOff[]          = _("IVs cannot be viewed in the\nsummary.");
static const u8 sText_Desc_EffectivenessOn[]    = _("If foe was seen before, moves will\nshow effectiveness when selecting.");
static const u8 sText_Desc_EffectivenessOff[]   = _("Moves won't show effectivenes\nwhen selecting.");
static const u8 sText_Desc_ShowTypesOn[]        = _("If foe was caught, their types will\nshow when selecting a move.");
static const u8 sText_Desc_ShowTypesOff[]       = _("Puppet types will not be shown\nin battle.");

static const u8 *const sOptionMenuItemDescriptionsBattle[MENUITEM_BATTLE_COUNT][2] =
{
    [MENUITEM_BATTLE_BATTLESCENE]   = {sText_Desc_BattleScene_On,     sText_Desc_BattleScene_Off},
    [MENUITEM_BATTLE_BATTLESTYLE]   = {sText_Desc_BattleStyle_Shift,  sText_Desc_BattleStyle_Set},
    [MENUITEM_BATTLE_HP_BAR]        = {sText_Desc_BattleHPBar,        sText_Empty},
    [MENUITEM_BATTLE_EXP_BAR]       = {sText_Desc_BattleExpBar,       sText_Empty},
    [MENUITEM_BATTLE_ANIM_SPEED]    = {sText_Desc_AnimSpeed,          sText_Empty},
    [MENUITEM_BATTLE_IV_VIEW]       = {sText_Desc_IvViewOn,           sText_Desc_IvViewOff},
    [MENUITEM_BATTLE_EFFECTIVENESS] = {sText_Desc_EffectivenessOn,    sText_Desc_EffectivenessOff},
    [MENUITEM_BATTLE_SHOW_TYPES]    = {sText_Desc_ShowTypesOn,        sText_Desc_ShowTypesOff},
    [MENUITEM_BATTLE_CANCEL]        = {sText_Desc_Save,               sText_Empty},
};

static const u8 sText_Desc_SoundMono[]          = _("Sound is the same in all speakers.\nRecommended for original hardware.");
static const u8 sText_Desc_SoundStereo[]        = _("Play the left and right audio channel\nseperatly. Great with headphones.");
static const u8 sText_Desc_MusicVolume[]        = _("Adjust the volume of background music\nhere.");
static const u8 sText_Desc_SFXVolume[]          = _("Adjust the volume of all sound effects\nand fanfares here.");
static const u8 sText_Desc_CriesVolume[]        = _("Adjust the volume of all Puppet cries\nhere");
static const u8 sText_Desc_LButtonMode_None[]   = _("The L button works as normal.");
static const u8 sText_Desc_LButtonMode_LA[]     = _("The L button acts as another A\nbutton for one-handed play.");
static const u8 sText_Desc_LButtonMode_AutoRun[] = _("Running can be toggled by\nthe L Button.");
static const u8 sText_Desc_LButtonMode_Register[] = _("An item registered can be used with\nthe L Button.");
static const u8 sText_Desc_RButtonMode_None[]   = _("The R button works as normal.");
static const u8 sText_Desc_RButtonMode_DexNav[] = _("When available, the R Button searches\nfor the registered DexNav species.");
static const u8 sText_Desc_RButtonMode_Bike[]   = _("Bike modes can be toggled by\nthe R button.");
static const u8 sText_Desc_RButtonMode_Register[] = _("An item registered can be used with\nthe R Button.");
static const u8 sText_Desc_UnitSystemImperial[] = _("Display Berry and Puppet weight\nand size in pounds and inches.");
static const u8 sText_Desc_UnitSystemMetric[]   = _("Display Berry and Puppet weight\nand size in kilograms and meters.");
static const u8 sText_Desc_OverworldCallsOn[]   = _("TRAINERs will be able to call you,\noffering rematches and info.");
static const u8 sText_Desc_OverworldCallsOff[]  = _("You will not receive calls.\nSpecial events will still occur.");
static const u8 sText_Desc_DebugModeOn[]        = _("WARNING! Please use at your own\nrisk.");
static const u8 sText_Desc_DebugModeOff[]       = _("Enabling this option will enable\ndebug mode options.");

static const u8 *const sOptionMenuItemDescriptionsMisc[MENUITEM_MISC_COUNT][4] =
{
    [MENUITEM_MISC_SOUND]        = {sText_Desc_SoundMono,            sText_Desc_SoundStereo,        sText_Empty,                    sText_Empty},
    [MENUITEM_MISC_MUSIC_VOLUME] = {sText_Desc_MusicVolume,          sText_Empty,                   sText_Empty,                    sText_Empty},
    [MENUITEM_MISC_SFX_VOLUME]   = {sText_Desc_SFXVolume,            sText_Empty,                   sText_Empty,                    sText_Empty},
    [MENUITEM_MISC_CRIES_VOLUME] = {sText_Desc_CriesVolume,          sText_Empty,                   sText_Empty,                    sText_Empty},
    [MENUITEM_MISC_UNIT_SYSTEM]  = {sText_Desc_UnitSystemImperial,   sText_Desc_UnitSystemMetric,   sText_Empty,                    sText_Empty},
    [MENUITEM_MISC_MATCHCALL]    = {sText_Desc_OverworldCallsOn,     sText_Desc_OverworldCallsOff,  sText_Empty,                    sText_Empty},
    [MENUITEM_MISC_L_BUTTONMODE] = {sText_Desc_LButtonMode_None,     sText_Desc_LButtonMode_LA,     sText_Desc_LButtonMode_AutoRun, sText_Desc_LButtonMode_Register},
    [MENUITEM_MISC_R_BUTTONMODE] = {sText_Desc_RButtonMode_None,     sText_Desc_RButtonMode_DexNav, sText_Desc_RButtonMode_Bike,    sText_Desc_RButtonMode_Register},
    [MENUITEM_MISC_DEBUG_MODE]   = {sText_Desc_DebugModeOn,          sText_Desc_DebugModeOff,       sText_Empty,                    sText_Empty},
    [MENUITEM_MISC_CANCEL]       = {sText_Desc_Save,                 sText_Empty,                   sText_Empty,                    sText_Empty},
};

// Disabled Descriptions
static const u8 sText_Desc_Disabled_Textspeed[]     = _("Text can only be in a set\nspeed.");
static const u8 sText_Desc_Disabled_FontType[]      = _("Fonts cannot be changed\ncurrectly.");
static const u8 sText_Desc_Disabled_FrameType[]     = _("Only this text frame can be\nused.");
static const u8 sText_Desc_Disabled_UniqueColors[]  = _("Unique colors cannot be enabled\ncurrently.");

static const u8 *const sOptionMenuItemDescriptionsDisabledVisuals[MENUITEM_VISUALS_COUNT] =
{
    [MENUITEM_VISUALS_TEXTSPEED]     = sText_Desc_Disabled_Textspeed,
    [MENUITEM_VISUALS_FONT]          = sText_Desc_Disabled_FontType,
    [MENUITEM_VISUALS_FRAMETYPE]     = sText_Desc_Disabled_FrameType,
    [MENUITEM_VISUALS_UNIQUE_COLORS] = sText_Desc_Disabled_UniqueColors,
    [MENUITEM_VISUALS_ANIMATIONS]    = sText_Empty,
    [MENUITEM_VISUALS_CANCEL]        = sText_Empty,
};

// Disabled Custom
static const u8 sText_Desc_Disabled_BattleHPBar[]     = _("HP bar speed can only be in a\nset speed.");
static const u8 sText_Desc_Disabled_BattleExpBar[]    = _("Exp bar speed can only be in a\nset speed.");
static const u8 sText_Desc_Disabled_BattleAnimSpeed[] = _("Animation speed can only be in\na set speed.");

static const u8 *const sOptionMenuItemDescriptionsDisabledBattle[MENUITEM_BATTLE_COUNT] =
{
    [MENUITEM_BATTLE_BATTLESCENE]   = sText_Empty,
    [MENUITEM_BATTLE_BATTLESTYLE]   = sText_Empty,
    [MENUITEM_BATTLE_HP_BAR]        = sText_Desc_Disabled_BattleHPBar,
    [MENUITEM_BATTLE_EXP_BAR]       = sText_Desc_Disabled_BattleExpBar,
    [MENUITEM_BATTLE_ANIM_SPEED]    = sText_Desc_Disabled_BattleAnimSpeed,
    [MENUITEM_BATTLE_IV_VIEW]       = sText_Empty,
    [MENUITEM_BATTLE_EFFECTIVENESS] = sText_Empty,
    [MENUITEM_BATTLE_SHOW_TYPES]    = sText_Empty,
    [MENUITEM_BATTLE_CANCEL]        = sText_Empty,
};

// Disabled Custom
static const u8 sText_Desc_Disabled_DebugMode[]    = _("Debug mode cannot be enabled\ncurrently.");

static const u8 *const sOptionMenuItemDescriptionsDisabledMisc[MENUITEM_MISC_COUNT] =
{
    [MENUITEM_MISC_SOUND]        = sText_Empty,
    [MENUITEM_MISC_MUSIC_VOLUME] = sText_Empty,
    [MENUITEM_MISC_SFX_VOLUME]   = sText_Empty,
    [MENUITEM_MISC_CRIES_VOLUME] = sText_Empty,
    //[MENUITEM_MISC_BUTTONMODE]   = sText_Empty,
    [MENUITEM_MISC_UNIT_SYSTEM]  = sText_Empty,
    [MENUITEM_MISC_MATCHCALL]    = sText_Empty,
    [MENUITEM_MISC_L_BUTTONMODE] = sText_Empty,
    [MENUITEM_MISC_R_BUTTONMODE] = sText_Empty,
    [MENUITEM_MISC_DEBUG_MODE]   = sText_Desc_Disabled_DebugMode,
    [MENUITEM_MISC_CANCEL]       = sText_Empty,
};

static const u8 *const OptionTextDescription(void)
{
    u8 menuItem = sOptions->menuCursor[sOptions->submenu];
    u8 selection;

    switch (sOptions->submenu)
    {
    case MENU_VISUALS:
        if (!CheckConditions(menuItem))
            return sOptionMenuItemDescriptionsDisabledVisuals[menuItem];
        selection = sOptions->sel_visuals[menuItem];
        if (menuItem == MENUITEM_VISUALS_TEXTSPEED || menuItem == MENUITEM_VISUALS_FRAMETYPE)
            selection = 0;
        return sOptionMenuItemDescriptionsVisuals[menuItem][selection];
    case MENU_BATTLE:
        if (!CheckConditions(menuItem))
            return sOptionMenuItemDescriptionsDisabledBattle[menuItem];
        selection = sOptions->sel_battle[menuItem];
        if (menuItem == MENUITEM_BATTLE_HP_BAR || menuItem == MENUITEM_BATTLE_EXP_BAR || menuItem == MENUITEM_BATTLE_ANIM_SPEED)
            selection = 0;
        return sOptionMenuItemDescriptionsBattle[menuItem][selection];
    case MENU_MISC:
        if (!CheckConditions(menuItem))
            return sOptionMenuItemDescriptionsDisabledMisc[menuItem];
        selection = sOptions->sel_misc[menuItem];
        if (menuItem == MENUITEM_MISC_MUSIC_VOLUME || menuItem == MENUITEM_MISC_SFX_VOLUME || menuItem == MENUITEM_MISC_CRIES_VOLUME)
            selection = 0;
        return sOptionMenuItemDescriptionsMisc[menuItem][selection];
    }
    return 0;
}

static u8 MenuItemCount(void)
{
    switch (sOptions->submenu)
    {
    default:
    case MENU_VISUALS:
        return MENUITEM_VISUALS_COUNT;
    case MENU_BATTLE:
        return MENUITEM_BATTLE_COUNT;
    case MENU_MISC:
        return MENUITEM_MISC_COUNT;
    }
}

static u8 MenuItemCancel(void)
{
    switch (sOptions->submenu)
    {
    default:
    case MENU_VISUALS:
        return MENUITEM_VISUALS_CANCEL;
    case MENU_BATTLE:
        return MENUITEM_BATTLE_CANCEL;
    case MENU_MISC:
        return MENUITEM_MISC_CANCEL;
    }
}

// Main code
static void MainCB2(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
    ChangeBgY(3, 96, BG_COORD_ADD);
}

static const u8 sText_TopBar_Visuals[]       = _("VISUALS");
static const u8 sText_TopBar_Custom[]        = _("BATTLE");
static const u8 sText_TopBar_Misc[]          = _("MISC");
static const u8 sText_TopBar_Visuals_Left[]  = _("{L_BUTTON}MISC");
static const u8 sText_TopBar_Visuals_Right[] = _("{R_BUTTON}BATTLE");
static const u8 sText_TopBar_Battle_Left[]   = _("{L_BUTTON}VISUALS");
static const u8 sText_TopBar_Battle_Right[]  = _("{R_BUTTON}MISC");
static const u8 sText_TopBar_Misc_Left[]     = _("{L_BUTTON}BATTLE");
static const u8 sText_TopBar_Misc_Right[]    = _("{R_BUTTON}VISUALS");

static void DrawTopBarText(void)
{
    const u8 color[3] = { 0, TEXT_COLOR_WHITE, TEXT_COLOR_OPTIONS_GRAY_FG };

    FillWindowPixelBuffer(WIN_TOPBAR, PIXEL_FILL(0));
    switch (sOptions->submenu)
    {
        case MENU_VISUALS:
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 105, 1, color, 0, sText_TopBar_Visuals);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 2, 1, color, 0, sText_TopBar_Visuals_Left);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 187, 1, color, 0, sText_TopBar_Visuals_Right);
            break;
        case MENU_BATTLE:
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 105, 1, color, 0, sText_TopBar_Custom);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 2, 1, color, 0, sText_TopBar_Battle_Left);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 187, 1, color, 0, sText_TopBar_Battle_Right);
            break;
        case MENU_MISC:
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 105, 1, color, 0, sText_TopBar_Misc);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 2, 1, color, 0, sText_TopBar_Misc_Left);
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 187, 1, color, 0, sText_TopBar_Misc_Right);
            break;
    }
    PutWindowTilemap(WIN_TOPBAR);
    CopyWindowToVram(WIN_TOPBAR, COPYWIN_FULL);
}

static void DrawOptionMenuTexts(void) //left side text
{
    u8 i;

    FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(0));
    for (i = 0; i < MenuItemCount(); i++)
        DrawLeftSideOptionText(i, (i * Y_DIFF) + 1);
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
}

static void DrawDescriptionText(void)
{
    u8 color_gray[3];
    color_gray[0] = TEXT_COLOR_TRANSPARENT;
    color_gray[1] = TEXT_COLOR_OPTIONS_GRAY_FG;
    color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_SHADOW;
        
    FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(1));
    AddTextPrinterParameterized4(WIN_DESCRIPTION, FONT_NORMAL, 8, 1, 0, 0, color_gray, TEXT_SKIP_DRAW, OptionTextDescription());
    CopyWindowToVram(WIN_DESCRIPTION, COPYWIN_FULL);
}

static void DrawLeftSideOptionText(int selection, int y)
{
    u8 color_yellow[3];
    u8 color_gray[3];

    color_yellow[0] = TEXT_COLOR_TRANSPARENT;
    color_yellow[1] = TEXT_COLOR_WHITE;
    color_yellow[2] = TEXT_COLOR_OPTIONS_GRAY_FG;
    color_gray[0] = TEXT_COLOR_TRANSPARENT;
    color_gray[1] = TEXT_COLOR_WHITE;
    color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_SHADOW;

    if (CheckConditions(selection))
        AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, 8, y, 0, 0, color_yellow, TEXT_SKIP_DRAW, OptionTextRight(selection));
    else
        AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, 8, y, 0, 0, color_gray, TEXT_SKIP_DRAW, OptionTextRight(selection));
}

static void DrawRightSideChoiceText(const u8 *text, int x, int y, bool8 choosen, bool8 active)
{
    u8 color_red[3];
    u8 color_gray[3];

    if (active)
    {
        color_red[0] = TEXT_COLOR_TRANSPARENT;
        color_red[1] = TEXT_COLOR_OPTIONS_ORANGE_FG;
        color_red[2] = TEXT_COLOR_OPTIONS_GRAY_FG;
        color_gray[0] = TEXT_COLOR_TRANSPARENT;
        color_gray[1] = TEXT_COLOR_OPTIONS_WHITE;
        color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_FG;
    }
    else
    {
        color_red[0] = TEXT_COLOR_TRANSPARENT;
        color_red[1] = TEXT_COLOR_OPTIONS_WHITE;
        color_red[2] = TEXT_COLOR_OPTIONS_GRAY_FG;
        color_gray[0] = TEXT_COLOR_TRANSPARENT;
        color_gray[1] = TEXT_COLOR_OPTIONS_WHITE;
        color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_FG;
    }


    if (choosen)
        AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, x, y, 0, 0, color_red, TEXT_SKIP_DRAW, text);
    else
        AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, x, y, 0, 0, color_gray, TEXT_SKIP_DRAW, text);
}

static void DrawChoices(u32 id, int y) //right side draw function
{
    switch (sOptions->submenu)
    {
        case MENU_VISUALS:
            if (sItemFunctionsVisuals[id].drawChoices != NULL)
                sItemFunctionsVisuals[id].drawChoices(sOptions->sel_visuals[id], y);
            break;
        case MENU_BATTLE:
            if (sItemFunctionsBattle[id].drawChoices != NULL)
                sItemFunctionsBattle[id].drawChoices(sOptions->sel_battle[id], y);
            break;
        case MENU_MISC:
            if (sItemFunctionsMisc[id].drawChoices != NULL)
                sItemFunctionsMisc[id].drawChoices(sOptions->sel_misc[id], y);
            break;
    }
}

static void HighlightOptionMenuItem(void)
{
    int cursor = sOptions->visibleCursor[sOptions->submenu];

    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(8, 232));
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(cursor * Y_DIFF + 24, cursor * Y_DIFF + 40));
}

static bool8 OptionsMenu_LoadGraphics(void) // Load all the tilesets, tilemaps, spritesheets, and palettes
{
    switch (sOptions->gfxLoadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(2, sOptionsPlusTiles, 0, 0, 0);
        sOptions->gfxLoadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            LZDecompressWram(sOptionsPlusTilemap, sBg2TilemapBuffer);
            sOptions->gfxLoadState++;
        }
        break;
    case 2:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(3, sScrollBgTiles, 0, 0, 0);
        sOptions->gfxLoadState++;
        break;
    case 3:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            LZDecompressWram(sScrollBgTilemap, sBg3TilemapBuffer);
            sOptions->gfxLoadState++;
        }
        break;
    case 4:
        LoadPalette(sOptionsPlusPalette, 64, 32);
        LoadPalette(sScrollBgPalette, 32, 32);
        sOptions->gfxLoadState++;
        break;
    default:
        sOptions->gfxLoadState = 0;
        return TRUE;
    }
    return FALSE;
}

void CB2_InitOptionPlusMenu(void)
{
    u32 i;
    switch (gMain.state)
    {
    default:
    case 0:
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        ResetVramOamAndBgCntRegs();
        sOptions = AllocZeroed(sizeof(*sOptions));
        FreeAllSpritePalettes();
        ResetTasks();
        ResetSpriteData();
        gMain.state++;
        break;
    case 1:
        DmaClearLarge16(3, (void *)(VRAM), VRAM_SIZE, 0x1000);
        DmaClear32(3, OAM, OAM_SIZE);
        DmaClear16(3, PLTT, PLTT_SIZE);
        ResetBgsAndClearDma3BusyFlags(0);
        ResetBgPositions();
        
        DeactivateAllTextPrinters();
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_OBJ);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG_ALL | WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_DARKEN | BLDCNT_TGT1_BG0 | BLDCNT_TGT1_BG2);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 4);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_WIN1_ON);
        
        ResetAllBgsCoordinates();
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sOptionMenuBgTemplates, NELEMS(sOptionMenuBgTemplates));
        InitWindows(sOptionMenuWinTemplates);

        sBg2TilemapBuffer = Alloc(0x800);
        memset(sBg2TilemapBuffer, 0, 0x800);
        SetBgTilemapBuffer(2, sBg2TilemapBuffer);
        ScheduleBgCopyTilemapToVram(2);

        sBg3TilemapBuffer = Alloc(0x800);
        memset(sBg3TilemapBuffer, 0, 0x800);
        SetBgTilemapBuffer(3, sBg3TilemapBuffer);
        ScheduleBgCopyTilemapToVram(3);
        gMain.state++;
        break;
    case 2:
        ResetPaletteFade();
        ScanlineEffect_Stop();
        gMain.state++;
        sOptions->gfxLoadState = 0;
        break;
    case 3:
        if (OptionsMenu_LoadGraphics() == TRUE)
        {
            gMain.state++;
            LoadBgTiles(1, GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->tiles, 0x120, 0x1A2);
        }
        break;
    case 4:
        LoadPalette(sOptionMenuBg_Pal, 0, sizeof(sOptionMenuBg_Pal));
        LoadPalette(GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->pal, 0x70, 0x20);
        gMain.state++;
        break;
    case 5:
        LoadPalette(sOptionMenuText_Pal, 16, sizeof(sOptionMenuText_Pal));
        gMain.state++;
        break;
    case 6:
        sOptions->sel_visuals[MENUITEM_VISUALS_TEXTSPEED]     = gSaveBlock2Ptr->optionsTextSpeed;
        sOptions->sel_visuals[MENUITEM_VISUALS_FRAMETYPE]     = gSaveBlock2Ptr->optionsWindowFrameType;
        sOptions->sel_visuals[MENUITEM_VISUALS_FONT]          = gSaveBlock2Ptr->optionsCurrentFont;
        sOptions->sel_visuals[MENUITEM_VISUALS_UNIQUE_COLORS] = gSaveBlock2Ptr->optionsUniqueColors;
        sOptions->sel_visuals[MENUITEM_VISUALS_ANIMATIONS]    = gSaveBlock2Ptr->optionsMonAnimations;

        sOptions->sel_battle[MENUITEM_BATTLE_BATTLESCENE]   = gSaveBlock2Ptr->optionsBattleSceneOff;
        sOptions->sel_battle[MENUITEM_BATTLE_BATTLESTYLE]   = gSaveBlock2Ptr->optionsBattleStyle;
        sOptions->sel_battle[MENUITEM_BATTLE_HP_BAR]        = gSaveBlock2Ptr->optionsHpBarSpeed;
        sOptions->sel_battle[MENUITEM_BATTLE_EXP_BAR]       = gSaveBlock2Ptr->optionsExpBarSpeed;
        sOptions->sel_battle[MENUITEM_BATTLE_ANIM_SPEED]    = gSaveBlock2Ptr->optionsAnimSpeed;
        sOptions->sel_battle[MENUITEM_BATTLE_IV_VIEW]       = gSaveBlock2Ptr->optionsSummaryIvView;
        sOptions->sel_battle[MENUITEM_BATTLE_EFFECTIVENESS] = gSaveBlock2Ptr->optionsEffectiveness;
        sOptions->sel_battle[MENUITEM_BATTLE_SHOW_TYPES]    = gSaveBlock2Ptr->optionsShowTypes;

        sOptions->sel_misc[MENUITEM_MISC_SOUND]        = gSaveBlock2Ptr->optionsSound;
        sOptions->sel_misc[MENUITEM_MISC_MUSIC_VOLUME] = gSaveBlock2Ptr->optionsVolumeBGM;
        sOptions->sel_misc[MENUITEM_MISC_SFX_VOLUME]   = gSaveBlock2Ptr->optionsVolumeSFX;
        sOptions->sel_misc[MENUITEM_MISC_CRIES_VOLUME] = gSaveBlock2Ptr->optionsVolumeCries;
        //sOptions->sel_misc[MENUITEM_MISC_BUTTONMODE]   = gSaveBlock2Ptr->optionsButtonMode;
        sOptions->sel_misc[MENUITEM_MISC_UNIT_SYSTEM]  = gSaveBlock2Ptr->optionsUnitSystem;
        sOptions->sel_misc[MENUITEM_MISC_MATCHCALL]    = gSaveBlock2Ptr->optionsDisableMatchCall;
        sOptions->sel_misc[MENUITEM_MISC_L_BUTTONMODE] = gSaveBlock2Ptr->optionsLButtonMode;
        sOptions->sel_misc[MENUITEM_MISC_R_BUTTONMODE] = gSaveBlock2Ptr->optionsRButtonMode;
        sOptions->sel_misc[MENUITEM_MISC_DEBUG_MODE]   = gSaveBlock2Ptr->optionsDebugMode;

        sOptions->submenu = MENU_VISUALS;

        gMain.state++;
        break;
    case 7:
        PutWindowTilemap(WIN_TOPBAR);
        DrawTopBarText();
        gMain.state++;
        break;
    case 8:
        PutWindowTilemap(WIN_DESCRIPTION);
        DrawDescriptionText();
        gMain.state++;
        break;
    case 9:
        PutWindowTilemap(WIN_OPTIONS);
        DrawOptionMenuTexts();
        gMain.state++;
        break;
    case 10:
        CreateTask(Task_OptionMenuFadeIn, 0);
        
        sOptions->arrowTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_UP, 240 / 2, 20, 110, MENUITEM_VISUALS_COUNT - 1, 110, 110, 0);

        for (i = 0; i < min(OPTIONS_ON_SCREEN, MenuItemCount()); i++)
            DrawChoices(i, i * Y_DIFF);

        HighlightOptionMenuItem();

        CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
        gMain.state++;
        break;
    case 11:
        DrawBgWindowFrames();
        gMain.state++;
        break;
    case 12:
        ShowBg(0);
        ShowBg(1);
        ShowBg(2);
        ShowBg(3);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);
        SetVBlankCallback(VBlankCB);
        SetMainCallback2(MainCB2);
        return;
    }
}

static void Task_OptionMenuFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gTasks[taskId].func = Task_OptionMenuProcessInput;
        SetGpuReg(REG_OFFSET_WIN0H, 0); // Idk man Im just trying to stop this stupid graphical bug from happening dont judge me
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_OBJ);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG_ALL | WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_DARKEN | BLDCNT_TGT1_BG0 | BLDCNT_TGT1_BG2);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 4);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_WIN1_ON | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
        ShowBg(0);
        ShowBg(1);
        ShowBg(2);
        ShowBg(3);
        HighlightOptionMenuItem();
        return;
    }
}

static void Task_OptionMenuProcessInput(u8 taskId)
{
    u8 optionsToDraw = min(OPTIONS_ON_SCREEN , MenuItemCount());
    if (JOY_NEW(A_BUTTON))
    {
        if (sOptions->menuCursor[sOptions->submenu] == MenuItemCancel())
            gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(DPAD_UP))
    {
        if (sOptions->visibleCursor[sOptions->submenu] == NUM_OPTIONS_FROM_BORDER) // don't advance visible cursor until scrolled to the bottom
        {
            if (--sOptions->menuCursor[sOptions->submenu] == 0)
                sOptions->visibleCursor[sOptions->submenu]--;
            else
                ScrollMenu(1);
        }
        else
        {
            if (--sOptions->menuCursor[sOptions->submenu] < 0) // Scroll all the way to the bottom.
            {
                sOptions->visibleCursor[sOptions->submenu] = sOptions->menuCursor[sOptions->submenu] = optionsToDraw-2;
                ScrollAll(0);
                sOptions->visibleCursor[sOptions->submenu] = optionsToDraw-1;
                sOptions->menuCursor[sOptions->submenu] = MenuItemCount() - 1;
            }
            else
            {
                sOptions->visibleCursor[sOptions->submenu]--;
            }
        }
        HighlightOptionMenuItem();
        DrawDescriptionText();
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (sOptions->visibleCursor[sOptions->submenu] == optionsToDraw-2) // don't advance visible cursor until scrolled to the bottom
        {
            if (++sOptions->menuCursor[sOptions->submenu] == MenuItemCount() - 1)
                sOptions->visibleCursor[sOptions->submenu]++;
            else
                ScrollMenu(0);
        }
        else
        {
            if (++sOptions->menuCursor[sOptions->submenu] >= MenuItemCount()-1) // Scroll all the way to the top.
            {
                sOptions->visibleCursor[sOptions->submenu] = optionsToDraw-2;
                sOptions->menuCursor[sOptions->submenu] = MenuItemCount() - optionsToDraw-1;
                ScrollAll(1);
                sOptions->visibleCursor[sOptions->submenu] = sOptions->menuCursor[sOptions->submenu] = 0;
            }
            else
            {
                sOptions->visibleCursor[sOptions->submenu]++;
            }
        }
        HighlightOptionMenuItem();
        DrawDescriptionText();
    }
    else if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        if (sOptions->submenu == MENU_VISUALS)
        {
            int cursor = sOptions->menuCursor[sOptions->submenu];
            u8 previousOption = sOptions->sel_visuals[cursor];
            if (CheckConditions(cursor))
            {
                if (sItemFunctionsVisuals[cursor].processInput != NULL)
                {
                    sOptions->sel_visuals[cursor] = sItemFunctionsVisuals[cursor].processInput(previousOption);
                    ReDrawAll();
                    DrawDescriptionText();
                }

                if (previousOption != sOptions->sel_visuals[cursor])
                    DrawChoices(cursor, sOptions->visibleCursor[sOptions->submenu] * Y_DIFF);
            }
        }
        else if (sOptions->submenu == MENU_BATTLE)
        {
            int cursor = sOptions->menuCursor[sOptions->submenu];
            u8 previousOption = sOptions->sel_battle[cursor];
            if (CheckConditions(cursor))
            {
                if (sItemFunctionsBattle[cursor].processInput != NULL)
                {
                    sOptions->sel_battle[cursor] = sItemFunctionsBattle[cursor].processInput(previousOption);
                    ReDrawAll();
                    DrawDescriptionText();
                }

                if (previousOption != sOptions->sel_battle[cursor])
                    DrawChoices(cursor, sOptions->visibleCursor[sOptions->submenu] * Y_DIFF);
            }
        }
        else if (sOptions->submenu == MENU_MISC)
        {
            int cursor = sOptions->menuCursor[sOptions->submenu];
            u8 previousOption = sOptions->sel_misc[cursor];
            if (CheckConditions(cursor))
            {
                if (sItemFunctionsMisc[cursor].processInput != NULL)
                {
                    sOptions->sel_misc[cursor] = sItemFunctionsMisc[cursor].processInput(previousOption);
                    ReDrawAll();
                    DrawDescriptionText();
                }

                if (previousOption != sOptions->sel_misc[cursor])
                    DrawChoices(cursor, sOptions->visibleCursor[sOptions->submenu] * Y_DIFF);
            }
        }
    }
    else if (JOY_NEW(R_BUTTON))
    {
        if (sOptions->submenu == MENU_MISC)
            sOptions->submenu = MENU_VISUALS;
        else
            sOptions->submenu++;

        DrawTopBarText();
        ReDrawAll();
        HighlightOptionMenuItem();
        DrawDescriptionText();
    }
    else if (JOY_NEW(L_BUTTON))
    {
        if (sOptions->submenu == MENU_VISUALS)
            sOptions->submenu = MENU_MISC;
        else
            sOptions->submenu--;
        
        DrawTopBarText();
        ReDrawAll();
        HighlightOptionMenuItem();
        DrawDescriptionText();
    }
}

static void Task_OptionMenuSave(u8 taskId)
{
    gSaveBlock2Ptr->optionsTextSpeed        = sOptions->sel_visuals[MENUITEM_VISUALS_TEXTSPEED];
    gSaveBlock2Ptr->optionsCurrentFont      = sOptions->sel_visuals[MENUITEM_VISUALS_FONT];
    gSaveBlock2Ptr->optionsWindowFrameType  = sOptions->sel_visuals[MENUITEM_VISUALS_FRAMETYPE];
    gSaveBlock2Ptr->optionsUniqueColors     = sOptions->sel_visuals[MENUITEM_VISUALS_UNIQUE_COLORS];
    gSaveBlock2Ptr->optionsMonAnimations    = sOptions->sel_visuals[MENUITEM_VISUALS_ANIMATIONS];

    gSaveBlock2Ptr->optionsBattleSceneOff   = sOptions->sel_battle[MENUITEM_BATTLE_BATTLESCENE];
    gSaveBlock2Ptr->optionsBattleStyle      = sOptions->sel_battle[MENUITEM_BATTLE_BATTLESTYLE];
    gSaveBlock2Ptr->optionsHpBarSpeed       = sOptions->sel_battle[MENUITEM_BATTLE_HP_BAR];
    gSaveBlock2Ptr->optionsExpBarSpeed      = sOptions->sel_battle[MENUITEM_BATTLE_EXP_BAR];
    gSaveBlock2Ptr->optionsAnimSpeed        = sOptions->sel_battle[MENUITEM_BATTLE_ANIM_SPEED];
    gSaveBlock2Ptr->optionsSummaryIvView    = sOptions->sel_battle[MENUITEM_BATTLE_IV_VIEW];
    gSaveBlock2Ptr->optionsEffectiveness    = sOptions->sel_battle[MENUITEM_BATTLE_EFFECTIVENESS];
    gSaveBlock2Ptr->optionsShowTypes        = sOptions->sel_battle[MENUITEM_BATTLE_SHOW_TYPES];

    gSaveBlock2Ptr->optionsSound            = sOptions->sel_misc[MENUITEM_MISC_SOUND];
    gSaveBlock2Ptr->optionsVolumeBGM        = sOptions->sel_misc[MENUITEM_MISC_MUSIC_VOLUME];
    gSaveBlock2Ptr->optionsVolumeSFX        = sOptions->sel_misc[MENUITEM_MISC_SFX_VOLUME];
    gSaveBlock2Ptr->optionsVolumeCries      = sOptions->sel_misc[MENUITEM_MISC_CRIES_VOLUME];
    //gSaveBlock2Ptr->optionsButtonMode       = sOptions->sel_misc[MENUITEM_MISC_BUTTONMODE];
    gSaveBlock2Ptr->optionsUnitSystem       = sOptions->sel_misc[MENUITEM_MISC_UNIT_SYSTEM];
    gSaveBlock2Ptr->optionsDisableMatchCall = sOptions->sel_misc[MENUITEM_MISC_MATCHCALL];
    gSaveBlock2Ptr->optionsLButtonMode      = sOptions->sel_misc[MENUITEM_MISC_L_BUTTONMODE];
    gSaveBlock2Ptr->optionsRButtonMode      = sOptions->sel_misc[MENUITEM_MISC_R_BUTTONMODE];
    gSaveBlock2Ptr->optionsDebugMode        = sOptions->sel_misc[MENUITEM_MISC_DEBUG_MODE];

    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
    gTasks[taskId].func = Task_OptionMenuFadeOut;
}

#define try_free(ptr) ({        \
    void ** ptr__ = (void **)&(ptr);   \
    if (*ptr__ != NULL)                \
        Free(*ptr__);                  \
})

static void Task_OptionMenuFadeOut(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        DestroyTask(taskId);
        FreeAllWindowBuffers();
        FREE_AND_SET_NULL(sOptions);
        try_free(sBg2TilemapBuffer);
        try_free(sBg3TilemapBuffer);
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, 0);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 4);
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        HideBg(2);
        HideBg(3);
        SetMainCallback2(gMain.savedCallback);
    }
}

static void ScrollMenu(int direction)
{
    int menuItem, pos;
    u8 optionsToDraw = min(OPTIONS_ON_SCREEN, MenuItemCount());

    if (direction == 0) // scroll down
        menuItem = sOptions->menuCursor[sOptions->submenu] + NUM_OPTIONS_FROM_BORDER, pos = optionsToDraw - 1;
    else
        menuItem = sOptions->menuCursor[sOptions->submenu] - NUM_OPTIONS_FROM_BORDER, pos = 0;

    // Hide one
    ScrollWindow(WIN_OPTIONS, direction, Y_DIFF, PIXEL_FILL(0));
    // Show one
    FillWindowPixelRect(WIN_OPTIONS, PIXEL_FILL(0), 0, Y_DIFF * pos, 26 * 8, Y_DIFF);
    // Print
    DrawChoices(menuItem, pos * Y_DIFF);
    DrawLeftSideOptionText(menuItem, (pos * Y_DIFF) + 1);
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
}
static void ScrollAll(int direction) // to bottom or top
{
    int i, y, menuItem, pos;
    int scrollCount;
    u8 optionsToDraw = min(OPTIONS_ON_SCREEN, MenuItemCount());

    scrollCount = MenuItemCount() - optionsToDraw;

    // Move items up/down
    ScrollWindow(WIN_OPTIONS, direction, Y_DIFF * scrollCount, PIXEL_FILL(1));

    // Clear moved items
    if (direction == 0)
    {
        y = optionsToDraw - scrollCount;
        if (y < 0)
            y = optionsToDraw;
        y *= Y_DIFF;
    }
    else
    {
        y = 0;
    }

    FillWindowPixelRect(WIN_OPTIONS, PIXEL_FILL(0), 0, y, 26 * 8, Y_DIFF * scrollCount);
    // Print new texts
    for (i = 0; i < scrollCount; i++)
    {
        if (direction == 0) // From top to bottom
            menuItem = MenuItemCount() - 1 - i, pos = optionsToDraw - 1 - i;
        else // From bottom to top
            menuItem = i, pos = i;
        DrawChoices(menuItem, pos * Y_DIFF);
        DrawLeftSideOptionText(menuItem, (pos * Y_DIFF) + 1);
    }
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
}

// Process Input functions ****GENERIC****
static int GetMiddleX(const u8 *txt1, const u8 *txt2, const u8 *txt3)
{
    int xMid;
    int widthLeft = GetStringWidth(1, txt1, 0);
    int widthMid = GetStringWidth(1, txt2, 0);
    int widthRight = GetStringWidth(1, txt3, 0);

    widthMid -= (198 - 104);
    xMid = (widthLeft - widthMid - widthRight) / 2 + 104;
    return xMid;
}

static int XOptions_ProcessInput(int x, int selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (++selection > (x - 1))
            selection = 0;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (--selection < 0)
            selection = (x - 1);
    }
    return selection;
}

static int ProcessInput_Options_Two(int selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
        selection ^= 1;

    return selection;
}

/*static int ProcessInput_Options_Three(int selection)
{
    return XOptions_ProcessInput(3, selection);
}*/

static int ProcessInput_Options_Four(int selection)
{
    return XOptions_ProcessInput(4, selection);
}

static int ProcessInput_Options_Eleven(int selection)
{
    return XOptions_ProcessInput(11, selection);
}

// Process Input functions ****SPECIFIC****
static int UNUSED ProcessInput_Sound(int selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        SetPokemonCryStereo(selection);
    }

    return selection;
}

static int ProcessInput_FrameType(int selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < WINDOW_FRAMES_COUNT - 1)
            selection++;
        else
            selection = 0;

        LoadBgTiles(1, GetWindowFrameTilesPal(selection)->tiles, 0x120, 0x1A2);
        LoadPalette(GetWindowFrameTilesPal(selection)->pal, 0x70, 0x20);
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = WINDOW_FRAMES_COUNT - 1;

        LoadBgTiles(1, GetWindowFrameTilesPal(selection)->tiles, 0x120, 0x1A2);
        LoadPalette(GetWindowFrameTilesPal(selection)->pal, 0x70, 0x20);
    }
    return selection;
}

static int ProcessInput_MusicVolume(int selection)
{
    bool8 refreshMus = (selection == 0);

    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < 10)
            selection++;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
    }

    gSaveBlock2Ptr->optionsVolumeBGM = selection;

    if (refreshMus || selection == 0)
        FadeOutAndPlayNewMapMusic(GetCurrentMapMusic(), 1);
    m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, (256 * selection / 10));

    return selection;
}

static int ProcessInput_SoundVolume(int selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < 10)
            selection++;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
    }

    return selection;
}

// Draw Choices functions ****GENERIC****
static void DrawOptionMenuChoice(const u8 *text, u8 x, u8 y, u8 style, bool8 active)
{
    bool8 choosen = FALSE;
    if (style != 0)
        choosen = TRUE;

    DrawRightSideChoiceText(text, x, y+1, choosen, active);
}

static void DrawChoices_Options_Four(const u8 *const *const strings, int selection, int y, bool8 active)
{
    static const u8 choiceOrders[][3] =
    {
        {0, 1, 2},
        {0, 1, 2},
        {1, 2, 3},
        {1, 2, 3},
    };
    u8 styles[4] = {0};
    int xMid;
    const u8 *order = choiceOrders[selection];

    styles[selection] = 1;
    xMid = GetMiddleX(strings[order[0]], strings[order[1]], strings[order[2]]);

    DrawOptionMenuChoice(strings[order[0]], 104, y, styles[order[0]], active);
    DrawOptionMenuChoice(strings[order[1]], xMid, y, styles[order[1]], active);
    DrawOptionMenuChoice(strings[order[2]], GetStringRightAlignXOffset(1, strings[order[2]], 198), y, styles[order[2]], active);
}

static void ReDrawAll(void)
{
    u8 menuItem = sOptions->menuCursor[sOptions->submenu] - sOptions->visibleCursor[sOptions->submenu];
    u8 i;
    u8 optionsToDraw = min(OPTIONS_ON_SCREEN, MenuItemCount());

    if (MenuItemCount() <= OPTIONS_ON_SCREEN) // Draw or delete the scrolling arrows based on options in the menu
    {
        if (sOptions->arrowTaskId != TASK_NONE)
        {
            RemoveScrollIndicatorArrowPair(sOptions->arrowTaskId);
            sOptions->arrowTaskId = TASK_NONE;
        }
    }
    else
    {
        if (sOptions->arrowTaskId == TASK_NONE)
        {
            sOptions->arrowTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_UP, 240 / 2, 20, 110, MenuItemCount() - 1, 110, 110, 0);
        }

    }

    FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(0));
    for (i = 0; i < optionsToDraw; i++)
    {
        DrawChoices(menuItem+i, i * Y_DIFF);
        DrawLeftSideOptionText(menuItem+i, (i * Y_DIFF) + 1);
    }
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
}

static const u8 sText_On[] = _("ON");
static const u8 sText_Off[] = _("OFF");

// Process Input functions ****SPECIFIC****
static const u8 sText_Faster[] = _("FASTER");
static const u8 sText_Instant[] = _("INSTANT");
static const u8 *const sTextSpeedStrings[] = {gText_TextSpeedSlow, gText_TextSpeedMid, gText_TextSpeedFast, sText_Faster};
static void DrawChoices_TextSpeed(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_VISUALS_TEXTSPEED);
    DrawChoices_Options_Four(sTextSpeedStrings, selection, y, active);
}

static void DrawChoices_BattleScene(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_BATTLE_BATTLESCENE);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(sText_On, 104, y, styles[0], active);
    DrawOptionMenuChoice(sText_Off, GetStringRightAlignXOffset(FONT_NORMAL, sText_Off, 198), y, styles[1], active);
}

static void DrawChoices_BattleStyle(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_BATTLE_BATTLESTYLE);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_BattleStyleShift, 104, y, styles[0], active);
    DrawOptionMenuChoice(gText_BattleStyleSet, GetStringRightAlignXOffset(FONT_NORMAL, gText_BattleStyleSet, 198), y, styles[1], active);
}

static void DrawChoices_Sound(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_MISC_SOUND);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_SoundMono, 104, y, styles[0], active);
    DrawOptionMenuChoice(gText_SoundStereo, GetStringRightAlignXOffset(FONT_NORMAL, gText_SoundStereo, 198), y, styles[1], active);
}

/*
static void DrawChoices_ButtonMode(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_MISC_BUTTONMODE);
    u8 styles[3] = {0};
    int xMid = GetMiddleX(gText_ButtonTypeNormal, gText_ButtonTypeLR, gText_ButtonTypeLEqualsA);
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_ButtonTypeNormal, 104, y, styles[0], active);
    DrawOptionMenuChoice(gText_ButtonTypeLR, xMid, y, styles[1], active);
    DrawOptionMenuChoice(gText_ButtonTypeLEqualsA, GetStringRightAlignXOffset(1, gText_ButtonTypeLEqualsA, 198), y, styles[2], active);
}
*/

static const u8 sText_Normal[] = _("NORMAL");
static void DrawChoices_BarSpeed(int selection, int y) //HP and EXP
{
    bool8 active = CheckConditions(MENUITEM_BATTLE_EXP_BAR);

    if (selection == 0)
         DrawOptionMenuChoice(sText_Normal, 104, y, 1, active);
    else if (selection < 10)
    {
        u8 textPlus[] = _("+1{0x77}{0x77}{0x77}{0x77}{0x77}"); // 0x77 is to clear INSTANT text
        textPlus[1] = CHAR_0 + selection;
        DrawOptionMenuChoice(textPlus, 104, y, 1, active);
    }
    else
        DrawOptionMenuChoice(sText_Instant, 104, y, 1, active);
}

static const u8 sText_ZeroPercent[] = _("0%{0x77}{0x77}");
static const u8 sText_HundredPercent[] = _("100%");

static void DrawChoices_MusicVolume(int selection, int y) //HP and EXP
{
    bool8 active = CheckConditions(MENUITEM_MISC_MUSIC_VOLUME);

    if (selection == 0)
        DrawOptionMenuChoice(sText_ZeroPercent, 104, y, 1, active);
    else if (selection < 10)
    {
        u8 textPlus[] = _("10%{0x77}{0x77}");
        textPlus[0] = CHAR_0 + selection;
        DrawOptionMenuChoice(textPlus, 104, y, 1, active);
    }
    else
        DrawOptionMenuChoice(sText_HundredPercent, 104, y, 1, active);
}

static void DrawChoices_SFXVolume(int selection, int y) //HP and EXP
{
    bool8 active = CheckConditions(MENUITEM_MISC_SFX_VOLUME);

    if (selection == 0)
    {
        DrawOptionMenuChoice(sText_ZeroPercent, 104, y, 1, active);
    }
    else if (selection < 10)
    {
        u8 textPlus[] = _("10%{0x77}{0x77}");
        textPlus[0] = CHAR_0 + selection;
        DrawOptionMenuChoice(textPlus, 104, y, 1, active);
    }
    else
    {
        DrawOptionMenuChoice(sText_HundredPercent, 104, y, 1, active);
    }
}

static void DrawChoices_CriesVolume(int selection, int y) //HP and EXP
{
    bool8 active = CheckConditions(MENUITEM_MISC_CRIES_VOLUME);

    if (selection == 0)
    {
        DrawOptionMenuChoice(sText_ZeroPercent, 104, y, 1, active);
    }
    else if (selection < 10)
    {
        u8 textPlus[] = _("10%{0x77}{0x77}");
        textPlus[0] = CHAR_0 + selection;
        DrawOptionMenuChoice(textPlus, 104, y, 1, active);
    }
    else
    {
        DrawOptionMenuChoice(sText_HundredPercent, 104, y, 1, active);
    }
}

static void DrawChoices_UnitSystem(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_MISC_UNIT_SYSTEM);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(gText_UnitSystemImperial, 104, y, styles[0], active);
    DrawOptionMenuChoice(gText_UnitSystemMetric, GetStringRightAlignXOffset(1, gText_UnitSystemMetric, 198), y, styles[1], active);
}

static void DrawChoices_FrameType(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_VISUALS_FRAMETYPE);
    u8 text[16];
    u8 n = selection + 1;
    u16 i;

    for (i = 0; gText_FrameTypeNumber[i] != EOS && i <= 5; i++)
        text[i] = gText_FrameTypeNumber[i];

    // Convert a number to decimal string
    if (n / 10 != 0)
    {
        text[i] = n / 10 + CHAR_0;
        i++;
        text[i] = n % 10 + CHAR_0;
        i++;
    }
    else
    {
        text[i] = n % 10 + CHAR_0;
        i++;
        text[i] = 0x77;
        i++;
    }

    text[i] = EOS;

    DrawOptionMenuChoice(gText_FrameType, 104, y, 0, active);
    DrawOptionMenuChoice(text, 128, y, 1, active);
}

static const u8 sText_FontEmerald[] = _("EMERALD");    //tx_optionsPlus
static const u8 sText_FontFireRed[] = _("FRLG");        //tx_optionsPlus

static void DrawChoices_Font(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_VISUALS_FONT);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(sText_FontEmerald, 104, y, styles[0], active);
    DrawOptionMenuChoice(sText_FontFireRed, GetStringRightAlignXOffset(1, sText_FontFireRed, 198), y, styles[1], active);
}

static void DrawChoices_MatchCall(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_MISC_MATCHCALL);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(sText_On, 104, y, styles[0], active);
    DrawOptionMenuChoice(sText_Off, GetStringRightAlignXOffset(1, sText_Off, 198), y, styles[1], active);
}

static void DrawChoices_DebugMode(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_MISC_DEBUG_MODE);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(sText_On, 104, y, styles[0], active);
    DrawOptionMenuChoice(sText_Off, GetStringRightAlignXOffset(1, sText_Off, 198), y, styles[1], active);
}

static const u8 sText_AnimSpeed1[] = _("1x");
static const u8 sText_AnimSpeed2[] = _("2x");
static const u8 sText_AnimSpeed3[] = _("3x");
static const u8 sText_AnimSpeed4[] = _("4x");
static const u8 *const sAnimSpeedStrings[] = {sText_AnimSpeed1, sText_AnimSpeed2, sText_AnimSpeed3, sText_AnimSpeed4};

static void DrawChoices_AnimSpeed(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_BATTLE_ANIM_SPEED);
    DrawChoices_Options_Four(sAnimSpeedStrings, selection, y, active);
}

static void DrawChoices_UniqueColors(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_VISUALS_UNIQUE_COLORS);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(sText_On, 104, y, styles[0], active);
    DrawOptionMenuChoice(sText_Off, GetStringRightAlignXOffset(1, sText_Off, 198), y, styles[1], active);
}

static void DrawChoices_IvView(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_BATTLE_IV_VIEW);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(sText_On, 104, y, styles[0], active);
    DrawOptionMenuChoice(sText_Off, GetStringRightAlignXOffset(1, sText_Off, 198), y, styles[1], active);
}

static void DrawChoices_Effectiveness(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_BATTLE_EFFECTIVENESS);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(sText_On, 104, y, styles[0], active);
    DrawOptionMenuChoice(sText_Off, GetStringRightAlignXOffset(1, sText_Off, 198), y, styles[1], active);
}

static void DrawChoices_ShowTypes(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_BATTLE_SHOW_TYPES);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(sText_On, 104, y, styles[0], active);
    DrawOptionMenuChoice(sText_Off, GetStringRightAlignXOffset(1, sText_Off, 198), y, styles[1], active);
}

static void DrawChoices_MonAnimations(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_VISUALS_ANIMATIONS);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(sText_On, 104, y, styles[0], active);
    DrawOptionMenuChoice(sText_Off, GetStringRightAlignXOffset(1, sText_Off, 198), y, styles[1], active);
}

static const u8 sText_None[] = _("NONE");
static const u8 sText_LEqualsA[] = _("L=A TURBO");
static const u8 sText_AutoRun[] = _("AUTO-RUN");
static const u8 sText_Register[] = _("REGISTER");
static const u8 sText_DexNav[] = _("DEXNAV");
static const u8 sText_BikeSwitch[] = _("BIKE SWITCH");
static const u8 sText_Placeholder[] = _("WIP");

static void DrawChoices_LButtonMode(int selection, int y) //HP and EXP
{
    bool8 active = CheckConditions(MENUITEM_MISC_L_BUTTONMODE);

    switch (selection)
    {
    default:
    case OPTIONS_L_BUTTON_MODE_NONE:
        DrawOptionMenuChoice(sText_None, 104, y, 1, active);
        break;
    case OPTIONS_L_BUTTON_MODE_L_EQUALS_A:
        DrawOptionMenuChoice(sText_LEqualsA, 104, y, 1, active);
        break;
    case OPTIONS_L_BUTTON_MODE_AUTO_RUN:
        DrawOptionMenuChoice(sText_AutoRun, 104, y, 1, active);
        break;
    case OPTIONS_L_BUTTON_MODE_REGISTER:
        DrawOptionMenuChoice(sText_Register, 104, y, 1, active);
        break;
    }
}

static void DrawChoices_RButtonMode(int selection, int y) //HP and EXP
{
    bool8 active = CheckConditions(MENUITEM_MISC_R_BUTTONMODE);

    switch (selection)
    {
    default:
    case OPTIONS_R_BUTTON_MODE_NONE:
        DrawOptionMenuChoice(sText_None, 104, y, 1, active);
        break;
    case OPTIONS_R_BUTTON_MODE_DEXNAV_SEARCH:
        DrawOptionMenuChoice(sText_DexNav, 104, y, 1, active);
        break;
    case OPTIONS_R_BUTTON_MODE_BIKE_SWITCH:
        DrawOptionMenuChoice(sText_BikeSwitch, 104, y, 1, active);
        break;
    case OPTIONS_R_BUTTON_MODE_REGISTER:
        DrawOptionMenuChoice(sText_Register, 104, y, 1, active);
        break;
    }
}

// Background tilemap
#define TILE_TOP_CORNER_L 0x1A2 // 418
#define TILE_TOP_EDGE     0x1A3 // 419
#define TILE_TOP_CORNER_R 0x1A4 // 420
#define TILE_LEFT_EDGE    0x1A5 // 421
#define TILE_RIGHT_EDGE   0x1A7 // 423
#define TILE_BOT_CORNER_L 0x1A8 // 424
#define TILE_BOT_EDGE     0x1A9 // 425
#define TILE_BOT_CORNER_R 0x1AA // 426

static void DrawBgWindowFrames(void)
{
    //                     bg, tile,              x, y, width, height, palNum
    // Option Texts window
    //FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1,  2,  1,  1,  7);
    //FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2,  2, 26,  1,  7);
    //FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28,  2,  1,  1,  7);
    //FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1,  3,  1, 16,  7);
    //FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28,  3,  1, 16,  7);
    //FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1, 13,  1,  1,  7);
    //FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2, 13, 26,  1,  7);
    //FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28, 13,  1,  1,  7);

    // Description window
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1, 14,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2, 14, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28, 14,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1, 15,  1,  4,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28, 15,  1,  4,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1, 19,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2, 19, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28, 19,  1,  1,  7);

    CopyBgTilemapBufferToVram(1);
}
