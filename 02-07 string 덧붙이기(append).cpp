#include <iostream>	// cout, endl ���
#include <stdio.h>	// printf ���
#include <string.h>	// strcpy ���
#include <string>	// std::string Ŭ���� ���

using namespace std;

int main(void)
{
	char cMunja[20];
	strcpy(cMunja, "c_insert");	// c_insert
	strcat(cMunja, "++");		// c_intsert++
	printf("%s\n", cMunja);

	// ���ǻ��� : "cpp_insert" + "++"�ϸ� ���� �߻�
	std::string cppMunja;
	cppMunja = "cpp_insert";	// cpp_insert
	cppMunja = cppMunja + "++";	// cpp_intsert++

	cout << cppMunja << endl;
}