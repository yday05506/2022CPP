#include <iostream>
#include <string>

using namespace std;

enum Food {
	KOREAN,
	JAPANESE,
	CHINESE
};

void main(void)
{
	string food_spot[3];

	food_spot[Food::KOREAN] = "�����";
	food_spot[Food::JAPANESE] = "��Ű�丮 ��";
	food_spot[Food::CHINESE] = "��ȭ��";

	cout << "���� ����" << endl;
	int menu = 1;
	switch (menu)
	{
	case Food::KOREAN:
		cout << "�ѽ� : ";
		break;
	case Food::JAPANESE:
		cout << "�Ͻ� : ";
		break;
	case Food::CHINESE:
		cout << "�߽� : ";
		break;
	}
	cout << food_spot[menu];
}