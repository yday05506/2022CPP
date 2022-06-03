#include <iostream>	// cout, endl 사용
using namespace std;

class Point
{
private:
	int mX;
	int mY;
public:
	Point(void);
	Point(int x, int y);
	Point operator+(const Point& rhs);	// 참조 써야 함
	void show();
};