#include <iostream>
#include <cstring>

using namespace std;

class m_string {
private:
	char* _Myptr;	// 문자 메모리 공간 할당
	int _Mysize;	// 문자열 길이 저장 변수

public:
	m_string() { _Mysize = 0; _Myptr = NULL; }	// 생성자
	~m_string() { delete[]_Myptr; }	// 소멸자
	m_string(const char* p)	// 문자열 길이 구하기
	{
		_Mysize = strlen(p) + 1;	// 길이를 알려주는 함수
		_Myptr = new char[_Mysize];	// 메모리 할당
		strcpy(_Myptr, p);	// 문자열 복사
	}
	// 생성자 오버로딩
	m_string(int x, char p)
	{
		this->_Mysize = x + 1;
		this->_Myptr = new char[this->_Mysize];	// 동적 할당
		for (int i = 0; i < x; i++)
			_Myptr[i] = p;
		_Myptr[x] = '\0';	// 안 넣어주면 쓰레기값
	}
	// 깊은 복사
	m_string(const m_string& rhs)
	{
		_Mysize = strlen(rhs._Myptr) + 1;
		_Myptr = new char[_Mysize];
		strcpy(_Myptr, rhs._Myptr);
	}
	// 대입연산자
	m_string& operator=(const char* p) {
		delete[] _Myptr;
		_Mysize = strlen(p) + 1;
		_Myptr = new char[_Mysize];
		strcpy(_Myptr, p);
		return *this;
	}
	// 덧셈연산자
	m_string operator+(const m_string& rhs)
	{
		m_string tmp;
		int len = this->_Mysize + strlen(rhs._Myptr);
		tmp = new char[len];
		strcpy(tmp._Myptr, this->_Myptr);
		strcat(tmp._Myptr, rhs._Myptr);
		return tmp;
	}
	// 비교연산자
	int operator== (const m_string& rhs)
	{
		return strcmp(_Myptr, rhs._Myptr) ? -1 : 0;
	}
	// 생성자 오버로딩
	m_string(char* c, int i)
	{
		char* tmp = new char[i + 1];
		for (int j = 0; j < i; j++)
			tmp[j] = c[j];
		tmp[i] = '\0';
		_Myptr = tmp;	// 얕은 복사
	}
	// 생성자 오버로딩
	m_string(char* x, char* y)
	{
		int len = y - x + 1;	// 주소
		_Myptr = new char[len];
		for (int i = 0; i < len; i++)
			_Myptr[i] = x[i];
		_Myptr[len - 1] = '\0';
	}
	void size();
	friend ostream& operator<<(ostream& os, const m_string& ms)
	{
		os << ms._Myptr;
		return os;
	}
};


int main(void)
{
	m_string str1 = "123";
	cout << str1 << " ";
	str1.size();

	m_string str2 = str1;
	cout << str2 << " ";
	str2.size();

	str2 = "m_string";
	cout << str2 << " ";
	str2.size();

	str2 = str2 + str1;
	cout << str2 << " ";
	str2.size();

	str2 = str2 + "ab";
	cout << str2 << " ";
	str2.size();

	cout << (str1 == "123") << endl;
	cout << (str1 == str2) << endl;

	return 0;
}
