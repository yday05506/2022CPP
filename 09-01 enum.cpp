#include <iostream>
#include <string>

using namespace std;

enum Food {
	KOREAN,
	JAPANESE,
	CHINESE,
	COUNT
};

void main(void)
{
	string food_spot[Food::COUNT];

	food_spot[Food::KOREAN] = "�����";
	food_spot[Food::JAPANESE] = "��Ű�丮 ��";
	food_spot[Food::CHINESE] = "��ȭ��";

	cout << "���� ����" << endl;
	int menu = Food::JAPANESE;
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