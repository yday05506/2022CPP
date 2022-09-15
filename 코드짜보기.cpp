#include <iostream>
#include <string>

using namespace std;

class Character {
public :
	Character(string na, int hp, int at, int de)
		:name(na), HP(hp), attack(at), defense(de) {}

	void Situation() {
		cout << "name : " << name << endl;
		cout << "hp : " << HP << endl;
		cout << "attack : " << attack << endl;
		cout << "defense : " << defense << endl;
	}

private:
	string name;
	int HP;
	int attack;
	int defense;
};

int main(void) {
	Character* character = new Character("AAA", 10, 5, 3);
	character->Situation();
}