#include <stdio.h>

void myFunc(char name[], int age) {
    printf("Hello %s. You're %d years old\n", name, age);
}

int main() {
    myFunc("Liam", 3);
    myFunc("Ahmet", 30);
return 0;
}