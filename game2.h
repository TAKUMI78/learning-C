#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define row 9
#define col 9
#define rows row+2
#define cols col+2
#define easycount 10

void initboard(char board[rows][cols]);
void displayboard(char board[rows][cols]);
void setmine(char board[rows][cols]);
void findmine(char mine[rows][cols],char show[rows][cols]);
int getminecount(char mine[rows][cols], int x ,int y);
