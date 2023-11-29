/*
Стовріть програму для обчислення: Sn = 1-(2/1!)+(4/2!)+....+((-2)^n/n!)
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double factorial(int);
double Sn(int);

double factorial(int n) 
{
    if (n == 0) {
        return 1.0;
    }
    else {
        return n * factorial(n - 1);
    }
}

double Sn(int n) {
    double sum = 0.0;
    for (int i = 0; i <= n; i++) {
        sum += pow(-2, i) / factorial(i);
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << Sn(n);
    return 0;
}