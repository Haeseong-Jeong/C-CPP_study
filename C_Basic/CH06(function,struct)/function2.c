#include <stdio.h>
#include <math.h>

//�Լ� : � ���� ó���ϴ� ������ �ڵ���� ����
//�Լ� ��� : 1.�Լ����� 2.�Լ�ȣ�� 3.�Լ�����(���û���)

//�Լ������� �����Ϸ����� �Լ��� ����(����)�� �˸���.
//�̸� �����ϸ� �����Ϸ��� ��� ���ڸ� int�� ���� �Ѵ�.
void funcA();//3.�Լ�����
void funcB(int salary);
int funcD();
//float funcE(int money, float rate); 
//main�Լ� ���� �Լ��� ����� ���� �������� / ������ ����

float funcE(int money, float rate)
{
	printf("funcE() %d, %f. \n", money, rate);
	//printf("funcE() ���� :%f. \n", money*rate);
	return money * rate;
}

int main()
{
	int salary = 3500000;//�������� = �ڽ��� ���� �Լ������� ����
	int sudang;
	float tax;
	
	printf("main() start. \n");
	//funcA();//funcA(���μ�)

	funcB(salary);//funcA(���μ�)
	sudang = funcD();
	printf(" ���� : %d. \n",sudang);

	tax = funcE(salary + sudang, 0.03);
	printf("�Ǽ��ɾ� : %f. \n",(salary+sudang),tax);

	printf("10�� ������ : %lf \n", sqrt(10.0));

	printf("main() end. \n");
	return 0;
}



//�Լ� ����
void funcA()	//�Լ� ���
{		//�Լ� �ٵ�
	printf("funcA() start. \n");
	return; //��ȯ���� ������ void
	printf("funcA() end. \n");
}

//���μ��� ���μ��� ������ Ÿ���� ���ƾ� �Ѵ�.
void funcB(int salary)//���μ�
{
	printf("funcB() salary %d. \n", salary);
	printf("funcB() end. \n");
	return;
}

int funcD()
{
	int over_time = 15;

	//printf("funcD() ���� %d. \n", over_time * 3700000);

	return over_time * 3700000;
}