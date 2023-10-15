/*
Описати функцію CircleS (R) дійсного типу, яка знаходить площу круга радіуса R (R - дійсне). 
За допомогою цієї функції знайти площі трьох кіл з даними радіусами. Площа круга радіуса R обчислюється за формулою S = π · R2. 
Як значення π вважати рівним 3.14.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double CircleS(double R)
{
	return 3.14 * pow(R, 2);
}

int main() {
	double r, s;
	cout << "Enter number for radius: ";
	cin >> r;
	for (int i = 0; i <= 2; i++)
	{
		s = CircleS(r);
		cout << "R= " << r << endl << "S= " << s << endl;
		if (i != 2)
		{
			cout << endl << "*******************" << endl << "Let's try another number" << endl;
			cin >> r;
		}
	}
	return 0;
}