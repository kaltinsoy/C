#include <stdio.h>

double calculateCharges (int hours);

int main (void) {
    printf("%5s\t%5s\t%5s\n", "Car", "Hours", "Charge");
    printf("%5s\t%5d\t%5.2f\n", "1", 22, calculateCharges(22));
    printf("%5s\t%5d\t%5.2f\n", "2", 12, calculateCharges(12));
    printf("%5s\t%5d\t%5.2f\n", "3", 34, calculateCharges(34));
    printf("%5s\t%5d\t%5.2f\n", "4", 48, calculateCharges(48));
    printf("%5s\t%5d\t%5.2f\n", "5", 94, calculateCharges(94));
}

double calculateCharges (int hours) {
    int dayMod = hours % 24;
    int days = hours / 24;

    if (days >= 1) {
        return ((days * 50)+(hours * 0.5));
    } else {
        if (hours <= 8) {
            return ((hours * 0.5) + 25);
        } else if (hours <= 13) {
            return (((hours - 8) * 5) + (hours * 0.5) + 25);
        } else {
            return (50 + (hours * 0.5));
        }
    }
}
