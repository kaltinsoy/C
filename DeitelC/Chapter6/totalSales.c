#include <stdio.h>
#define PERSON 4
#define PRODUCT 5

int main (void) {
    double sales[PERSON][PRODUCT] = {0};
    int person, product;
    double amount;

    while(1) {
        puts("Enter Sale Person (1-4)");
        puts("Wrong data will be ignored! Enter -1 to stop");
        scanf("%d", &person);

        if (person == -1) {
            break;
        } else if (person < 1 || person > PERSON) {
            puts("Invalid salesperson number! Try again.");
            continue;
        }

        puts("Enter Product (1-5) and Amount:");
        scanf("%d%lf", &product, &amount);

        if (product < 1 || product > PRODUCT || amount < 0) {
            puts("Invalid product or amount! Try again.");
            continue;
        }

        sales[person - 1][product - 1] += amount;
    }

    printf("%10s%10s%10s%10s%10s\n", "Product", "Person1", "Person2", "Person3", "Person4");
    for (int i = 0; i < PRODUCT; i++) {
        printf("%10s%d", "Product", i + 1);
        for (int j = 0; j < PERSON; j++) {
            printf("%10.2lf", sales[j][i]);
        }
        printf("\n");
    }

    return 0;
}

