#ifndef GUARD_UI_MENU_H
#define GUARD_UI_MENU_H

#include "main.h"

void Task_OpenStartMenuFullScreen(u8 taskId);
void StartMenuFull_Init(MainCallback callback);
bool32 ShouldHideFullScreenStartMenu(void);


#endif // GUARD_UI_MENU_H
