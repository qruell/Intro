#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::cout << "Продам автомобіль.\n\n"
        "Марка: Toyota Camry\n"
        "Рік випуску: 2018\n"
        "Пробіг: 50 000 км\n"
        "Колір: сірий\n"
        "Ціна: $15 000\n\n"
        "Телефон: (123) 456-7890\n\n"
        "123        |     123     |     123     |     123     |\n"
        "456        |     456     |     456     |     456     |\n"
        "789        |     789     |     789     |     789     |\n"
        "0          |     0       |     0       |     0       |\n";
    return 0;
}
