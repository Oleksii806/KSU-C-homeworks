/*
	 Дано цілі числа a , b , c , що є сторонами деякого трикутника. 
	 Перевірити істинність висловлювання: «Трикутник зі сторонами a , b , c є прямокутним».
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter triangle sides. Please don`t use very large numbers :)" << endl;
	cin >> a >> b >> c;
	while (a <= 0 || b <= 0 || c <= 0)
	{
		cout << "Some numbers has incorrect type, rewrite them" << endl;
		if (a <= 0)
		{
			cout << "rewrite A to: ";
			cin >> a;
		}
		if (b <= 0)
		{
			cout << "rewrite B to: ";
			cin >> b;
		}
		if (c <= 0)
		{
			cout << "rewrite C to: ";
			cin >> c;
		}
	}
	if (pow(c, 2) == pow(a, 2) + pow(b, 2) || pow(a, 2) == pow(c, 2) + pow(b, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2))
	{
		cout << "This triangle is a right triangle" << endl;
	}
	else
	{
		cout << "This is a classic tirangle or not" << endl;
	}
	return 0;
}