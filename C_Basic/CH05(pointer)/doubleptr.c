#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* newgreet = "goodbye";

void change_ptr(char* q)// 
{
	printf("before q = %s\n", q);
	q = newgreet;
	printf("after q = %s\n", q);
}

void change_dptr(char** q)
{
	printf("before q = %s\n", *q);
	*q = newgreet;
	printf("after q = %s\n", *q);
}

int main()
{
	char* greet = "hello";

	printf("before greet = %s\n", greet);
	change_ptr(greet);
	printf("after chagne greet = %s\n", greet);

	//����������Ȱ���� main�Լ��� greet���� �ٲٱ�
	printf("before greet = %s\n", greet);
	change_dptr(&greet);
	printf("after chagne greet = %s\n", greet);

	return 0;
}