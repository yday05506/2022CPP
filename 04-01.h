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