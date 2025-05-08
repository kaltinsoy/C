#include <stdio.h>
#include "flip.h"
#include <time.h>
#include <stdlib.h>

int main(void) {

    srand(time(NULL));

    int heads = 0, tails = 0;
    for(int i = 0; i < 100; i++){
        if(flip()) {
            heads++;
        } else {
            tails++;
        }
    }
    printf("%s%d%s%d\n", "Heads: ", heads, ", Tails: ", tails);
    return 0;
}
