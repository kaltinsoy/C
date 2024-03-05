#include <stdio.h>

void myFunc(int myNum[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", myNum[i]);
    }

    {
        int i = 0;
        while (i < 5) {
            printf("%d\n", myNum[i]);
            i++;
        }
    }
}

int main() {
    int myNum[5] = {25, 50, 75, 100, 125};
    myFunc(myNum);
return 0;
}