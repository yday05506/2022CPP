#include <iostream>	// cout, endl ���
#include "04-01.h"

using namespace std;

Point::Point() {};
Point::Point(int x, int y)
	:mX(x), mY(y) {};

void Point::show() {
	cout << "(" << mX << ", " << mY << ")" << endl;
};

Point Point::operator+(const Point& rhs)
{
	Point p;	// �Ű����� ���� ������ �ʿ�
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;

	return p;
};