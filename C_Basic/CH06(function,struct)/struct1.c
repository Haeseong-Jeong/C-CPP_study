#include <stdio.h>

//����ü(): ������ �ִ� �����͵��� �ϳ��� �ڷ������� ����� ��밡���ϵ��� ����
// ����� ���� �ڷ����̴�. ��� �ڷ����� �͵� �ȴ�.


int main()
{
	typedef struct EMPLOYEE
	{
		char name[20];
		int salary;
		float height;
		char comAddt[100];
	} EMP ;

	struct EMPLOYEE emps = { "ȫ�浿",350000, 175, "����� ������ 100" };
	struct EMPLOYEE *ptr;//����ü ������ ����

	EMP tmp;


	printf("%d, %d \n", sizeof(emps), sizeof(struct EMPLOYEE));
	printf("emps : %p, %p \n", &emps, &emps.name);
	
	printf("%s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddt);
	
	tmp = emps;

	printf("%s, %d, %.2f, %s \n\n\n", tmp.name, tmp.salary, tmp.height, tmp.comAddt);

	printf("ptr sizeof : %d \n", sizeof(ptr));

	ptr = &emps;//-> ����ü ������ ������
	printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary, (*ptr).height, (*ptr).comAddt);

	return 0;
}