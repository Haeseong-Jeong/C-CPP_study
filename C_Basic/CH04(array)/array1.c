#include <stdio.h>
#define STUDENT 5

int main()
{
	int score[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		printf(" %d��° �л��� ���� : ", i+1);
		scanf("%d", score+i);
	}

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += score[i];
	}
	printf(" \n �л� ������ ��� : %d", (int)(sum / 5));
}