#include <iostream>
using namespace std;

struct Strucr1
{
	int i;
	int j;
};

const Strucr1 s0 = { 0 };//��� ���� 0���� �ʱ�ȭ 
//const Strucr1 s0 = { 8 }; �ʱ�ȭ ����, 0 �ƴϸ� �ȉ�
const Strucr1 s1 = { 2, 0 };
const Strucr1 s2 = { 10, 5 };
int arr1[10] = { 0 };
int arr2[3][2] = { {1,2},{6,7},{4,5} };

int main()
{
	Strucr1 S;
	
	cout << s0.i << s0.j << endl;
	cout << s2.i << s2.j << endl;

	return 0;
}