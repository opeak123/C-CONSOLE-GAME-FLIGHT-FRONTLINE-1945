#pragma once
#include <windows.h>

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