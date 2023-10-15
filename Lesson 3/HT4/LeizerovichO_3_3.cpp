/*
������� ������� DigitN (K, N) ������ ����, ��� ������� N-� ����� ������ ����������� ����� K (����� � ���� ����������� ������ �����). 
���� ������� ���� � ���� K ����� N, �� ������� ������� -1. 
��� ������� � �'��� ����� ����� ���������� ����� K1, K2, ..., K5 ��������� ������� DigitN � ���������� N, �� ��������� �� 1 �� 5.
*/

#include <iostream>
#include <string>

using namespace std;

int DigitN(int K, int N) {
	string sk = to_string(K);
	if (sk.length() < N) {
		return -1;
	}
	else if (sk.length() > N) {
		while (N != 1) {
			K = K / 10;
			N--;
		}
		return K % 10;
	}
}

int main()
{
	int k, n=3;
	int res;
	cout << "Enter K and N: ";
	cin >> k >> n;
	for (int i = 0; i < 4; i++) {
		res = DigitN(k, n);
		cout << res << endl;
		if (i != 3) {
			cout << "Great, now try with another K: ";
			cin >> k;
		}
	}
	return 0;
}