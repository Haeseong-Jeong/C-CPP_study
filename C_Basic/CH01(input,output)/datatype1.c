#include <stdio.h>
#define EQ "======================="  //��ũ�� ���
#define MSG "Sam_Workplace"    //��ũ�� ���
#define SUM(x,y) x+y          //��ũ�� �Լ�
// #�� �����ϴ� ������ ��ó�����̶� �Ѵ�.

int main()
{
	printf("C ����� �ڷ���(DataType) \n");
	printf(" %s \n", EQ);
	printf(" %s \n", MSG);

	//������ �迭�� ������ �ڷ����� ũ�⸸ŭ �޸𸮸� �Ҵ�ް�,
	//�����Ϸ����� �ڷ����� �˸���.
	char ch; //�޸��Ҵ縸 ���߿� �ڷ�� ����
	int age = 20; //�ʱ�ȭ
	double height = 175.1;
	const float PI = 3.14159; //������ ���ȭ (�ݵ�� �ʱ�ȭ �ؾ���)

	ch = 'A';
	printf("������ �� : % c, % d, % 1f, % f \n", ch, age, height, PI);
	printf("������ �ּ� : %p, %p, %p, %p \n", &ch, &age, &height, &PI);

	age = 27;
	//PI = 1.5; �� �ٲ�
	printf("%c, %d, %1f, %f \n", ch, age, height, PI);

	printf("%d, %d, %d \n", sizeof(char), sizeof(int), sizeof(double));
	printf("%d, %d, %d \n", sizeof(ch), sizeof(age), sizeof(height));

	printf(" %d \n", SUM(100,200));
	printf(" %s \n", EQ);


	return 0;
}