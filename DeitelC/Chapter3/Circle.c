#include <stdio.h>

int main(void) {
    float pi = 3.14159;
    double r;
    printf("%s\n", "Enter radius of Circle!: ");
    scanf("%lf", &r);
    printf("%s %lf\n", "The Diameter of Circle!: ", 2*r);
    printf("%s %lf\n", "The Circumference of Circle: ", 2*pi*r);
    printf("%s %lf\n", "The Area of Circle: ", pi*(r*r));

}