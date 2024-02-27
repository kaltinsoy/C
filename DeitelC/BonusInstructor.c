#include <stdio.h>

int main(void) {
    int total = 0;
    int grade = 0;
    int pass = 0;
    int fail = 0;

    while(total < 10) {
        printf("%s","Enter grade (grades must be 1 or 2 !) ");
        scanf("%d", &grade);
        if(grade == 1) {
            fail = fail + 1;
            total = total + 1;
        } else if(grade == 2) {
            pass = pass + 1;
            total = total + 1;
        } else {
            printf("%s\n","Invalid Number PLEASE ENTER A VALID NUMBER!(1 or 2)");
            scanf("%d", &grade);
        }
    }
    puts((pass >= 8) ? "Bonus to Instructer!" : "");
}