#pragma once
#include "ConsoleControl.h"
//입력받은 키보드 값 반환
enum E_MENU_PATROL SELECT_MENU()
{
    char key = getchar();

    switch (key)
    {

    case 'a':
        printf("@@@@@");
        getchar();

        return GAME_START;
    case 'A':
        return GAME_START;


    case '\033':
        CONSOLE_XY(44, 28); //Game start
        printf("@@@");
        getchar();
        break;



    default:
        break;
    }



    return -1;
}

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

void CONSOLE_XY(int x, int y)
{
    //구조체 축 X,Y
    COORD axis;
    //축 할당
    axis.X = x;
    axis.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), axis);
}
