/*
Опишіть три функції:

1)яка створює об'єкт цілого типу у вільній пам'яті і повертає в якості результату цей об'єкт. Перевірте її.

2)яка створює об'єкт цілого типу у вільній пам'яті і повертає в якості результату посилання на об'єкт. Перевірте її.

3)яка створює об'єкт цілого типу у вільній пам'яті і повертає в якості результату адресу об'єкта. Перевірте її.

Перевірте, чи можна описати аналогічні функції, якщо об’єкт створюється у стеку. Зробіть висновок.
*/

#include <iostream>
using namespace std;

int F1() 
{
    int* a = new int(10);
    return *a;
}

int& F2() {
    int* b = new int(10);
    return *b;
}

int* F3() {
    int* c = new int(10);
    return c;
}

int main() {
    int Fun1 = F1();
    cout << "Value of object: " << Fun1 << std::endl;

    int& Fun2 = F2();
    cout << "Value of object reference: " << &Fun2 << std::endl;

    int* Fun3 = F3();
    cout << "Value of object pointer: " << Fun3 << std::endl;

    delete& Fun2;
    delete Fun3;

    return 0;
}
