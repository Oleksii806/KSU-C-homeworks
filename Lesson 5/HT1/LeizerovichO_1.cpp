/*
������� ��'��� ������ ���� � �����. ������� ��������� � �������� �� �����. 
������ �������� � ������. �������� �������� �� 5 �� ��������� ���������. 
������� �������� ����� ��'���� �� ��������� ��������� �� ���������.
*/

#include <iostream>

using namespace std;

int main()
{
	int a;
	int& l = a;
	cin >> l;
	cout << "Via link " << l << endl;
	cout << &a << endl;
	cout << a << endl;
	cout << l * 5 << endl;
	return 0;
}