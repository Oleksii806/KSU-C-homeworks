/*
ƒано ц≥ле число N (> 0). знайти добуток

1.1 Х 1.2 Х 1.3 Х ...

(N множник≥в).
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int N = 0;
	cout << "Enter N(>0): ";
	cin >> N;
	cout << setprecision(4) << fixed;
	while (N <= 0)
	{
		cout << "Incorrect input, try again: ";
		cin >> N;
	}
	double a = 1.1, b = 1;
	for (int i = 0; i < N; i++)
	{
		b = b * a;
		a += 0.1;
	}
	cout << b << endl;
	return 0;
}