#include <iostream>
#include <map>

using namespace std;

int main(void) {
	map<string, string> student;
	student.insert(pair<string, string>("양다연", "사진부"));
	student.insert(pair<string, string>("안주연", "만화창작부"));
	student.insert(pair<string, string>("정현진", "프랑스자수부"));

	map<string, string>::iterator iter;
	for (iter = student.begin(); iter != student.end(); iter++)
		cout << iter->first << "은 " << iter->second << "이다." << endl;

	student.erase("양다연");

	cout << "------------------------" << endl;

	for (iter = student.begin(); iter != student.end(); iter++)
		cout << iter->first << "은 " << iter->second << "이다." << endl;
}