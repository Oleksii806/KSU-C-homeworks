/*
�������� ��������, � ��� ������������ ���� Age � �������� �� ���� pAge. ������� ������ ������ ���������. 
�� ��������� ��������� ��������� �������� ���� ����� 25. ������� �������� ����� Age ����� ���������.
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