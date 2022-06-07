#include <iostream>

using namespace std;

class Integer {
public:
	Integer() {};
	Integer(int a, int b);
	Integer(int v) : value(v) {};
	void print();
	Integer operator+(const Integer& rhs);
private:
	int value;
};

void Integer::print()
{
	cout << value << endl;
}

Integer Integer::operator+(const Integer& rhs)
{
	Integer I;
	I.value = value + rhs.value;

	return I;
}

int main(void)
{
	Integer a = Integer(1);
	Integer b = Integer(2);
	Integer c = a + b;
	c.print();

	return 0;
}