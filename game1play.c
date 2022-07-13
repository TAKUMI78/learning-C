//井字棋game1
#define _CRT_SECURE_NO_WARNINGS 1

#include"game1.h"

void menu()
{
	printf("******************************\n");
	printf("**  1.play  ******** 0.exit **\n");
	printf("******************************\n");
}

void game()
{
	char ret = '0';
	char board[row][col] = { 0 };
	initboard(board);
	displayboard(board);
	while (1)
	{
		playermove(board);
		displayboard(board);
		ret = iswin(board); //判断输赢的函数
		if (ret != 'c')
		{
			break;
		}
		computermove(board);
		displayboard(board);
		ret = iswin(board);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局了\n");
	}
}

	void test()
	{
		int input = 0;
		srand((unsigned int)time(NULL));
		do
		{
			menu();
			printf("请选择：");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
			}
		} while (input);
	}

	int main()
	{
		test();
		return 0;
	}