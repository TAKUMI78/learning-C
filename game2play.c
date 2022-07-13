#define _CRT_SECURE_NO_WARNINGS 1
#include"game2.h"

void menu()
{
	printf("******************************\n");
	printf("****        1.Play        ****\n");
	printf("****        0.Exit        ****\n");
	printf("******************************\n");
}

void game()
{
	char mine[rows][cols] = { 0 };//布置好雷的信息
	char show[rows][cols] = { 0 };//排查出雷的信息
	initboard(mine,'0');
	initboard(show, '*');
	displayboard(show);
	setmine(mine);
	findmine(mine,show);

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
			printf("输入有误，请重新选择：");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}