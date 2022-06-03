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

int main(void)
{
	Point p1(1, 2);
	Point p2(3, 4);
	Point sum = p1.operator+(p2);	// p1 + p2

	sum.show();	// (4, 6) ���

	return 0;
}