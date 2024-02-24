#include <stdio.h>

int main(void) {
    
    printf("%s\n", "Enter sales in dollars (-1 to end):");
    float sale;
    scanf("%f", &sale);

   while (sale != -1) {
    printf("%s %.2f\n", "Salary is:", ((sale*9)/100)+200);
    printf("%s\n", "Enter sales in dollars (-1 to end):");
    scanf("%f", &sale);
    }

    return 0;
}