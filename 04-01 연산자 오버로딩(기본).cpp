#include <iostream>	// cout, endl ���
#include "04-01.h"

using namespace std;

int main(void)
{
	Point p1(1, 2);
	Point p2(3, 4);
	Point sum = p1.operator+(p2);	// p1 + p2

	sum.show();	// (4, 6) ���

	return 0;
}