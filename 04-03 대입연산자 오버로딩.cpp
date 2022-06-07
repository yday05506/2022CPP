#include <iostream>	// cout, endl ���
#include <string.h>	// strcpy() ���

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// �Ʒ��� ���� �⺻�����ڸ� �����Ϸ��� �������
	// ������ : ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	// ��ȯ���� ���� ���� �ʴ´�
	Student();
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);
	~Student();

	Student& operator=(const Student& rhs);

	void show();
};

Student::Student() {}

// ��������� �ʱ�ȭ �� �� ������ const�� ������ ������ ������ ��������� �� �� �ִ�
Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)	// �������(�Ű�����)
{
	cout << "�Ϲݻ����� ȣ��." << endl;
	int len = strlen(Name) + 1;	// ������ ���� �ľ�
	sName = new char[len];	// ������ŭ �޸� �Ҵ�
	strcpy(sName, Name);
}

// ���� �ۼ� �� �ص� �����Ϸ��� �˾Ƽ� ������ִ� ���������
Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "��������� ȣ��." << endl;
	int len = strlen(rhs.sName) + 1;	// ������ ���� �ľ�
	sName = new char[len];	// ������ŭ �޸� �Ҵ�
	strcpy(sName, rhs.sName);
}

Student::~Student()
{
	delete[]sName;
	cout << "�Ҹ��� ȣ��" << endl;
}

void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}

// default ���Կ�����
Student& Student::operator=(const Student& rhs)
{
	nHakbun = rhs.nHakbun;
	sName = rhs.sName;

	return *this;
}

int main(void)
{
	// "�Ϲݻ����� ȣ��" ���
	Student stu1 = Student(1111, "PSH");
	Student stu3 = Student(2222, "PJC");
	stu1.show();	// (1111, "PSH")

	// ��������� ȣ��
	Student stu2 = stu1;	// stu2 = Student(stu1)
	stu2.show();	// (1111, "PSH")

	// ���Կ����� ȣ�� (���� �����ε� ���� �� ��)
	stu1 = stu3;
	stu1.show();	// (2222, "PJC")
	
	return 0;
}