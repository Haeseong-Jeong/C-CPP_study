#include <iostream>
#include "header1.h"
#include "header2.h"
using namespace std;
using namespace square;
using namespace rectangle;

namespace BestComlmpl
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}

namespace ProgComlmpl
{
	void SimpleFunc(void)
	{	
		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
	}
}


int val = 100;

int main()
{
	int val = 200;
	val += 20;
	::val += 20;//�������� �ҷ��ö� => ::������
	cout << "�������� Val + 20 : " << val << endl;
	cout << "�������� Val + 20 : " << ::val << endl;


	//cout << "Y1 : " << y1 << endl;
	//int y = x; ���� ���� ������ ���ӽ����̽��� ���� ���� �޶����� ������ ���ӽ����̽� ǥ��
	int y1 = square::x;
	int y2 = rectangle::x;

	cout << "Y1 : " << y1 << endl;
	cout << "Y2 : " << y2 << endl;

	//���ӽ����̽��� ���� �ٸ� ����
	BestComlmpl::SimpleFunc();
	ProgComlmpl::SimpleFunc();
}
