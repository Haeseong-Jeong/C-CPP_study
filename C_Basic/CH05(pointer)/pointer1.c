#include <stdio.h>

int main()
{
	//�����ͺ��� : ������ �����ּ��̰ų� �Ǵ� 1���� �迭�� �����ּҸ� �����ϴ� ������
	double d;//����(��)
	double *dp;//������ ����, ���� �տ� * ����
	int* a;//�ڷ����� �ٿ��� ��
	char* ptr;

	d = 1.5;
	printf("%1f, %p \n", d, &d);

	dp = &d;
	//��������("*" ������ ������)
	printf("%1f, %p \n", *dp, dp);
	//printf("%1f, %u \n", *dp, dp);//unsigned 10����?

	ptr = &d;
	printf("%p \n", ptr);
	printf("%1f \n", *ptr);
	//����� �ּҷ� ã�ư� -> �ڱⰡ �Ҵ�� ũ�⸸ŭ ���� 
	//���� ������ ������ �ڷ����� ���������� �ؾ���

	//����Ǵ� �ڷ������� ������� 32bit/64bit ���� �����ʹ� 4byte/8byte
	printf("%d, %d, %d \n", sizeof(d), sizeof(dp), sizeof(ptr));


	return 0;

}