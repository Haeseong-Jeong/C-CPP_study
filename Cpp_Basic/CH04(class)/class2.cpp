#include <iostream>
using namespace std;

class Restaurant
{
public:
	int steak;
};

class Chulsoo
{
public:
	//int Eat(int &steaknum) -> ������ũ ���� �ٲ��.
	int Eat(int steaknum)
	{
		steaknum = 10000;// "ö���� ���� ������ũ"
		cout << "ö���� �Դ´�." << endl;
		return steaknum;
	}
};

int main()
{
	Chulsoo cs;
	Restaurant rts;

	//����������� ö������ �� ������ũ ������ 20000
	rts.steak = 20000;
	cout << "ö����" << cs.Eat(rts.steak) << "������ �Դ´ٰ� �������� �ߴ�." << endl;

	//int &steaknum�ϰ�� 10000����� / rts.steak = 20000 -> 10000;
	cout << "���������" << rts.steak << "������ ������ũ�� ö������ �־���." << endl;

	return 0;

}