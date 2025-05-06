#include <stdio.h>

int main(void) {
	puts("Enter integer");
	int scanV;
	scanf("%d", &scanV);
	int rem = 10000;
	int firstD = 1;

	if(scanV < 32768 && scanV >= 1) {
		while(rem >= 1) {
			int digit = scanV / rem;
			if(!firstD || digit) {
				printf("%d  ", digit);
				firstD = 0;
				scanV = scanV % rem;
			}

			rem /= 10;
		}
		printf("\n");
	}
}
