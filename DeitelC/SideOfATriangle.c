#include <stdio.h>

int AbsoluteValue(int number) {
    if (number < 0) {
        number *= -1;
    }
    return number;
}

int main() {
    int a;
    int b;
    int c;
    int check = 0;
    printf("%s\n", "Enter sides of Triangle! (Enter first value!): ");
    scanf("%d", &a);
    printf("%s\n", "Enter sides of Triangle! (Enter second value!): ");
    scanf("%d", &b);
    printf("%s\n", "Enter sides of Triangle! (Enter last value!): ");
    scanf("%d", &c);


    if(AbsoluteValue(b-a) < c && c < a+b) {
        check++;
    } else {
        printf("%s\n", "Check 1 NOT COMPLETED!");
    }
    if(AbsoluteValue(c-a)< b && b < c+a) {
        check++;
    } else {
        printf("%s\n", "Check 2 NOT COMPLETED!");
    }
    if(AbsoluteValue(c-b)< a && a < c+b) {
        check++;
    } else {
        printf("%s\n", "Check 3 NOT COMPLETED!");
    }
    if(check == 3) {
        printf("%s\n", "Yes this is a triangle!");
    } else {
        printf("%s\n", "No");
    }
}