#include <stdio.h>

int main(void){

    float pi = 4.0;
    int sign = -1;
    for (int i = 3; i < 8092; i += 2) {
        pi += sign*(4.0/i);
        sign = -sign;
    }
printf("%.6f\n",pi);
}
