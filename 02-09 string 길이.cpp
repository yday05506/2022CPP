#include <iostream>	// cout, endl ���
#include <stdio.h>	// printf ���
#include <string.h>	// strlen ���
#include <string>	// std::string Ŭ���� ���

using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%d \n", strlen(cI));	// 3

	string cppI = "aaa";
	cout << cppI.size() << endl;	// 3
	cout << cppI.length() << endl;	// size�� ���� ���
}