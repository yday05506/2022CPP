#include <iostream>

using namespace std;

int main(void)
{
	int a;

	//�����ͷ� a���� �ٲ�
	int* pa = &a;
	*pa = 30;	//a���� 30���� �ٲ�
	cout << a << endl;

	//������ a���� �ٲ�
	int& ra = a;
	ra = 50;	//a���� 50���� �ٲ�
	cout << a << endl;
}