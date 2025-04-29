#include <stdio.h>
#include <math.h>

int main (void) {
    double num;
    printf("%s\n", "Enter a number!");
    scanf("%lf", &num);
    int y = floor(num + .5);
    printf("%3s\t%3lf\t%3s\t%3d\n", "Orginal num:", num, "Rounded: ", y);
}
