#include <stdio.h>
#include <math.h>
#define PI 3.14159
//�������� �Է� �޾� ���� ����, �ѷ� ���Ͽ� ���

/*
������
������ ? 7
���� ���� : ???
���� �ѷ� : ???
*/

double Area(int x);
double Cir(int x);

int main()
{
	//1. �޸� �Ҵ� (���� ����)
	int radius;
	double area, cir;

	//2. ������ �Է�
	printf("������ ? ");
	scanf("%d", &radius);

	//3. ���μ��� ó��(���)
	area = Area(radius);
	cir = Cir(radius);

	//4. ���
	printf(" ���� ���� :  %f \n", area);
	printf(" ���� �ѷ� :  %f \n", cir);

	return 0;
}

double Area(int x)
{
	return PI * pow(x, 2);
}

double Cir(int x)
{
	return 2 * PI * x;
}