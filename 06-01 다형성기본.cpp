#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void eat(void) { cout << "���� �Ծ�" << endl; }
	virtual void roar(void) { cout << "���� ¢��" << endl; }
	void walk(void) { cout << "���� �ɾ�" << endl; }
	
private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	void roar() override { cout << "����" << endl; }
};

class Dog : public Animal {
public:
	void roar() override { cout << "�۸�" << endl; }
};

void main(void) {
	Animal* animal = new Animal();
	animal->roar();	// "���� ¢��"
	delete animal;

	animal = new Tiger();
	animal->roar();	// "����"
	delete animal;

	animal = new Dog();
	animal->roar();	// "�۸�"
	delete animal;
}