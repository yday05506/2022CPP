#include <iostream>	// cout, endl ���
#include <stdio.h>	// printf ���
#include <string>	// std::string Ŭ���� ���

using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%s \n", cI);	// aaa

	string cppI = "aaa";
	printf("%s \n", cppI.c_str());	// aaa
	cout << cppI.c_str() << endl;	// aaa
}