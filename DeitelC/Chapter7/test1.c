#include <stdio.h>

int main (void)
{
	int x = 5;
	int *ptr = &x;
	int a = ++*ptr;
	printf("*ptr++ %d\n", a);
	printf("++ptr %d\n", ++ptr);
	
	void *vptr = &x;
	printf("void ptr %d\n", vptr);

	return 0;
}
