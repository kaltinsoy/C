#include <stdio.h>
#include <math.h>

double hypotenuse (double side1, double side2);

int main (void) {
    printf("%.2f\n", cbrt(27.0));
    printf("%.2f\n", sqrt(900.0));
    printf("%.5f\n", exp(1));
    printf("%.5f\n", log(2.718282));
    printf("%.5f\n", log10(10));
    printf("%.5f\n", fabs(-10.11));
    printf("%.5f\n", ceil(-10.11));
    printf("%.5f\n", floor(-10.11));
    printf("%.5f\n", pow(2, 7));
    printf("%.5f\n", fmod(13.657, 2.333));
    printf("%.5f\n", sin(0.0));
    printf("%.5f\n", cos(0.0));
    printf("%.5f\n", tan(0.0));
    printf("%.5f\n", hypotenuse(3.0,4.0));
}

double hypotenuse (double side1, double side2) {
    double final = (side1*side1) + (side2*side2);
    return sqrt(final);
}
