#include <iostream>
#include <string>

using namespace std;

template <typename S, typename I>

class Character {
public :
	Character(S na, I hp, I at, I de)
		:name(na), HP(hp), attack(at), defense(de) {}

	void Situation() {
		cout << "name : " << name << endl;
		cout << "hp : " << HP << endl;
		cout << "attack : " << attack << endl;
		cout << "defense : " << defense << endl;
	}

private:
	S name;
	I HP;
	I attack;
	I defense;
};

int main(void) {
	Character<string, int>* character = new Character<string, int>("AAA", 10, 5, 3);
	character->Situation();

	delete character;
	return 0;
}