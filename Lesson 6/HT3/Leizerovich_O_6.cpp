/*
������� ���������� ������� RootK (X, K, N) ������� ����, 
��� ��������� ��������� �������� ������ K-�� ������� � ����� X �� ��������:
Y0 = 1,
YN + 1 = YN - (YN - X / (YN) K-1) / K,
�� YN ������� RootK (X, K, N) ��� ���������� X � K. ��������� �������: X (> 0) - ����� �����, K (> 1) � N (> 0) - ���. 
�� ��������� ������� RootK ������ ��� ������ ����� X �������� �������� ���� ������ K-�� ������� 
��� ����� ����� ��������� N.
*/

#include <iostream>
#include <cmath>

using namespace std;

double RootK(double X, int K, int N) {
    if (N == 0) {
        return 1.0;
    }
    else {
        double Y = RootK(X, K, N - 1);
        return Y - (Y - X / pow(Y, K - 1)) / K;
    }
}

int main()
{
    double x;
    int k, n;
    cin >> x >> k>>n;
    for (int i = 1; i < 7; i++)
    {
        cout << RootK(x, k, n) << endl;
        cin >> n;
    }
	return 0;
}