#include <iostream>	// cout, endl 사용
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
	Point p;	// 매개변수 없는 생성자 필요
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;

	return p;
};