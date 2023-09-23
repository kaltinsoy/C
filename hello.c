#include <stdio.h>

int main() {
// Learning C types
int myNum;
char myChar;
float myFloat;
myChar = 'a';
myFloat = 1.55;
int myNumero = 11;
myNum = myNumero;
int x = 4;
int y = 10;
int suma = x + y;
int a = 10, b = 20, c = 30;
float sum = (float) y / x;
int myInt = 9.99;
    //printf("My fav number is :%d\n", myNum);
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myChar));
    //printf("My fav number is: %d\t and My fav character is: %c\n", myNum, myChar);
    printf("%lu\n", sizeof(suma));
    //printf("%d\n", a + b +c);
    //printf("%.1f\n", sum);
    printf("%lu\n", sizeof(myInt));
    return 0;
}