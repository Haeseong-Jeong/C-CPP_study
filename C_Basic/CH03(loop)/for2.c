#include <stdio.h>

int main()
{
	//1. �޸� �Ҵ�(���� ����)
	int i, sum = 0;
	int start, end, temp;

	//2. data �Է� 
	printf(" Start : ");
	scanf("%d", &start);
	printf(" End : ");
	scanf("%d", &end);

	if (start > end)
	{
		temp = start;
		start = end;
		end = temp;
	}

	//3. process ó��
	for ( i = start; i <= end; i++)
	{
		sum += i;
		if (sum > 3000)
			break;
	}

	//4. ���
	if (i-1 == end)
	{
		printf(" %d ~ %d �� �� = %d \n", start, end, sum);
	}
	else
	{
		printf(" %d ~ %d �� �� = %d \n", start, i, sum);
	}

	return 0;
}