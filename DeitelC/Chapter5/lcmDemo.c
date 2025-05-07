#include <stdio.h>
#include "lcm.c"

int main (void)
{
	int i1, i2 = 0;
	puts("Enter int1 and int 2");
	scanf("%d%d", &i1, &i2);
	printf("%s%d\n", "Lowest common integer: ", lcm(i1, i2));
	return 0;
}
