#include <stdio.h>
#include "isPerfect.c"

int main(void) {
	/*puts("Enter a int!");
	int num;
	scanf("%d", &num);

	printf("%d\n", isPerfect(num));*/

	for(int i = 0; i < 1000; i++) {
		if(isPerfect(i)) {
			printf("%d ", i);
		}
	}
	puts("");
	return 0;
}
