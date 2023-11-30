#pragma once
#include <windows.h>
#include <stdio.h>
enum E_MENU_PATROL
{
    GAME_START = 28,
    WHO_MADE = 31,
    HOW_TO_PLAY = 34,
    EXIT = 37
};

enum E_MENU_PATROL SELECT_MENU(int y);

const void CONSOLE_INIT(void);
void CONSOLE_XY(int x, int y);