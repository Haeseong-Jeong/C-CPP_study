#include <iostream>
using namespace std;

inline int Add_ten(int x, int y);

int main()
{
	int a, b;
	cout << "�� ������ �Է��ϼ��� : " << endl;
	cin >> a >> b;
	cout << "a + b =" << Add_ten(a,b)<< endl;

	return 0;
}

inline int Add_ten(int x, int y)
{
	return x + y + 10;
}