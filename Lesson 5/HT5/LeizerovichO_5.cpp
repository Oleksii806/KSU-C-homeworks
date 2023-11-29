/*
Створіть у вільній пам’яті три об'єкта цілого типу, присвойте їм відповідно значення 10, 20, 30. 
Замініть вказівники посиланнями і виконайте обробку цих об’єктів з використанням посилань (збільшіть значення удвічі). 
Звільніть вільну пам’ять, застосовуючи вказівники.
*/

#include <iostream>
using namespace std;

int main() {
    int* a = new int(10);
    int* b = new int(20);
    int* c = new int(30);

    int& ref_a = *a;
    int& ref_b = *b;
    int& ref_c = *c;

    ref_a *= 2;
    ref_b *= 2;
    ref_c *= 2;

    cout << "After: " << ref_a << ", " << ref_b << ", " << ref_c << std::endl;

    delete a;
    delete b;
    delete c;

    return 0;
}