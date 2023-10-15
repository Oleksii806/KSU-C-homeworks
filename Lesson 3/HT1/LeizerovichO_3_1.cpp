/*
������� ������� Mean (X, Y, AMean, GMean), ��� �������� ������ ����������� AMean = (X + Y) / 2 � 
������ ����������� GMean = (X � Y) 1/2 ���� ���������� ����� X � Y (X � Y - ����� , AMean � GMean - ������ ��������� ������� ����). 
�� ��������� ���� ������� ������ ������ ����������� � ������ ����������� ��� ��� (A, B), (A, C), (A, D), ���� ��� A, B, C, D.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Mean(double X, double Y)
{
	double AMean, GMean;
	AMean = (X + Y) / 2;
	GMean = sqrt(X * Y);
	cout << "X= " << X << endl << "Y= " << Y << endl << "AMean= " << AMean << endl << "GMean= " << GMean << endl;
}

int main()
{
	cout << setprecision(3) << fixed;
	double a, b;
	cout << "Enter A and B: ";
	cin >> a >> b;
	for (int i = 0; i <= 2; i++)
	{
		Mean(a, b);
		if (i != 2)
		{
			cout << "Greate, now lets try change B with other value(enter only 1 number): ";
			cin >> b;
			cout << endl << "***********************" << endl;
		}
	}
	return 0;
}