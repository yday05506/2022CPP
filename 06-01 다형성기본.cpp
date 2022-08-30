#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void eat(void) { cout << "µ¿¹° ¸Ô¾î" << endl; }
	void roar(void) { cout << "µ¿¹° Â¢¾î" << endl; }
	void walk(void) { cout << "µ¿¹° °É¾î" << endl; }
	
private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	void roar() { cout << "¾îÈï" << endl; }
};

class Dog : public Animal {
public:
	void roar() { cout << "¸Û¸Û" << endl; }
};

void main(void) {
	Animal* animal = new Animal();
	animal->roar();	// "µ¿¹° Â¢¾î"
	delete animal;

	animal = new Tiger();
	animal->roar();	// "µ¿¹° Â¢¾î" (¾îÈï X)
	delete animal;

	animal = new Dog();
	animal->roar();	// "µ¿¹° Â¢¾î" (¸Û¸Û X)
	delete animal;
}