#include <iostream>
#define jegob(A) A * A

using namespace std;

int main(void)
{
	cout << jegob(3 + 1) << endl;	//4*4가 아닌 의도치 않은 결과
	cout << 3 + 1 * 3 + 1 << endl;	//위의 코드와 똑같음

	return 0;
}