#include <stdio.h>
#include <math.h>

int roundToInteger(double number);
int roundToTenths(double number);
int roundToHundreths(double number);
int roundToThousandths(double number);


int main (void) {
    double num;
    printf("%s\n", "Enter a number!");
    scanf("%lf", &num);
    printf("%3s\t%3lf\t%3s\t%3d\n", "Orginal num:", num, "Rounded: ", roundToInteger(num));
    printf("%3s\t%3lf\t%3s\t%3d\n", "Orginal num:", num, "Rounded: ", roundToTenths(num));
    printf("%3s\t%3lf\t%3s\t%3d\n", "Orginal num:", num, "Rounded: ", roundToHundreths(num));
    printf("%3s\t%3lf\t%3s\t%3d\n", "Orginal num:", num, "Rounded: ", roundToThousandths(num));
}

int roundToInteger(double number) {
    int y = floor(number + .5);
    return y;
}

int roundToTenths(double number) {
    int y = floor(number * 10 + .5) / 10;
    return y;
}

int roundToHundreths(double number) {
    int y = floor(number * 100 + .5) / 100;
    return y;
}

int roundToThousandths(double number) {
    int y = floor(number * 1000 + .5) / 1000;
    return y;
}
