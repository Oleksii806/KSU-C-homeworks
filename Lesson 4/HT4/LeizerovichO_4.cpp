/*
**�������� ��������, � ��� ����������� ��� ��'���� ������� ���� ������� ��� �������� � ����� ���'��; 
������ �� �������� � ������; ������� �ᒺ� ������� �����; ����������� �������� ���������� ���� ������� ��������. 
�����! ϳ��� ��������� ���������� ������� ������ �� �ᒺ���.
*/

#include <iostream>

using namespace std;

int main()
{
	int *st = new int[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter students grades(int): " << endl;
		cin >> st[i];
	}
	cout << "Massive size: " << sizeof(st) << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << st[i] << endl;
	}
	delete [] st;
	return 0;
}