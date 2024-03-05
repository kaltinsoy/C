#include <stdio.h>

int main() {

    int sakiriNum;
    char sakireDeger[30];
    printf("Please, enter a number: \n");
    scanf("%d", &sakiriNum);
    printf("Please, enter your name: \n");
    scanf("%s", sakireDeger);
    printf("You pressed sakir: %d,", sakiriNum);
    printf(" %s!", sakireDeger);
return 0;
}