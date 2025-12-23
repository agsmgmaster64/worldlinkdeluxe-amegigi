#ifndef GUARD_BANK_MONEY_H
#define GUARD_BANK_MONEY_H

u32 GetBankMoney(void);
void SetBankMoney(u32 toSet);
void AddBankMoney(u32 toAdd);
void RemoveBankMoney(u32 toSub);
bool32 IsSavingMoney(void);

#endif // GUARD_BANK_MONEY_H
