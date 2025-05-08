#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int num = 1 + rand() % 999;
    printf("%s\n%s\n%s\n", "I have a number between 1 and 1000.", "Can you guess my number?", "Please type your first guess.");
    int scanNum = 0;
    scanf("%d", &scanNum);

    if((scanNum > 1001) || (scanNum < 0)) {
        puts("Invalid integer!");
    }

    while(scanNum != num) {
        if("")
    }
}
