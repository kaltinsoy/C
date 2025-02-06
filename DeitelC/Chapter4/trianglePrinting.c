#include <stdio.h>

int main(void) {
    for(int i = 0; i <= 10; i++) {
        for(int j = 0; j <= i; j++){
            printf("%s", "*");
        }
    printf("\n");
    }
    for(int i = 0; i <= 10; i++) {
        for(int j = 10; j >= i; j--){
            printf("%s", "*");
        }
    printf("\n");
    }
    for(int i = 0; i <= 10; i++) {
        for(int t = 0; t <= i; t++){
            printf(" ");
        }
        for(int j = 10; j >= i; j--){
            printf("%s", "*");
        }

    printf("\n");
    }
}
