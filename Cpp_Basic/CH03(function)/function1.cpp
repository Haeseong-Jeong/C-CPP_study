#include <iostream>
using namespace std;

//����Ʈ �Ű������� �Լ� ����ο��� �־� ��� �Ѵ�. �����ʺ��� �־��...
int funcA(int a = 1, int b = 3);

int main()
{
	cout << funcA() << endl;
	cout << funcA(5) << endl;
	cout << funcA(2, 4) << endl;
}

int funcA(int a, int b)
{
	return a + b;
}