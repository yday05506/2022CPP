#include <iostream>
#include <string>

using namespace std;

class CBank {
private:
	string name;
	string account;
	int balance;
public:
	// ������ �ۼ�
	CBank();
	CBank(string cName, string cAccount, int cBalance);
	void Money();
};

CBank::CBank(string cName, string cAccount, int cBalance)
	:name(cName), account(cAccount), balance(cBalance)
{
	cout << "��� ���� �ʱ�ȭ" << endl;
}

void CBank::Money() {
	cout << "������ �̸� : " << name << endl;
	cout << "���� ��ȣ : " << account << endl;
	cout << "�Ա� �� �ݾ� : " << balance << "��" << endl;
}

int main(void)
{
	CBank acc = CBank("��ٿ�", "1002248478948", 10000);

	acc.Money();
}