#include <iostream>
#include <string>

using namespace std;

class CBank {
private:
	string name;
	string account;
	int balance;
public:
	// 생성자 작성
	CBank();
	CBank(string cName, string cAccount, int cBalance);
	void Money();
};

CBank::CBank(string cName, string cAccount, int cBalance)
	:name(cName), account(cAccount), balance(cBalance)
{
	cout << "멤버 변수 초기화" << endl;
}

void CBank::Money() {
	cout << "예금주 이름 : " << name << endl;
	cout << "계좌 번호 : " << account << endl;
	cout << "입금 된 금액 : " << balance << "원" << endl;
}

int main(void)
{
	CBank acc = CBank("양다연", "1002248478948", 10000);

	acc.Money();
}