#include <stdio.h>

int main(void) {
    int i = 0, total = 0;
    puts("Enter an integer!");
    if(scanf("%d", &i)) {
        for(int sum = 0; sum <= i; sum++) {
            total += sum;
        }
        printf("Total sum: %d\n", total);
        total = 0;
        for(int sum = 0; sum * sum <= i * i; sum++) {
            int pow = sum * sum;
            total += pow;
        }
        printf("Sum of squares: %d\n", total);
        total = 0;
        for(int sum = 0; sum * sum * sum <= i * i * i; sum++) {
            int pow = sum * sum * sum;
            total += pow;
        }
        printf("Sum of cubes: %d\n", total);
        } else {
            puts("Enter valid integer!");
        }
}
