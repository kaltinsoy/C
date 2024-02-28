#include <stdio.h>

int main(void){
    int a = 0;
    int b = 1;
    int c = 1;

    printf("%s\n","Enter side of asteriks!");
    scanf("%d", &a);

    while(b == 1) {
        while(c <= a) {
            printf("*");
            c++;
        }
        printf("\n");
        c = 1;
        b++;
    }
    while(b > 1 && b < a) {
        printf("*");
        while(c < a) {
            printf(" ");
            c++;
        }
        printf("*\n");
        c = 1;
        b++;
    }
    while(b == a) {
        while(c <= a) {
            printf("*");
            c++;

        }
        printf("\n");
        c = 1;
        b++;
    }
    return 0;
}