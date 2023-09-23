#include <stdio.h>

int main() {

    int myNumbers[] = {11, 22, 33, 44, 55};
    printf("%d\n", myNumbers[4]);    
    int matrix[2][3] = { {1, 4, 9}, {2, 5, 7} };
    printf ("%d\n", matrix[1][2]);
    printf ("%p", &myNumbers);

     return 0;
 }
