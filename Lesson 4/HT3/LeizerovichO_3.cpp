/*
������� ������� Power23(N, N2, N3) ��� ������ �������� � ���� ������ ������ �����   N, ��� �� ������� ���������. 
�����! �������� ��������� N2 � N3 ����������� �� ����������. 
�� ��������� ������� Power23(N, N2, N3) ������ � ������� �������� � ���� ���� ����� �����.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Power23(double n, double &n2, double &n3)
{
	n2 = pow(n, 2);
	n3 = pow(n, 3);
}

int main()
{
	cout << setprecision(2) << fixed;
	double n, n2 = 0, n3 = 0;
	cout << "Enter number: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		Power23(n, n2, n3);
		cout << "Your number: " << n << endl << "pow2: " << n2 << endl << "pow3: " << n3 << endl;
		if (i != 4)
		{
			cout << "Nice, lets try with other number" << endl;
		}
	}
	return 0;
}