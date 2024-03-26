#include <stdio.h>

int main() {
    int grade;
    printf("%s\n", "Enter your grade!");
    scanf("%d", &grade);
    if (grade >= 60) {
        printf("%s\n", "You passed!");

    } else {
        printf("%s\n", "You failed!");
        printf("%d\n", grade);
    }
        printf((grade <= 60) ? "Fail" : "Passed");    
}