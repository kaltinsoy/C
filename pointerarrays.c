#include <stdio.h>

int main() {
    int myNum[4] = {25, 50, 75, 100};
    int i;
    int j;

    for (i = 0; i < 4; i++) {
        printf("%p\n", &myNum[i]);
    }
    printf("%lu\n", sizeof(j));
    printf("%p\n", myNum);
    printf("%p\n", &myNum[0]);
    printf("%lu\n", sizeof(myNum));
return 0;
}