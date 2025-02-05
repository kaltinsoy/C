#include <stdio.h>

int main(void) {
    puts("Factorial 1 to 5: ");
    double sum = 1;
    for(double i = 1; i <= 20; i++) {
        sum *= i;
        printf("The %0.lf! are: %0.lf\n", i, sum);
    }
    return 0;
}
