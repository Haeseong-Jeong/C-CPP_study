#include <stdio.h>  //����°� ���õ� �Լ� ������ ����
//#�� ��ó����(;���� ������ �ȉ�)

//return type �Լ��� (parameter)
fucnA()
{
	printf("funcA() start. \n");
	printf("funcA() end.\n");
}

int main() //main �Լ��� �ڵ����� �����ϴ� ������ �Լ�
{
	printf("main() start. \n");
	fucnA(); // �Լ�ȣ��
	printf("main() end. \n");

	return 0;
}

