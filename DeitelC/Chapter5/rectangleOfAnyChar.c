#include <stdio.h>

void rectangleOfAnyChar (int side1, int side2, char a);


void rectangleOfAnyChar (int side1, int side2, char a) {
    for(int i = 0; i < side1; i++) {
        for(int j = 0; j < side2; j++) {
            printf("%c", a);
        }
        printf("\n");
    }
}
