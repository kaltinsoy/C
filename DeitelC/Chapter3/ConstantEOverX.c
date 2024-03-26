#include <stdio.h>
int powerFun(int userData, int i) {
    float result = 1.0;
    while (i > 0) {
        result *= userData;
        i--;
    }
    return result;
}

int main(void) {
    double constant = 2;
    double counter = 2;
    double data = 1;
    float check = 1;
    int userData;
    int i = 1;
    printf("%s\n","Please Enter x (in E^x): ");
    scanf("%d", &userData);
    while(i <= userData) {
            data = constant * data;
            check = powerFun(userData, i)/data;
            counter = check + counter;
            printf("%s %f\n","counter :", counter);
            printf("%s %d\n","PowerFun:", powerFun(userData, i));
            i++;
            constant++;
        }
        return 0;
    }