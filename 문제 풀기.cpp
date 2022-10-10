#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
	vector<int> v;
	int input, tot = 0;
	double avg;
	vector<int>::iterator p;

	for (int i = 0; i < 5; i++) {
		cin >> input;
		v.push_back(input);
	}

	cout << "데이터 : ";
	for (p = v.begin(); p != v.end(); p++) {
		cout << *p << " ";
		tot += *p;
	}
	cout << endl;

	avg = tot / 5;

	cout << "합 : " << tot << endl;
	cout << "평균 : " << avg << endl;

	return 0;
}