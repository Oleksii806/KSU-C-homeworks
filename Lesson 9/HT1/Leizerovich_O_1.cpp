/*
�������� ���������� ��������� ����� Circle � ���������� �������-�������: 
���������� ������ � ����� (itsX , itsY , itsRadius) . �������� � ���� ������������, ���������� � ������ �������. 
������� � ���� Circle �������� + ��� ��������� ��'���� ���� Circle. ��������� �������� ����� �������� ������ itsRadius. 
������� � ���� Circle ��������� < � = = ��� ��������� ��'���� ���� Circle �� ��������� ������ itsRadius. 
� ������� ������� ������� ��� �ᒺ���, ��������������� ������ ��������� +, < � = =.
*/

#include <iostream>

using namespace std;

class Circle {
private:
    double itsX, itsY, itsRadius;

public:
    // ������������
    Circle() : itsX(0), itsY(0), itsRadius(0) {}
    Circle(double x, double y, double r) : itsX(x), itsY(y), itsRadius(r) {}

    // ����������
    ~Circle() {}

    // ������ �������
    double getX() const { return itsX; }
    double getY() const { return itsY; }
    double getRadius() const { return itsRadius; }

    void setX(double x) { itsX = x; }
    void setY(double y) { itsY = y; }
    void setRadius(double r) { itsRadius = r; }

    // ���������
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
