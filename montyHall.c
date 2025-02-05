#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));  // Seed random number generator
    int r, s, openD;
    int counter = 0, win = 0;

    while (1) {
        r = rand() % 3; // Winning door (0, 1, or 2)
        s = -1;

        puts("Select one of the 3 doors (0, 1, 2). Enter -1 to quit:");
        scanf("%d", &s);
        if (s == -1) break;

        // Open a door with a goat (not the winning door or the selected door)
        openD = rand() % 3;
        while (openD == r || openD == s) {
            openD = rand() % 3;
        }

        printf("You chose: %d, a goat is behind door: %d\n", s, openD);
        puts("Do you want to choose another door? (Enter new door number):");
        scanf("%d", &s);

        while (s == openD) {
            puts("This door is already opened! Select another door:");
            scanf("%d", &s);
        }

        if (s == r) {
            puts("YOU WON!");
            win++;
        } else {
            puts("YOU LOSE!");
        }
        counter++;
    }

    if (counter > 0) {
        printf("Win percentage: %d%%\n", (win * 100) / counter);
    } else {
        puts("No games played.");
    }

    return 0;
}
