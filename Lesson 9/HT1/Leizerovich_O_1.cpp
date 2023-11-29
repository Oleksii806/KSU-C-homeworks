/*
Напишіть оголошення закритого класу Circle з наступними змінними-членами: 
координати центру і радіус (itsX , itsY , itsRadius) . Включіть в клас конструктори, деструктор і методи доступу. 
Створіть в класі Circle оператор + для додавання об'єктів типу Circle. Необхідно додавати тільки величини радіусів itsRadius. 
Створіть в класі Circle оператори < і = = для порівняння об'єктів типу Circle за величиною радіуса itsRadius. 
В головній функції створіть три об’єкта, продемонструйте роботу операторів +, < і = =.
*/

#include <iostream>

using namespace std;

class Circle {
private:
    double itsX, itsY, itsRadius;

public:
    // Конструктори
    Circle() : itsX(0), itsY(0), itsRadius(0) {}
    Circle(double x, double y, double r) : itsX(x), itsY(y), itsRadius(r) {}

    // Деструктор
    ~Circle() {}

    // Методи доступу
    double getX() const { return itsX; }
    double getY() const { return itsY; }
    double getRadius() const { return itsRadius; }

    void setX(double x) { itsX = x; }
    void setY(double y) { itsY = y; }
    void setRadius(double r) { itsRadius = r; }

    // Оператори
    Circle operator+(const Circle& c) {
        return Circle(itsX, itsY, itsRadius + c.getRadius());
    }

    bool operator<(const Circle& c) {
        return itsRadius < c.getRadius();
    }

    bool operator==(const Circle& c) {
        return itsRadius == c.getRadius();
    }
};

int main() {
    Circle c1(0, 0, 5);
    Circle c2(1, 1, 3);
    Circle c3 = c1 + c2;

    cout << "c3 R: " << c3.getRadius() << std::endl;

    if (c1 < c2)
        cout << "c1 R < c2 R" << std::endl;
    else
        cout << "c1 R >= c2 R" << std::endl;

    if (c1 == c2)
        cout << "c1 R = c2 R" << std::endl;
    else
        cout << "c1 R != c2 R" << std::endl;

    return 0;
}
