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

        // Apply modulo 6 to keep within 1-6 range
        die = (die - 1) % 6 + 1;

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
    if(*num % 2 && *num > 1) {
        (*num)--;
    }
}

void useBobSuperPower(int *num) {
    // More reasonable power: add 1 to even numbers
    if(*num % 2 == 0 && *num < 6) {
        (*num)++;
    }
}
