#include <iostream>
#include <windows.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED); // Червоний колір для слова "Every"
    std::cout << "Every" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN); // Зелений колір для слова "Hunter"
    std::cout << "\tHunter" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); // Синій колір для слова "Wants"
    std::cout << "\t\tWants" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN); // Жовто-зелений колір для слова "To know"
    std::cout << "\t\t\tTo know" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE); // Фіолетовий колір для слова "Where"
    std::cout << "\t\t\t\t Where" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE); // Бірюзовий колір для слова "Does Pheasant"
    std::cout << "\t\t\t\t\tDoes Pheasant" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Білий колір для слова "Sit"
    std::cout << "\t\t\t\t\t\t\tSit" << "\n\n";

    return 0;
}
