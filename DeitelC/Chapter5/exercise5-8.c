#include <stdio.h>
#include <math.h>

int main (void) {
    double x;
    x = fabs(10.85);
    x = floor(10.85);
    x = fabs(-0.678);
    x = ceil(9.234);
    x = fabs(0.0);
    x = ceil(-34.87);
    x = ceil(-fabs(-12 - floor(-9.5)));
    printf("%.5f\n", x);
}
