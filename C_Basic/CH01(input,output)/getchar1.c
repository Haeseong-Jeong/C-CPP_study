#include <stdio.h>

int main()
{
	char c1, c2;

	printf("input c1 = ");
	c1 = getchar();//�� ���ڸ� ��ȯ, ��������� �� �տ� �� ���ڸ�
	printf("c1 : %c\n", c1);

	getchar(); //A[enter] ������ enter�� �ϳ��� �Է����� �ν��ϴϱ� getchar�� ����
	//while(getchar() != '\n'); ���ͳ����� ������ �Է� ���� ������

	printf("input c2 = ");
	c2 = getchar();
	printf("c2 : %c\n", c2);

	return 0;
}