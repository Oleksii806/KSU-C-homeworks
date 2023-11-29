/*
Створіть програму обчислення.
Для обчислення реалізувати функцію піднесення числа до степеня.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	double p = 1;
	cout << "Enter number: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		p = p * (1 / (1 * pow(i, i)));
	}
	cout << "Your P= " << p << endl;
	return 0;
}