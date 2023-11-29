/*
�������� ���������� � ��������� ��������� ����� ��� ������ � �����, �� ���������� � ����� ����� �����: ����, �����, ��. 
������� �� ������ ����� ������������, �����������, ������ �������, ����� ������ ��� �������� ������ ���� � ���������� ����������� ����, 
���� ���� � ������ �������� ( " ��.��.�� ", " �� / �� / ���� ", " mmm - dd - yyyy " ). 
����������� ��� ����.
*/

#include <iostream>
#include <string>
class Date {
private:
    int day;
    int month;
    int year;

public:
    // ������������
    Date();
    Date(int d, int m, int y);

    // ����������
    ~Date() {}

    // ������ �������
    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }

    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }

    // �������� ������ ����
    bool isValidDay(int d) { return d >= 1 && d <= 31; }
    bool isValidMonth(int m) { return m >= 1 && m <= 12; }

    // ���������� ����������� ����
    bool isLeapYear() { return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0); }

    // ���� ���� � ����� ��������
    void printDate1() { std::cout << day << "." << month << "." << year % 100 << std::endl; }
    void printDate2() { std::cout << day << "/" << month << "/" << year << std::endl; }
    void printDate3() { std::cout << month << "-" << day << "-" << year << std::endl; }
};

Date::Date() : day(1), month(1), year(2000) {};
Date::Date(int d, int m, int y) : day(d), month(m), year(y) {};

int main() {
    Date date(28, 11, 2023);
    date.printDate1();
    date.printDate2();
    date.printDate3();
    return 0;
}
