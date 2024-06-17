#include <stdio.h>

int main(void){
    int counter = 1;
    while(counter<= 20) {
        if(counter%5==0) {
            printf("%d\t",counter);
            counter++;
        } else {
            counter++;
        }
        }
        printf("\n");
        for(int x = 1; x<=20 ;++x) {
            if (x%5==0) {
                printf("%d\t", x);
            } else {

            }
    }
    return 0;
}