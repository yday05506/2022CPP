#include <iostream>	// cout, endl ���
using namespace std;

class Point
{
private:
	int mX;
	int mY;
public:
	Point(void);
	Point(int x, int y);
	Point operator+(const Point& rhs);	// ���� ��� ��
	void show();
};

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

	p1.show();	// (4, 6) ���

	return 0;
}