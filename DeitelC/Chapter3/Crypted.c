#include <stdio.h>

int main (void) {
int i = 0, final = 0, mult = 1;
puts("Enter 4 digit integer:");
scanf("%d", &i);

if (i / 1000 >= 10) {
    puts("More than 4 digit");
    return 1;
}

while (i > 0) {
    int digit = (((i % 10) + 7) %10);
    final = digit * mult + final;
    mult *= 10;
    i /= 10;
}
int t = 0000;
t = (final / 100) % 10;
t = (final / 1000)*10 + t;
t = (final%10)*100 + t;
t = ((final / 10)%10)*1000 + t;
final = t;
printf("Crypted int: %d\n", final);

puts("Enter crypted integer: ");
scanf("%d", &i);
if (i / 1000 >= 10) {
    puts("More than 4 digit");
    return 1;
}


t = i;
t = (final / 100) % 10;
t = (final / 1000)*10 + t;
t = (final%10)*100 + t;
t = ((final / 10)%10)*1000 + t;
i = t;
//printf("Crypted int: %d\n", t);


mult = 1, final = 0;

while (i > 0) {
    int digit = (((i % 10)+3) % 10);
    final = digit * mult + final;
    mult *= 10;
    i /= 10;
}
printf("Encypted integer: %d\n", final);
return 0;
}
