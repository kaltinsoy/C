#include <stdio.h>

int main(void) {
int i;

puts("Enter binary!");
scanf("%d", &i);

int t = i;
int final = 0, power = 1;

while (t > 0) {
    if(t % 10 == 1) {
        final = power + final;
        t = t / 10;
    } else if (t % 10 == 0) {
        t = t / 10;
    } else {
        puts("NOT BINARY!");
        return 1;
    }
    power = 2 * power;
}
printf("Decimal: %d, Binary: %d\n", final, i);
return 0;
}
