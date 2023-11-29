/*
Маємо ціле n > 2. Скласти програму для знаходження всіх простих чисел із діапазону [2, n], які є паліндромами. 
(Описати функції, які визначають чи є число простим та чи є число паліндромом).
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string Reverse(int a)
{
	string str = to_string(a);
	string RevStr;
	for (int i = size(str)-1; i >= 0; i--)
	{
		RevStr += str[i];
	}
	return RevStr;
}

bool isPalindrom(int A)
{
	if (A < 10)
	{
		return false;
	}
	string revA = Reverse(A);
	if (to_string(A) == revA)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int intRev(int A)
{
	int b = 0;
	for (int i = A; i > 0; i=i/10)
	{
		if (i<10)
		{
			b += i;
		}
		else
		{
			b += i % 10;
			b *= 10;
		}
	}
	return b;
}

bool PalindromB(int A)
{
	if (A < 10)
	{
		return false;
	}
	int b = intRev(A);
	if (A == b)
	{
		return true;
	}
	else return false;
}

bool isPrime(int num) 
{
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	int a;
	cout << "Enter number: ";
	cin >> a;
	int* prime = new int[a];
	int n = 0;
	cout << "All prime numbers from 3 to " << a << endl;
	for (int i = 3; i < a; i++)
	{
		if (isPrime(i))
		{
			prime[n] = i;
			n++;
			cout << i << endl;
		}

	}
	cout << endl << "All palindrome numbers from this list: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (isPalindrom(prime[i]))
		{
			cout << prime[i] << endl;
		}
	}
	cout << endl << endl;
	if (PalindromB(66)) cout << "true";
	else cout << "false";
	delete[] prime;
	return 0;
}