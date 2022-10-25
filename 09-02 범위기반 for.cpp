#include <iostream>
#include <string>

using namespace std;

void main(void)
{
	int arr[4] = { 10,20,30,40 };

	for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
		cout << arr[i] << "\t";

	cout << endl;

	for (int x : arr)
		cout << x << "\t";
}