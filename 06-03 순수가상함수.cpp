#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	virtual void eat(void) = 0;
	virtual void roar(void) = 0;
	virtual void walk(void) = 0;

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	void eat() override { cout << "ȣ���� �ȳ�" << endl; }
	void roar() override { cout << "����" << endl; }
	void walk() override { cout << "ȣ���� ���" << endl; }
};

class Dog : public Animal {
public:
	void eat() override { cout << "�� �y�y" << endl; }
	void roar() override { cout << "�۸�" << endl; }
	void walk() override { cout << "�� ���" << endl; }
};

void main(void) {
	// Animal* animal = new Animal();	��ü�� ���� ��ü�� ���� �Ұ�
	Animal* animal = new Tiger();
	delete animal;
}