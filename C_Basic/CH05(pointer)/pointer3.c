#include <stdio.h>

int main()
{	
	
	//num[2] = *(num+2) = num + 2*�ڷ���ũ��
	int num[5] = { 100,200,300,400,500 };
	int i, *ptr;
	ptr = num;

	for ( i = 0; i < 5; i++)
	{
		printf("%p : %d, %d, %d, %d \n", &num[i], num[i], *(ptr+i), *(num+i),ptr[i]);//������ ���� �� ����
		//printf("%p : %d, %d \n", &num[i], num[i], *ptr+i);//���� �� �� ����	
	}
	printf("\n");

	char msg[20] = "Hello world.";
	char* p2;

	p2 = msg;
	printf("%c, %c, %c, %c \n", msg[0], *msg, *(msg+1),*p2);
	printf("%p, %s, %s \n", msg, msg, p2);
	

	int x = 0;

	//while (*(p2+x) != '\0') �� �ʿ� ����. -> while (*p2)
	while (*(p2+x) != '\0')//NULL = '\0'
	{
		printf("%c,", *(p2 + x));
		x++;
	}
	/*
	while (*p2)
	{
		printf("%c,", *p2);
		p2++;
	}*/
	printf("\n\n");


	char *p3;
	p3 = "multi campus !!!";//���ڿ� ����� ��򰡿� ����ǰ� �� ���� �ּҸ� ��ȯ, �װ��� p3�� ����
	//=> char *p3 = "multi campus !!!" //�ʱ�ȭ�� �����ص���
	
	printf("p3 : %p, %s \n", p3, p3);

	return 0;
}