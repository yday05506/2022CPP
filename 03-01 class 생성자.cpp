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
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

// ��������� �ʱ�ȭ �� �� ������ const�� ������ ������ ������ ��������� �� �� �ִ�
Student::Student(int Hakbun, string Name)
	: nHakbun(Hakbun), sName(Name)	// �������(�Ű�����)
{
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}

int main(void)
{
	//// �⺻������
	//Student stu1 = Student();
	////Student student2 = Student();
	//stu1.show();

	//Student stu2 = Student(1111, "YDY");
	//stu2.show();

	int* ptr1 = new int;
	*ptr1 = 20;

	cout << *ptr1 << endl;

	delete ptr1;

	return 0;
}