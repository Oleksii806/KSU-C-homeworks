/*
Описати функцію Mean (X, Y, AMean, GMean), яка обчислює середнє арифметичне AMean = (X + Y) / 2 і 
середнє геометричне GMean = (X · Y) 1/2 двох позитивних чисел X і Y (X і Y - вхідні , AMean і GMean - вихідні параметри дійсного типу). 
За допомогою цієї функції знайти середнє арифметичне і середнє геометричне для пар (A, B), (A, C), (A, D), якщо дані A, B, C, D.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Mean(double X, double Y)
{
	double AMean, GMean = 0;
	AMean = (X + Y) / 2;
	if (X >= 0 && Y >= 0) {
		GMean = sqrt(X * Y);
	}
	else {
		GMean = -1;
	}
	cout << "X= " << X << endl << "Y= " << Y << endl << "AMean= " << AMean << endl;
	if (GMean != -1) {
		cout << GMean << endl;
	}
	else {
		cout << "No GMean :(" << endl;
	}
}

int main()
{
	cout << setprecision(3) << fixed;
	double a, b;
	cout << "Enter A and B: ";
	cin >> a >> b;
	for (int i = 0; i <= 2; i++)
	{
		Mean(a, b);
		if (i != 2)
		{
			cout << "Greate, now lets try change B with other value(enter only 1 number): ";
			cin >> b;
			cout << endl << "***********************" << endl;
		}
	}
	return 0;
}