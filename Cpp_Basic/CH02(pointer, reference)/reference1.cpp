#include <iostream>
using namespace std;

int main()
{
	int num = 10;
	int& ref = num;//ref�� num�� ����

	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;//num�� ��µ�

	ref = 100;//num���� �ٲ�

	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;//num���� ��µ�

	cout << "&num = " << &num << endl;
	cout << "&ref = " << &ref << endl;//num���� �ּҰ� ��µ�

	cout << "num+ref = " << num+ref << endl;
	return 0;
}