#include <stdio.h>

int main(void) {
    int x;
    int i = 1;
    int total = 0;

    while (i <= 10) {
        x = i * i * i;
        total += x;
        i++;
    }

    printf("%d", total);
}