/*
Дано три числа. Вивести спочатку найменше, а потім найбільше з даних чисел.
Тестові дані: 3 5 4, 4 5 1
*/

#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter a, b and c: ";
	cin >> a >> b >> c;
	if (a > b && a > c)
	{
		cout << a << " > ";
		if (b > c)
		{
			cout << b << " > " << c << endl;
		}
		else
		{
			cout << c << " > " << b << endl;
		}
	}
	else if (b > a && b > c)
	{
		cout << b << " > ";
		if (a > c)
		{
			cout << a << " > " << c << endl;
		}
		else
		{
			cout << c << " > " << a << endl;
		}
	}
	else
	{
		cout << c << " > ";
		if (b > a)
		{
			cout << b << " > " << a << endl;
		}
		else
		{
			cout << a << " > " << b << endl;
		}
	}

	return 0;
}