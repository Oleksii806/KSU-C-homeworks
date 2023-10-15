/*
���� ���� ����� N (> 0). �������������� �������� ������ ��� ������ � ������ ������� �� ������, 
������ �����, �������� ��� ��������� ����� N ������ �����.
*/

#include<iostream>

using namespace std;

int main()
{
	long int N;
	cout << "Enter N(>0): ";
	cin >> N;
	while (N <= 0)
	{
		cout << "Incorrect input, try again: ";
		cin >> N;
	}
	int revN = N % 10;
	N = N / 10;
	while (N != 0)
	{
		revN = revN * 10;
		revN = revN + (N % 10);
		N = N / 10;
	}
	cout << "Reverse N= " << revN << endl;
	return 0;
}