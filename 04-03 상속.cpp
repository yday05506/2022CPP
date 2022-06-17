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
	cout << "Student �Ϲݻ����� ȣ��." << endl;
	int len = strlen(Name) + 1;	// ������ ���� �ľ�
	sName = new char[len];	// ������ŭ �޸� �Ҵ�
	strcpy(sName, Name);
}

// ���� �ۼ� �� �ص� �����Ϸ��� �˾Ƽ� ������ִ� ���������
Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "Student ��������� ȣ��." << endl;
	int len = strlen(rhs.sName) + 1;	// ������ ���� �ľ�
	sName = new char[len];	// ������ŭ �޸� �Ҵ�
	strcpy(sName, rhs.sName);
}

Student::~Student()
{
	delete[]sName;
	cout << "Student �Ҹ��� ȣ��" << endl;
}

void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}

// ���Կ����� �����ε�
Student& Student::operator=(const Student& rhs)
{
	nHakbun = rhs.nHakbun;

	cout << "Student ���Կ����� ȣ��." << endl;
	int len = strlen(rhs.sName) + 1;	// ������ ���� �ľ�
	sName = new char[len];	// ������ŭ �޸� �Ҵ�
	strcpy(sName, rhs.sName);

	return *this;
}

class HighSchoolStudent : public Student
{
public:
	HighSchoolStudent(int Hakbun, const char* Name, bool isD)
		: Student(Hakbun, Name), isDormitory(isD)
	{
		cout << "HighSchoolStudent ������ ȣ��" << endl;
	}
	~HighSchoolStudent()
	{
		cout << "HighSchoolStudent �Ҹ��� ȣ��" << endl;
	}
private:
	bool isDormitory;
};

int main(void)
{
	HighSchoolStudent hss = HighSchoolStudent(1111, "PSH", false);
	hss.show();

	return 0;
}