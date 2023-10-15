/*
Порахувати, скільки разів зустрічається певна цифра у введеній послідовності чисел. 
Кількість чисел, що вводяться і цифра, яку необхідно порахувати, задаються введенням з клавіатури.
*/

#include<iostream>

using namespace std;

int main()
{
	int N, a, k = 0;
	cout << "Enter numbers row and figure for repeat check: ";
	cin >> N >> a;
	while (N != 0)
	{
		if (a == N % 10)
		{
			k++;
			N = N / 10;
		}
		else N = N / 10;
	}
	cout << "Figure " << a << " repeats " << k << " times";
	return 0;
}