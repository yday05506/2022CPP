#include <iostream>
#include <map>

using namespace std;

int main(void) {
	map<string, string> student;
	student.insert(pair<string, string>("��ٿ�", "������"));
	student.insert(pair<string, string>("���ֿ�", "��ȭâ�ۺ�"));
	student.insert(pair<string, string>("������", "�������ڼ���"));

	map<string, string>::iterator iter;
	for (iter = student.begin(); iter != student.end(); iter++)
		cout << iter->first << "�� " << iter->second << "�̴�." << endl;

	student.erase("��ٿ�");

	cout << "------------------------" << endl;

	for (iter = student.begin(); iter != student.end(); iter++)
		cout << iter->first << "�� " << iter->second << "�̴�." << endl;
}