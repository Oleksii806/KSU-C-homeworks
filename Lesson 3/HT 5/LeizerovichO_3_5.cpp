/*
������� ������� Even (K) �������� ����, ��� ������� True, ���� ����� �������� K � ������, � False � ������ �������. 
� �� ��������� ������ ������� ������ ����� � ����� � 10 ����� �����.
*/

#include <iostream>

using namespace std;

bool Even(int K) {
	if (K % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int k;
	cout << "Enter K. If the number is even, 1 will be displayed, otherwise - 1. It'll repeat 10 times"<<endl;
	for (int i = 0; i < 10; i++) {
		cin >> k;
		cout << Even(k) << endl;
		cout << "let's try again: ";
	}
	return 0;
}