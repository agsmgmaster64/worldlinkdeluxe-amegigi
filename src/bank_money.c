#include "global.h"
#include "main.h"
#include "bank_money.h"
#include "money.h"
#include "debug.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "map_name_popup.h"
#include "menu.h"
#include "script.h"
#include "sound.h"
#include "strings.h"
#include "string_util.h"
#include "constants/characters.h"
#include "constants/flags.h"
#include "constants/songs.h"

static void BankHandleNumericInput(u8 taskId, s32 min, s32 max, u32 digits);
static void Bank_DestroyExtraWindow(u8 taskId);
static void BankDisplayWithdrawAmount(u32 quantity, u32 digit, u8 windowId);
static void BankDisplayDepositAmount(u32 quantity, u32 digit, u8 windowId);
static void BankInputWithdrawMoney(u8 taskId);
static void BankInputDepositMoney(u8 taskId);
static void BankInputWithdrawMoneyCheckInputs(u8 taskId);
static void BankInputDepositMoneyCheckInputs(u8 taskId);

EWRAM_DATA s32 sMoneyToProcess = 0;

const u8 *const sText_DigitIndicator[] =
{
    COMPOUND_STRING("{LEFT_ARROW}+1{RIGHT_ARROW}        "),
    COMPOUND_STRING("{LEFT_ARROW}+10{RIGHT_ARROW}       "),
    COMPOUND_STRING("{LEFT_ARROW}+100{RIGHT_ARROW}      "),
    COMPOUND_STRING("{LEFT_ARROW}+1000{RIGHT_ARROW}     "),
    COMPOUND_STRING("{LEFT_ARROW}+10000{RIGHT_ARROW}    "),
    COMPOUND_STRING("{LEFT_ARROW}+100000{RIGHT_ARROW}   "),
    COMPOUND_STRING("{LEFT_ARROW}+1000000{RIGHT_ARROW}  "),
    COMPOUND_STRING("{LEFT_ARROW}+10000000{RIGHT_ARROW} "),
};

static const s32 sPowersOfTen[] =
{
             1,
            10,
           100,
          1000,
         10000,
        100000,
       1000000,
      10000000,
     100000000,
    1000000000,
};

#define BANK_MENU_WIDTH_EXTRA 14
#define BANK_MENU_HEIGHT_EXTRA 4

static const struct WindowTemplate sBankMenuWindowTemplateExtra =
{
    .bg = 0,
    .tilemapLeft = 30 - BANK_MENU_WIDTH_EXTRA - 1,
    .tilemapTop = 1,
    .width = BANK_MENU_WIDTH_EXTRA,
    .height = 2 * BANK_MENU_HEIGHT_EXTRA,
    .paletteNum = 15,
    .baseBlock = 1,
};

u32 GetBankMoney(void)
{
    return gSaveBlock3Ptr->bankMoney;
}

void SetBankMoney(u32 newValue)
{
    gSaveBlock3Ptr->bankMoney = newValue;
}

void AddBankMoney(u32 toAdd)
{
    u32 toSet = GetBankMoney();

    // can't have more money than MAX
    if (toSet + toAdd > MAX_MONEY)
    {
        toSet = MAX_MONEY;
    }
    else
    {
        toSet += toAdd;
        // check overflow, can't have less money after you receive more
        if (toSet < GetBankMoney())
            toSet = MAX_MONEY;
    }

    SetBankMoney(toSet);
}

void RemoveBankMoney(u32 toSub)
{
    u32 toSet = GetBankMoney();

    // can't subtract more than you already have
    if (toSet < toSub)
        toSet = 0;
    else
        toSet -= toSub;

    SetBankMoney(toSet);
}

void TransferBankMoney(u32 isDeposit)
{
    if (isDeposit)
    {
        AddBankMoney(sMoneyToProcess);
        RemoveMoney(&gSaveBlock1Ptr->money, sMoneyToProcess);
    }
    else
    {
        RemoveBankMoney(sMoneyToProcess);
        AddMoney(&gSaveBlock1Ptr->money, sMoneyToProcess);
    }
}

void Script_TransferBankMoney(struct ScriptContext *ctx)
{
    u8 isDeposit = ScriptReadByte(ctx);

    TransferBankMoney(isDeposit);
}

void ApplyBankMoneyInterest(u32 days)
{
    u32 interest = GetBankMoney() / 10;

    if (interest != 0)
    {
        interest = interest * days;

        AddBankMoney(interest);
    }
}

bool32 IsSavingMoney(void)
{
    if (FlagGet(FLAG_POINT_BATTLE))
        return FALSE;
    return FlagGet(FLAG_BANK_SAVE_MONEY);
}

#define tSubWindowId         data[0]
#define tDigit               data[1]

static void BankHandleNumericInput(u8 taskId, s32 min, s32 max, u32 digits)
{
    if (JOY_NEW(DPAD_UP))
    {
        sMoneyToProcess += sPowersOfTen[gTasks[taskId].tDigit];
        if (sMoneyToProcess > max)
            sMoneyToProcess = max;
    }
    if (JOY_NEW(DPAD_DOWN))
    {
        sMoneyToProcess-= sPowersOfTen[gTasks[taskId].tDigit];
        if (sMoneyToProcess < min)
            sMoneyToProcess = min;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (gTasks[taskId].tDigit > 0)
            gTasks[taskId].tDigit -= 1;
    }
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (gTasks[taskId].tDigit < digits - 1)
            gTasks[taskId].tDigit += 1;
    }
}

static void Bank_DestroyExtraWindow(u8 taskId)
{
    ClearStdWindowAndFrame(gTasks[taskId].tSubWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tSubWindowId);

    DestroyTask(taskId);
    ScriptContext_Enable();
    UnfreezeObjectEvents();
}

static void BankDisplayWithdrawAmount(u32 quantity, u32 digit, u8 windowId)
{
    StringCopy(gStringVar2, sText_DigitIndicator[digit]);
    ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_RIGHT_ALIGN, MAX_MONEY_DIGITS);
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    ConvertIntToDecimalStringN(gStringVar3, GetBankMoney(), STR_CONV_MODE_RIGHT_ALIGN, MAX_MONEY_DIGITS);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Bank: {STR_VAR_3}\nWithdraw:{STR_VAR_1}{CLEAR_TO 90}\n\n{STR_VAR_2}{CLEAR_TO 90}"));
    AddTextPrinterParameterized(windowId, FONT_SHORT, gStringVar4, 0, 0, 0, NULL);
}

static void BankDisplayDepositAmount(u32 quantity, u32 digit, u8 windowId)
{
    StringCopy(gStringVar2, sText_DigitIndicator[digit]);
    ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_RIGHT_ALIGN, MAX_MONEY_DIGITS);
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    ConvertIntToDecimalStringN(gStringVar3, GetMoney(&gSaveBlock1Ptr->money), STR_CONV_MODE_RIGHT_ALIGN, MAX_MONEY_DIGITS);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Player: {STR_VAR_3}\nDeposit:{STR_VAR_1}{CLEAR_TO 90}\n\n{STR_VAR_2}{CLEAR_TO 90}"));
    AddTextPrinterParameterized(windowId, FONT_SHORT, gStringVar4, 0, 0, 0, NULL);
}

static void BankInputWithdrawMoney(u8 taskId)
{
    u8 windowId;

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sBankMenuWindowTemplateExtra);
    DrawStdWindowFrame(windowId, FALSE);

    CopyWindowToVram(windowId, COPYWIN_FULL);

    // Display initial item
    BankDisplayWithdrawAmount(0, 0, windowId);

    gTasks[taskId].func = BankInputWithdrawMoneyCheckInputs;
    gTasks[taskId].tSubWindowId = windowId;
    sMoneyToProcess = 0;
    gTasks[taskId].tDigit = 0;
}

static void BankInputDepositMoney(u8 taskId)
{
    u8 windowId;

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sBankMenuWindowTemplateExtra);
    DrawStdWindowFrame(windowId, FALSE);

    CopyWindowToVram(windowId, COPYWIN_FULL);

    // Display initial item
    BankDisplayDepositAmount(0, 0, windowId);

    gTasks[taskId].func = BankInputDepositMoneyCheckInputs;
    gTasks[taskId].tSubWindowId = windowId;
    sMoneyToProcess = 0;
    gTasks[taskId].tDigit = 0;
}

void BankWithdrawMoneyPullMenu(void)
{
    FreezeObjectEvents();
    CreateTask(BankInputWithdrawMoney, 3);
}

void BankDepositMoneyPullMenu(void)
{
    FreezeObjectEvents();
    CreateTask(BankInputDepositMoney, 3);
}

static s32 GetMaxWithrawAmount(void)
{
    s32 bankMoney = GetBankMoney();
    s32 playerMoney = GetMoney(&gSaveBlock1Ptr->money);
    s32 moneyFromMax = MAX_MONEY - playerMoney;

    if (bankMoney > moneyFromMax)
        return moneyFromMax;

    return bankMoney;
}

static s32 GetMaxDepositAmount(void)
{
    s32 bankMoney = GetBankMoney();
    s32 playerMoney = GetMoney(&gSaveBlock1Ptr->money);
    s32 moneyFromMax = MAX_MONEY - bankMoney;

    if (playerMoney > moneyFromMax)
        return moneyFromMax;

    return playerMoney;
}

static void BankInputWithdrawMoneyCheckInputs(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        BankHandleNumericInput(taskId, 0, GetMaxWithrawAmount(), MAX_MONEY_DIGITS);
        BankDisplayWithdrawAmount(sMoneyToProcess, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
    }

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        Bank_DestroyExtraWindow(taskId);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        sMoneyToProcess = 0;
        Bank_DestroyExtraWindow(taskId);
    }
}

static void BankInputDepositMoneyCheckInputs(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        BankHandleNumericInput(taskId, 0, GetMaxDepositAmount(), MAX_MONEY_DIGITS);
        BankDisplayDepositAmount(sMoneyToProcess, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
    }

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        Bank_DestroyExtraWindow(taskId);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        sMoneyToProcess = 0;
        Bank_DestroyExtraWindow(taskId);
    }
}

#undef tSubWindowId
#undef tDigit
