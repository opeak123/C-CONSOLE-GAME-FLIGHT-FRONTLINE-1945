#pragma once
#include <stdio.h>


void CONSOLE_TITLE(void)
{
    // UTF-8 인코딩 필요
    //SetConsoleTitle("1945");
    printf("Flight Frontline 1945");
    for (int i = 0; i < 8; i++)
    {
        printf("\n");
        i++;
    }
    // ■ <<
    //　 << //F                      //L                    // I                                 //G                         //H                               //T          
    printf("\t\t■■■■■■");    printf("\t■");           printf("\t      ■");         printf("\t■■■■■■"); printf("\t■　　　　■"); printf("\t■■■■■■\n");
    printf("\t\t■　 　 　  ");    printf("\t■");           printf("\t      ■");         printf("\t■　　　　　"); printf("\t■　　　　■"); printf("\t　　■■　　\n");
    printf("\t\t■　 　 　  ");    printf("\t■");           printf("\t      ■");         printf("\t■　■■■■"); printf("\t■　　　　■"); printf("\t　　■■　　\n");
    printf("\t\t■■■■■■");    printf("\t■");           printf("\t      ■");         printf("\t■　　　　■"); printf("\t■■■■■■"); printf("\t　　■■　　\n");
    printf("\t\t■　 　 　  ");    printf("\t■");           printf("\t      ■");         printf("\t■　　　　■"); printf("\t■　　　　■"); printf("\t　　■■　　\n");
    printf("\t\t■　 　 　  ");    printf("\t■");           printf("\t      ■");         printf("\t■　　　　■"); printf("\t■　　　　■"); printf("\t　　■■　　\n");
    printf("\t\t■　 　 　  ");    printf("\t■■■■■");       printf("    ■");             printf("\t■■■■■■"); printf("\t■　　　　■"); printf("\t　　■■　　\n");
    
    //Frontline
    printf("\n\n");
               //F                   //R                  //O                             // N                   //T                //L                     //I                            //N                    //E                                  
    printf("\t\t■■■");     printf("\t■■■");   printf("\t■■■");         printf("\t■　　■"); printf("  ■■■");      printf("\t■　　");   printf("\t■");         printf("  ■　　■"); printf("  ■■■\n");
    printf("\t\t■　 ");      printf("\t■　■");   printf("\t■  ■");         printf("\t■■　■"); printf("  　■　");      printf("\t■　　");   printf("\t■");         printf("  ■■　■"); printf("  ■　　\n");
    printf("\t\t■■■");     printf("\t■■■");   printf("\t■  ■");         printf("\t■■■■"); printf("  　■　");      printf("\t■　　");   printf("\t■");         printf("  ■■■■"); printf("  ■■■\n");
    printf("\t\t■");         printf("\t■■");     printf("\t■  ■");         printf("\t■　■■"); printf("  　■　");      printf("\t■　　");   printf("\t■");         printf("  ■　■■"); printf("  ■　　\n");
    printf("\t\t■");         printf("\t■　■");   printf("\t■■■");         printf("\t■　　■"); printf("　  ■  ");      printf("\t■■■");   printf("\t■");         printf("  ■　　■"); printf("  ■■■\n");


    // 1 9 4 5
    
    printf("\n\n");

                //1                         //9                    //4                     //5
    printf("\t\t\t\t\t　■");     printf("\t■■■");   printf("\t■　■");      printf("\t■■■\n");
    printf("\t\t\t\t\t■■");     printf("\t■　■");   printf("\t■　■");      printf("\t■　　\n");
    printf("\t\t\t\t\t　■");     printf("\t■■■");   printf("\t■■■");      printf("\t■■■\n");
    printf("\t\t\t\t\t　■");     printf("\t　　■");   printf("\t　　■");      printf("\t　　■\n");
    printf("\t\t\t\t\t　■");     printf("\t　　■");   printf("\t　　■");      printf("\t■■■\n");

}


void INSERTMENU(void)
{

    //게임 시작
    printf("\n\n\n");
    printf("\t\t\t\t\t\t");
    printf("Game Start");

    //정보
    printf("\n\n\n");
    printf("\t\t\t\t\t\t");
    printf("Who's made ?");

    //조작법
    printf("\n\n\n");
    printf("\t\t\t\t\t\t");
    printf("How to play");

    //종료
    printf("\n\n\n");
    printf("\t\t\t\t\t\t");
    printf("Exit program");


    //입력 받을 때 까지 대기
    while (getchar() != 'n')
    {

    }
}



   
