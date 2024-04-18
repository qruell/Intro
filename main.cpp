#include <iostream>
#include <windows.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED); 
    std::cout << "Every" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN); 
    std::cout << "\tHunter" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); 
    std::cout << "\t\tWants" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN); 
    std::cout << "\t\t\tTo know" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE); 
    std::cout << "\t\t\t\t Where" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE); 
    std::cout << "\t\t\t\t\tDoes Pheasant" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); 
    std::cout << "\t\t\t\t\t\t\tSit" << "\n\n";

    return 0;
}
