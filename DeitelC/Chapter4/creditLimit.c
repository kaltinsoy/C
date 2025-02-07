#include <stdio.h>

int main(void) {

int accNum;
float limit, debt;
puts("Enter 3 customer details!");
    for(int counter = 0; counter < 3; counter++){
        puts(" ");
        puts("Enter account number: ");
        int a = scanf("%d", &accNum);
        puts("Enter credit limit: ");
        int b = scanf("%f", &limit);
        puts("Enter current debt: ");
        int c = scanf("%f", &debt);



if (!a || !b || !c) {
    puts ("Enter valid data!");
}

printf("Account number: %d, Account old credit limit: %.2f, Account current debt: %.2f.\n", accNum, limit, debt);

if(limit/2 < debt) {
    puts("WARNING! ACCOUNT DEBT MORE THAN NEW LIMIT!");
    printf("New credit limit: %.2f, Current debt: %.2f\n", (limit/2), debt);
} else {
    printf("New credit limit: %.2f, Current debt: %.2f\n", (limit/2), debt);
}

}
}
