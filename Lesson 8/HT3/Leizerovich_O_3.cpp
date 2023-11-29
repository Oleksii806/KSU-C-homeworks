/*
Напишіть оголошення і реалізацію закритого класу для роботи з датою, що складається з трьох цілих чисел: день, місяць, рік. 
Додайте до складу класу конструктори, деструктори, методи доступу, логічні методи для перевірки частин дати і визначення високосного року, 
друк дати в кількох форматах ( " дд.мм.гг ", " дд / мм / рррр ", " mmm - dd - yyyy " ). 
Протестуйте цей клас.
*/

#include <iostream>
#include <string>
class Date {
private:
    int day;
    int month;
    int year;

public:
    // Конструктори
    Date();
    Date(int d, int m, int y);

    // Деструктор
    ~Date() {}

    // Методи доступу
    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }

    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }

    // Перевірка частин дати
    bool isValidDay(int d) { return d >= 1 && d <= 31; }
    bool isValidMonth(int m) { return m >= 1 && m <= 12; }

    // Визначення високосного року
    bool isLeapYear() { return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0); }

    // Друк дати в різних форматах
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
