/*
�������������� ������� Power1 � Power2 � ������� 1 � 2, ������� ������� Power3 (A, B) ������� ���� � ������� �����������, �� ��������� AB ��������� �����: 
���� B �� ������� ������� �������, �� ����������� Power2 (A, N), �� N - ����� ������ ����, �� ������� ����� B; ������ ����������� Power1 (A, B). 
�� ��������� Power3 ������ AP, BP, CP, ���� ���� ����� P, A, B, C.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double Power1(double A, double B) //���� ������� Power1
{
    if (A <= 0)
    {
        return 0.0;
    }
    return exp(B * log(A));
}

double Power2(double A, int N) //���� ������� Power2
{
    return pow(A, N);
}

double Power3(double A, double B) //���� ������� Power3
{
    if ((int)B == B)
    {
        return Power2(A, B);
    }
    else
    {
        return Power1(A, B);
    }
}

int main() 
{
    double a, p;
    cout << "Enter 2 numbers (type double): ";
    cin >> a >> p;
    for (int i = 0; i < 3; i++)
    {
        cout << setprecision(3) << fixed;
        double out = Power3(a, p);
        cout << out << endl;
        cout << "Great, now let's repeat with other 'a' value: ";
        cin >> a;
    }
	return 0;
}