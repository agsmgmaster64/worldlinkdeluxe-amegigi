#ifndef GUARD_SHOP_H
#define GUARD_SHOP_H

extern struct ItemSlot gMartPurchaseHistory[3];

void CreatePokemartMenu(const u16 *);
void CreateDecorationShop1Menu(const u16 *);
void CreateDecorationShop2Menu(const u16 *);
void CreateOutfitShopMenu(const u16 *);
void CB2_ExitSellMenu(void);
void CreateCoinsShopMenu(const u16 *);

void CreateVariablePokemartMenu(const u16 *);
void CreateBuyOnlyMartMenu(const u16 *);
void CreateBuyVariableMartMenu(const u16 *);
void CreateSellOnlyMartMenu(void);
void CreateBpMartMenu(const u16 *);
void CreateBpMoveTutorMenu(const u16 *);
void CreateMoveTutorMartMenu(const u16 *);

#endif // GUARD_SHOP_H
