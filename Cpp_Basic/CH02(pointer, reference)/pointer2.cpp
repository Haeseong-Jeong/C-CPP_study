#include <iostream>
using namespace std;

int main()
{
	int value = 100;
	int* pointervalue = &value;

	cout << value << endl;
	cout << &value << endl;
	cout << pointervalue << endl;
	cout << *pointervalue << endl;
	cout << &pointervalue << endl;

	int** ppointervalue = &pointervalue;
	cout << ppointervalue << endl;//value�� �ּҰ��� �ּҰ�
	cout << *ppointervalue << endl;//value�� �ּҰ�
	cout << **ppointervalue << endl;//value�� ��
	return 0;
}