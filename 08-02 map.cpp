#include <iostream>
#include <string>
#include <vector>	// vector STL ���
#include <map>

using namespace std;

// �쿵�� : ������
// ���� : ���⿵
// �ǹο� : ������
// ����ȣ : ���¿�

int main(void) {
	map<string, string> IBW;	// IBW : �̻��� ��ȣ�� �쿵��
	IBW.insert(pair<string, string>("�쿵��", "������"));
	IBW.insert(pair<string, string>("����", "���⿵"));
	IBW.insert(pair<string, string>("�ǹο�", "������"));
	IBW.insert(pair<string, string>("����ȣ", "���¿�"));

	// vector�� ��� ���� ���(�ݺ���)
	map<string, string>::iterator iter;
	for (iter = IBW.begin(); iter != IBW.end(); iter++) {
		cout << iter->first << "�� " << iter->second << "��" << endl;
	}

	map<string, string>::iterator main_person = IBW.find("�쿵��");
	cout << "����� ���ΰ��� " << (*main_person).second << endl;
}