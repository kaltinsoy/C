#include <stdio.h>

int main() {

    FILE *fptr;

    fptr = fopen("test1.txt", "a");
    fprintf(fptr, "\nThis is Working!");
    fclose(fptr);

return 0;
}