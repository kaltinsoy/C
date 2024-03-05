#include <stdio.h>

int main(void){
    int a = 1;
    int b = 0;
    int c = 0;
    int d;

    for(a = 1; a <= 9; a++){
        for(b = 0; b <= 9; b++){
            for(c = 0; c <= 9; c++) {
                d = (100*a)+(10*b)+c;
                if(d == (a*a*a)+(b*b*b)+(c*c*c)) {
                    printf("%d\n", d);
                }
            }
        }
    }
    return 0;
}