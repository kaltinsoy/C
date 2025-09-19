#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void useAliceSuperPower(int *num);
void useBobSuperPower(int *num);

int main(void)
{
    int bob = 0;
    int alice = 0;
    srand(time(NULL));

    for(int i = 0; i < 1000; ++i){
        int die = 1 + rand() % 6;
        
        useAliceSuperPower(&die);
        useBobSuperPower(&die);

        // Keep within 1-6 range
        if(die < 1) die = 1;
        if(die > 6) die = 6;

        if(die % 2) {
            ++bob;
        } else {
            ++alice;
        }
    }

    printf("Alice: %d, Bob: %d\n", alice, bob);
    return 0;
}

void useAliceSuperPower(int *num) {
    // Only subtract 1 if it's odd and greater than 1
    if(*num % 2 && *num > 1) {
        (*num)--;
    }
}

void useBobSuperPower(int *num) {
    // HALF the power: Only add 1 (not double)
    if(*num < 6) {
        (*num)++;
    }
}
