#include <stdio.h>

int main(void) {
    float monthTotal;
    float total;
    char month[20];

    printf("%s\n", "Enter total amounth collected (-1 to stop!):");
    scanf("%f", &monthTotal);
    
    while (monthTotal != -1) {
    total += monthTotal;
    printf("%s %.2f\n", "Current Total", total);
    printf("%s\n", "Enter total amounth collected (-1 to stop!):");
    scanf("%f", &monthTotal);
    }
    printf("%s\n", "Enter name of month:");
    scanf("%s", month);
    printf("The Month: %s\n",month);
    printf("%s %.2f\n", "Total Collections:", total);
    printf("%s %.2f\n", "Sales:", (total*91)/100);
    printf("%s %.2f\n", "County Sales Tax:", (total*5)/100);
    printf("%s %.2f\n", "State Sales Tax:", (total*4)/100);
    printf("%s %.2f\n", "Total Sales Tax Collected:", (total*9)/100);

}