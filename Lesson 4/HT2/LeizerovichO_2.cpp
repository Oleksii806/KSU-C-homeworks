/*
Напишіть програму, в якій оголошуються беззнакове коротке ціле Num і покажчик на нього  pNum. Задайте адресу цілого покажчику. 
Виведіть на екран значення змінних і адреси кожної змінної у шістнадцятиричній і десятковій системі числення. 
Порівняйте отримані результати. Зробіть висновки.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << setprecision(0) << fixed;
	double Num;
	double* pNum = &Num;
	cout << "Enter number: ";
	cin >> *pNum;
	cout << "Your number: " << &pNum << endl;
	cout<< "Decimal adresse " << dec << reinterpret_cast<std::uintptr_t>(pNum) << endl;
	cout << "Hex adresse " << hex << pNum << endl;
	return 0;
}