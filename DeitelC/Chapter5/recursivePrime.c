#include <stdio.h>

int isPrimeX (int, int);
int isPrime (int);

int main (void) {
	printf("%d\n", isPrime(11));
	return 0;
}

int isPrime (int x) {
	return isPrimeX (x, 2);
}


int isPrimeX (int x, int i) {
	if (x <= 2) {
		return (x == 2) ? 1 : 0;
	}
	if (x % i == 0){
		return 0;
	}
	if (i * i > x) {
		return 1;
	}

	return isPrimeX (x, i + 1);
}
