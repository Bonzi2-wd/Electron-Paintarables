#include <iostream>
#include <windows.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set console size
    system("mode con: cols=80 lines=25");

    // Move cursor to roughly the center
    COORD pos;
    pos.X = 37; // center-ish of 80 columns
    pos.Y = 12; // center-ish of 25 rows

    SetConsoleCursorPosition(hConsole, pos);

    std::cout << "Hello";

    Sleep(3000); // Show for 3 seconds

    return 0;
}