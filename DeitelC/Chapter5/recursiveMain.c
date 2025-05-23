#include <stdio.h>

int main (void) {
	static int count = 1;

	printf("%d\n", count++);
	if (count <= 5) {
		main();
	}
	return 0;
}
