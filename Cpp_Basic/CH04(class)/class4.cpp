#include <iostream>
#include <string>
using namespace std;

#define NAME_LEN 20
#define SEX_LEN 10
#define JOB_LEN 20
#define CHARACTER_LEN 20

struct Chulsoo
{
private:
	char name[NAME_LEN];
	char sex[SEX_LEN];
	char job[JOB_LEN];
	char character[CHARACTER_LEN];
	int age;
	bool marrige;
	
public:
	void introduce()
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << sex << endl;
		cout << "���� : " << job << endl;
		cout << "���� : " << character << endl;
		cout << "���� : " << age << endl;
		cout << "��ȥ ���� : " << (marrige ? "yes" : "no") << endl;
	}

	void eat(const char* food)
	{
		cout << "ö����" << food << "(��)�� �Դ´�" << endl;
	}

	void sleep()
	{
		cout << "ö���� �ܴ�." << endl;
	}
	void drive(const char* destination)
	{
		cout << "ö����" << destination << "�� ����" << endl;
	}
	void wirte()
	{
		cout << "ö���� å�� ����." << endl;
	}
	void read()
	{
		cout << "ö���� å�� �д´�." << endl;
	}
	void constructor(const char* name, const char* sex, const char* job, 
		const char* character, int age, bool marragie)
	{
		strcpy_s(this->name, name);
		strcpy_s(this->sex, sex);
		strcpy_s(this->job, job);
		strcpy_s(this->character, character);
		this->age = age;
		this->marrige = marrige;
	}
};

struct Younghee
{
private:
	char name[NAME_LEN];
	char sex[SEX_LEN];
	char job[JOB_LEN];
	char character[CHARACTER_LEN];
	int age;
	bool marrige;

public:
	void introduce()
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << sex << endl;
		cout << "���� : " << job << endl;
		cout << "���� : " << character << endl;
		cout << "���� : " << age << endl;
		cout << "��ȥ ���� : " << (marrige ? "yes" : "no") << endl;
	}

	void eat(const char* food)
	{
		cout << "�����" << food << "(��)�� �Դ´�" << endl;
	}

	void sleep()
	{
		cout << "����� �ܴ�." << endl;
	}
	void drive(const char* destination)
	{
		cout << "�����" << destination << "�� ����" << endl;
	}
	void wirte()
	{
		cout << "����� å�� ����." << endl;
	}
	void read()
	{
		cout << "����� å�� �д´�." << endl;
	}
	void shopping()
	{
		cout << "����� �����Ѵ�." << endl;
	}
	void constructor(const char* name, const char* sex, const char* job,
		const char* character, int age, bool marragie)
	{
		strcpy_s(this->name, name);
		strcpy_s(this->sex, sex);
		strcpy_s(this->job, job);
		strcpy_s(this->character, character);
		this->age = age;
		this->marrige = marrige;
	}
};

int main()
{
	Chulsoo cs;
	Younghee yh;

	cs.constructor("ö��", "����", "�۰�", "diligent", 32, true);
	yh.constructor("����", "����", "�ֺ�", "diligent", 38, true);
	cs.eat("������ũ");

	return 0;
}