#pragma once
#include <windows.h>

const void CONSOLE_INIT(void)
{
    //콘솔 창 제어 
    //가로 150 세로 40
    system("mode con:cols=150 lines=40");

    //커서 정보 변수
    CONSOLE_CURSOR_INFO myCursor;
    //커서 깜빡임 ON/OFF
    myCursor.bVisible = 0;
    //커서 깜빡임 크기
    myCursor.dwSize = 1;
    //커서 값 전달
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &myCursor);
}