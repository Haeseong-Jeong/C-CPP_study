#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	////save
	//ofstream output;
	//output.open("text.txt");
	//output << "��ſ� ���α׷���!!!" << endl;
	//output.close();
	//return 0;

	//open
	ifstream input;
	char message1[80];
	char message2[80];

	//������ �������� ��������.
	input.open("text.txt");
	input >> message1;
	input >> message2;

	cout << message1<< message2 << endl;
	
	//cout << message2 << endl;
	input.close();
	return 0;
}