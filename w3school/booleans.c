#include <stdbool.h>
#include <stdio.h>
int main() {
    int votingAge = 18;
    int myAge = 18;
    if (myAge > votingAge) {
        printf("Oy verebilirsiniz!");
    } else if (myAge == votingAge) {
        printf("test2");
    } else {
        printf("test1");
    }
    
}