#include <stdio.h>

void isPrime(int number) {
int a = 1;
int count = 0;

while (a < number) {
	if(number%a == 0) {
	count += 1;
	a++;
    } else {
        a++;
    }
}

if(count == 1) {
	printf("%s\n", "Yes it's a Prime");

    } else {
	printf("%s\n", "No it isn't a Prime");
    }
}
int main(void) {
    int number;
    printf("%s\n", "Enter a integer!");
    scanf("%d", &number);
    isPrime(number);
}