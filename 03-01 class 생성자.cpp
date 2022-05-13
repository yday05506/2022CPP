#include <iostream>	// cout, endl ���
#include <string>

using namespace std;

class Student
{
private :
	int nHakbun;
	string sName;
	
public:
	// �Ʒ��� ���� �⺻�����ڸ� �����Ϸ��� �������
	// ������ : ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	// ��ȯ���� ���� ���� �ʴ´�
	Student();
	Student(int Hakbun, string Name);

	void show();
};

Student::Student()
{
	this->nHakbun = 1234;
	this->sName = "�̻��";
	cout << "�Ϲݻ����� ����." << endl;
}

// ��������� �ʱ�ȭ �� �� ������ const�� ������ ������ ������ ��������� �� �� �ִ�
Student::Student(int Hakbun, string Name)
	: nHakbun(Hakbun), sName(Name)	// �������(�Ű�����)
{
	cout << "�Ϲݻ����� ����." << endl;
}

void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}

int main(void)
{
	Student* stu2 = new Student[6];
	for (int i = 0; i < 6; i++) {
		stu2[i].show();
	}

	delete []stu2;

	return 0;
}