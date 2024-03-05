#include <stdio.h>

int main () {
    char carName[] = "GOLF";
    int i;
    int j = 0;
    while (j < 5) {

        for (i = 0; i < 5; i++) {
            printf ("%c\t", carName[i]);
        
        }
        printf ("\n");
    j++;
    }
return 0;
}