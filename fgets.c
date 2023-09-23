#include <stdio.h>
int main() {
    int test1;
    char test2[50];
    char test3[50];

    printf("Test box! : ");
    fgets(test2, sizeof(test2), stdin);
    printf("WORKING! : %s", test2);
    printf("TEST2! : ");
    fgets(test3, sizeof(test3), stdin);
    printf("WORKING2!: %s", test3);
return 0;
}