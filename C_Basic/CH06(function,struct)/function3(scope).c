#include <stdio.h>

int salary = 3500000;//��������

int main()
{
	int age = 23;

	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
	funcA(age);
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
	funcB();
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);

	funcD();
	funcD();
	funcD();

	return 0;
}

funcD()
{	
	int sum1 = 1;				//��������
	static int sum2 = 1;		//��������(���������� �ƴ϶� �ٸ� �Լ����� ����)
	// �ٽ� �Լ� ����Ҷ� ���������� ������ ����ϰ� ������ static���� �����س���

	printf("sum1 : %d, sum2 : %d \n", sum1++, sum2++);
}

funcA(int age)
{
	printf("funcA() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
	age = 35;
	salary += 200000;
}

funcB()
{	//�Լ��� ������ �Լ��� ������ �Ҹ��
	int age = 23;
	int salary = 1000;

	printf("funcB() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
	age = 40;
}