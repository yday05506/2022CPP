#include <iostream>	// cout, endl ���
#include <stdio.h>	// printf ���
#include <string.h>	// strcpy ���
#include <string>	// std::string Ŭ���� ���

using namespace std;

int main(void)
{
	char cMunja[20];
	strcpy(cMunja, "c_insert");
	printf("%s\n", cMunja);

	std::string cppMunja;
	cppMunja = "cpp_insert";

	cout << cppMunja << endl;
}