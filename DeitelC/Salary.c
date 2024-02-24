#include <stdio.h>


int main(void) {
    printf("%s\n", "Enter # of hours worked (-1 to End):");
    int hours;
    scanf("%d", &hours);
    if (hours == -1) {
        return 0;
    };
    printf("%s\n","Enter hourly rate of the worker ($00.00):");
    float hourly;
    scanf("%f", &hourly);

    if(hours <= 40) {
        while(hours != -1){
        printf("%s %.2f\n", "Salary is: ", hourly*hours);
        printf("%s\n", "Enter # of hours worked (-1 to End):");
        scanf("%d", &hours);
    if (hours == -1) {
        return 0;
    };
        printf("%s\n","Enter hourly rate of the worker ($00.00):");
        scanf("%f", &hourly);

        }
        return 0;
    }
    if (hours > 40) {
        while(hours != -1) {
        float OneHalf = ((hours - 40)*hourly)*(1,5);
        printf("%s %.2f\n", "Salary is :", 400+OneHalf);
        printf("%s\n", "Enter # of hours worked (-1 to End):");
        scanf("%d", &hours);
            if (hours == -1) {
        return 0;
    }
        printf("%s\n","Enter hourly rate of the worker ($00.00):");
        scanf("%f", &hourly);
        }
        return 0;
        

    }
    return 0;
}