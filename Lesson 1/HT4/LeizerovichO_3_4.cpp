/*
Дано тризначне число. Перевірити істинність висловлювання: «Всі цифри даного числа різні».
Тестові дані: 654, 666, 88, 1234, -100
*/

#include<iostream>

using namespace std;

int main()
{
	int a;
	cout << "Type your number from 100 to 999: ";
	cin >> a;
	while (a <= 99 || a >= 1000)
	{
		cout << "Incorrect input, try again: ";
		cin >> a;
	}
	bool dif = 0;
	if (a % 10 != (a % 100) / 10 && (a % 100) / 10 != a / 100 && a / 100 != a % 10)
	{
		dif++;
	}

	if (dif)
	{
		cout << "All numbers are different" << endl;
	}
	else
	{
		cout << "There are some same numbers" << endl;
	}
	return 0;
}