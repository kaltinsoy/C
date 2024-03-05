#include <stdio.h>
int main() {
    
    int myNumbers[4] = {25, 50, 75, 100};
    int *ptr = myNumbers;
    int i;
    *myNumbers = 101;
    *(myNumbers + 1) = 55;

    for (i = 0; i < 4; i++) {
        printf("%d\n", *(ptr + i));
    }
    printf("%d\n", *(myNumbers + 1));
return 0;
}