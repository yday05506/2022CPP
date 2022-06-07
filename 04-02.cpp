#include <iostream>
#include "04-02.h"

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