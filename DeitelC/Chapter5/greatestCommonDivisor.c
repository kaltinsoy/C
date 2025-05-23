#include <stdio.h>

int gcd (int, int);

int main (void) {
	printf("%d\n", gcd(15, 20));
	return 0;
}




int gcd (int x, int y) {
	if(!y) {
		return x;
	} else {
		return gcd(y, x % y);
	}
}
