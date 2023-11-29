/*
Описати рекурсивну функцію Fact2 (N) дійсного типу, яка обчислює значення подвійного факторіала
N !! = N · (N-2) · (N-4) · ...
(N> 0 - параметр цілого типу; останній співмножник в добутку дорівнює 2, якщо N - парне число, і 1, якщо N - непарне). 
За допомогою цієї функції обчислити подвійні факторіали п'яти даних чисел.
*/

#include <iostream>
#include <iomanip>

using namespace std;

double Fact2(int N) {
    if (N == 0 || N == 1)
        return 1;
    else
        return N * Fact2(N - 2);
}

int main()
{
    double a;
    cout << "Enter number (type double): ";
    cin >> a;
    for (int i = 0; i < 5; i++)
    {
        cout << a << "!!= " << Fact2(a) << endl;
        if (i != 4)
        {
            cout << "Let's try again: ";
            cin >> a;
        }
    }
	return 0;
}