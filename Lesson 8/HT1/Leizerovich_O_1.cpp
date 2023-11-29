/*
Напишіть код для оголошення класу "Студент" з такими відкритими членами-даними: вік, стать, стипендія. 
Напишіть програму, в якій створюються два об'єкти типу "Студент" . 
Встановіть їх вік, стать і стипендію. Роздрукуйте значення членів-даних об'єктів на екрані.
*/

#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	int age;
	string gender;
	int schoolarship;
};

int main()
{
	Student s1, s2;
	cout << "Enter age, gender and schoolarship of student 1: ";
	cin >> s1.age >> s1.gender >> s1.schoolarship;
	cout << endl << "Enter age, gender and schoolarship of student 2: ";
	cin >> s2.age >> s2.gender >> s2.schoolarship;
	cout << "Student 1 info: " << endl << "Age: " << s1.age << endl << "Gender: " << s1.gender << endl << "Schoolarship: " << s1.schoolarship << endl;
	cout << "Student 2 info: " << endl << "Age: " << s2.age << endl << "Gender: " << s2.gender << endl << "Schoolarship: " << s2.schoolarship << endl;
	return 0;
}