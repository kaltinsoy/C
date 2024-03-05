#include <stdio.h>

int main(void) {
    int a = 1;
    int b = 1;
    for(a=1;a<9;a++) {
        if (a % 2 == 1) {
            while (b <= 8) {
                printf("%s","* ");
                b++;
            }
            printf("\n");
            b = 0;
        } else {
            while(b <= 8) {
                printf("%s", " *");
                b++;
            }
            printf("\n");
            b = 0;
        }
    }
    return 0;
}