#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//�Ϲ� �迭
	int arr[5] = { 1,54,6,3,4 };
	printf("%d\n", arr[2]);

	//�迭 ���� �� �����ͷ�
	int* ptr;
	int arr2[5] = { 1,8,6,46,12 };
	ptr = arr2;
	printf("%d\n", ptr[2]);

	//�����Ϳ� malloc�� Ȱ���� �迭 �����Ҵ�
	int* ptr2 = (int*)malloc(sizeof(int) * 5);
	ptr2[0] = 4;
	ptr2[1] = 56;
	printf("%d\n", ptr2[0]);

	//������ ������ �迭, ��Ұ� �����ͷ� ����
	int* ptr3[5] = { 1,8,9,15,43 };
	printf("%d\n", ptr3[0]);
	printf("%d\n", ptr3[1]);

	//���������Ϳ� malloc�� Ȱ���� ������ ������ �迭 �����Ҵ� -> �� 4 * 5 = 20 
	int** ptr4 = (int**)malloc(sizeof(int*) * 5);
	//
	for (int i = 0; i < 5; i++)
	{
		ptr4[i] = malloc(sizeof(int));// �迭�� 4�� ������ �����͸� ���� �׸����� ����� 4/4/4/4/4
	}
	ptr4[0] = 21;
	ptr4[1] = 554;
	printf("%d\n", ptr4[0]);
} 