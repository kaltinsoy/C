#include <stdio.h>

int main(void) {
    int total = 0;
    int counter = 0;

    printf("%s","Enter grades!, -1 to End: ");
    int grade = 0;
    scanf("%d", &grade);
    while(grade != -1) {
        total = total + grade;
        counter = counter + 1;

        printf("%s", "Enter grades!, -1 to End: ");
        scanf("%d", &grade);
    }

    if (counter != 0) {

    double avarage = (double) total / counter;

    printf("Class average is %.2f\n", avarage);
    printf("%d ", total);
    printf("%d ", counter);
    printf("%.0f", avarage);


    } else {
        puts("Enter a valid number!");
    }
}