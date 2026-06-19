#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int roll = rand() % 1000000;

    const char *rarity;

    if (roll == 0)
        rarity = "HEAVENLY";
    else if (roll < 10)
        rarity = "DIVINE";
    else if (roll < 100)
        rarity = "EXOTIC";
    else if (roll < 1000)
        rarity = "MYTHICAL";
    else if (roll < 10000)
        rarity = "LEGENDARY";
    else if (roll < 50000)
        rarity = "EPIC";
    else if (roll < 200000)
        rarity = "RARE";
    else
        rarity = "COMMON";

    printf("=== RNG ROLLER ===\n");
    printf("You rolled: %s\n", rarity);

    return 0;
}