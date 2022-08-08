#include <iostream>
#include <string>
using namespace std;

int main()
{
	//[=] call by value [&] call by reference
	[] {cout << "lambda" << endl; }();
	[](int x, int y) {cout <<"���� = " << x + y << endl; }(2, 3);//x��2 y��3�� �����Ͽ� �ڵ� ����
	int k = [](int x, int y)->int {return x + y; }(5, 3);//�Ű����� x,y�� ���� �����ϴ� ���� �ۼ�
	cout << "���� = " << k << endl;

	int i = 20;
	int n = 10;
	//[=] mutable {cout << "i : " << ++i <<endl; }(); call by value �Ϸ��� mutable �ٿ�...
	[&]() {cout << "i : " << ++i << endl; }();
	cout << "[after lambda] i :" << i << endl;
	cout << [n](int x)->int {return n + x; }(20) << endl;

	auto love = [](string a, string b) {cout << a << "���� " << b << "(��)�� ����" << endl; };
	love("��", "��");
	love("����", "ġŲ");

	return 0;
}