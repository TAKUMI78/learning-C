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
	char mine[rows][cols] = { 0 };//���ú��׵���Ϣ
	char show[rows][cols] = { 0 };//�Ų���׵���Ϣ
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������������ѡ��");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}