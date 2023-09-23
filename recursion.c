#include <stdio.h>

int myProg(int k);

int main() {
    int b;
    printf("Type a num: \n");
    scanf("%d", &b);
    int result = myProg(b);
    printf("%d\n", result);
return 0;

}

int myProg(int k) {
    if (k > 10) {
        return k + myProg(k - 1);
    } else {
        return 0;
    }

}