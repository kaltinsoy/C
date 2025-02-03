#include <stdio.h>

int main(void) {

    float f = 123.456;
    printf("%.2f\n", f);

    f = 3.14159;
    printf("%.3f\n", f); // 3.3 examples

    int x = 1, sum = 0;

    while (x < 11) {
    sum = x + sum;
    x++;
    }
    printf("And the sum is: %d\n", sum); // 3.4 and 3.5 examples


    printf("Enter int x: \n");
    scanf("%d", &x);

    int y;
    printf("Enter int y: \n");
    scanf("%d", &y);

    int i = 1;

    while (y > 0) {
    i *= x;
    y--;
    }
    printf("Result is: %d\n", i);

}
