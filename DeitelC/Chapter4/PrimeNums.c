#include <stdio.h>

int main(void) {
    puts("Show all prime numbers until: ");
    int i;
    if(scanf("%d", &i) != 1 || i < 2) {
    puts("ERROR, entered integer NOT valid!");
    }

    for(int y = 2; y < i; y++) {
    int counter = 0;
        for(int a = 2; a < y; a++) {
            if(y % a == 0) {
                counter = 1;
            }
        }
    if (!counter) {
        printf("%d\t", y);
    }
    }
}
