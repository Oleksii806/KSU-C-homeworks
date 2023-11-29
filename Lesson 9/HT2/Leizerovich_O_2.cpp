/*
�������� ���������� ��������� ����� MyTime � ���������� �������-�������: ������, ������� ( itsHour , itsMin) . 
�������� � ���� ������������, ���������� � ������ �������. 
������� � ���� MyTime ���������� � ����������� ��������� ���������� � �������� + ��� ��������� ��'���� ���� MyTime. 
������� � ���� MyTime ��������� != � = = ��� ��������� ��'���� ���� MyTime.
� ������� ������� ������� ��� �ᒺ���, ��������������� ������ ��������� ����������, +, != � = =.
*/

#include <iostream>

using namespace std;

class MyTime {
private:
    int itsHour;
    int itsMin;

public:
    // ������������
    MyTime() : itsHour(0), itsMin(0) {}
    MyTime(int hour, int min) : itsHour(hour), itsMin(min) {}

    // ����������
    ~MyTime() {}

    // ������ �������
    int getHour() const { return itsHour; }
    int getMin() const { return itsMin; }
    void setHour(int hour) { itsHour = hour; }
    void setMin(int min) { itsMin = min; }

    // ���������
    MyTime& operator++() { // ���������� ���������
        ++itsMin;
        if (itsMin >= 60) {
            itsMin -= 60;
            ++itsHour;
        }
        return *this;
    }

    MyTime operator++(int) { // ����������� ���������
        MyTime temp = *this;
        ++*this;
        return temp;
    }

    MyTime operator+(const MyTime& t) const { // �������� ���������
        MyTime sum;
        sum.itsMin = itsMin + t.itsMin;
        sum.itsHour = itsHour + t.itsHour + sum.itsMin / 60;
        sum.itsMin %= 60;
        return sum;
    }

    bool operator!=(const MyTime& t) const { // �������� ��������
        return itsHour != t.itsHour || itsMin != t.itsMin;
    }

    bool operator==(const MyTime& t) const { // �������� ������
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
