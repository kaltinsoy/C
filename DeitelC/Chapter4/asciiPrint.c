#include <stdio.h>

int main(void) {

    for(int i = 0; i < 128; i++) {
        if(i % 10 == 0) {
            printf(" %c\n", i);
        } else {
            printf(" %c", i);
        }
    }
return 0;
}
