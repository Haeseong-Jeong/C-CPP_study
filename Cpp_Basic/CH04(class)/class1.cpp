#include <iostream>
using namespace std;


class Chulsoo
{
	
public:
	//���ο� �Լ� ����
	int age = 28;

	int height(int height = 189);//����Ʈ �Ű�����

	void Eat()
	{
		cout << "ö���� �Դ´�" << endl;
	}
	void Sleep()
	{
		cout << "ö���� �ܴ�" << endl;
	}
	
	void Study();


};

//�ܺο� �Լ� ����
void Chulsoo::Study()
{
	cout << "ö���� ���� �Ѵ�" << endl;
}

int Chulsoo::height(int x)
{
	cout << "ö���� Ű��" << x << endl;
	return x;
}



int main()
{
	Chulsoo cs;
	cs.Eat();
	cs.Sleep();
	cout<<cs.age<<endl;
	cs.age = 20;
	cout << cs.age << endl;

	cs.height();
	return 0;
}