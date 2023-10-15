/*
Використовуючи функції Power1 і Power2 з завдань 1 і 2, описати функцію Power3 (A, B) дійсного типу з дійсними параметрами, що знаходить AB наступним чином: 
якщо B має нульову дробову частину, то викликається Power2 (A, N), де N - змінна цілого типу, що дорівнює числу B; інакше викликається Power1 (A, B). 
За допомогою Power3 знайти AP, BP, CP, якщо дано числа P, A, B, C.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double Power1(double A, double B) //опис функції Power1
{
    if (A <= 0)
    {
        return 0.0;
    }
    return exp(B * log(A));
}

double Power2(double A, int N) //опис функції Power2
{
    return pow(A, N);
}

double Power3(double A, double B) //опис функції Power3
{
    if ((int)B == B)
    {
        return Power2(A, B);
    }
    else
    {
        return Power1(A, B);
    }
}

int main() 
{
    double a, p;
    cout << "Enter 2 numbers (type double): ";
    cin >> a >> p;
    for (int i = 0; i < 3; i++)
    {
        cout << setprecision(3) << fixed;
        double out = Power3(a, p);
        cout << out << endl;
        cout << "Great, now let's repeat with other 'a' value: ";
        cin >> a;
    }
	return 0;
}