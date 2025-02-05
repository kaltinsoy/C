#include <stdio.h>

int main(void) {
    for(int x = 1; x <= 13; x += 2) {
        printf("%d\t",x);
    }
    puts("");
    for(int x = 2; x <= 17; x += 3) {
        printf("%d\t",x);
    }
    puts("");
    for(int x = 30; x >= -30; x -= 10) {
        printf("%d\t",x);
    }
    puts("");
    for(int x = 15; x <= 55; x += 8) {
        printf("%d\t",x);
    }
    puts("");

    return 0;
}
