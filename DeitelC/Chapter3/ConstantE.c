#include <stdio.h>

int main(void) {
    float constant = 2;
    float counter = 2;
    float data = 1;
    float check = 1;
    while(constant <= 40) {;
            data = constant * data;
            check = 1/data;
            counter = check + counter;
            printf("%s %f\n","counter :", counter);

            constant++;
        }
        return 0;
    }