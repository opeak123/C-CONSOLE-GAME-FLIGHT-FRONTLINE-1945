#pragma once
#include <stdio.h>


void CONSOLE_TITLE(void)
{
    // UTF-8 ���ڵ� �ʿ�
    //SetConsoleTitle("1945");
    printf("Flight Frontline 1945");
    for (int i = 0; i < 8; i++)
    {
        printf("\n");
        i++;
    }
    // �� <<
    //�� << //F                      //L                    // I                                 //G                         //H                               //T          
    printf("\t\t�������");    printf("\t��");           printf("\t      ��");         printf("\t�������"); printf("\t�ᡡ��������"); printf("\t�������\n");
    printf("\t\t�ᡡ �� ��  ");    printf("\t��");           printf("\t      ��");         printf("\t�ᡡ��������"); printf("\t�ᡡ��������"); printf("\t������ᡡ��\n");
    printf("\t\t�ᡡ �� ��  ");    printf("\t��");           printf("\t      ��");         printf("\t�ᡡ�����"); printf("\t�ᡡ��������"); printf("\t������ᡡ��\n");
    printf("\t\t�������");    printf("\t��");           printf("\t      ��");         printf("\t�ᡡ��������"); printf("\t�������"); printf("\t������ᡡ��\n");
    printf("\t\t�ᡡ �� ��  ");    printf("\t��");           printf("\t      ��");         printf("\t�ᡡ��������"); printf("\t�ᡡ��������"); printf("\t������ᡡ��\n");
    printf("\t\t�ᡡ �� ��  ");    printf("\t��");           printf("\t      ��");         printf("\t�ᡡ��������"); printf("\t�ᡡ��������"); printf("\t������ᡡ��\n");
    printf("\t\t�ᡡ �� ��  ");    printf("\t������");       printf("    ��");             printf("\t�������"); printf("\t�ᡡ��������"); printf("\t������ᡡ��\n");
    
    //Frontline
    printf("\n\n");
               //F                   //R                  //O                             // N                   //T                //L                     //I                            //N                    //E                                  
    printf("\t\t����");     printf("\t����");   printf("\t����");         printf("\t�ᡡ����"); printf("  ����");      printf("\t�ᡡ��");   printf("\t��");         printf("  �ᡡ����"); printf("  ����\n");
    printf("\t\t�ᡡ ");      printf("\t�ᡡ��");   printf("\t��  ��");         printf("\t��ᡡ��"); printf("  ���ᡡ");      printf("\t�ᡡ��");   printf("\t��");         printf("  ��ᡡ��"); printf("  �ᡡ��\n");
    printf("\t\t����");     printf("\t����");   printf("\t��  ��");         printf("\t�����"); printf("  ���ᡡ");      printf("\t�ᡡ��");   printf("\t��");         printf("  �����"); printf("  ����\n");
    printf("\t\t��");         printf("\t���");     printf("\t��  ��");         printf("\t�ᡡ���"); printf("  ���ᡡ");      printf("\t�ᡡ��");   printf("\t��");         printf("  �ᡡ���"); printf("  �ᡡ��\n");
    printf("\t\t��");         printf("\t�ᡡ��");   printf("\t����");         printf("\t�ᡡ����"); printf("��  ��  ");      printf("\t����");   printf("\t��");         printf("  �ᡡ����"); printf("  ����\n");


    // 1 9 4 5
    
    printf("\n\n");

                //1                         //9                    //4                     //5
    printf("\t\t\t\t\t����");     printf("\t����");   printf("\t�ᡡ��");      printf("\t����\n");
    printf("\t\t\t\t\t���");     printf("\t�ᡡ��");   printf("\t�ᡡ��");      printf("\t�ᡡ��\n");
    printf("\t\t\t\t\t����");     printf("\t����");   printf("\t����");      printf("\t����\n");
    printf("\t\t\t\t\t����");     printf("\t������");   printf("\t������");      printf("\t������\n");
    printf("\t\t\t\t\t����");     printf("\t������");   printf("\t������");      printf("\t����\n");

}


void INSERTMENU(void)
{

    //���� ����
    printf("\n\n\n");
    printf("\t\t\t\t\t\t");
    printf("Game Start");

    //����
    printf("\n\n\n");
    printf("\t\t\t\t\t\t");
    printf("Who's made ?");

    //���۹�
    printf("\n\n\n");
    printf("\t\t\t\t\t\t");
    printf("How to play");

    //����
    printf("\n\n\n");
    printf("\t\t\t\t\t\t");
    printf("Exit program");


    //�Է� ���� �� ���� ���
    while (getchar() != 'n')
    {

    }
}



   
