#include <stdio.h>

double powerFun(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main(void) {
    int userData;
    printf("Please Enter x (in E^x): ");
    scanf("%d", &userData);

    double constant = 2.0; // Initialize constant as a double
    double counter = 1.0; // Initialize counter to 1.0
    double data = 1.0; // Initialize data to 1.0

    for (int i = 1; i <= userData; i++) {
        data *= constant; // Update data by multiplying with constant
        double term = powerFun(userData, i) / data; // Calculate the term for the current iteration
        counter += term; // Add the term to the counter
        printf("counter: %f\n", counter);
    }

    printf("e^%d = %f\n", userData, counter);

    return 0;
}
