/*
�������� ��������, � ��� ������������ ���������� ������� ���� Num � �������� �� �����  pNum. ������� ������ ������ ���������. 
������� �� ����� �������� ������ � ������ ����� ����� � ����������������� � ��������� ������ ��������. 
��������� �������� ����������. ������ ��������.
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
	cout << "Your number: " << *pNum << endl;
	cout<< "Decimal adresse " << dec << reinterpret_cast<uintptr_t>(pNum) << endl;
	cout << "Hex adresse " << hex << pNum << endl;
	cout << "Additional: " << Num << " * 2 = " << *pNum * 2 << endl;
	return 0;
}