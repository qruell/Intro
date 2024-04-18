#include <iostream>
#include <windows.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED); // �������� ���� ��� ����� "Every"
    std::cout << "Every" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN); // ������� ���� ��� ����� "Hunter"
    std::cout << "\tHunter" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); // ���� ���� ��� ����� "Wants"
    std::cout << "\t\tWants" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN); // �����-������� ���� ��� ����� "To know"
    std::cout << "\t\t\tTo know" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE); // Գ�������� ���� ��� ����� "Where"
    std::cout << "\t\t\t\t Where" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE); // ��������� ���� ��� ����� "Does Pheasant"
    std::cout << "\t\t\t\t\tDoes Pheasant" << "\n";

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // ����� ���� ��� ����� "Sit"
    std::cout << "\t\t\t\t\t\t\tSit" << "\n\n";

    return 0;
}
