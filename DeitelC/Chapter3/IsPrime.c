#include <stdio.h>

void isPrime(int number) {
int a = 1;
int count = 0;

while (a < number) {
	if(number%a == 0) {
        printf("%s\n", "No it isn't a Prime");
	    return;
    }
    a++;
}

if(count == 1) {
	printf("%s\n", "Yes it's a Prime");

    } else {
	
    }
}

int main(void) {
    int number;
    printf("%s\n", "Enter a integer!");
    scanf("%d", &number);
    isPrime(number);
}