#include <stdio.h>
#include <math.h>

double sidesOfTriangle (double s1, double s2, double s3);

int main (void) {
    double s1, s2, s3;
    printf("%s\n","Enter sides of triangle");
    scanf("%lf%lf%lf", &s1, &s2, &s3);
    double area = sidesOfTriangle(s1, s2, s3);
    if(area >= 0) {
        printf("%3s%lf\n", "Area: ", area);
    }
    return 0;
}

double sidesOfTriangle (double s1, double s2, double s3) {
    double perimeter = s1 + s2 + s3;
    double u = perimeter / 2;
    if ((s1 < s2 + s3) && (s2 < s1 + s3) && (s3 < s1 + s2)) {
        return sqrt(u * (u - s1) * (u - s2) * (u - s3));
    }
    return -1;
}
