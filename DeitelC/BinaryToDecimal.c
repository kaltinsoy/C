#include <stdio.h>

int main(void){
    int a;
    int b;
    int c = 1;
    int d;
    int e = 2;
    printf("Enter binary!(5 or less!)\n");
    scanf("%d", &a);
    while (a > 0) {
        b = a % 10;
        if (b > 0 && c == 1) {
            d = b;
            a /= 10;
            c++;

        } else if (b > 0 && c != 1) {
            d += e*b;
            e *=2;
            a/=10;
            c++;
        } else {
            e *=2;
            a/=10;
        }
    }
    printf("%d\n", d);
}