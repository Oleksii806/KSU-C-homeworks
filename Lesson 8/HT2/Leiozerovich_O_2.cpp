/*
Розробіть методи класу, що дозволяють виконувати введення / виведення всіх членів-даних класу "Студент" та перевірте їх в головній програмі. 
Напишіть кілька конструкторів і деструктор для класу "Студент". Змініть код для оголошення класу "Студент", закривши в ньому члени-дані. 
Напишіть методи доступу до полів класу "Студент". Напишіть програму, в якій створюються два об'єкти типу "Студент". 
Встановіть їх вік, стать і стипендію за допомогою методів доступу. 
Роздрукуйте значення окремих членів-даних об'єктів на екрані, використовуючи методи доступу. 
Визначте і роздрукуйте середній вік і сумарну стипендію цих двох студентів.
*/

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    string gender;
    double scholarship;

public:
    Student() : name(""), age(0), gender(""), scholarship(0.0) {}
    Student(string n, int a, string g, double s) : name(n), age(a), gender(g), scholarship(s) {}

    ~Student() {}

    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setGender(string g) { gender = g; }
    void setScholarship(double s) { scholarship = s; }

    string getName() { return name; }
    int getAge() { return age; }
    string getGender() { return gender; }
    double getScholarship() { return scholarship; }
};

int main() {
    Student student1, student2;

    student1.setAge(20);
    student1.setGender("Male");
    student1.setScholarship(1000.0);

    student2.setAge(22);
    student2.setGender("Female");
    student2.setScholarship(1200.0);

    cout << "Student 1: Age = " << student1.getAge() << ", Gender = " << student1.getGender() << ", Schoolarship = " << student1.getScholarship() << std::endl;
    cout << "Student 2: Age = " << student2.getAge() << ", Gender = " << student2.getGender() << ", Schoolarship = " << student2.getScholarship() << std::endl;

    double averageAge = (student1.getAge() + student2.getAge()) / 2.0;
    double totalScholarship = student1.getScholarship() + student2.getScholarship();

    cout << "Average age = " << averageAge << ", Summary schoolarship = " << totalScholarship << std::endl;

    return 0;
}
