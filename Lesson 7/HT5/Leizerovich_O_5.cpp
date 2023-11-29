/*
Число називається досконалим, якщо дорівнює сумі всіх своїх дільників, крім самого цього числа. 
Перевірити, чи існують досконалі числа з проміжку [2, n], що є повними квадратами. 
Якщо так, то вивести на екран перше з них. Описати необхідні функції.
*/

#include <iostream>
#include <cmath>

using namespace std;

bool isPerfect(int n) 
{
    int sum = 1;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            if (i * i != n)
                sum = sum + i + n / i;
            else
                sum = sum + i;
        }
    }
    if (sum == n && n != 1)
        return true;
    return false;
}

bool isPerfectSquare(int n) 
{
    int root = sqrt(n);
    return (root * root == n);
}

int main() 
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 2; i <= n; i++) 
    {
        if (isPerfect(i) && isPerfectSquare(i)) 
        {
            cout << "First perfect number with perfect square from [2, " << n << "] is: " << i << endl;
            break;
        }
    }
    return 0;
}
