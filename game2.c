#define _CRT_SECURE_NO_WARNINGS 1
#include"game2.h"

void initboard(char board[rows][cols],char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void displayboard(char board[rows][cols])
{
	int i = 0;
	int j = 0;
	printf("%c ", ' ');
	for (i = 1; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setmine(char board[rows][cols])
{
	int x = 0;
	int y = 0;
	int count = easycount;
	while (count)
	{
		x = rand() % row+1;
		y = rand() % col+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count = count - 1;
		}
	}
}

int getminecount(char mine[rows][cols], int x ,int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}

void findmine(char mine[rows][cols], char show[rows][cols])
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入需要排查的坐标：");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				displayboard(mine);
				break;
			}
			else
			{
				int count = getminecount(mine, x, y);
				show[x][y] = count + '0';
				displayboard(show);
			}
		}
		else
		{
			printf("输入的坐标非法,请重新输入：");
		}

	}}
