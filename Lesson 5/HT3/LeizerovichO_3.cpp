/*
Створіть: прототип функції для обчислення довжини кола, площі кола і об’єму кулі, якщо відомий радіус
(функція не повертає результат, передача параметрів за посиланням); реалізацію цієї функції.
За допомогою функції обчисліть довжину кола, площу кола і об’єм кулі за трьома даними радіусами.
*/

#include <iostream>
#include <cmath>

using namespace std;

void circle(double R, double& L, double& S, double& V)
{
	L = 2 * 3.14 * R;
	S = 3.14 * pow(R, 2);
	V = (4.0 / 3) * 3.14 * pow(R, 2);
}

int main()
{
	double r, l, s, v;
	cout << "Enter radius: ";
	for (int i = 0; i < 3; i++)
	{
		cin >> r;
		while (r < 0)
		{
			cout << "Invalid number: ";
			cin >> r;
		}
		circle(r, l, s, v);
		cout << "R: " << r << endl << "L: " << l << endl << "S: " << s << endl << "V: " << v << endl;
		if (i != 2)
		{
			cout << "Try another number: " << endl;
		}
	}
	return 0;
}