#include <stdio.h>
#include <math.h>

int myProg(int, int);

int main(){
    float fullNum;
    int b;

    printf("Lutfen rakam giriniz! \n");
    scanf("%f\n", &fullNum);
    printf("%f\n", ceil(fullNum));
    printf("%f", floor(fullNum));
return 0;

}