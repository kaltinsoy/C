#include <stdio.h>

int myFunc(int,int);

int main(){
    int result = myFunc(5, 3);
    printf("Result is %d", result);
return 0;
}

int myFunc(int x, int y){
    return x + y;
}