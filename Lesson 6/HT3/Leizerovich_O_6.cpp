/*
Описати рекурсивну функцію RootK (X, K, N) дійсного типу, 
яка знаходить наближене значення кореня K-го ступеня з числа X за формулою:
Y0 = 1,
YN + 1 = YN - (YN - X / (YN) K-1) / K,
де YN позначає RootK (X, K, N) при фіксованих X і K. Параметри функції: X (> 0) - дійсне число, K (> 1) і N (> 0) - цілі. 
За допомогою функції RootK знайти для даного числа X наближені значення його кореня K-го степеня 
при шести даних значеннях N.
*/

#include <iostream>
#include <cmath>

using namespace std;

double RootK(double X, int K, int N) {
    if (N == 0) {
        return 1.0;
    }
    else {
        double Y = RootK(X, K, N - 1);
        return Y - (Y - X / pow(Y, K - 1)) / K;
    }
}

int main()
{
    double x;
    int k, n;
    cin >> x >> k>>n;
    for (int i = 1; i < 7; i++)
    {
        cout << RootK(x, k, n) << endl;
        cin >> n;
    }
	return 0;
}