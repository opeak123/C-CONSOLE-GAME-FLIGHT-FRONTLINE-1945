#pragma once
#include "ConsolePaint.h"
#include "ConsoleControl.h"
#include <Windows.h>

int main() 
{
    //�ܼ� �ʱ�ȭ
    CONSOLE_INIT();
    //�ܼ� ȭ�� ���
    CONSOLE_TITLE();
    //�޴�
    SHOW_MENU();
    
    //IDE 2022 ������ gotoxy���� ���������ʾ�
    //�������� ���� 
    //CONSOLE_XY(44, 28); //Game start
    //printf("��");

    //CONSOLE_XY(44, 31); //Who's made
    //printf("��");

    //CONSOLE_XY(44, 34); //How to play
    //printf("��");

    //CONSOLE_XY(44, 37); //Exit program
    //printf("��");
    SELECT_MENU(0);
    //�ܼ� �Ͻ�����
    //system("pause");
    return 0;
}