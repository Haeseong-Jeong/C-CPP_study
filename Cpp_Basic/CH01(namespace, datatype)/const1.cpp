#include <iostream>
using namespace std;

int getsize();

int main()
{
	const int size = 100;
	const int buffersize = getsize();
	//size = 200; ���� �Ұ�
	//const int count; const�� ���� ���ÿ� �ʱ�ȭ�� �ؾ���

	cout << size << endl;
	cout << buffersize << endl;
	return 0;
}

int getsize()
{
	return 200;
}