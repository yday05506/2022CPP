#include <iostream>

using namespace std;

//pre�����Ϸ��� ó��
//�ڷ����� ������� ����
//����� ����
//#define jegob ((A) * (A))

//��ũ�� �Լ��� ������
//������ �Լ��� ȣ����� ������
//�ڷ����� ���� �ް�
//�����Ϸ��� ó�� -> ����� ����
inline int jegob(int a)
{
	return a * a;
}

int main(void)
{
	cout << jegob(3) << endl;

	return 0;
}