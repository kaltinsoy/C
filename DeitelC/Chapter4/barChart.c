#include <stdio.h>

int main(void) {
    puts("Enter 5 different integers between 1 - 30!");
    for(int i = 0; i < 5; i++) {
    printf("Enter %d. integer: ",(i+1));
    int j;
    if(!scanf("%d", &j)) {
            puts("Enter a valid integer!");
    } else if((j < 1 || j > 30)) {
        puts("Integer not between 1-30!");
    }

    for(int t = 0; t < j; t++) {
        printf("%s","*");
    }
    puts("");

    }
}
