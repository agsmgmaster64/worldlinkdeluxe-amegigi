#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_INACTIVE       6 //check if a questID is inactive. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         7   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         8  //checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       9   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    10   //buffers a quest name to gStringVar1

// quest number defines
#define QUEST_IDOLLDEX   0
#define QUEST_CHAMPION   1
#define QUEST_3          2
#define QUEST_4          3
#define QUEST_5          4
#define QUEST_6          5
#define QUEST_7          6
#define QUEST_8          7
#define QUEST_9          8
#define QUEST_10         9
#define QUEST_11        10
#define QUEST_12        11
#define QUEST_13        12
#define QUEST_14        13
#define QUEST_15        14
#define QUEST_16        15
#define QUEST_17        16
#define QUEST_18        17
#define QUEST_19        18
#define QUEST_20        19
#define QUEST_21        20
#define QUEST_22        21
#define QUEST_23        22
#define QUEST_24        23
#define QUEST_25        24
#define QUEST_26        25
#define QUEST_27        26
#define QUEST_28        27
#define QUEST_29        28
#define QUEST_30        29

#define QUEST_COUNT     30

#define SUB_QUEST_GYM_1          0
#define SUB_QUEST_GYM_2          1
#define SUB_QUEST_GYM_3          2
#define SUB_QUEST_GYM_4          3
#define SUB_QUEST_GYM_5          4
#define SUB_QUEST_GYM_6          5
#define SUB_QUEST_GYM_7          6
#define SUB_QUEST_GYM_8          7
#define SUB_QUEST_ELITE_4        8

#define QUEST_CHAMPION_SUB_COUNT 9
#define QUEST_2_SUB_START QUEST_CHAMPION_SUB_COUNT

#define SUB_QUEST_10        (QUEST_2_SUB_START + 0)
#define SUB_QUEST_11        (QUEST_2_SUB_START + 1)
#define SUB_QUEST_12        (QUEST_2_SUB_START + 2)
#define SUB_QUEST_13        (QUEST_2_SUB_START + 3)
#define SUB_QUEST_14        (QUEST_2_SUB_START + 4)
#define SUB_QUEST_15        (QUEST_2_SUB_START + 5)
#define SUB_QUEST_16        (QUEST_2_SUB_START + 6)
#define SUB_QUEST_17        (QUEST_2_SUB_START + 7)
#define SUB_QUEST_18        (QUEST_2_SUB_START + 8)
#define SUB_QUEST_19        (QUEST_2_SUB_START + 9)
#define SUB_QUEST_20        (QUEST_2_SUB_START + 10)
#define SUB_QUEST_21        (QUEST_2_SUB_START + 11)
#define SUB_QUEST_22        (QUEST_2_SUB_START + 12)
#define SUB_QUEST_23        (QUEST_2_SUB_START + 13)
#define SUB_QUEST_24        (QUEST_2_SUB_START + 14)
#define SUB_QUEST_25        (QUEST_2_SUB_START + 15)
#define SUB_QUEST_26        (QUEST_2_SUB_START + 16)
#define SUB_QUEST_27        (QUEST_2_SUB_START + 17)
#define SUB_QUEST_28        (QUEST_2_SUB_START + 18)
#define SUB_QUEST_29        (QUEST_2_SUB_START + 19)
#define SUB_QUEST_30        (QUEST_2_SUB_START + 20)

#define QUEST_2_SUB_COUNT 21

#define SUB_QUEST_COUNT (QUEST_CHAMPION_SUB_COUNT + QUEST_2_SUB_COUNT)

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H
