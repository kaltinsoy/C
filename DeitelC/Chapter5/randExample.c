#include <stdio.h>
#include <stdlib.h>

int main (void) {
    printf("%d\n", 1 + rand() % 6);
    printf("%d\n", 100 + rand() % 900);
    printf("%d\n", rand() % 19);
    printf("%d\n", 1000 + rand() % 1222);
    printf("%d\n", -1 + rand() % 2);
    printf("%d\n", -3 + rand() % 15);
    printf("%d\n", 3 * (1 + rand() % 10));
    printf("%d\n", 3 + 2 * (rand() % 9));
    printf("%d\n", 3 + 5 * (rand() % 7));
}
