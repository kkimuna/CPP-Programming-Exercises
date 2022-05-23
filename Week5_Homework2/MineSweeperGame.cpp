#define _CRT_SECURE_NO_WARNINGS
#include "MineSweeper.h"
void main()
{
	int total;
	printf(" <Mine Sweeper>\n");
	printf(" 매설할 총 지뢰의 개수 입력 : ");
	scanf("%d", &total);
	playMineSweeper(total);
}