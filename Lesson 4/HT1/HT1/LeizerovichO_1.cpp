/*
Напишіть програму, в якій оголошуються ціле Age і покажчик на ціле pAge. Задайте адресу цілого покажчику. 
За допомогою покажчика встановіть значення цілої змінної 25. Виведіть значення змінної Age двома способами.
*/

#include <iostream>

using namespace std;

int main()
{
	int Age;
	int* pAge = &Age;
	cout << "Enter number. Int type: ";
	cin >> *pAge;
	cout << "Adress " << pAge << endl;
	cout << "Your number via pointer: " << *pAge << endl;
	cout << "Your numver via classic " << Age << endl;
	return 0;
}