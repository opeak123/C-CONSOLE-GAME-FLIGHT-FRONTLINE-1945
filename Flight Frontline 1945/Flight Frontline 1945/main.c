#pragma once
#include "ConsolePaint.h"
#include "ConsoleControl.h"
#include <Windows.h>

int main() 
{
    //콘솔 초기화
    CONSOLE_INIT();
    //콘솔 화면 출력
    CONSOLE_TITLE();
    //메뉴
    SHOW_MENU();
    
    //IDE 2022 버전은 gotoxy문을 지원하지않아
    //수동으로 제어 
    //CONSOLE_XY(44, 28); //Game start
    //printf("▶");

    //CONSOLE_XY(44, 31); //Who's made
    //printf("▶");

    //CONSOLE_XY(44, 34); //How to play
    //printf("▶");

    //CONSOLE_XY(44, 37); //Exit program
    //printf("▶");
    SELECT_MENU(0);
    //콘솔 일시정지
    //system("pause");
    return 0;
}