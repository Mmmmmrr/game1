#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"
void menu()
{
	printf("********************************\n");
	printf("*********     1.play   *********\n");
	printf("*********     2.exit   *********\n");
	printf("********************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//'0'
	char show[ROWS][COLS]={0};//'*' 
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	SetMine(mine,ROW, COL);
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>  ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
	}
		


