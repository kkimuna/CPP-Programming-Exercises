#define _CRT_SECURE_NO_WARNINGS
#include "MineSweeper.h"
void main()
{
	int total;
	printf(" <Mine Sweeper>\n");
	printf(" �ż��� �� ������ ���� �Է� : ");
	scanf("%d", &total);
	playMineSweeper(total);
}