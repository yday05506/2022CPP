#include <iostream>
#include <string>

using namespace std;

template <typename T>
T sum(T x, T y) {
	T z = x + y;
	return z;
}

int main(void) {
	cout << sum<int>(1, 2) << endl;
	cout << sum<double>(1.0, 2.0) << endl;

	return 0;
}