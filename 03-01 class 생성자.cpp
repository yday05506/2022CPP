#include <iostream>	// cout, endl ���
#include <string>

using namespace std;

class Student
{
private :
	int nHakbun;
	string sName;
	// �Ʒ��� ���� �⺻�����ڸ� �����Ϸ��� �������
	// ������ : ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	// ��ȯ���� ���� ���� �ʴ´�
public:
	Student() 
	{
		nHakbun = 1234;
		sName = "�̻��";
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}
};

int main(void)
{
	// �⺻������
	Student stu;
	//Student student2 = Student();

	return 0;
}