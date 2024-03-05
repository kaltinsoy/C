#include <stdio.h>

int main () {

    FILE *fptr;

    fptr = fopen("test1.txt", "r");
    char myStr[100];

    while(fgets(myStr, 100, fptr)) {
    printf("%s", myStr);
    }
    fclose (fptr);

return 0;
}