/*
Опишіть функцію Power23(N, N2, N3) для пошуку квадрату і куба даного цілого числа   N, яка не повертає результат. 
Увага! Передачу параметрів N2 і N3 забезпечити за покажчиком. 
За допомогою функції Power23(N, N2, N3) знайти і вивести квадрати і куби п’яти цілих чисел.
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