#include <iostream>
using namespace std;

int main()
{
	int num;
	printf(" �迭 ũ�� ���� �Է� : ");
	cin >> num;

	int *data = new int[num];//heap�� ����, �ּҷ� �޾ƾ���

	for (int i = 0; i < num; i++)
	{
		cout << " �迭 ��� �Է� : ";
		cin >> data[i];
	}

	cout << "�迭 = ";
	for (int i = 0; i < num; i++)
	{
		cout <<  data[i] << ",";
	}

	delete[] data;

	return 0;
}