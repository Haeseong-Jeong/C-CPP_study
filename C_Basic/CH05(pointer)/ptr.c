#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 3


//���ڿ����� �����Ϳ� �迭�ּ��� ������ �˾ƾ��Ѵ�.? 
// � str �Լ����� ���ڿ��� ������ ���� ���� �Է�(��ȯ)�ϴ���, �����ּҸ� �Է�(��ȯ)�ϴ���
int main()
{
	//char arr1[10] = "Hello";
	//
	//char* ptr1 = arr1;//���ڿ��� char�� �迭, �迭�̸��� �迭�� �����ּ�
	//char* ptr2 = strdup(arr1); //strdup �� �ּҸ� �����ش�
	//char* ptr3 = "World"; //���ڿ�

	//printf("%s\n", arr1);
	//printf("%s\n", ptr1);
	//printf("%s\n", ptr2);
	//printf("%s\n", ptr3);

	//*******************************v.2**************************************//

	/*char* arr2[3] = { "jack","sam","paul" };

	printf("%s\n", arr2[0]);
	printf("%s\n", arr2[1]);
	printf("%s\n", arr2[2]);

	char* arr3[3];

	arr3[0] = arr2[0];
	arr3[1] = "han";
	arr3[2] = "sora";
	

	printf("%s\n", arr3[0]);
	printf("%s\n", arr3[1]);
	printf("%s\n", arr3[2]);*/

	//*******************************v.3**************************************//
	
	char** str = (char**)malloc(sizeof(char*) * 3);
	str[0] = (char*)malloc(sizeof(char) * 5);
	str[1] = (char*)malloc(sizeof(char) * 4);
	str[2] = (char*)malloc(sizeof(char) * 3);

	char ch[5] = "hi";
	//strcpy(str[0], "abcd");
	str[0][0] = "abcd";
	//strcpy(str[1], "efg");
	strcpy(str[1], ch);
	//strcpy(str[2], "hi");
	str[2] = strdup(ch);

	printf("%s\n", str[0][0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);

	free(str[0]);
	free(str[1]);
	free(str[2]);
	free(str);
	
	
	return 0;
}