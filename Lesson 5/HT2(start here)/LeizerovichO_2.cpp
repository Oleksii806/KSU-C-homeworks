/*
Створіть: прототип функції для обчислення квадрата, куба і зворотного значення дійсного числа 
(функція не повертає результат, передача параметрів за посиланням); реалізацію цієї функції. 
За допомогою функції обчисліть квадрат, куб і зворотне значення чотирьох чисел.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void NumInfo(double n, double& n2, double& n3, double& nRev)
{
	n2 = pow(n, 2);
	n3 = pow(n, 3);
	nRev = n * -1;
}

int main()
{
	double n, n2, n3, nRev;
	cout << "Enter number: ";
	for (int i = 0; i < 4; i++)
	{
		cin >> n;
		NumInfo(n, n2, n3, nRev);
		cout << "N: " << n << endl;
		cout << "N2: " << n2 << endl;
		cout << "N3: " << n3 << endl;
		cout << "Reverse N: " << nRev << endl;
		if (i != 3)
		{
			cout << "Let's try other numbers" << endl;
		}
	}
	return 0;
}