/*
Написати програму друкування таблиці значень функції y = sin(x) на відрізку [0; 1] із кроком h = 0,1.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Func()
{
	float x = 0, h = 0.1;
	for (x; x < 1; x += h)
	{
		cout << "Y= " << sin(x) << endl << "X= " << x << endl << endl;
	}
}

int main()
{
	cout << setprecision(3) << fixed;
	Func();
	return 0;
}