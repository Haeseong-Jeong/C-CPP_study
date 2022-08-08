#include <stdio.h>
#include <string.h>

typedef struct EMPLOYEE
{
	char name[20];
	int salary;
	float height;
	char comAddt[100];
} EMP;

void funcA(struct EMPLOYEE *x);
struct EMPLOYEE funcB();

int main()
{
	
	struct EMPLOYEE emps = { "ȫ�浿",350000, 175, "����� ������ 100" }, my;
	
	funcA(&emps);
	printf("[main] %s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddt);
	my = funcB();

	printf("[funcB] %s, %d, %.2f, %s \n", my.name, my.salary, my.height, my.comAddt);

	return 0;
}


void funcA(struct EMPLOYEE *x)
{
	printf("[funcA] %s, %d, %.2f, %s \n", (*x).name, (*x).salary, x->height, x->comAddt);
	
	(*x).salary += 200000;
}

struct EMPLOYEE funcB()
{
	struct EMPLOYEE tmp;

	//tmp.name = "���޷�"; �ٵ� �ּҶ� �����̾ȵ�
	strcpy(tmp.name, "���޷�");
	tmp.salary = 4500000;
	tmp.height = 175.4;
	strcpy(tmp.comAddt, "�λ�� �ؿ�뱸");

	//printf("[funcB] %s, %d, %.2f, %s \n", tmp.name, tmp.salary, tmp.height, tmp.comAddt);
	return tmp;
}