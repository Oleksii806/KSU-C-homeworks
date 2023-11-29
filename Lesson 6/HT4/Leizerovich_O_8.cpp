/*
Описати рекурсивну функцію DigitSum (K) цілого типу, 
яка знаходить суму цифр цілого числа K,не використовуючи оператор циклу. 
За допомогою цієї функції знайти суми чисел для п'яти даних цілих чисел.
*/

#include <iostream>

using namespace std;

int DigitSum(int K)
{
	if (K == 0)
	{
		return 0;
	}
	else
	{
		return K % 10 + DigitSum(K / 10);
	}
}

int main()
{
	int k;
	cin >> k;
	for (int i = 0; i < 5; i++)
	{
		cout << "DigitSum of number " << k << " = " << DigitSum(k) << endl;
		cin >> k;
	}
	return 0;
}