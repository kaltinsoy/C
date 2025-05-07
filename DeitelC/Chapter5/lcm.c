#include <stdio.h>

int lcm (int, int);

int lcm (int i1, int i2)
{
	int i3 = 0;
	if (i1 >= i2) {
		i3 = i1;
	} else {
		i3 = i2;
	}
	for (int i = 2; i < i3; i++) {
		if (i1 % i == 0 && i2 % i == 0) {
			i3 = i;
		}
	}
	return i3;
}
