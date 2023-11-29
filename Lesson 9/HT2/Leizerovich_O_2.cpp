/*
Напишіть оголошення закритого класу MyTime з наступними змінними-членами: години, хвилини ( itsHour , itsMin) . 
Включіть в клас конструктори, деструктор і методи доступу. 
Створіть в класі MyTime префіксний і постфіксний оператори інкремента і оператор + для додавання об'єктів типу MyTime. 
Створіть в класі MyTime оператори != і = = для порівняння об'єктів типу MyTime.
В головній функції створіть три об’єкта, продемонструйте роботу операторів інкремента, +, != і = =.
*/

#include <iostream>

using namespace std;

class MyTime {
private:
    int itsHour;
    int itsMin;

public:
    // Конструктори
    MyTime() : itsHour(0), itsMin(0) {}
    MyTime(int hour, int min) : itsHour(hour), itsMin(min) {}

    // Деструктор
    ~MyTime() {}

    // Методи доступу
    int getHour() const { return itsHour; }
    int getMin() const { return itsMin; }
    void setHour(int hour) { itsHour = hour; }
    void setMin(int min) { itsMin = min; }

    // Оператори
    MyTime& operator++() { // Префіксний інкремент
        ++itsMin;
        if (itsMin >= 60) {
            itsMin -= 60;
            ++itsHour;
        }
        return *this;
    }

    MyTime operator++(int) { // Постфіксний інкремент
        MyTime temp = *this;
        ++*this;
        return temp;
    }

    MyTime operator+(const MyTime& t) const { // Оператор додавання
        MyTime sum;
        sum.itsMin = itsMin + t.itsMin;
        sum.itsHour = itsHour + t.itsHour + sum.itsMin / 60;
        sum.itsMin %= 60;
        return sum;
    }

    bool operator!=(const MyTime& t) const { // Оператор нерівності
        return itsHour != t.itsHour || itsMin != t.itsMin;
    }

    bool operator==(const MyTime& t) const { // Оператор рівності
        return itsHour == t.itsHour && itsMin == t.itsMin;
    }
};

int main() {
    MyTime t1(10, 59), t2(1, 2), t3;
    t3 = t1 + t2;
    cout << "Time t3: " << t3.getHour() << ":" << t3.getMin() << endl;

    ++t1;
    cout << "Time t1 after increment: " << t1.getHour() << ":" << t1.getMin() << endl;
    cout << "Does t1 == t2? ";
    if (t1 == t2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    cout << "Does t1 != t2? ";
    if (t1 != t2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
