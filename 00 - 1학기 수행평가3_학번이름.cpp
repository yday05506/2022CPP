﻿#include <iostream>
#include <cstring>

using namespace std;

class m_string {
private:
	char* _Myptr;
	int _Mysize;

public:
	m_string() { _Mysize = 0; _Myptr = NULL; }
	~m_string() { delete[]_Myptr; }
	m_string(const char* p)
	{
		_Mysize = strlen(p) + 1;
		_Myptr = new char[_Mysize];
		strcpy(_Myptr, p);
	}
	m_string(int x, char p)
	{
		this->_Mysize = x + 1;
		this->_Myptr = new char[this->_Mysize];
		for (int i = 0; i < x; i++)
			_Myptr[i] = p;
		_Myptr[x] = '\0';
	}
	m_string(const m_string& rhs)
	{
		_Mysize = strlen(rhs._Myptr) + 1;
		_Myptr = new char[_Mysize];
		strcpy(_Myptr, rhs._Myptr);
	}
	m_string& operator= (const char* p)
	{
		delete[] _Myptr;
		_Mysize = strlen(p) + 1;
		_Myptr = new char[_Mysize];
		strcpy(_Myptr, p);
		return *this;
	}
	char& operator[](int i)
	{
		return this->_Myptr[i];
	}
	m_string operator+(const m_string& rhs)
	{
		m_string tmp;
		int len = this->_Mysize + strlen(rhs._Myptr);
		tmp = new char[len];
		strcpy(tmp._Myptr, this->_Myptr);
		strcat(tmp._Myptr, rhs._Myptr);
		return tmp;
	}
	bool operator== (const m_string& rhs)
	{
		return strcmp(_Myptr, rhs._Myptr) ? false : true;
	}
	m_string(char* c, int i)
	{
		char* tmp = new char[i + 1];
		for (int j = 0; j < i; j++)
			tmp[j] = c[j];
		tmp[i] = '\0';
		_Myptr = tmp;
	}
	m_string(char* x, char* y)
	{
		int len = y - x + 1;
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
	cout << str1 << " " << str1.size() << endl;

	m_string str2 = str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = "m_string";
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + "ab";
	cout << str2 << " " << str2.size() << endl;

	cout << (str1 == "123") << endl;
	cout << (str1 == str2) << endl;

	return 0;
}
