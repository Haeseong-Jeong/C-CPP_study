#include <stdio.h>

int main()
{
	int x;
	float y;

	x = 100, y = 30.0;

	printf("%d \n", x / 30);
	printf("%f \n", x / 30); // �����Ⱚ ����
	printf("%f \n", x / y); // ������ ����ȯ

	printf("%f \n", (float)x / 30);
	//cast ������ (����ȯ ������) �����տ� �ڷ���, �� ������ ����ȯ ���ش�.
	
	typedef long long int lli;
	long long int n1 = 2700000000;
	lli n2 = 2800000000;
	printf("%lld \n", n1);
	printf("%lld \n", n2);

	return 0;
}