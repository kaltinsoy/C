#include <stdio.h>

int CelciusConvert(int c) {
    int f;
    f = ((c*9)/5)+32;
return f;
}

int main(void) {
    int c;
    int f;
    printf("%s\n", "Enter Celcius degree!");
    scanf("%d", &c);
    printf("%d %s %d",c, " Celcius equals to Fahrenheit: ", CelciusConvert(c));
}