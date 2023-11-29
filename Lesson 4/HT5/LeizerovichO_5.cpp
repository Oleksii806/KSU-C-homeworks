/*
**Напишіть програму, яка створює витік пам'яті. 
Збільшіть швидкість витоку пам'яті за допомогою створення об'єктів більшого розміру. 
Поясніть як виправити програму.
*/

#include <iostream>

using namespace std;

class Object {
    int bigArray[1000];
};

int main()
{
    while (true) {
        Object* obj = new Object();
        cout << "1";
    }
    return 0;
}