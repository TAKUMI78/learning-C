//������game1
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
		ret = iswin(board); //�ж���Ӯ�ĺ���
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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ����\n");
	}
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
				printf("ѡ�����������ѡ��\n");
				break;
			}
		} while (input);
	}

	int main()
	{
		test();
		return 0;
	}