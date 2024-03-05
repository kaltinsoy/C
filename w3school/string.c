#include <stdio.h>
#include <string.h>

int main () {
    char test[40] = "TESTING";
    char test2[50] = " WORKING";
    char test3[50] = "TESTING";
    printf("%d", strcmp(test, test3));
return 0;
}