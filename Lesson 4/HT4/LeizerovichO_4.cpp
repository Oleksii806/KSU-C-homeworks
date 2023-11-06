/*
**Напишіть програму, в якій створюються три об'єкти дійсного типу середній бал студента у вільній пам'яті; 
введіть їх значення з консолі; знайдіть об’єм виділеної пам’яті; роздрукуйте значення середнього балу кожного студента. 
Увага! Після виведення обов’язково звільніть пам’ять від об’єктів.
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