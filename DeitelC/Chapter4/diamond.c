#include <stdio.h>

int main(void) {
    int odd;

    // Prompt user for input
    puts("Enter an odd number: ");
    if (!scanf("%d", &odd) || odd % 2 == 0) {
        puts("Enter a valid odd integer!");
        return 1;
    }

    int mid = odd / 2; // Middle point of the diamond

    // Upper half of the diamond
    for (int i = 0; i < mid; i++) {
        // Print leading spaces
        for (int j = 0; j < mid - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Middle line of the diamond
    for (int i = 0; i < odd; i++) {
        printf("*");
    }
    printf("\n");

    // Lower half of the diamond
    for (int i = mid - 1; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < mid - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
