#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 3

//���ڿ����� �����Ϳ� �迭�ּ��� ������ �˾ƾ��Ѵ�.? 
// � str �Լ����� ���ڿ��� ������ ���� ���� �Է�(��ȯ)�ϴ���, �����ּҸ� �Է�(��ȯ)�ϴ���
int main()
{
	//char alpa[5] = "abcd";//�̰� ���ڿ��̾�.. ���ڹ迭�� �̸��� �� �迭�� �����ּ�
	//	//����� �迭 ������
	//printf("%c\n", alpa[0]);
	//printf("%c\n", alpa[1]);
	//printf("%c\n", alpa[2]);
	//printf("%c\n", alpa[3]);
	//printf("%c\n", alpa[4]);

	//char* str = (char*)malloc(sizeof(char) * 3); // �̰� ���ڿ�(���ڹ迭)�̾�...
	// 		//���⵵ �迭 ������
	//str[0] = 'w';
	//str[1] = 'd';
	//str[2] = 'z';
	//
	//printf("%c\n", str[0]);
	//printf("%c\n", str[1]);
	//printf("%c\n", str[2]);

	//free(str);


	char** str = (char**)malloc(3* sizeof(char*)); // �̰� ���ڿ� �迭�̾�...
				//���⵵ �迭 ������
	str[0] = "hello";
	str[1] = "sam";
	str[2] = "fuck";
	//str[3] = "kkkk"; //-> ����

	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	//printf("%s\n", str[3]); // -> ����

	free(str);


	char* ptr[3] = { "hello","free","str" };//�̰� ������ �迭�̾�..
	
	printf("%s\n", ptr[0]);
	printf("%s\n", ptr[1]);
	printf("%s\n", ptr[2]);

	return 0;
}