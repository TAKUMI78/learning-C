#define row 3
#define col 3
#include<stdio.h>
#include<time.h>
//ÉùÃ÷

void initboard(char board[row][col]);
void displayboard(char board[row][col]);
void playermove(char board[row][col]);
void computermove(char board[row][col]);
char iswin(board);
int isfull(board);

