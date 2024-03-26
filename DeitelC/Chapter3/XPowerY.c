#include <stdio.h>

int main(void) {
    int x;
    int y;

    printf("%s\n","Please Enter a X value!");
    scanf("%d", &x);
    printf("%s\n", "Please Enter a Y value!");
    scanf("%d", &y);

    int i = 1;
    int power = 1;

    while (i <= y) {
        power *= x;
        i++;
    }
    
    printf("%s %d", "Variable output:", power);
    
}