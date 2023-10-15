/*
Елементи кола пронумеровані в такий спосіб: 1 - радіус R, 2 - діаметр D = 2 • R, 3 - довжина L = 2 • π • R, 4 - площа кола S = π • R2. 
Дано номер одного з цих елементів і його значення. Вивести значення інших елементів даного кола (в тому ж порядку). Значення π вважати рівним 3.14.
*/

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
void out(double r, double d, double l, double s)
{
	cout << "Circle info:" << endl << "R: " << r << endl << "D: " << d << endl;
	cout << "L: " << l << endl << "D: " << d << endl;
}
int main()
{
	int a;
	double R=0, D=0, L=0, S=0;
	cout << setprecision(2) << fixed;
	cout << "Enter number from 1 to 4: ";
	cin >> a;
	if (a <= 0 || a >= 5)
	{
		cout << "Incorrect input, try again: ";
		cin >> a;
	}
	if (a == 1)
	{
		cout << "Enter radius R (used type double. example: 3.45): ";
		cin >> R;
		D = R * 2;
		L = 2 * 3.14 * R;
		S = 3.14 * pow(R, 2);
		out(R, D, L, S);
	}
	else if (a == 2)
	{
		cout << "Enter diameter D (used type double. example: 3.45): ";
		cin >> D;
		R = D / 2;
		L = 2 * 3.14 * R;
		S = 3.14 * pow(R, 2);
		out(R, D, L, S);
	}
	else if (a == 3)
	{
		cout << "Enter length l (used type double. example: 3.45): ";
		cin >> L;
		R = L / (2 * 3.14);
		D = R * 2;
		S = 3.14 * pow(R, 2);
		out(R, D, L, S);
	}
	else if (a == 4)
	{
		cout << "Enter area S (used type double. example: 3.45): ";
		cin >> S;
		R = sqrt(S / 3.14);
		D = R * 2;
		L = 2 * 3.14 * R;
		out(R, D, L, S);
	}
	return 0;
}