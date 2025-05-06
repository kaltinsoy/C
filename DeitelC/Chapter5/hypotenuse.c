#include <stdio.h>
#include <math.h>

double hypotenuse (double side1, double side2);

int main (void) {
    double side1, side2;
    printf("Enter side 1 and side 2\n");
    scanf("%lf%lf", &side1, &side2);
    printf("%3s%3.2lf\n", "Hypotenuse: ", hypotenuse(side1, side2));
}

double hypotenuse (double side1, double side2) {
    double hypo = (side1 * side1) + (side2 * side2);
    return sqrt(hypo);
}
