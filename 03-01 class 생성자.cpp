#include <iostream>	// cout, endl ���
#include <string.h>	// strcpy() ���

using namespace std;

class Student
{
private :
	int nHakbun;
	char* sName;
	
public:
	// �Ʒ��� ���� �⺻�����ڸ� �����Ϸ��� �������
	// ������ : ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	// ��ȯ���� ���� ���� �ʴ´�
	Student();
	Student(int Hakbun, const char* Name);

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

void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}

int main(void)
{
	Student stu1 = Student(1111, "YDY");
	stu1.show();

	return 0;
}