#pragma once
#include "ConsoleControl.h"
//�Է¹��� Ű���� �� ��ȯ
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
    //�ܼ� â ���� 
    //���� 150 ���� 40
    system("mode con:cols=150 lines=40");
    
    //Ŀ�� ���� ����
    CONSOLE_CURSOR_INFO myCursor;
    //Ŀ�� ������ ON/OFF
    myCursor.bVisible = 0;
    //Ŀ�� ������ ũ��
    myCursor.dwSize = 1;
    //Ŀ�� �� ����
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &myCursor);
}

void CONSOLE_XY(int x, int y)
{
    //����ü �� X,Y
    COORD axis;
    //�� �Ҵ�
    axis.X = x;
    axis.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), axis);
}
