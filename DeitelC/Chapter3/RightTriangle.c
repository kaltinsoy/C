#include <stdio.h>

int MaxValue(int number1, int number2, int number3) {
    int largest = 0;
    if (number1 <= number2) {
        largest = number2;
    } else {
        largest = number1;
    }

    if (largest <= number3) {
        largest = number3;
    }
    return largest;
}

void Least(int number4, int number5, int number6, int *Least1, int *Least2) {
    if (number4 <= number5) {
        *Least1 = number4;
    } else {
        *Least1 = number5;
    }
    
    if(number5 <= number6) {
        *Least2 = number5;
    } else {
        *Least2 = number6;
    }
}

int main(void) {
    int a;
    int b;
    int c;
    int d;
    int Least3;
    int Least4;

    printf("%s\n","Enter first value of Right Triangle!");
    scanf("%d", &a);
    printf("%s\n","Enter second value of Right Triangle!");
    scanf("%d", &b);
    printf("%s\n","Enter last value of Right Triangle!");
    scanf("%d", &c);

    d = MaxValue(a,b,c);
    Least(a,b,c,&Least3,&Least4);
    if((d*d) == (Least3*Least3)+(Least4*Least4)) {
        printf("%s\n", "Yes this triangle is a right triangle!");
    } else {
        printf("%s\n", "No");
    }
    printf("%d\n", d);
    printf("%d %d\n", Least3, Least4);
}