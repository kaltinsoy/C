#include <stdio.h>

int main(void) {

    int a = 1;
    int b = 1;
    int i = 1;

    while(a < 11) {
        while(b <= a) {
            printf("%d\t",i);
            i++;
            b++;
        }
        printf("\n");
        b = 1;
        a++;

    }
}