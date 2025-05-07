#include <stdio.h>

int sumOfDigits(int);

int main(void) {
	int t = 7613;
	printf("%d\n", sumOfDigits(t));
	return 0;
}

int sumOfDigits(int num) {
	int result = 0;
	while (num > 0) {
		result += num % 10;
		num /= 10;
	}
	return result;
}
