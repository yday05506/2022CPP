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
	// IBW.insert(pair<string, string>("�쿵��", "������"));
	// IBW.insert(pair<string, string>("����", "���⿵"));
	// IBW.insert(pair<string, string>("�ǹο�", "������"));
	// IBW.insert(pair<string, string>("����ȣ", "���¿�"));
	IBW["�쿵��"] = "������";
	IBW["����"] = "���⿵";
	IBW["�ǹο�"] = "������";
	IBW["����ȣ"] = "���¿�";

	// vector�� ��� ���� ���(�ݺ���)
	for (auto iter = IBW.begin(); iter != IBW.end(); iter++) {
		cout << iter->first << "�� " << iter->second << "��" << endl;
	}

	// "�쿵��"�� key�� ������ iterator
	map<string, string>::iterator main_person = IBW.find("�쿵��");

	// �ش� key�� �����ϴ��� üũ
	if (main_person != IBW.end())
		//cout << "����� ���ΰ��� " << main_person->second << endl;
		cout << "����� ���ΰ��� " << IBW["�쿵��"] << endl;
}