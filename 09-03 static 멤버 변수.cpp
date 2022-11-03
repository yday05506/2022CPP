#include <string>
#include <iostream>

using namespace std;

class Champ {
public :
	Champ(int age, const string& name);
	static int getCount(void);

private:
	int _age;
	string _name;
	static int mCount;
};

int Champ::mCount = 0;

Champ::Champ(int age, const string& name)
	: _age(age), _name(name)
{
	++mCount;
}

static int getCount(void) {
	// age++;	// ����, static ����Լ����� static ��������� ��� ����
	return mCount;
}

void main(void) {
	// ��ü ���� ���̵� static ����Լ� ��� ����
	cout << Champ::getCount() << endl;

	Champ* teemo = new Champ(10, "Ƽ��");
	Champ* masteryi = new Champ(11, "������ ��");
	Champ* veign = new Champ(14, "����");

	// static ������� mCount�� ��� ��ü�� ����
	cout << teemo->getCount() << endl;
	cout << Champ::getCount() << endl;
}