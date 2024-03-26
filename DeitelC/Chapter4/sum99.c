#include <stdio.h>
#include <math.h>

int main(void) {
    int sum = 0;
    int count = 1;

    for(;count<=99;count+=2) {
        sum += count;
    }
        printf("%d\n", sum);
        printf("%.2f\n", pow(2.5,3));
    return 0;
}