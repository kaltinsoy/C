#include <stdio.h>

int main(void) {
    int start = 10;
    for(int i = 1; i <= start; i++) {
        for(int j = 0; j <= i; j++){
            printf("%s", "*");
        }
    }
    printf("\n");
}
