#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void guessTheNum();

int main(void) {
    srand(time(NULL));

    guessTheNum();
    return 0;

}


void guessTheNum()
{
    int num = 1 + rand() % 1000;
        printf("%s\n%s\n%s\n", "I have a number between 1 and 1000.", "Can you guess my number?", "Please type your first guess.");
        int scanNum = 0;
        scanf("%d", &scanNum);
        char con;

        if((scanNum > 1001) || (scanNum < 0)) {
            puts("Invalid integer!");
        }

        do {
        while(scanNum != num) {
            if(scanNum < num) {
                puts("Too low!");
                scanf("%d", &scanNum);
            } else {
                puts("Too high");
                scanf("%d", &scanNum);
            }
        }
        }
        while(scanf(" %c", &con));
        puts("FOUND!");
}
