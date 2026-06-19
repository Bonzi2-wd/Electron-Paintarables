#include <iostream>
#include <cstdlib>
#include <ctime>

std::string rollRarity() {
    int roll = rand() % 1000000;

    if (roll == 0)
        return "HEAVENLY";
    else if (roll < 10)
        return "DIVINE";
    else if (roll < 100)
        return "EXOTIC";
    else if (roll < 1000)
        return "MYTHICAL";
    else if (roll < 10000)
        return "LEGENDARY";
    else if (roll < 50000)
        return "EPIC";
    else if (roll < 200000)
        return "RARE";
    else
        return "COMMON";
}

int main() {
    srand((unsigned)time(nullptr));

    std::cout << "=== RNG Roller ===\n";
    std::cout << "Press ENTER to roll.\n";
    std::cout << "Type q then ENTER to quit.\n\n";

    while (true) {
        std::string input;
        std::getline(std::cin, input);

        if (input == "q")
            break;

        std::cout << "You rolled: " << rollRarity() << "\n\n";
    }

    return 0;
}