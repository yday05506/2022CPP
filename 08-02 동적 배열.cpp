#include <iostream>
#include <string>
#include <vector>	// vector STL ���

using namespace std;

int main(void) {
	// i1, i2 ���� �迭 : ũ�Ⱑ ������ �迭
	int i1[10];
	int* i2 = new int[10];

	// i3 ���� �迭 : ũ�Ⱑ ���� �� �ִ� �迭
	vector<int> i3;	
	i3.reserve(10);	// ������ ������ 10��

	for (int i = 0; i < 10; i++) {
		i1[i] = i;
		i2[i] = i;
		i3.push_back(i);
	}

	// idx ���� �ʰ�(���� ����)
	// i1[10] = 10;
	// i2[10] = 10;
	
	// �ڵ����� ũ�� Ȯ�� �� ����
	i3.push_back(10);
}