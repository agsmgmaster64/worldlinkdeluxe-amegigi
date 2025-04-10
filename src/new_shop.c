#include "global.h"
#include "bg.h"
#include "battle_main.h"
#include "coins.h"
#include "data.h"
#include "decompress.h"
#include "decoration.h"
#include "decoration_inventory.h"
#include "event_object_movement.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "frontier_util.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "item_icon.h"
#include "item_menu.h"
#include "list_menu.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "money.h"
#include "move.h"
#include "overworld.h"
#include "outfit_menu.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "script.h"
#include "shop.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "strings.h"
#include "text_window.h"
#include "tv.h"
#include "grid_menu.h"
#include "event_data.h"
#include "move.h"
#include "constants/decorations.h"
#include "constants/items.h"
#include "constants/metatile_behaviors.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/event_objects.h"

#ifdef MUDSKIP_SHOP_UI
// #include "outfit_menu.h" // uncomment this out if you have my outfit system
#include "new_shop.h"

#define GFXTAG_CURSOR 0x1300
#define PALTAG_CURSOR 0x1300

#define GFXTAG_ITEM 0x1000
#define PALTAG_ITEM 0x2000

#define CURSOR_START_X 100 + 32
#define CURSOR_START_Y 4 + 32

#define MAX_ITEMS_SHOWN sShopData->gridItems->numItems

enum {
    WIN_BUY_SELL_QUIT,
    WIN_BUY_QUIT,
};

enum {
    WIN_MONEY,
    WIN_MULTI,
    WIN_ITEM_DESCRIPTION,
    WIN_QUANTITY_PRICE,
    WIN_MUGSHOT,
};

enum {
    COLORID_NORMAL,      // Money amount
    COLORID_BLACK,       // Item descriptions, quantity in bag, and quantity/price
};

enum {
    MART_TYPE_NORMAL,
    MART_TYPE_VARIABLE,
    MART_TYPE_BUY_ONLY,
    MART_TYPE_BUY_VARIABLE,
    MART_TYPE_CASINO,
    MART_TYPE_BP_ITEMS,
    MART_TYPE_MOVES,
    MART_TYPE_BP_MOVES,
    MART_TYPE_DECOR,
    MART_TYPE_DECOR2,
    #ifdef MUDSKIP_OUTFIT_SYSTEM
    MART_TYPE_OUTFIT,
    #endif // MUDSKIP_OUTFIT_SYSTEM
    MART_TYPE_SELL_ONLY,
};

// seller id
enum
{
    SELLER_NONE,
    SELLER_JERRY, // OBJ_EVENT_GFX_MART_EMPLOYEE
    SELLER_JENNIE, // OBJ_EVENT_GFX_WOMAN_3
    SELLER_NITORI, // OBJ_EVENT_GFX_NITORI
    SELLER_COUNT,
};

enum Seller_MessageIds
{
    SELLER_MSG_RETURN_TO_FIELD = 0,
    SELLER_MSG_BUY_PROMPT,
    SELLER_MSG_BUY_COIN_PROMPT,
    SELLER_MSG_BUY_BP_PROMPT,
    SELLER_MSG_BUY_PROMPT_PLURAL,
    SELLER_MSG_BUY_CONFIRM,
    SELLER_MSG_BUY_COIN_CONFIRM,
    SELLER_MSG_BUY_BP_CONFIRM,
    SELLER_MSG_BUY_SUCCESS,
    SELLER_MSG_BUY_FAIL_NO_SPACE,
    SELLER_MSG_BUY_FAIL_NO_MONEY,
    SELLER_MSG_BUY_FAIL_NO_COINS,
    SELLER_MSG_BUY_FAIL_NO_BP,
    SELLER_MSG_BUY_FAIL_SOLD_OUT,
    SELLER_MGS_BUY_PREMIER_BONUS,
    SELLER_MSG_BUY_PREMIER_BONUS_PLURAL,
    #ifdef MUDSKIP_OUTFIT_SYSTEM
    SELLER_MSG_BUY_OUTFIT_PROMPT,
    #endif // MUDSKIP_OUTFIT_SYSTEM
    SELLER_MSG_COUNT,
};

enum Seller_GraphicsIds
{
    SELLER_GFX_MUGSHOT_GFX = 0,
    SELLER_GFX_MUGSHOT_PAL,

    SELLER_GFX_MENU_GFX,
    SELLER_GFX_MENU_PAL,
    SELLER_GFX_MENU_MAP,

    SELLER_GFX_SCROLL_GFX,
    SELLER_GFX_SCROLL_PAL,
    SELLER_GFX_SCROLL_MAP,

    SELLER_GFX_CURSOR_GFX,
    SELLER_GFX_CURSOR_PAL,
};

struct MartInfo
{
    void (*callback)(void);
    const struct MenuAction *menuActions;
    const u16 *itemSource;
    u16 *itemList;
    u16 *itemPriceList;
    u16 itemCount;
    u8 windowId;
    u8 martType;
    u16 sellerId;
};

struct ShopData
{
    u16 tilemapBuffers[2][0x400];
    u32 totalCost;
    u16 maxQuantity;
    u8 gfxLoadState;
    u8 cursorSpriteId;
    u16 currentItemId;
    struct GridMenu *gridItems;
};

struct Seller
{
    // Add more id "param" on the union here
    union {
        u16 gfxId;
    } id;
    const u8 *mugshotGfx;
    const u16 *mugshotPal;

    u32 menuTileOffset;
    const u32 *menuGfx;
    const u32 *menuCoinGfx;
    const u32 *menuBpGfx;
    const u32 *menuPal;
    const u32 *menuMap;

    const u32 *scrollGfx;
    const u32 *scrollPal;
    const u32 *scrollMap;

    const u16 *cursorGfx;
    const u32 *cursorPal;

    const u8 *message[SELLER_MSG_COUNT];
};

static EWRAM_DATA struct MartInfo sMartInfo = {0};
static EWRAM_DATA struct ShopData *sShopData = NULL;
static EWRAM_DATA u8 sPurchaseHistoryId = 0;

const u8 sText_SoldOut[] = _("SOLD OUT");
const u8 sText_Price[] = _("PRICE");
const u8 sText_InBag[] = _("IN BAG");
const u8 sText_ReturnToField[] = _("Return to Field");

const u8 sText_ThatItemIsSoldOut[] = _("I'm sorry, but\nthat item is\nsold out.");
const u8 sText_Var1CertainlyHowMany[] = _("{STR_VAR_1}?\nCertainly. How\nmany?");
const u8 sText_Var1AndYouWantedVar2[] = _("So you wanted\n{STR_VAR_2} {STR_VAR_1}?\nThat'll be ¥{STR_VAR_3}.");
const u8 sText_Var1AndYouWantedVar2Coins[] = _("So you wanted\n{STR_VAR_2} {STR_VAR_1}?\nThat'll be {STR_VAR_3} Coins.");
const u8 sText_Var1AndYouWantedVar2BP[] = _("So you wanted\n{STR_VAR_2} {STR_VAR_1}?\nThat'll be {STR_VAR_3} BP.");
const u8 sText_YouWantedVar1ThatllBeVar2[] = _("You wanted the\n{STR_VAR_1}?\nThat'll be ¥{STR_VAR_2}.");
const u8 sText_YouWantedVar1ThatllBeVar2Coins[] = _("You wanted the\n{STR_VAR_1}?\nThat'll be {STR_VAR_2} Coins.");
const u8 sText_YouWantedVar1ThatllBeVar2BP[] = _("You wanted the\n{STR_VAR_1}?\nThat'll be {STR_VAR_2} BP.");
const u8 sText_YouWantedVar1OutfitThatllBeVar2[] = _("You wanted that {STR_VAR_1} Outfit?\nThat'll be ¥{STR_VAR_2}. Will that be okay?");
const u8 sText_HereYouGoThankYou[] = _("Here you go!\nThank you very much.");
const u8 sText_ThankYouIllSendItHome[] = _("Thank you!\nI'll send it to\nyour home PC.");
const u8 sText_ThanksIllSendItHome[] = _("Thanks!\nI'll send it to your\nPC at home.");
const u8 sText_YouDontHaveMoney[] = _("You don't have\nenough money.");
const u8 sText_YouDontHaveCoins[] = _("You don't have\nenough Coins.{PAUSE_UNTIL_PRESS}");
const u8 sText_YouDontHaveBP[] = _("You don't have\nenough Battle Points.{PAUSE_UNTIL_PRESS}");
const u8 sText_NoMoreRoomForThis[] = _("You have no more\nroom for this\nitem.");
const u8 sText_SpaceForVar1Full[] = _("The space for\n{STR_VAR_1}\nis full.");
const u8 sText_ThrowInPremierBall[] = _("I'll throw in\na Premeir Orb,\ntoo.");
const u8 sText_ThrowInPremierBalls[] = _("I'll throw in\n{STR_VAR_1} Premier Orbs,\ntoo.");

const u32 sNewShopMenu_DefaultMenuGfx[] = INCBIN_U32("graphics/new_shop/menu.4bpp.lz");
const u32 sNewShopMenu_DefaultMenuCoinGfx[] = INCBIN_U32("graphics/new_shop/menu_coin.4bpp.lz");
const u32 sNewShopMenu_DefaultMenuBpGfx[] = INCBIN_U32("graphics/new_shop/menu_coin.4bpp.lz");
const u32 sNewShopMenu_DefaultMenuPal[] = INCBIN_U32("graphics/new_shop/menu.gbapal.lz");
const u32 sNewShopMenu_DefaultMenuTilemap[] = INCBIN_U32("graphics/new_shop/menu.bin.lz");
const u32 sNewShopMenu_DefaultScrollGfx[] = INCBIN_U32("graphics/new_shop/scroll.4bpp.lz");
const u32 sNewShopMenu_DefaultScrollTilemap[] = INCBIN_U32("graphics/new_shop/scroll.bin.lz");
const u16 sNewShopMenu_DefaultCursorGfx[] = INCBIN_U16("graphics/new_shop/cursor.4bpp"); // uses the menu palette

const u8 sNewShopMenu_SellerMugshotGfx_Jerry[] = INCBIN_U8("graphics/new_shop/sellers/jerry/mugshot.4bpp");
const u16 sNewShopMenu_SellerMugshotPal_Jerry[] = INCBIN_U16("graphics/new_shop/sellers/jerry/mugshot.gbapal");
const u32 sNewShopMenu_SellerMenuGfx_Jerry[] = INCBIN_U32("graphics/new_shop/sellers/jerry/menu.4bpp.lz");
const u32 sNewShopMenu_SellerMenuCoinGfx_Jerry[] = INCBIN_U32("graphics/new_shop/sellers/jerry/menu_coin.4bpp.lz");
const u32 sNewShopMenu_SellerMenuPal_Jerry[] = INCBIN_U32("graphics/new_shop/sellers/jerry/menu.gbapal.lz");
const u32 sNewShopMenu_SellerMenuMap_Jerry[] = INCBIN_U32("graphics/new_shop/sellers/jerry/menu.bin.lz");
const u32 sNewShopMenu_SellerScrollGfx_Jerry[] = INCBIN_U32("graphics/new_shop/sellers/jerry/scroll.4bpp.lz");
const u32 sNewShopMenu_SellerScrollPal_Jerry[] = INCBIN_U32("graphics/new_shop/sellers/jerry/scroll.gbapal.lz");
const u32 sNewShopMenu_SellerScrollMap_Jerry[] = INCBIN_U32("graphics/new_shop/sellers/jerry/scroll.bin.lz");
const u16 sNewShopMenu_SellerCursorGfx_Jerry[] = INCBIN_U16("graphics/new_shop/sellers/jerry/cursor.4bpp");
const u32 sNewShopMenu_SellerCursorPal_Jerry[] = INCBIN_U32("graphics/new_shop/sellers/jerry/cursor.gbapal.lz");

const u8 sNewShopMenu_SellerMugshotGfx_Jennie[] = INCBIN_U8("graphics/new_shop/sellers/jennie/mugshot.4bpp");
const u16 sNewShopMenu_SellerMugshotPal_Jennie[] = INCBIN_U16("graphics/new_shop/sellers/jennie/mugshot.gbapal");
const u32 sNewShopMenu_SellerMenuGfx_Jennie[] = INCBIN_U32("graphics/new_shop/sellers/jennie/menu.4bpp.lz");
const u32 sNewShopMenu_SellerMenuCoinGfx_Jennie[] = INCBIN_U32("graphics/new_shop/sellers/jennie/menu_coin.4bpp.lz");
const u32 sNewShopMenu_SellerMenuPal_Jennie[] = INCBIN_U32("graphics/new_shop/sellers/jennie/menu.gbapal.lz");
const u32 sNewShopMenu_SellerMenuMap_Jennie[] = INCBIN_U32("graphics/new_shop/sellers/jennie/menu.bin.lz");
const u32 sNewShopMenu_SellerScrollGfx_Jennie[] = INCBIN_U32("graphics/new_shop/sellers/jennie/scroll.4bpp.lz");
const u32 sNewShopMenu_SellerScrollPal_Jennie[] = INCBIN_U32("graphics/new_shop/sellers/jennie/scroll.gbapal.lz");
const u32 sNewShopMenu_SellerScrollMap_Jennie[] = INCBIN_U32("graphics/new_shop/sellers/jennie/scroll.bin.lz");
const u16 sNewShopMenu_SellerCursorGfx_Jennie[] = INCBIN_U16("graphics/new_shop/sellers/jennie/cursor.4bpp");
const u32 sNewShopMenu_SellerCursorPal_Jennie[] = INCBIN_U32("graphics/new_shop/sellers/jennie/cursor.gbapal.lz");

const u8 sNewShopMenu_SellerMugshotGfx_Nitori[] = INCBIN_U8("graphics/new_shop/sellers/nitori/mugshot.4bpp");
const u16 sNewShopMenu_SellerMugshotPal_Nitori[] = INCBIN_U16("graphics/new_shop/sellers/nitori/mugshot.gbapal");
const u32 sNewShopMenu_SellerMenuGfx_Nitori[] = INCBIN_U32("graphics/new_shop/sellers/nitori/menu.4bpp.lz");
const u32 sNewShopMenu_SellerMenuCoinGfx_Nitori[] = INCBIN_U32("graphics/new_shop/sellers/nitori/menu_coin.4bpp.lz");
const u32 sNewShopMenu_SellerMenuPal_Nitori[] = INCBIN_U32("graphics/new_shop/sellers/nitori/menu.gbapal.lz");
const u32 sNewShopMenu_SellerMenuMap_Nitori[] = INCBIN_U32("graphics/new_shop/sellers/nitori/menu.bin.lz");
const u32 sNewShopMenu_SellerScrollGfx_Nitori[] = INCBIN_U32("graphics/new_shop/sellers/nitori/scroll.4bpp.lz");
const u32 sNewShopMenu_SellerScrollPal_Nitori[] = INCBIN_U32("graphics/new_shop/sellers/nitori/scroll.gbapal.lz");
const u32 sNewShopMenu_SellerScrollMap_Nitori[] = INCBIN_U32("graphics/new_shop/sellers/nitori/scroll.bin.lz");
const u16 sNewShopMenu_SellerCursorGfx_Nitori[] = INCBIN_U16("graphics/new_shop/sellers/nitori/cursor.4bpp");
const u32 sNewShopMenu_SellerCursorPal_Nitori[] = INCBIN_U32("graphics/new_shop/sellers/nitori/cursor.gbapal.lz");

static void Task_ShopMenu(u8 taskId);
static void Task_HandleShopMenuQuit(u8 taskId);
static void CB2_InitBuyMenu(void);
static void Task_GoToBuyOrSellMenu(u8 taskId);
static void MapPostLoadHook_ReturnToShopMenu(void);
static void Task_ReturnToShopMenu(u8 taskId);
static void ShowShopMenuAfterExitingBuyOrSellMenu(u8 taskId);
static void BuyMenuDrawGraphics(void);
static void Task_BuyMenu(u8 taskId);
static void BuyMenuInitBgs(void);
static void BuyMenuInitWindows(void);
static void BuyMenuInitGrid(void);
static bool8 BuyMenuInitSprites(void);
static void BuyMenuDecompressBgGraphics(void);
static void BuyMenuPrint(u8 windowId, const u8 *text, u8 x, u8 y, s8 speed, u8 colorSet, bool32 copy);
static void Task_ExitBuyMenu(u8 taskId);
static void BuyMenuTryMakePurchase(u8 taskId);
static void BuyMenuReturnToItemList(u8 taskId);
static void Task_BuyHowManyDialogueInit(u8 taskId);
static void BuyMenuConfirmPurchase(u8 taskId);
static void BuyMenuPrintItemQuantityAndPrice(u8 taskId);
static void Task_BuyHowManyDialogueHandleInput(u8 taskId);
static void BuyMenuSubtractMoney(u8 taskId);
static void BuyMenuSubtractCoins(u8 taskId);
static void BuyMenuSubtractBp(u8 taskId);
static void BuyMenuStartTutor(u8 taskId);
static void Task_BuyMenuTutor(u8 taskId);
static void RecordItemPurchase(u8 taskId);
static void Task_ReturnToItemListAfterItemPurchase(u8 taskId);
static void Task_HandleShopMenuBuy(u8 taskId);
static void Task_HandleShopMenuSell(u8 taskId);
static void PrintMoneyLocal(u8 windowId, u8 x, u8 y, u32 amount, u8 width, u8 colorIdx, bool32 copy);
static void PrintMoveStatsLocal(u8 windowId, u8 x, u8 y, u8 width, u8 colorIdx, u32 move);
static void UpdateItemData(void);
static void Task_ReturnToItemListWaitMsg(u8 taskId);

static const u8 sGridPosX[] = { (120 + 16), (160 + 16), (200 + 16) };
static const u8 sGridPosY[] = { (24 + 16), (64 + 16) };

static const u16 sShopInventory_ZeroBadges[] = {
    ITEM_TOHO_ORB,
    ITEM_FOUL_ORB,
    ITEM_POTION,
    ITEM_ANTIDOTE,
    ITEM_PARALYZE_HEAL,
    ITEM_AWAKENING,
    ITEM_ESCAPE_ROPE,
    ITEM_REPEL,
    ITEM_LURE,
    ITEM_X_ATTACK,
    ITEM_X_DEFENSE,
    ITEM_X_SPEED,
    ITEM_NONE
};

static const u16 sShopInventory_OneBadge[] = {
    ITEM_TOHO_ORB,
    ITEM_FOUL_ORB,
    ITEM_GREAT_ORB,
    ITEM_POTION,
    ITEM_SUPER_POTION,
    ITEM_ANTIDOTE,
    ITEM_PARALYZE_HEAL,
    ITEM_AWAKENING,
    ITEM_ESCAPE_ROPE,
    ITEM_REPEL,
    ITEM_LURE,
    ITEM_X_ATTACK,
    ITEM_X_DEFENSE,
    ITEM_X_SPEED,
    ITEM_NONE
};

static const u16 sShopInventory_TwoBadges[] = {
    ITEM_TOHO_ORB,
    ITEM_FOUL_ORB,
    ITEM_GREAT_ORB,
    ITEM_POTION,
    ITEM_SUPER_POTION,
    ITEM_ANTIDOTE,
    ITEM_PARALYZE_HEAL,
    ITEM_AWAKENING,
    ITEM_ESCAPE_ROPE,
    ITEM_REPEL,
    ITEM_LURE,
    ITEM_X_ATTACK,
    ITEM_X_DEFENSE,
    ITEM_X_SPEED,
    ITEM_NONE
};

static const u16 sShopInventory_ThreeBadges[] = {
    ITEM_TOHO_ORB,
    ITEM_FOUL_ORB,
    ITEM_GREAT_ORB,
    ITEM_POTION,
    ITEM_SUPER_POTION,
    ITEM_ANTIDOTE,
    ITEM_PARALYZE_HEAL,
    ITEM_AWAKENING,
    ITEM_BURN_HEAL,
    ITEM_ICE_HEAL,
    ITEM_ESCAPE_ROPE,
    ITEM_REPEL,
    ITEM_SUPER_REPEL,
    ITEM_LURE,
    ITEM_SUPER_LURE,
    ITEM_X_ATTACK,
    ITEM_X_DEFENSE,
    ITEM_X_SP_ATK,
    ITEM_X_SP_DEF,
    ITEM_X_SPEED,
    ITEM_X_ACCURACY,
    ITEM_DIRE_HIT,
    ITEM_GUARD_SPEC,
    ITEM_NONE
};

static const u16 sShopInventory_FourBadges[] = {
    ITEM_TOHO_ORB,
    ITEM_FOUL_ORB,
    ITEM_GREAT_ORB,
    ITEM_POTION,
    ITEM_SUPER_POTION,
    ITEM_ANTIDOTE,
    ITEM_PARALYZE_HEAL,
    ITEM_AWAKENING,
    ITEM_BURN_HEAL,
    ITEM_ICE_HEAL,
    ITEM_REVIVE,
    ITEM_ESCAPE_ROPE,
    ITEM_REPEL,
    ITEM_SUPER_REPEL,
    ITEM_LURE,
    ITEM_SUPER_LURE,
    ITEM_X_ATTACK,
    ITEM_X_DEFENSE,
    ITEM_X_SP_ATK,
    ITEM_X_SP_DEF,
    ITEM_X_SPEED,
    ITEM_X_ACCURACY,
    ITEM_DIRE_HIT,
    ITEM_GUARD_SPEC,
    ITEM_NONE
};

static const u16 sShopInventory_FiveBadges[] = {
    ITEM_TOHO_ORB,
    ITEM_FOUL_ORB,
    ITEM_GREAT_ORB,
    ITEM_ULTRA_ORB,
    ITEM_POTION,
    ITEM_SUPER_POTION,
    ITEM_HYPER_POTION,
    ITEM_ANTIDOTE,
    ITEM_PARALYZE_HEAL,
    ITEM_AWAKENING,
    ITEM_BURN_HEAL,
    ITEM_ICE_HEAL,
    ITEM_FULL_HEAL,
    ITEM_REVIVE,
    ITEM_ESCAPE_ROPE,
    ITEM_REPEL,
    ITEM_SUPER_REPEL,
    ITEM_MAX_REPEL,
    ITEM_LURE,
    ITEM_SUPER_LURE,
    ITEM_MAX_LURE,
    ITEM_X_ATTACK,
    ITEM_X_DEFENSE,
    ITEM_X_SP_ATK,
    ITEM_X_SP_DEF,
    ITEM_X_SPEED,
    ITEM_X_ACCURACY,
    ITEM_DIRE_HIT,
    ITEM_GUARD_SPEC,
    ITEM_NONE
};

static const u16 sShopInventory_SixBadges[] = {
    ITEM_TOHO_ORB,
    ITEM_FOUL_ORB,
    ITEM_GREAT_ORB,
    ITEM_ULTRA_ORB,
    ITEM_POTION,
    ITEM_SUPER_POTION,
    ITEM_HYPER_POTION,
    ITEM_ANTIDOTE,
    ITEM_PARALYZE_HEAL,
    ITEM_AWAKENING,
    ITEM_BURN_HEAL,
    ITEM_ICE_HEAL,
    ITEM_FULL_HEAL,
    ITEM_REVIVE,
    ITEM_ESCAPE_ROPE,
    ITEM_REPEL,
    ITEM_SUPER_REPEL,
    ITEM_MAX_REPEL,
    ITEM_LURE,
    ITEM_SUPER_LURE,
    ITEM_MAX_LURE,
    ITEM_X_ATTACK,
    ITEM_X_DEFENSE,
    ITEM_X_SP_ATK,
    ITEM_X_SP_DEF,
    ITEM_X_SPEED,
    ITEM_X_ACCURACY,
    ITEM_DIRE_HIT,
    ITEM_GUARD_SPEC,
    ITEM_NONE
};

static const u16 sShopInventory_SevenBadges[] = {
    ITEM_TOHO_ORB,
    ITEM_FOUL_ORB,
    ITEM_GREAT_ORB,
    ITEM_ULTRA_ORB,
    ITEM_POTION,
    ITEM_SUPER_POTION,
    ITEM_HYPER_POTION,
    ITEM_MAX_POTION,
    ITEM_ANTIDOTE,
    ITEM_PARALYZE_HEAL,
    ITEM_AWAKENING,
    ITEM_BURN_HEAL,
    ITEM_ICE_HEAL,
    ITEM_FULL_HEAL,
    ITEM_REVIVE,
    ITEM_ESCAPE_ROPE,
    ITEM_REPEL,
    ITEM_SUPER_REPEL,
    ITEM_MAX_REPEL,
    ITEM_LURE,
    ITEM_SUPER_LURE,
    ITEM_MAX_LURE,
    ITEM_X_ATTACK,
    ITEM_X_DEFENSE,
    ITEM_X_SP_ATK,
    ITEM_X_SP_DEF,
    ITEM_X_SPEED,
    ITEM_X_ACCURACY,
    ITEM_DIRE_HIT,
    ITEM_GUARD_SPEC,
    ITEM_NONE
};

static const u16 sShopInventory_EightBadges[] = {
    ITEM_TOHO_ORB,
    ITEM_FOUL_ORB,
    ITEM_GREAT_ORB,
    ITEM_ULTRA_ORB,
    ITEM_POTION,
    ITEM_SUPER_POTION,
    ITEM_HYPER_POTION,
    ITEM_MAX_POTION,
    ITEM_FULL_RESTORE,
    ITEM_ANTIDOTE,
    ITEM_PARALYZE_HEAL,
    ITEM_AWAKENING,
    ITEM_BURN_HEAL,
    ITEM_ICE_HEAL,
    ITEM_FULL_HEAL,
    ITEM_REVIVE,
    ITEM_MAX_REVIVE,
    ITEM_ESCAPE_ROPE,
    ITEM_REPEL,
    ITEM_SUPER_REPEL,
    ITEM_MAX_REPEL,
    ITEM_LURE,
    ITEM_SUPER_LURE,
    ITEM_MAX_LURE,
    ITEM_X_ATTACK,
    ITEM_X_DEFENSE,
    ITEM_X_SP_ATK,
    ITEM_X_SP_DEF,
    ITEM_X_SPEED,
    ITEM_X_ACCURACY,
    ITEM_DIRE_HIT,
    ITEM_GUARD_SPEC,
    ITEM_NONE
};

static const u16 *const sShopInventories[] = 
{
    sShopInventory_ZeroBadges, 
    sShopInventory_OneBadge,
    sShopInventory_TwoBadges,
    sShopInventory_ThreeBadges,
    sShopInventory_FourBadges,
    sShopInventory_FiveBadges,
    sShopInventory_SixBadges,
    sShopInventory_SevenBadges,
    sShopInventory_EightBadges
};

static const struct YesNoFuncTable sShopPurchaseYesNoFuncs =
{
    BuyMenuTryMakePurchase,
    BuyMenuReturnToItemList
};

static const struct MenuAction sShopMenuActions_BuySellQuit[] =
{
    { gText_ShopBuy, {.void_u8=Task_HandleShopMenuBuy} },
    { gText_ShopSell, {.void_u8=Task_HandleShopMenuSell} },
    { gText_ShopQuit, {.void_u8=Task_HandleShopMenuQuit} }
};

static const struct MenuAction sShopMenuActions_BuyQuit[] =
{
    { gText_ShopBuy, {.void_u8=Task_HandleShopMenuBuy} },
    { gText_ShopQuit, {.void_u8=Task_HandleShopMenuQuit} }
};

static const struct WindowTemplate sShopMenuWindowTemplates[] =
{
    [WIN_BUY_SELL_QUIT] = {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 1,
        .width = 9,
        .height = 6,
        .paletteNum = 15,
        .baseBlock = 0x0008,
    },
    // Separate shop menu window for decorations, which can't be sold
    [WIN_BUY_QUIT] = {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 1,
        .width = 9,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 0x0008,
    }
};

static const struct BgTemplate sShopBuyMenuBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 2,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 2,
        .charBaseIndex = 0,
        .mapBaseIndex = 29,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0
    },
    {
        .bg = 3,
        .charBaseIndex = 0,
        .mapBaseIndex = 28,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0
    }
};

static const struct WindowTemplate sShopBuyMenuWindowTemplates[] =
{
    [WIN_MONEY] = {
        .bg = 0,
        .tilemapLeft = 19,
        .tilemapTop = 0,
        .width = 10,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 0x001E,
    },
    [WIN_MULTI] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 13,
        .width = 10,
        .height = 6,
        .paletteNum = 15,
        .baseBlock = 0x0032,
    },
    [WIN_ITEM_DESCRIPTION] = {
        .bg = 0,
        .tilemapLeft = 11,
        .tilemapTop = 13,
        .width = 14,
        .height = 6,
        .paletteNum = 15,
        .baseBlock = 0x0122,
    },
    [WIN_QUANTITY_PRICE] = {
        .bg = 0,
        .tilemapLeft = 22,
        .tilemapTop = 14,
        .width = 8,
        .height = 6,
        .paletteNum = 15,
        .baseBlock = 0x018E,
    },
    [WIN_MUGSHOT] = {
        .bg = 1,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 13,
        .height = 12,
        .paletteNum = 2,
        .baseBlock = 1,
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sShopBuyMenuYesNoWindowTemplates =
{
    .bg = 0,
    .tilemapLeft = 24,
    .tilemapTop = 14,
    .width = 5,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 0x020E,
};

static const u8 sShopBuyMenuTextColors[][3] =
{
    [COLORID_NORMAL]      = {0, 2, 3},
    [COLORID_BLACK]       = {0, 1, 2},
};

static const struct SpriteSheet sDefaultCursor_SpriteSheet = {
    .data = sNewShopMenu_DefaultCursorGfx,
    .size = 64*64*2,
    .tag = GFXTAG_CURSOR,
};

static const struct CompressedSpritePalette sDefaultCursor_SpritePalette = {
    .data = sNewShopMenu_DefaultMenuPal,
    .tag = PALTAG_CURSOR,
};

static const union AnimCmd sCursorAnim[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(64, 30),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sCursorAnims[] = { sCursorAnim };

static const struct OamData sCursor_SpriteOamData = {
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .priority = 1,
};

static const struct SpriteTemplate sCursor_SpriteTemplate = {
    .tileTag = GFXTAG_CURSOR,
    .paletteTag = PALTAG_CURSOR,
    .callback = SpriteCallbackDummy,
    .anims = sCursorAnims,
    .affineAnims = gDummySpriteAffineAnimTable,
    .images = NULL,
    .oam = &sCursor_SpriteOamData,
};

static const struct Seller sSellers[] = {
    // this is THE default seller id that the code will use as
    // a last resort, so try not to delete any of the already
    // set fields here.
    [SELLER_JERRY] =
    {
        { .gfxId = OBJ_EVENT_GFX_MART_EMPLOYEE },
        .mugshotGfx = sNewShopMenu_SellerMugshotGfx_Jerry,
        .mugshotPal = sNewShopMenu_SellerMugshotPal_Jerry,
        .menuTileOffset = 9,
        .menuGfx = sNewShopMenu_SellerMenuGfx_Jerry,
        .menuCoinGfx = sNewShopMenu_SellerMenuCoinGfx_Jerry,
        .menuBpGfx = sNewShopMenu_SellerMenuCoinGfx_Jerry,
        .menuPal = sNewShopMenu_SellerMenuPal_Jerry,
        .menuMap = sNewShopMenu_SellerMenuMap_Jerry,
        .scrollGfx = sNewShopMenu_SellerScrollGfx_Jerry,
        .scrollPal = sNewShopMenu_SellerScrollPal_Jerry,
        .scrollMap = sNewShopMenu_SellerScrollMap_Jerry,
        .cursorGfx = sNewShopMenu_SellerCursorGfx_Jerry,
        .cursorPal = sNewShopMenu_SellerCursorPal_Jerry,

        .message =
        {
            [SELLER_MSG_RETURN_TO_FIELD]   = gText_AnythingElseICanHelp,
            [SELLER_MSG_BUY_PROMPT]        = sText_YouWantedVar1ThatllBeVar2,
            [SELLER_MSG_BUY_COIN_PROMPT]   = sText_YouWantedVar1ThatllBeVar2Coins,
            [SELLER_MSG_BUY_BP_PROMPT]     = sText_YouWantedVar1ThatllBeVar2BP,
            [SELLER_MSG_BUY_PROMPT_PLURAL] = sText_Var1CertainlyHowMany,
            [SELLER_MSG_BUY_CONFIRM]       = sText_Var1AndYouWantedVar2,
            [SELLER_MSG_BUY_COIN_CONFIRM]  = sText_Var1AndYouWantedVar2Coins,
            [SELLER_MSG_BUY_BP_CONFIRM]    = sText_Var1AndYouWantedVar2BP,
            [SELLER_MSG_BUY_SUCCESS]       = sText_HereYouGoThankYou,
            [SELLER_MSG_BUY_FAIL_NO_SPACE] = sText_NoMoreRoomForThis,
            [SELLER_MSG_BUY_FAIL_NO_MONEY] = sText_YouDontHaveMoney,
            [SELLER_MSG_BUY_FAIL_NO_COINS] = sText_YouDontHaveCoins,
            [SELLER_MSG_BUY_FAIL_NO_BP]    = sText_YouDontHaveBP,
            [SELLER_MSG_BUY_FAIL_SOLD_OUT] = sText_ThatItemIsSoldOut,
            [SELLER_MGS_BUY_PREMIER_BONUS] = sText_ThrowInPremierBall,
            [SELLER_MSG_BUY_PREMIER_BONUS_PLURAL] = sText_ThrowInPremierBalls,
            #ifdef MUDSKIP_OUTFIT_SYSTEM
            [SELLER_MSG_BUY_OUTFIT_PROMPT] = sText_YouWantedVar1OutfitThatllBeVar2,
            #endif // MUDSKIP_OUTFIT_SYSTEM
        },
    },
    [SELLER_JENNIE] =
    {
        { .gfxId = OBJ_EVENT_GFX_WOMAN_3 },
        .mugshotGfx = sNewShopMenu_SellerMugshotGfx_Jennie,
        .mugshotPal = sNewShopMenu_SellerMugshotPal_Jennie,
        .menuTileOffset = 9,
        .menuGfx = sNewShopMenu_SellerMenuGfx_Jennie,
        .menuCoinGfx = sNewShopMenu_SellerMenuCoinGfx_Jennie,
        .menuBpGfx = sNewShopMenu_SellerMenuCoinGfx_Jennie,
        .menuPal = sNewShopMenu_SellerMenuPal_Jennie,
        .menuMap = sNewShopMenu_SellerMenuMap_Jennie,
        .scrollGfx = sNewShopMenu_SellerScrollGfx_Jennie,
        .scrollPal = sNewShopMenu_SellerScrollPal_Jennie,
        .scrollMap = sNewShopMenu_SellerScrollMap_Jennie,
        .cursorGfx = sNewShopMenu_SellerCursorGfx_Jennie,
        .cursorPal = sNewShopMenu_SellerCursorPal_Jennie,
    },
    [SELLER_NITORI] =
    {
        { .gfxId = OBJ_EVENT_GFX_NITORI },
        .mugshotGfx = sNewShopMenu_SellerMugshotGfx_Nitori,
        .mugshotPal = sNewShopMenu_SellerMugshotPal_Nitori,
        .menuTileOffset = 9,
        .menuGfx = sNewShopMenu_SellerMenuGfx_Nitori,
        .menuCoinGfx = sNewShopMenu_SellerMenuCoinGfx_Nitori,
        .menuBpGfx = sNewShopMenu_SellerMenuCoinGfx_Nitori,
        .menuPal = sNewShopMenu_SellerMenuPal_Nitori,
        .menuMap = sNewShopMenu_SellerMenuMap_Nitori,
        .scrollGfx = sNewShopMenu_SellerScrollGfx_Nitori,
        .scrollPal = sNewShopMenu_SellerScrollPal_Nitori,
        .scrollMap = sNewShopMenu_SellerScrollMap_Nitori,
        .cursorGfx = sNewShopMenu_SellerCursorGfx_Nitori,
        .cursorPal = sNewShopMenu_SellerCursorPal_Nitori,
    },
};

static inline bool32 IsMartTypeBp(u8 martType)
{
    return martType == MART_TYPE_BP_ITEMS || martType == MART_TYPE_BP_MOVES;
}

static inline bool32 IsMartTypeCasino(u8 martType)
{
    return martType == MART_TYPE_CASINO;
}

static inline bool32 IsMartTypeMoney(u8 martType)
{
    return !IsMartTypeBp(martType) && !IsMartTypeCasino(martType);
}

static inline bool32 IsMartTypeItem(u8 martType)
{
    return martType <= MART_TYPE_BP_ITEMS;
}

static inline bool32 IsMartTypeMove(u8 martType)
{
    return martType == MART_TYPE_BP_MOVES || martType == MART_TYPE_MOVES;
}

#ifdef MUDSKIP_OUTFIT_SYSTEM
static inline bool32 IsMartTypeOutfit(u8 martType)
{
    return martType == MART_TYPE_OUTFIT;
}
#endif // MUDSKIP_OUTFIT_SYSTEM

// Is otherwise just assumed but this exists in case you want to add even more mart types
static inline bool32 IsMartTypeDecor(u8 martType)
{
    return martType == MART_TYPE_DECOR || martType == MART_TYPE_DECOR2;
}

static inline bool32 CanMartTypeReturnToShopMenu(u8 martType)
{
    return martType == MART_TYPE_NORMAL
        || martType == MART_TYPE_VARIABLE
        || martType == MART_TYPE_DECOR
        || martType == MART_TYPE_DECOR2;
}

// This only exist because of the Slateport sale
static inline bool32 IsMartTypeMoneyItem(u8 martType)
{
    return martType <= MART_TYPE_BUY_VARIABLE;
}

static inline bool32 IsMartTypeSellable(u8 martType)
{
    return martType <= MART_TYPE_VARIABLE;
}

static u8 CreateShopMenu(u8 martType)
{
    int numMenuItems;

    LockPlayerFieldControls();
    sMartInfo.martType = martType;

    if (IsMartTypeSellable(martType))
    {
        struct WindowTemplate winTemplate = sShopMenuWindowTemplates[WIN_BUY_SELL_QUIT];
        winTemplate.width = GetMaxWidthInMenuTable(sShopMenuActions_BuySellQuit, ARRAY_COUNT(sShopMenuActions_BuySellQuit));
        sMartInfo.windowId = AddWindow(&winTemplate);
        sMartInfo.menuActions = sShopMenuActions_BuySellQuit;
        numMenuItems = ARRAY_COUNT(sShopMenuActions_BuySellQuit);
    }
    else
    {
        struct WindowTemplate winTemplate = sShopMenuWindowTemplates[WIN_BUY_QUIT];
        winTemplate.width = GetMaxWidthInMenuTable(sShopMenuActions_BuyQuit, ARRAY_COUNT(sShopMenuActions_BuyQuit));
        sMartInfo.windowId = AddWindow(&winTemplate);
        sMartInfo.menuActions = sShopMenuActions_BuyQuit;
        numMenuItems = ARRAY_COUNT(sShopMenuActions_BuyQuit);
    }

    SetStandardWindowBorderStyle(sMartInfo.windowId, FALSE);
    PrintMenuTable(sMartInfo.windowId, numMenuItems, sMartInfo.menuActions);
    InitMenuInUpperLeftCornerNormal(sMartInfo.windowId, numMenuItems, 0);
    PutWindowTilemap(sMartInfo.windowId);
    CopyWindowToVram(sMartInfo.windowId, COPYWIN_MAP);

    return CreateTask(Task_ShopMenu, 8);
}

static void SetShopMenuCallback(void (* callback)(void))
{
    sMartInfo.callback = callback;
}

static void SetShopItemsForSale(const u16 *items)
{
    u32 i = 0;
    u32 badgeCount = GetBadgeCount();

    if (items == NULL)
        items = sShopInventories[badgeCount];

    sMartInfo.itemSource = items;
    sMartInfo.itemCount = 0;

    // Read items until ITEM_NONE / DECOR_NONE is reached
    while (items[i])
    {
        sMartInfo.itemCount++;
        i++;

        if (sMartInfo.martType == MART_TYPE_VARIABLE || sMartInfo.martType == MART_TYPE_BUY_VARIABLE)
        {
            i++;
        }
    }
    sMartInfo.itemCount++; // for ITEM_NONE / DECOR_NONE
}

static void InitShopItemsForSale(void)
{
    u32 i = 0, j = 0;
    u16 *itemList;
    u16 *itemPriceList;

    sMartInfo.itemList = AllocZeroed(sMartInfo.itemCount * sizeof(u16));
    sMartInfo.itemPriceList = AllocZeroed(sMartInfo.itemCount * sizeof(u16));

    itemList = (sMartInfo.itemList);
    itemPriceList = (sMartInfo.itemPriceList);

    while (sMartInfo.itemSource[i])
    {
        *itemList = sMartInfo.itemSource[i];
        i++;
        itemList++;
        j++;

        if (sMartInfo.martType == MART_TYPE_VARIABLE || sMartInfo.martType == MART_TYPE_BUY_VARIABLE)
        {
            *itemPriceList = sMartInfo.itemSource[i];
            i++;
            itemPriceList++;
        }
    }

    *itemList = ITEM_NONE;
    *itemPriceList = ITEM_NONE;
}

static u32 SearchItemListForPrice(u32 itemId)
{
    u32 i;
    u16 *itemList = sMartInfo.itemList;
    u16 *itemPriceList = sMartInfo.itemPriceList;

    for (i = 0; i < sMartInfo.itemCount; i++)
    {
        if (*itemList == itemId)
        {
            return *itemPriceList;
        }

        itemList++;
        itemPriceList++;
    }

    return 0;
}

void SetShopSellerId(void)
{
    u32 i;
    u32 objId = GetObjectEventIdByLocalIdAndMap(gSpecialVar_LastTalked,
                                                    gSaveBlock1Ptr->location.mapNum,
                                                    gSaveBlock1Ptr->location.mapGroup);
    u32 gfxId = gObjectEvents[objId].graphicsId;

    if (gSpecialVar_LastTalked == 0) // failsafe
    {
        sMartInfo.sellerId = SELLER_NONE;
        return;
    }

    if (gfxId >= OBJ_EVENT_GFX_VAR_0 && gfxId <= OBJ_EVENT_GFX_VAR_F)
    {
        gfxId = VarGetObjectEventGraphicsId(gfxId);
    }

    // loop over all of the sellers
    for (i = SELLER_NONE; i < SELLER_COUNT; i++)
    {
        if (gfxId == sSellers[i].id.gfxId)
        {
            sMartInfo.sellerId = i;
            break;
        }
    }
}

static inline const u8 *Shop_GetSellerMessage(enum Seller_MessageIds msgId)
{
    u32 sellerId = sMartInfo.sellerId;

    if (sSellers[sellerId].message[msgId] == NULL)
    {
        sellerId = SELLER_NONE + 1;
    }

    return sSellers[sellerId].message[msgId];
}

static const void *Shop_GetSellerGraphics(enum Seller_GraphicsIds gfxId)
{
    u32 sellerId = sMartInfo.sellerId;
    const struct Seller *seller = &sSellers[sellerId];

    switch (gfxId)
    {
    case SELLER_GFX_MUGSHOT_GFX:
        return seller->mugshotGfx != NULL ? seller->mugshotGfx : sNewShopMenu_SellerMugshotGfx_Jerry;
        break;
    case SELLER_GFX_MUGSHOT_PAL:
        return seller->mugshotPal != NULL ? seller->mugshotPal : sNewShopMenu_SellerMugshotPal_Jerry;
        break;

    case SELLER_GFX_MENU_GFX:
        if (IsMartTypeCasino(sMartInfo.martType))
            return seller->menuCoinGfx != NULL ? seller->menuCoinGfx : sNewShopMenu_DefaultMenuCoinGfx;
        else if (IsMartTypeBp(sMartInfo.martType))
            return seller->menuBpGfx != NULL ? seller->menuBpGfx : sNewShopMenu_DefaultMenuBpGfx;
        else // if (IsMartTypeMoney(sMartInfo.martType))
            return seller->menuGfx != NULL ? seller->menuGfx : sNewShopMenu_DefaultMenuGfx;
    case SELLER_GFX_MENU_PAL:
        return seller->menuPal != NULL ? seller->menuPal : sNewShopMenu_DefaultMenuPal;
        break;
    case SELLER_GFX_MENU_MAP:
        return seller->menuMap != NULL ? seller->menuMap : sNewShopMenu_DefaultMenuTilemap;
        break;

    case SELLER_GFX_SCROLL_GFX:
        return seller->scrollGfx != NULL ? seller->scrollGfx : sNewShopMenu_DefaultScrollGfx;
        break;
    case SELLER_GFX_SCROLL_PAL:
        return seller->scrollPal != NULL ? seller->scrollPal : sNewShopMenu_DefaultMenuPal;
        break;
    case SELLER_GFX_SCROLL_MAP:
        return seller->scrollMap != NULL ? seller->scrollMap : sNewShopMenu_DefaultScrollTilemap;
        break;

    case SELLER_GFX_CURSOR_GFX:
        return seller->cursorGfx != NULL ? seller->cursorGfx : sNewShopMenu_DefaultCursorGfx;
        break;
    case SELLER_GFX_CURSOR_PAL:
        return seller->cursorPal != NULL ? seller->cursorPal : sNewShopMenu_DefaultMenuPal;
        break;

    }

    return NULL;
}

static void Task_ShopMenu(u8 taskId)
{
    s8 inputCode = Menu_ProcessInputNoWrap();
    switch (inputCode)
    {
    case MENU_NOTHING_CHOSEN:
        break;
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        Task_HandleShopMenuQuit(taskId);
        break;
    default:
        sMartInfo.menuActions[inputCode].func.void_u8(taskId);
        break;
    }
}

#define tItemCount  data[1]
#define tCallbackHi data[8]
#define tCallbackLo data[9]

static void Task_HandleShopMenuBuy(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    tCallbackHi = (u32)CB2_InitBuyMenu >> 16;
    tCallbackLo = (u32)CB2_InitBuyMenu;
    gTasks[taskId].func = Task_GoToBuyOrSellMenu;
    FadeScreen(FADE_TO_BLACK, 0);
}

static void Task_HandleShopMenuSell(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    tCallbackHi = (u32)CB2_GoToSellMenu >> 16;
    tCallbackLo = (u32)CB2_GoToSellMenu;
    gTasks[taskId].func = Task_GoToBuyOrSellMenu;
    FadeScreen(FADE_TO_BLACK, 0);
}

void CB2_ExitSellNewShopMenu(void)
{
    if (sMartInfo.martType == MART_TYPE_SELL_ONLY)
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
    else
    {
        gFieldCallback = MapPostLoadHook_ReturnToShopMenu;
        SetMainCallback2(CB2_ReturnToField);
    }
}

static void Task_HandleShopMenuQuit(u8 taskId)
{
    ClearStdWindowAndFrameToTransparent(sMartInfo.windowId, COPYWIN_FULL);
    RemoveWindow(sMartInfo.windowId);
    TryPutSmartShopperOnAir();
    UnlockPlayerFieldControls();
    DestroyTask(taskId);

    if (sMartInfo.callback)
        sMartInfo.callback();
}

static void Task_GoToBuyOrSellMenu(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    if (!gPaletteFade.active)
    {
        DestroyTask(taskId);
        SetMainCallback2((void *)((u16)tCallbackHi << 16 | (u16)tCallbackLo));
    }
}

static void MapPostLoadHook_ReturnToShopMenu(void)
{
    FadeInFromBlack();
    CreateTask(Task_ReturnToShopMenu, 8);
}

static void Task_ReturnToShopMenu(u8 taskId)
{
    if (IsWeatherNotFadingIn() == TRUE)
    {
        DisplayItemMessageOnField(taskId, Shop_GetSellerMessage(SELLER_MSG_RETURN_TO_FIELD), ShowShopMenuAfterExitingBuyOrSellMenu);
    }
}

static void ShowShopMenuAfterExitingBuyOrSellMenu(u8 taskId)
{
    CreateShopMenu(sMartInfo.martType);
    DestroyTask(taskId);
}

static void CB2_BuyMenu(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_BuyMenu(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
    ChangeBgX(3, 96, BG_COORD_SUB);
}

static void Task_BuyMenuWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_BuyMenu;
}

static void CB2_InitBuyMenu(void)
{
    switch (gMain.state)
    {
    case 0:
        DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
        ResetVramOamAndBgCntRegs();
        SetVBlankHBlankCallbacksToNull();
        CpuFastFill(0, (void *)OAM, OAM_SIZE);
        ScanlineEffect_Stop();
        ResetTempTileDataBuffers();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        ClearScheduledBgCopiesToVram();
        sShopData = AllocZeroed(sizeof(struct ShopData));
        InitShopItemsForSale();
        SetShopSellerId();
        BuyMenuInitBgs();
        BuyMenuInitGrid();
        BuyMenuInitWindows();
        BuyMenuDecompressBgGraphics();
        gMain.state++;
        break;
    case 1:
        if (BuyMenuInitSprites())
            gMain.state++;
        break;
    case 2:
        if (!FreeTempTileDataBuffersIfPossible())
            gMain.state++;
        break;
    default:
        BuyMenuDrawGraphics();
        CreateTask(Task_BuyMenuWaitFadeIn, 8);
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        SetVBlankCallback(VBlankCB_BuyMenu);
        SetMainCallback2(CB2_BuyMenu);
        break;
    }
}

void CB2_InitBuyMenuAfterTutor(void)
{
    if (gSpecialVar_Result == TRUE)
    {
        if (IsMartTypeBp(gSpecialVar_0x8009))
            RemoveBattlePoints(gSpecialVar_0x8008);
        else
            RemoveMoney(&gSaveBlock1Ptr->money, gSpecialVar_0x8008);
    }
    // No point in trying to salvage going back to the buy menu
    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

static void BuyMenuFreeMemory(void)
{
    GridMenu_Destroy(sShopData->gridItems);
    Free(sShopData);
    // they're better freed here since
    // this is only used in the buy menu
    Free(sMartInfo.itemPriceList);
    Free(sMartInfo.itemList);
    FreeAllWindowBuffers();
}

static void ForEachCB_PopulateItemIcons(u32 idx, u32 col, u32 row)
{
    u32 i = sShopData->gridItems->topLeftItemIndex + idx, x, y;

    if (i >= sMartInfo.itemCount)
    {
        return;
    }

    x = (((col % 3) < ARRAY_COUNT(sGridPosX)) ? sGridPosX[col] : sGridPosX[0]);
    y = (((row % 2) < ARRAY_COUNT(sGridPosY)) ? sGridPosY[row] : sGridPosY[0]);

    if (IsMartTypeItem(sMartInfo.martType))
    {
        if (sMartInfo.itemList[i] == ITEM_NONE)
        {
            sShopData->gridItems->iconSpriteIds[idx] = AddItemIconSprite(GFXTAG_ITEM + idx, PALTAG_ITEM + idx, ITEM_LIST_END);
        }
        else
        {
            sShopData->gridItems->iconSpriteIds[idx] = AddItemIconSprite(GFXTAG_ITEM + idx, PALTAG_ITEM + idx, sMartInfo.itemList[i]);
        }

        gSprites[sShopData->gridItems->iconSpriteIds[idx]].x = x;
        gSprites[sShopData->gridItems->iconSpriteIds[idx]].y = y;
    }
    else if (IsMartTypeMove(sMartInfo.martType))
    {
        if (sMartInfo.itemList[i] == MOVE_NONE)
            sShopData->gridItems->iconSpriteIds[idx] = AddItemIconSprite(GFXTAG_ITEM + idx, PALTAG_ITEM + idx, ITEM_LIST_END);
        else
            sShopData->gridItems->iconSpriteIds[idx] = AddItemIconSprite(GFXTAG_ITEM + idx, PALTAG_ITEM + idx, GetMoveTypeItemShopIcon(sMartInfo.itemList[i]));

        gSprites[sShopData->gridItems->iconSpriteIds[idx]].x = x;
        gSprites[sShopData->gridItems->iconSpriteIds[idx]].y = y;
    }
    // custom
    #ifdef MUDSKIP_OUTFIT_SYSTEM
    else if (IsMartTypeOutfit(sMartInfo.martType))
    {
        //! TODO: Fix coord of this
        u16 gfxId = GetPlayerAvatarGraphicsIdByOutfitStateIdAndGender(sMartInfo.itemList[i], PLAYER_AVATAR_STATE_NORMAL, gSaveBlock2Ptr->playerGender);

        if (sMartInfo.itemList[i] == OUTFIT_NONE) // is 0 as DECOR/ITEM_NONE
        {
            sShopData->gridItems->iconSpriteIds[idx] = AddItemIconSprite(GFXTAG_ITEM + idx, PALTAG_ITEM + idx, ITEM_LIST_END);
        }
        else
        {
            x -= 40, y -= 36;
            sShopData->gridItems->iconSpriteIds[idx] = CreateObjectGraphicsSprite(gfxId, SpriteCallbackDummy, x, y, 0);
        }

        gSprites[sShopData->gridItems->iconSpriteIds[idx]].x = x;
        gSprites[sShopData->gridItems->iconSpriteIds[idx]].y = y;
    }
    #endif // MUDSKIP_OUTFIT_SYSTEM
    else // if (IsMartTypeDecor(sMartInfo.martType))
    {
        // DECOR_NONE has the same value as ITEM_NONE but this is for clarity
        if (sMartInfo.itemList[i] == DECOR_NONE)
        {
            sShopData->gridItems->iconSpriteIds[idx] = AddItemIconSprite(GFXTAG_ITEM + idx, PALTAG_ITEM + idx, ITEM_LIST_END);
            gSprites[sShopData->gridItems->iconSpriteIds[idx]].x = x;
            gSprites[sShopData->gridItems->iconSpriteIds[idx]].y = y;
        }
        else
        {
            x -= 4;
            y -= 4;
            sShopData->gridItems->iconSpriteIds[idx] = AddDecorationIconObject(sMartInfo.itemList[i], x, y, 2, GFXTAG_ITEM + idx, PALTAG_ITEM + idx);
        }
    }
}

static void ForAllCB_FreeItemIcons(u32 idx, u32 col, u32 row)
{
    if (sShopData->gridItems->iconSpriteIds[idx] == SPRITE_NONE)
        return;

    if (gSprites[sShopData->gridItems->iconSpriteIds[idx]].inUse)
    {
        FreeSpriteTilesByTag(idx + GFXTAG_ITEM);
        FreeSpritePaletteByTag(idx + PALTAG_ITEM);
        DestroySprite(&gSprites[sShopData->gridItems->iconSpriteIds[idx]]);
    }

    sShopData->gridItems->iconSpriteIds[idx] = SPRITE_NONE;
}

static void InputCB_UpDownScroll(void)
{
    GridMenu_ForAll(sShopData->gridItems, ForAllCB_FreeItemIcons);
    GridMenu_ForEach(sShopData->gridItems, ForEachCB_PopulateItemIcons);
    UpdateItemData();
    if (!IsSEPlaying())
        PlaySE(SE_RG_BAG_CURSOR);
}

static void InputCB_Move(void)
{
    UpdateItemData();
    if (!IsSEPlaying())
        PlaySE(SE_RG_BAG_CURSOR);
}

static void InputCB_Fail(void)
{
    if (!IsSEPlaying())
        PlaySE(SE_BOO);
}

static void BuyMenuInitGrid(void)
{
    sShopData->gridItems = GridMenu_Init(3, 2, sMartInfo.itemCount);
    GridMenu_ForEach(sShopData->gridItems, ForEachCB_PopulateItemIcons);
    // we're doing this so that when the grid menu input function "fails", the item data wont flickers
    // it'll flicker when we call UpdateItemData on the main input task func
    // UPDATE: Not exactly true, it flickers when the printing func always immediately copy to vram
    // for good measure though, i'll keep it.
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Move, DIRECTION_UP, TYPE_MOVE);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Move, DIRECTION_DOWN, TYPE_MOVE);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Move, DIRECTION_LEFT, TYPE_MOVE);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Move, DIRECTION_RIGHT, TYPE_MOVE);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Fail, DIRECTION_UP, TYPE_FAIL);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Fail, DIRECTION_DOWN, TYPE_FAIL);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Fail, DIRECTION_LEFT, TYPE_FAIL);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Fail, DIRECTION_RIGHT, TYPE_FAIL);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_UpDownScroll, DIRECTION_UP, TYPE_SCROLL);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_UpDownScroll, DIRECTION_DOWN, TYPE_SCROLL);
}

static void BuyMenuInitBgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sShopBuyMenuBgTemplates, ARRAY_COUNT(sShopBuyMenuBgTemplates));
    SetBgTilemapBuffer(2, sShopData->tilemapBuffers[0]);
    SetBgTilemapBuffer(3, sShopData->tilemapBuffers[1]);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    SetGpuReg(REG_OFFSET_BG1HOFS, 0);
    SetGpuReg(REG_OFFSET_BG1VOFS, 0);
    SetGpuReg(REG_OFFSET_BG2HOFS, 0);
    SetGpuReg(REG_OFFSET_BG2VOFS, 0);
    SetGpuReg(REG_OFFSET_BG3HOFS, 0);
    SetGpuReg(REG_OFFSET_BG3VOFS, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);
    ShowBg(3);
}

#define DEFAULT_MENU_TILE_OFFSET 9
static void BuyMenuDecompressBgGraphics(void)
{
    u32 i = sMartInfo.sellerId;
    if (gSpecialVar_LastTalked == 0 || i == SELLER_NONE)
    {
        if (IsMartTypeCasino(sMartInfo.martType))
            DecompressAndCopyTileDataToVram(2, sNewShopMenu_DefaultMenuCoinGfx, 0, DEFAULT_MENU_TILE_OFFSET, 0);
        else if (IsMartTypeBp(sMartInfo.martType))
            DecompressAndCopyTileDataToVram(2, sNewShopMenu_DefaultMenuBpGfx, 0, DEFAULT_MENU_TILE_OFFSET, 0);
        else // if (IsMartTypeMoney(sMartInfo.martType))
            DecompressAndCopyTileDataToVram(2, sNewShopMenu_DefaultMenuGfx, 0, DEFAULT_MENU_TILE_OFFSET, 0);
        DecompressAndCopyTileDataToVram(2, sNewShopMenu_DefaultScrollGfx, 0, 0, 0);
        LZDecompressWram(sNewShopMenu_DefaultMenuTilemap, sShopData->tilemapBuffers[0]);
        LZDecompressWram(sNewShopMenu_DefaultScrollTilemap, sShopData->tilemapBuffers[1]);
        LoadCompressedPalette(sNewShopMenu_DefaultMenuPal, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
        LoadCompressedPalette(sNewShopMenu_DefaultMenuPal, BG_PLTT_ID(1), PLTT_SIZE_4BPP);
        return;
    }
    DecompressAndCopyTileDataToVram(2, Shop_GetSellerGraphics(SELLER_GFX_MENU_GFX), 0, sSellers[i].menuTileOffset != 0 ? sSellers[i].menuTileOffset : DEFAULT_MENU_TILE_OFFSET, 0);
    DecompressAndCopyTileDataToVram(2, Shop_GetSellerGraphics(SELLER_GFX_SCROLL_GFX), 0, 0, 0);

    LZDecompressWram(Shop_GetSellerGraphics(SELLER_GFX_MENU_MAP), sShopData->tilemapBuffers[0]);
    LZDecompressWram(Shop_GetSellerGraphics(SELLER_GFX_SCROLL_MAP), sShopData->tilemapBuffers[1]);

    LoadCompressedPalette(Shop_GetSellerGraphics(SELLER_GFX_MENU_PAL), BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    LoadCompressedPalette(Shop_GetSellerGraphics(SELLER_GFX_SCROLL_PAL), BG_PLTT_ID(1), PLTT_SIZE_4BPP);
}

static inline void SpawnWindow(u8 winId)
{
    FillWindowPixelBuffer(winId, 0);
    PutWindowTilemap(winId);
    CopyWindowToVram(winId, COPYWIN_FULL);
}

static inline const u8 *BuyMenuGetItemName(u32 id)
{
    if (IsMartTypeItem(sMartInfo.martType))
        return ItemId_GetName(sMartInfo.itemList[id]);
    else if (IsMartTypeMove(sMartInfo.martType))
        return GetMoveName(sMartInfo.itemList[id]);
    #ifdef MUDSKIP_OUTFIT_SYSTEM
    else if (IsMartTypeOutfit(sMartInfo.martType))
        return gOutfits[sMartInfo.itemList[id]].name;
    #endif // MUDSKIP_OUTFIT_SYSTEM
    else // if (IsMartTypeDecor(sMartInfo.martType))
        return gDecorations[sMartInfo.itemList[id]].name;
}

static inline const u8 *BuyMenuGetItemDesc(u32 id)
{
    if (IsMartTypeItem(sMartInfo.martType))
        return ItemId_GetDescription(sMartInfo.itemList[id]);
    else if (IsMartTypeMove(sMartInfo.martType))
        return GetMoveDescription(sMartInfo.itemList[id]);
    #ifdef MUDSKIP_OUTFIT_SYSTEM
    else if (IsMartTypeOutfit(sMartInfo.martType))
        return gOutfits[sMartInfo.itemList[id]].desc;
    #endif // MUDSKIP_OUTFIT_SYSTEM
    else // if (IsMartTypeDecor(sMartInfo.martType))
        return gDecorations[sMartInfo.itemList[id]].description;
}

static inline u32 BuyMenuGetItemPrice(u32 id)
{
    switch (sMartInfo.martType)
    {
        case MART_TYPE_NORMAL:
        case MART_TYPE_BUY_ONLY:
        default:
            return ItemId_GetPrice(sMartInfo.itemList[id]);
        case MART_TYPE_VARIABLE:
        case MART_TYPE_BUY_VARIABLE:
            return SearchItemListForPrice(sMartInfo.itemList[id]);
        case MART_TYPE_CASINO:
            return ItemId_GetCoinPrice(sMartInfo.itemList[id]);
        case MART_TYPE_BP_ITEMS:
            return ItemId_GetBpPrice(sMartInfo.itemList[id]);
        case MART_TYPE_BP_MOVES:
            return GetMoveBpPrice(sMartInfo.itemList[id]);
        case MART_TYPE_MOVES:
            return GetMovePrice(sMartInfo.itemList[id]);
    #ifdef MUDSKIP_OUTFIT_SYSTEM
        case MART_TYPE_OUTFIT:
            return GetOutfitPrice(sMartInfo.itemList[id]);
    #endif // MUDSKIP_OUTFIT_SYSTEM
        case MART_TYPE_DECOR:
        case MART_TYPE_DECOR2:
            return gDecorations[sMartInfo.itemList[id]].price;
    }
}

static void LoadSellerMugshot(const u8 *gfx, const u16 *pal)
{
    if (IsMartTypeMove(sMartInfo.martType)) // Why did i do this again?
        return;
    CopyToWindowPixelBuffer(WIN_MUGSHOT, gfx, 4992, 0);
    LoadPalette(pal, BG_PLTT_ID(2), PLTT_SIZE_4BPP);
    PutWindowTilemap(WIN_MUGSHOT);
    CopyWindowToVram(WIN_MUGSHOT, COPYWIN_FULL);
}

// credit to Vexx on PRET Discord
static void FormatTextByWidth(u8 *result, s32 maxWidth, u8 fontId, const u8 *str, s16 letterSpacing)
{
    u8 *end, *ptr, *curLine, *lastSpace;

    end = result;
    // copy string, replacing all space and line breaks with EOS
    while (*str != EOS) 
    {
        if (*str == CHAR_SPACE || *str == CHAR_NEWLINE) 
            *end = EOS;
        else 
            *end = *str;

        end++;
        str++;
    }
    *end = EOS; // now end points to the true end of the string

    ptr = result;
    curLine = ptr;

    while (*ptr != EOS)
        ptr++;
    // now ptr is the first EOS char

    while (ptr != end) 
    {
        // all the EOS chars (except *end) must be replaced by either ' ' or '\n'
        lastSpace = ptr++; // this points at the EOS

        // check that adding the next word this line still fits
        *lastSpace = CHAR_SPACE;
        if (GetStringWidth(fontId, curLine, letterSpacing) > maxWidth) 
        {
            *lastSpace = CHAR_NEWLINE;

            curLine = ptr;
        }

        while (*ptr != EOS) 
            ptr++;
        // now ptr is the next EOS char
    }
}

static void BuyMenuInitWindows(void)
{
    const u8 *name = BuyMenuGetItemName(0), *desc = BuyMenuGetItemDesc(0);
    u32 price = BuyMenuGetItemPrice(0);

    InitWindows(sShopBuyMenuWindowTemplates);
    DeactivateAllTextPrinters();
    LoadUserWindowBorderGfx(WIN_MONEY, 1, BG_PLTT_ID(13));
    LoadMessageBoxGfx(WIN_MONEY, 0xA, BG_PLTT_ID(14));

    SpawnWindow(WIN_MONEY);
    SpawnWindow(WIN_MUGSHOT);
    SpawnWindow(WIN_ITEM_DESCRIPTION);

    BuyMenuPrint(WIN_MULTI, name, 0, 0, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
    if (!IsMartTypeMove(sMartInfo.martType))
        BuyMenuPrint(WIN_MULTI, COMPOUND_STRING("PRICE"), 0, 2*8, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
    if (IsMartTypeItem(sMartInfo.martType))
        BuyMenuPrint(WIN_MULTI, COMPOUND_STRING("IN BAG"), 0, 4*8, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);

    if (IsMartTypeItem(sMartInfo.martType))
    {
        u32 item = sMartInfo.itemList[0];
        u16 quantity = CountTotalItemQuantityInBag(item);
        if (ItemId_GetPocket(item) == POCKET_TM_HM)
        {
            const u8 *move = GetMoveName(ItemIdToBattleMoveId(item));
            FormatTextByWidth(gStringVar2, 80, FONT_SMALL, ItemId_GetDescription(sMartInfo.itemList[0]), 0);
            desc = gStringVar2;
            BuyMenuPrint(WIN_MULTI, move, GetStringRightAlignXOffset(FONT_SMALL, move, 80), 0, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
        }

        if (ItemId_GetImportance(item) && (CheckBagHasItem(item, 1) || CheckPCHasItem(item, 1)))
            BuyMenuPrint(WIN_MULTI, gText_SoldOut, GetStringRightAlignXOffset(FONT_SMALL, gText_SoldOut, 80), 2*8, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
        else
            PrintMoneyLocal(WIN_MULTI, 41, 2*8, price, 84, COLORID_NORMAL, FALSE);

        ConvertIntToDecimalStringN(gStringVar3, quantity, STR_CONV_MODE_RIGHT_ALIGN, 4);
        BuyMenuPrint(WIN_MULTI, gStringVar3, GetStringRightAlignXOffset(FONT_SMALL, gStringVar3, 80), 4*8, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
    }
    else if (IsMartTypeMove(sMartInfo.martType))
    {
        u32 move = sMartInfo.itemList[0];
        BuyMenuPrint(WIN_MULTI, gTypesInfo[GetMoveType(move)].name, 0, 2*8, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
        PrintMoveStatsLocal(WIN_MULTI, 0, 4*8, 84, COLORID_NORMAL, move);
        PrintMoneyLocal(WIN_MULTI, 41, 2*8, price, 84, COLORID_NORMAL, FALSE);
    }
    else if (IsMartTypeOutfit(sMartInfo.martType))
    {
        u32 outfit = sMartInfo.itemList[0];
        if (GetOutfitStatus(outfit))
            BuyMenuPrint(WIN_MULTI, gText_SoldOut, GetStringRightAlignXOffset(FONT_SMALL, gText_SoldOut, 80), 2*8, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
        else
            PrintMoneyLocal(WIN_MULTI, 41, 2*8, price, 84, COLORID_NORMAL, FALSE);
    }
    else // if (IsMartTypeDecor(sMartInfo.martType))
    {
        PrintMoneyLocal(WIN_MULTI, 41, 2*8, price, 84, COLORID_NORMAL, FALSE);
    }
    CopyWindowToVram(WIN_MULTI, COPYWIN_FULL);
    FillWindowPixelBuffer(WIN_ITEM_DESCRIPTION, PIXEL_FILL(0));
    FormatTextByWidth(gStringVar2, 80, FONT_SMALL, desc, 0);
    BuyMenuPrint(WIN_ITEM_DESCRIPTION, gStringVar2, 4, 0, TEXT_SKIP_DRAW, COLORID_NORMAL, TRUE);
    LoadSellerMugshot(Shop_GetSellerGraphics(SELLER_GFX_MUGSHOT_GFX), Shop_GetSellerGraphics(SELLER_GFX_MUGSHOT_PAL));
}

static bool32 LoadSellerCursor(void)
{
    u32 i = sMartInfo.sellerId;
    struct SpriteSheet gfx = {
        .data = Shop_GetSellerGraphics(SELLER_GFX_CURSOR_GFX),
        .size = 64*64*2,
        .tag = GFXTAG_CURSOR,
    };
    struct CompressedSpritePalette pal = {
        .data = Shop_GetSellerGraphics(SELLER_GFX_CURSOR_PAL),
        .tag = PALTAG_CURSOR
    };

    if (gSpecialVar_LastTalked == 0 || i == 0)
    {
        LoadSpriteSheet(&sDefaultCursor_SpriteSheet);
        LoadCompressedSpritePalette(&sDefaultCursor_SpritePalette);
        return FALSE;
    }

    LoadSpriteSheet(&gfx);
    LoadCompressedSpritePalette(&pal);
    return TRUE;
}

static bool8 BuyMenuInitSprites(void)
{
    switch (sShopData->gfxLoadState)
    {
    case 0:
        LoadSellerCursor();
        sShopData->gfxLoadState++;
        break;
    case 1:
        sShopData->cursorSpriteId = CreateSprite(&sCursor_SpriteTemplate, CURSOR_START_X, CURSOR_START_Y, 0);
        StartSpriteAnim(&gSprites[sShopData->cursorSpriteId], 0);
        sShopData->gfxLoadState++;
        break;
    case 2:
        sShopData->gfxLoadState = 0;
        return TRUE;
        break;
    }
    return FALSE;
}

static void BuyMenuPrint(u8 windowId, const u8 *text, u8 x, u8 y, s8 speed, u8 colorSet, bool32 copy)
{
    AddTextPrinterParameterized4(windowId, FONT_SMALL, x, y, 0, 0, sShopBuyMenuTextColors[colorSet], speed, text);
    PutWindowTilemap(windowId);
    if (copy)
        CopyWindowToVram(windowId, COPYWIN_FULL);
}

const u8 sText_CoinsVar1[] = _("{STR_VAR_1}");
const u8 sText_PokedollarVar1[] = _("¥{STR_VAR_1}");
const u8 sText_BattlePointsVar1[] = _("BP {STR_VAR_1}");

static void PrintMoneyLocal(u8 windowId, u8 x, u8 y, u32 amount, u8 width, u8 colorIdx, bool32 copy)
{
    u8 *txtPtr;
    //s32 strLength;
    //s32 temp;
    u32 numDigits = CountDigits(amount);
    u32 maxDigits = (numDigits > 7) ? MAX_MONEY_DIGITS: 7;

    if (IsMartTypeBp(sMartInfo.martType))
        maxDigits = 5;

    ConvertIntToDecimalStringN(gStringVar1, amount, STR_CONV_MODE_RIGHT_ALIGN, maxDigits);

    txtPtr = gStringVar4;

    if (IsMartTypeCasino(sMartInfo.martType))
        StringExpandPlaceholders(txtPtr, sText_CoinsVar1);
    else if (IsMartTypeBp(sMartInfo.martType))
        StringExpandPlaceholders(txtPtr, sText_BattlePointsVar1);
    else
        StringExpandPlaceholders(txtPtr, gText_PokedollarVar1);
    //temp = GetStringRightAlignXOffset(FONT_NORMAL, txtPtr, width);
    if (numDigits > 7)
        PrependFontIdToFit(gStringVar4, txtPtr + 1 + numDigits, FONT_SMALL, width);
    AddTextPrinterParameterized4(windowId, FONT_SMALL, x, y, 0, 0, sShopBuyMenuTextColors[colorIdx], TEXT_SKIP_DRAW, gStringVar4);
    PutWindowTilemap(windowId);
    if (copy)
        CopyWindowToVram(windowId, COPYWIN_FULL);
}

const u8 sText_MoveStatsShop[] = _("Pwr{FONT_SMALL}{STR_VAR_1}{FONT_SMALL_NARROWER}{CLEAR_TO 31}Acc{FONT_SMALL}{STR_VAR_2}{FONT_SMALL_NARROWER}{CLEAR_TO 62}PP{FONT_SMALL}{STR_VAR_3}");
const u8 sText_MoveStatsNone[] = _("  -");

static void PrintMoveStatsLocal(u8 windowId, u8 x, u8 y, u8 width, u8 colorIdx, u32 move)
{
    u8 *txtPtr;

    u8 power = GetMovePower(move);
    if (power)
        ConvertIntToDecimalStringN(gStringVar1, power, STR_CONV_MODE_RIGHT_ALIGN, 3);
    else
        StringCopy(gStringVar1, sText_MoveStatsNone);

    u8 accuracy = GetMoveAccuracy(move);
    if (accuracy)
        ConvertIntToDecimalStringN(gStringVar2, accuracy, STR_CONV_MODE_RIGHT_ALIGN, 3);
    else
        StringCopy(gStringVar2, sText_MoveStatsNone);
    ConvertIntToDecimalStringN(gStringVar3, GetMovePP(move), STR_CONV_MODE_RIGHT_ALIGN, 2);

    txtPtr = gStringVar4;

    StringExpandPlaceholders(txtPtr, sText_MoveStatsShop);
    AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROWER, x, y, 0, 0, sShopBuyMenuTextColors[colorIdx], TEXT_SKIP_DRAW, gStringVar4);
    PutWindowTilemap(windowId);
}

static void BuyMenuDrawGraphics(void)
{
    if (IsMartTypeCasino(sMartInfo.martType))
        PrintMoneyLocal(WIN_MONEY, 37, 0, GetCoins(), 84, COLORID_NORMAL, TRUE);
    else if (IsMartTypeBp(sMartInfo.martType))
        PrintMoneyLocal(WIN_MONEY, 37, 0, GetBattlePoints(), 84, COLORID_NORMAL, TRUE);
    else // if (IsMartTypeMoney(sMartInfo.martType))
        PrintMoneyLocal(WIN_MONEY, 37, 0, GetMoney(&gSaveBlock1Ptr->money), 84, COLORID_NORMAL, TRUE);
    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    ScheduleBgCopyTilemapToVram(2);
    ScheduleBgCopyTilemapToVram(3);
}

static void UpdateItemData(void)
{
    const u8 strip[] = _("-");
    if (GridMenu_SelectedIndex(sShopData->gridItems) >= sMartInfo.itemCount)
        return;

    FillWindowPixelRect(WIN_MULTI, PIXEL_FILL(0), 0, 0, 84, 16);
    if (IsMartTypeMove(sMartInfo.martType))
        FillWindowPixelRect(WIN_MULTI, PIXEL_FILL(0), 0, 1*8, 84, 40);
    else
        FillWindowPixelRect(WIN_MULTI, PIXEL_FILL(0), 34, 1*8, 84, 40);
    if (sMartInfo.itemList[GridMenu_SelectedIndex(sShopData->gridItems)] == ITEM_NONE)
    {
        FillWindowPixelRect(WIN_MULTI, PIXEL_FILL(0), 0, 0, 84, 16);
        BuyMenuPrint(WIN_MULTI, COMPOUND_STRING("Return to Field"), 0, 0, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
        if (!IsMartTypeMove(sMartInfo.martType))
            BuyMenuPrint(WIN_MULTI, strip, GetStringRightAlignXOffset(FONT_SMALL, strip, 80), 2*8, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
        if (IsMartTypeItem(sMartInfo.martType))
            BuyMenuPrint(WIN_MULTI, strip, GetStringRightAlignXOffset(FONT_SMALL, strip, 80), 4*8, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);

        FillWindowPixelBuffer(WIN_ITEM_DESCRIPTION, PIXEL_FILL(0));
        BuyMenuPrint(WIN_ITEM_DESCRIPTION, gText_QuitShopping, 4, 0, TEXT_SKIP_DRAW, COLORID_NORMAL, TRUE);
    }
    else
    {
        u32 i = GridMenu_SelectedIndex(sShopData->gridItems);
        u32 item = sMartInfo.itemList[i];
        const u8 *desc = BuyMenuGetItemDesc(i);
        BuyMenuPrint(WIN_MULTI, BuyMenuGetItemName(i), 0, 0, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);

        if (IsMartTypeItem(sMartInfo.martType))
        {
            u16 quantity = CountTotalItemQuantityInBag(item);
            if (ItemId_GetPocket(item) == POCKET_TM_HM && item != ITEM_NONE)
            {
                const u8 *move = GetMoveName(ItemIdToBattleMoveId(item));
                FormatTextByWidth(gStringVar2, 80, FONT_SMALL, ItemId_GetDescription(sMartInfo.itemList[i]), 0);
                desc = gStringVar2;
                BuyMenuPrint(WIN_MULTI, move, GetStringRightAlignXOffset(FONT_SMALL, move, 80), 0, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
            }

            if (ItemId_GetImportance(item) && (CheckBagHasItem(item, 1) || CheckPCHasItem(item, 1)))
                BuyMenuPrint(WIN_MULTI, gText_SoldOut, GetStringRightAlignXOffset(FONT_SMALL, gText_SoldOut, 80), 2*8, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
            else
                PrintMoneyLocal(WIN_MULTI, 41, 2*8, BuyMenuGetItemPrice(i), 84, COLORID_NORMAL, FALSE);

            ConvertIntToDecimalStringN(gStringVar3, quantity, STR_CONV_MODE_RIGHT_ALIGN, 4);
            BuyMenuPrint(WIN_MULTI, gStringVar3, GetStringRightAlignXOffset(FONT_SMALL, gStringVar3, 80), 4*8, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
        }
        else if (IsMartTypeMove(sMartInfo.martType))
        {
            u32 move = item;
            BuyMenuPrint(WIN_MULTI, gTypesInfo[GetMoveType(move)].name, 0, 2*8, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
            PrintMoveStatsLocal(WIN_MULTI, 0, 4*8, 84, COLORID_NORMAL, move);
            PrintMoneyLocal(WIN_MULTI, 41, 2*8, BuyMenuGetItemPrice(i), 84, COLORID_NORMAL, FALSE);
        }
        else if (IsMartTypeOutfit(sMartInfo.martType))
        {
            u32 outfit = item;
            if (GetOutfitStatus(outfit))
                BuyMenuPrint(WIN_MULTI, gText_SoldOut, GetStringRightAlignXOffset(FONT_SMALL, gText_SoldOut, 80), 2*8, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
            else
                PrintMoneyLocal(WIN_MULTI, 41, 2*8, BuyMenuGetItemPrice(i), 84, COLORID_NORMAL, FALSE);
        }
        else // if (IsMartTypeDecor(sMartInfo.martType))
        {
            PrintMoneyLocal(WIN_MULTI, 41, 2*8, BuyMenuGetItemPrice(i), 84, COLORID_NORMAL, FALSE);
        }
        FillWindowPixelBuffer(WIN_ITEM_DESCRIPTION, PIXEL_FILL(0));
        FormatTextByWidth(gStringVar2, 80, FONT_SMALL, desc, 0);
        BuyMenuPrint(WIN_ITEM_DESCRIPTION, gStringVar2, 4, 0, TEXT_SKIP_DRAW, COLORID_NORMAL, TRUE);
    }
    CopyWindowToVram(WIN_MULTI, COPYWIN_FULL);
}

static void UpdateCursorPosition(void)
{
    u32 row = sShopData->gridItems->selectedItem / sShopData->gridItems->maxCols;
    u32 col = sShopData->gridItems->selectedItem % sShopData->gridItems->maxCols;
    // 8 because tile is 8px wide/tall, 5 because gridbox is 4 tiles plus 1 empty space
    u32 x = CURSOR_START_X + (col * (8 * 5));
    u32 y = CURSOR_START_Y + (row * (8 * 5));
    gSprites[sShopData->cursorSpriteId].x = x;
    gSprites[sShopData->cursorSpriteId].y = y;
}

static void BuyMenuDisplayMessage(u8 taskId, const u8 *str, TaskFunc nextFunc)
{
    StringExpandPlaceholders(gStringVar4, str);
    BuyMenuPrint(WIN_ITEM_DESCRIPTION, gStringVar4, 4, 0, TEXT_SKIP_DRAW, COLORID_NORMAL, TRUE);
    gTasks[taskId].func = nextFunc;
}

static void Task_BuyMenuTryBuyingItem(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u32 cost = BuyMenuGetItemPrice(GridMenu_SelectedIndex(sShopData->gridItems));
    const u8 *str;
    if (IsMartTypeMoneyItem(sMartInfo.martType))
        sShopData->totalCost = (cost >> IsPokeNewsActive(POKENEWS_SLATEPORT));
    else
        sShopData->totalCost = cost;

    FillWindowPixelBuffer(WIN_ITEM_DESCRIPTION, PIXEL_FILL(0));

    if (IsMartTypeItem(sMartInfo.martType))
    {
        if (ItemId_GetImportance(sShopData->currentItemId) && (CheckBagHasItem(sShopData->currentItemId, 1) || CheckPCHasItem(sShopData->currentItemId, 1)))
        {
            PlaySE(SE_BOO);
            str = Shop_GetSellerMessage(SELLER_MSG_BUY_FAIL_SOLD_OUT);
            BuyMenuDisplayMessage(taskId, str, Task_ReturnToItemListWaitMsg);
            return;
        }
    }

    if (IsMartTypeOutfit(sMartInfo.martType))
    {
        if (GetOutfitStatus(sShopData->currentItemId))
        {
            PlaySE(SE_BOO);
            str = Shop_GetSellerMessage(SELLER_MSG_BUY_FAIL_SOLD_OUT);
            BuyMenuDisplayMessage(taskId, str, Task_ReturnToItemListWaitMsg);
            return;
        }
    }

    if (!IsEnoughMoney(&gSaveBlock1Ptr->money, sShopData->totalCost) && IsMartTypeMoney(sMartInfo.martType))
    {
        PlaySE(SE_BOO);
        str = Shop_GetSellerMessage(SELLER_MSG_BUY_FAIL_NO_MONEY);
        BuyMenuDisplayMessage(taskId, str, Task_ReturnToItemListWaitMsg);
    }
    else if (!IsEnoughCoins(sShopData->totalCost) && IsMartTypeCasino(sMartInfo.martType))
    {
        PlaySE(SE_BOO);
        str = Shop_GetSellerMessage(SELLER_MSG_BUY_FAIL_NO_COINS);
        BuyMenuDisplayMessage(taskId, str, Task_ReturnToItemListWaitMsg);
    }
    else if (!IsEnoughBattlePoints(sShopData->totalCost) && IsMartTypeBp(sMartInfo.martType))
    {
        PlaySE(SE_BOO);
        str = Shop_GetSellerMessage(SELLER_MSG_BUY_FAIL_NO_BP);
        BuyMenuDisplayMessage(taskId, str, Task_ReturnToItemListWaitMsg);
    }
    else
    {
        if (IsMartTypeCasino(sMartInfo.martType))
            str = Shop_GetSellerMessage(SELLER_MSG_BUY_COIN_PROMPT);
        else if (IsMartTypeBp(sMartInfo.martType))
            str = Shop_GetSellerMessage(SELLER_MSG_BUY_BP_PROMPT);
        else // if (IsMartTypeMoney(sMartInfo.martType))
            str = Shop_GetSellerMessage(SELLER_MSG_BUY_PROMPT);
        PlaySE(SE_SELECT);

        if (IsMartTypeItem(sMartInfo.martType))
        {
            CopyItemName(sShopData->currentItemId, gStringVar1);
            if (ItemId_GetImportance(sShopData->currentItemId))
            {
                if (IsMartTypeMoney(sMartInfo.martType))
                {
                    u32 price = BuyMenuGetItemPrice(GridMenu_SelectedIndex(sShopData->gridItems));
                    ConvertIntToDecimalStringN(gStringVar2, sShopData->totalCost, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
                    tItemCount = 1;
                    sShopData->totalCost = (price >> IsPokeNewsActive(POKENEWS_SLATEPORT)) * tItemCount;
                    BuyMenuDisplayMessage(taskId, str, BuyMenuConfirmPurchase);
                }
                else
                {
                    ConvertIntToDecimalStringN(gStringVar2, sShopData->totalCost, STR_CONV_MODE_LEFT_ALIGN, 6);
                    tItemCount = 1;
                    BuyMenuDisplayMessage(taskId, str, BuyMenuConfirmPurchase);
                }
            }
            else
            {
                str = Shop_GetSellerMessage(SELLER_MSG_BUY_PROMPT_PLURAL);
                BuyMenuDisplayMessage(taskId, str, Task_BuyHowManyDialogueInit);
            }
        }
        else if (IsMartTypeMove(sMartInfo.martType))
        {
            StringCopy(gStringVar1, GetMoveName(sShopData->currentItemId));
            ConvertIntToDecimalStringN(gStringVar2, sShopData->totalCost, STR_CONV_MODE_LEFT_ALIGN, 6);
            //if (IsMartTypeBp(sMartInfo.martType))
                //StringExpandPlaceholders(gStringVar4, sText_YouWantTeachVar1ThatllBeVar2BP);
            //else // if (IsMartTypeMoney(sMartInfo.martType))
                //StringExpandPlaceholders(gStringVar4, sText_YouWantTeachVar1ThatllBeVar2);
            BuyMenuDisplayMessage(taskId, gStringVar4, BuyMenuConfirmPurchase);
        }
        #ifdef MUDSKIP_OUTFIT_SYSTEM
        else if (IsMartTypeOutfit(sMartInfo.martType))
        {
            BufferOutfitStrings(gStringVar1, sShopData->currentItemId, OUTFIT_BUFFER_NAME);
            ConvertIntToDecimalStringN(gStringVar2, sShopData->totalCost, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
            str = Shop_GetSellerMessage(SELLER_MSG_BUY_OUTFIT_PROMPT);
            BuyMenuDisplayMessage(taskId, str, BuyMenuConfirmPurchase);
        }
        #endif // MUDSKIP_OUTFIT_SYSTEM
        else // if (IsMartTypeDecor(sMartInfo.martType))
        {
            StringCopy(gStringVar1, gDecorations[sShopData->currentItemId].name);
            ConvertIntToDecimalStringN(gStringVar2, sShopData->totalCost, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
            BuyMenuDisplayMessage(taskId, str, BuyMenuConfirmPurchase);
        }
    }
}

static inline void ExitBuyMenu(u8 taskId)
{
    if (CanMartTypeReturnToShopMenu(sMartInfo.martType))
        gFieldCallback = MapPostLoadHook_ReturnToShopMenu;
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_ExitBuyMenu;
}

static void Task_BuyMenu(u8 taskId)
{
    GridMenu_HandleInput(sShopData->gridItems);
    if (JOY_NEW(B_BUTTON))
    {
        ExitBuyMenu(taskId);
    }
    else if (JOY_NEW(A_BUTTON))
    {
        sShopData->currentItemId = sMartInfo.itemList[GridMenu_SelectedIndex(sShopData->gridItems)];
        if (sShopData->currentItemId == ITEM_NONE)
        {
            ExitBuyMenu(taskId);
        }
        else
        {
            gTasks[taskId].func = Task_BuyMenuTryBuyingItem;
        }

    }
    UpdateCursorPosition();
}

static void Task_BuyHowManyDialogueInit(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    u16 maxQuantity;

    tItemCount = 1;
    BuyMenuPrintItemQuantityAndPrice(taskId);
    ScheduleBgCopyTilemapToVram(0);

    // Avoid division by zero in-case something costs 0 pokedollars.
    if (sShopData->totalCost == 0)
        maxQuantity = MAX_BAG_ITEM_CAPACITY;
    else if (IsMartTypeCasino(sMartInfo.martType))
        maxQuantity = GetCoins() / sShopData->totalCost;
    else if (IsMartTypeBp(sMartInfo.martType))
        maxQuantity = GetBattlePoints() / sShopData->totalCost;
    else // if (IsMartTypeMoney(sMartInfo.martType))
        maxQuantity = GetMoney(&gSaveBlock1Ptr->money) / sShopData->totalCost;

    if (maxQuantity > MAX_BAG_ITEM_CAPACITY)
        sShopData->maxQuantity = MAX_BAG_ITEM_CAPACITY;
    else
        sShopData->maxQuantity = maxQuantity;

    gTasks[taskId].func = Task_BuyHowManyDialogueHandleInput;
}

static void Task_BuyHowManyDialogueHandleInput(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (AdjustQuantityAccordingToDPadInput(&tItemCount, sShopData->maxQuantity) == TRUE)
    {
        u32 price = BuyMenuGetItemPrice(GridMenu_SelectedIndex(sShopData->gridItems));
        if (IsMartTypeMoneyItem(sMartInfo.martType))
            sShopData->totalCost = (price >> IsPokeNewsActive(POKENEWS_SLATEPORT)) * tItemCount;
        else
            sShopData->totalCost = price * tItemCount;
        BuyMenuPrintItemQuantityAndPrice(taskId);
    }
    else
    {
        if (JOY_NEW(A_BUTTON))
        {
            PlaySE(SE_SELECT);
            ClearWindowTilemap(WIN_QUANTITY_PRICE);
            CopyItemName(sShopData->currentItemId, gStringVar1);
            ConvertIntToDecimalStringN(gStringVar2, tItemCount, STR_CONV_MODE_LEFT_ALIGN, MAX_ITEM_DIGITS);
            ConvertIntToDecimalStringN(gStringVar3, sShopData->totalCost, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
            FillWindowPixelBuffer(WIN_ITEM_DESCRIPTION, PIXEL_FILL(0));
            if (tItemCount >= 2)
                CopyItemNameHandlePlural(sShopData->currentItemId, gStringVar1, tItemCount);
            else
                CopyItemName(sShopData->currentItemId, gStringVar1);

            if (IsMartTypeCasino(sMartInfo.martType))
                BuyMenuDisplayMessage(taskId, Shop_GetSellerMessage(SELLER_MSG_BUY_COIN_CONFIRM), BuyMenuConfirmPurchase);
            else if (IsMartTypeBp(sMartInfo.martType))
                BuyMenuDisplayMessage(taskId, Shop_GetSellerMessage(SELLER_MSG_BUY_BP_CONFIRM), BuyMenuConfirmPurchase);
            else // if (IsMartTypeMoney(sMartInfo.martType))
                BuyMenuDisplayMessage(taskId, Shop_GetSellerMessage(SELLER_MSG_BUY_CONFIRM), BuyMenuConfirmPurchase);
        }
        else if (JOY_NEW(B_BUTTON))
        {
            PlaySE(SE_SELECT);
            ClearWindowTilemap(WIN_QUANTITY_PRICE);
            BuyMenuReturnToItemList(taskId);
        }
    }
}

static void BuyMenuConfirmPurchase(u8 taskId)
{
    CreateYesNoMenuWithCallbacks(taskId, &sShopBuyMenuYesNoWindowTemplates, 1, 0, 0, 1, 13, &sShopPurchaseYesNoFuncs);
}

static void BuyMenuTryMakePurchase(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    FillWindowPixelBuffer(WIN_ITEM_DESCRIPTION, PIXEL_FILL(0));
    if (IsMartTypeItem(sMartInfo.martType))
    {
        const u8 *str;
        if (AddBagItem(sShopData->currentItemId, tItemCount) == TRUE)
        {
            str = Shop_GetSellerMessage(SELLER_MSG_BUY_SUCCESS);
            GetSetItemObtained(sShopData->currentItemId, FLAG_SET_ITEM_OBTAINED);
            if (IsMartTypeBp(sMartInfo.martType))
                BuyMenuDisplayMessage(taskId, str, BuyMenuSubtractBp);
            else if (IsMartTypeCasino(sMartInfo.martType))
                BuyMenuDisplayMessage(taskId, str, BuyMenuSubtractCoins);
            else // if (IsMartTypeMoney(sMartInfo.martType))
                BuyMenuDisplayMessage(taskId, str, BuyMenuSubtractMoney);
            RecordItemPurchase(taskId);
        }
        else
        {
            str = Shop_GetSellerMessage(SELLER_MSG_BUY_FAIL_NO_SPACE);
            BuyMenuDisplayMessage(taskId, str, Task_ReturnToItemListWaitMsg);
        }
    }
    else if (IsMartTypeMove(sMartInfo.martType))
    {
        // all this will be wiped out when going to the party menu, so store this in variables
        gSpecialVar_0x8005 = sShopData->currentItemId;
        gSpecialVar_0x8008 = sShopData->totalCost;
        gSpecialVar_0x8009 = sMartInfo.martType;
        StringCopy(gStringVar1, GetMoveName(sShopData->currentItemId));
        //StringExpandPlaceholders(gStringVar2, sText_WhichPokemon);
        BuyMenuDisplayMessage(taskId, gStringVar2, BuyMenuStartTutor);
    }
    #ifdef MUDSKIP_OUTFIT_SYSTEM
    else if (IsMartTypeOutfit(sMartInfo.martType))
    {
        UnlockOutfit(sShopData->currentItemId);
        BuyMenuDisplayMessage(taskId, gText_HereIsTheOutfitThankYou, BuyMenuSubtractMoney);
    }
    #endif // MUDSKIP_OUTFIT_SYSTEM
    else // if (IsMartTypeDecor(sMartInfo.martType))
    {
        if (DecorationAdd(sShopData->currentItemId))
        {
            const u8 *str = sText_ThankYouIllSendItHome;
            if (sMartInfo.martType == MART_TYPE_DECOR2)
            {
                str = sText_ThanksIllSendItHome;
            }

            BuyMenuDisplayMessage(taskId, str, BuyMenuSubtractMoney);
        }
        else
        {
            BuyMenuDisplayMessage(taskId, sText_SpaceForVar1Full, Task_ReturnToItemListWaitMsg);
        }
    }
}

static void BuyMenuSubtractMoney(u8 taskId)
{
    IncrementGameStat(GAME_STAT_SHOPPED);
    RemoveMoney(&gSaveBlock1Ptr->money, sShopData->totalCost);
    PlaySE(SE_RG_SHOP);
    FillWindowPixelBuffer(WIN_MONEY, PIXEL_FILL(0));
    PrintMoneyLocal(WIN_MONEY, 37, 0, GetMoney(&gSaveBlock1Ptr->money), 84, COLORID_NORMAL, TRUE);

    gTasks[taskId].func = Task_ReturnToItemListAfterItemPurchase;
}

static void BuyMenuSubtractCoins(u8 taskId)
{
    IncrementGameStat(GAME_STAT_SHOPPED);
    RemoveCoins(sShopData->totalCost);
    PlaySE(SE_RG_SHOP);
    FillWindowPixelBuffer(WIN_MONEY, PIXEL_FILL(0));
    PrintMoneyLocal(WIN_MONEY, 37, 0, GetCoins(), 84, COLORID_NORMAL, TRUE);

    gTasks[taskId].func = Task_ReturnToItemListAfterItemPurchase;
}

static void BuyMenuSubtractBp(u8 taskId)
{
    IncrementGameStat(GAME_STAT_SHOPPED);
    RemoveBattlePoints(sShopData->totalCost);
    PlaySE(SE_RG_SHOP);
    FillWindowPixelBuffer(WIN_MONEY, PIXEL_FILL(0));
    PrintMoneyLocal(WIN_MONEY, 37, 0, GetBattlePoints(), 84, COLORID_NORMAL, TRUE);

    gTasks[taskId].func = Task_ReturnToItemListAfterItemPurchase;
}

// This is hacky but this'd do it
static void BuyMenuStartTutor(u8 taskId)
{
    if (JOY_NEW(A_BUTTON) || JOY_NEW(B_BUTTON))
    {
        FadeScreen(FADE_TO_BLACK, 0);
        gTasks[taskId].func = Task_BuyMenuTutor;
    }
}

static void Task_BuyMenuTutor(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        BuyMenuFreeMemory();
        ChooseMonForMoveTutorShop(); 
    }
}

static void Task_ReturnToItemListWaitMsg(u8 taskId)
{
    if (!IsTextPrinterActive(WIN_ITEM_DESCRIPTION))
    {
        if (JOY_NEW(A_BUTTON | B_BUTTON))
        {
            if (!IsSEPlaying())
            {
                PlaySE(SE_SELECT);
            }
            BuyMenuReturnToItemList(taskId);
        }
    }
}

static void Task_ReturnToItemListAfterItemPurchase(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (IsMartTypeItem(sMartInfo.martType) && ItemId_GetPocket(sShopData->currentItemId) == POCKET_POKE_BALLS)
    {
        if (IsTextPrinterActive(WIN_ITEM_DESCRIPTION))
        {
            return;
        }

        if (JOY_NEW(A_BUTTON | B_BUTTON))
        {
            // credit to pokeemerald-expansion
            u16 premierBallsToAdd = tItemCount / 10;

            if (premierBallsToAdd >= 1
             && ((I_PREMIER_BALL_BONUS <= GEN_7 && sShopData->currentItemId == ITEM_TOHO_ORB)
             || (I_PREMIER_BALL_BONUS >= GEN_8 && (ItemId_GetPocket(sShopData->currentItemId) == POCKET_POKE_BALLS))))
            {
                u32 spaceAvailable = GetFreeSpaceForItemInBag(ITEM_PREMIER_ORB);
                if (spaceAvailable < premierBallsToAdd)
                {
                    premierBallsToAdd = spaceAvailable;
                }
            }
            else
            {
                premierBallsToAdd = 0;
            }

            AddBagItem(ITEM_PREMIER_ORB, premierBallsToAdd);
            if (premierBallsToAdd > 0)
            {
                const u8 *str = Shop_GetSellerMessage(premierBallsToAdd >= 2 ? SELLER_MSG_BUY_PREMIER_BONUS_PLURAL : SELLER_MGS_BUY_PREMIER_BONUS);
                PlaySE(SE_SELECT);
                FillWindowPixelBuffer(WIN_ITEM_DESCRIPTION, PIXEL_FILL(0));
                ConvertIntToDecimalStringN(gStringVar1, premierBallsToAdd, STR_CONV_MODE_LEFT_ALIGN, MAX_ITEM_DIGITS);
                StringExpandPlaceholders(gStringVar2, str);
                BuyMenuPrint(WIN_ITEM_DESCRIPTION, gStringVar2, 4, 0, TEXT_SKIP_DRAW, COLORID_NORMAL, TRUE);
            }

            gTasks[taskId].func = Task_ReturnToItemListWaitMsg;
        }
    }
    else
    {
        gTasks[taskId].func = Task_ReturnToItemListWaitMsg;
    }
}

static void BuyMenuReturnToItemList(u8 taskId)
{
    UpdateItemData();
    gTasks[taskId].func = Task_BuyMenu;
}

static void BuyMenuPrintItemQuantityAndPrice(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    FillWindowPixelBuffer(WIN_QUANTITY_PRICE, PIXEL_FILL(0));
    PrintMoneyLocal(WIN_QUANTITY_PRICE, 13, 13, sShopData->totalCost, 56, COLORID_NORMAL, FALSE);
    ConvertIntToDecimalStringN(gStringVar1, tItemCount, STR_CONV_MODE_LEADING_ZEROS, MAX_ITEM_DIGITS);
    StringExpandPlaceholders(gStringVar4, gText_xVar1);
    BuyMenuPrint(WIN_QUANTITY_PRICE, gStringVar4, 29, 3, TEXT_SKIP_DRAW, COLORID_NORMAL, FALSE);
    CopyWindowToVram(WIN_QUANTITY_PRICE, COPYWIN_FULL);
}

static void Task_ExitBuyMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        BuyMenuFreeMemory();
        if (CanMartTypeReturnToShopMenu(sMartInfo.martType))
            SetMainCallback2(CB2_ReturnToField);
        else
            SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        DestroyTask(taskId);
    }
}

static void ClearItemPurchases(void)
{
    sPurchaseHistoryId = 0;
    memset(gMartPurchaseHistory, 0, sizeof(gMartPurchaseHistory));
}

static void RecordItemPurchase(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    u16 i;

    for (i = 0; i < ARRAY_COUNT(gMartPurchaseHistory); i++)
    {
        if (gMartPurchaseHistory[i].itemId == sShopData->currentItemId && gMartPurchaseHistory[i].quantity != 0)
        {
            if (gMartPurchaseHistory[i].quantity + tItemCount > 255)
                gMartPurchaseHistory[i].quantity = 255;
            else
                gMartPurchaseHistory[i].quantity += tItemCount;
            return;
        }
    }

    if (sPurchaseHistoryId < ARRAY_COUNT(gMartPurchaseHistory))
    {
        gMartPurchaseHistory[sPurchaseHistoryId].itemId = sShopData->currentItemId;
        gMartPurchaseHistory[sPurchaseHistoryId].quantity = tItemCount;
        sPurchaseHistoryId++;
    }
}

#undef tItemCount
#undef tCallbackHi
#undef tCallbackLo

void NewShop_CreatePokemartMenu(const u16 *itemsForSale)
{
    CreateShopMenu(MART_TYPE_NORMAL);
    SetShopItemsForSale(itemsForSale);
    ClearItemPurchases();
    SetShopMenuCallback(ScriptContext_Enable);
}

void NewShop_CreateDecorationShop1Menu(const u16 *itemsForSale)
{
    CreateShopMenu(MART_TYPE_DECOR);
    SetShopItemsForSale(itemsForSale);
    SetShopMenuCallback(ScriptContext_Enable);
}

void NewShop_CreateDecorationShop2Menu(const u16 *itemsForSale)
{
    CreateShopMenu(MART_TYPE_DECOR2);
    SetShopItemsForSale(itemsForSale);
    SetShopMenuCallback(ScriptContext_Enable);
}

void NewShop_CreateOutfitShopMenu(const u16 *itemsForSale)
{
    CreateShopMenu(MART_TYPE_OUTFIT);
    SetShopItemsForSale(itemsForSale);
    SetShopMenuCallback(ScriptContext_Enable);
}

void NewShop_CreateVariablePokemartMenu(const u16 *itemsForSale)
{
    CreateShopMenu(MART_TYPE_VARIABLE);
    SetShopItemsForSale(itemsForSale);
    ClearItemPurchases();
    SetShopMenuCallback(ScriptContext_Enable);
}

void NewShop_CreateCasinoMartMenu(const u16 *itemsForSale)
{
    sMartInfo.martType = MART_TYPE_CASINO;
    SetShopItemsForSale(itemsForSale);
    ClearItemPurchases();
    CreateTask(Task_HandleShopMenuBuy, 8);  //skip mart multichoice. go right to shop buy window
}

void NewShop_CreateBuyOnlyMartMenu(const u16 *itemsForSale)
{
    sMartInfo.martType = MART_TYPE_BUY_ONLY;
    SetShopItemsForSale(itemsForSale);
    ClearItemPurchases();
    CreateTask(Task_HandleShopMenuBuy, 8);  //skip mart multichoice. go right to shop buy window
}

void NewShop_CreateBuyVariableMartMenu(const u16 *itemsForSale)
{
    sMartInfo.martType = MART_TYPE_BUY_VARIABLE;
    SetShopItemsForSale(itemsForSale);
    ClearItemPurchases();
    CreateTask(Task_HandleShopMenuBuy, 8);  //skip mart multichoice. go right to shop buy window
}

void NewShop_CreateSellOnlyMartMenu(void)
{
    sMartInfo.martType = MART_TYPE_SELL_ONLY;
    CreateTask(Task_HandleShopMenuSell, 8);  //skip mart multichoice. go right to shop sell window
}

void NewShop_CreateBpMartMenu(const u16 *itemsForSale)
{
    sMartInfo.martType = MART_TYPE_BP_ITEMS;
    SetShopItemsForSale(itemsForSale);
    ClearItemPurchases();
    CreateTask(Task_HandleShopMenuBuy, 8);  //skip mart multichoice. go right to shop buy window
}

void NewShop_CreateBpMoveTutorMenu(const u16 *itemsForSale)
{
    sMartInfo.martType = MART_TYPE_BP_MOVES;
    SetShopItemsForSale(itemsForSale);
    CreateTask(Task_HandleShopMenuBuy, 8);  //skip mart multichoice. go right to shop buy window
}

void NewShop_CreateMoveTutorMartMenu(const u16 *itemsForSale)
{
    sMartInfo.martType = MART_TYPE_MOVES;
    SetShopItemsForSale(itemsForSale);
    CreateTask(Task_HandleShopMenuBuy, 8);  //skip mart multichoice. go right to shop buy window
}

#endif // MUDSKIP_SHOP_UI
