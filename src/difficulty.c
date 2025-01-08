#include "global.h"
#include "data.h"
#include "event_data.h"
#include "script.h"
#include "constants/battle.h"

enum DifficultyLevel GetCurrentDifficultyLevel(void)
{
    return gSaveBlock1Ptr->tx_Challenges_TrainerDifficulty;
}

void SetCurrentDifficultyLevel(enum DifficultyLevel desiredDifficulty)
{
    if (desiredDifficulty > DIFFICULTY_MAX)
        desiredDifficulty = DIFFICULTY_MAX;

    gSaveBlock1Ptr->tx_Challenges_TrainerDifficulty = desiredDifficulty;
}

enum DifficultyLevel GetBattlePartnerDifficultyLevel(u16 partnerId)
{
    enum DifficultyLevel difficulty = GetCurrentDifficultyLevel();

    if (partnerId > TRAINER_PARTNER(PARTNER_NONE))
        partnerId -= TRAINER_PARTNER(PARTNER_NONE);

    if (difficulty == DIFFICULTY_NORMAL)
        return DIFFICULTY_NORMAL;

    if (gBattlePartners[difficulty][partnerId].party == NULL)
        return DIFFICULTY_NORMAL;

    return difficulty;
}

enum DifficultyLevel GetTrainerDifficultyLevel(u16 trainerId)
{
    enum DifficultyLevel difficulty = GetCurrentDifficultyLevel();

    if (difficulty == DIFFICULTY_NORMAL)
        return DIFFICULTY_NORMAL;

    if (gTrainers[difficulty][trainerId].party == NULL)
        return DIFFICULTY_NORMAL;

    return difficulty;
}

void Script_IncreaseDifficulty(void)
{
    enum DifficultyLevel currentDifficulty;

    currentDifficulty = GetCurrentDifficultyLevel();

    if (currentDifficulty++ > DIFFICULTY_MAX)
        return;

    SetCurrentDifficultyLevel(currentDifficulty);
}

void Script_DecreaseDifficulty(void)
{
    enum DifficultyLevel currentDifficulty;

    currentDifficulty = GetCurrentDifficultyLevel();

    if (!currentDifficulty)
        return;

    SetCurrentDifficultyLevel(--currentDifficulty);
}

void Script_GetDifficulty(void)
{
    gSpecialVar_Result = GetCurrentDifficultyLevel();
}

void Script_SetDifficulty(struct ScriptContext *ctx)
{
    enum DifficultyLevel desiredDifficulty = ScriptReadByte(ctx);

    SetCurrentDifficultyLevel(desiredDifficulty);
}
