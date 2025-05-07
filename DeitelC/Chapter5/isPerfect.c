#include <stdio.h>

int isPerfect(int);

int isPerfect(int num) {
	int temp = 0;
	for(int i = 1; i < num; i++) {
		if(num % i == 0) {
			temp += i;
		}
	}
	if (temp == num) {
		return 1;
	} else {
		return 0;
	}
}
