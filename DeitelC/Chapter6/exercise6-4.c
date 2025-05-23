#include <stdio.h>
#define SIZE 3

int main (void) {
	int table [SIZE] [SIZE] = {{1, 8}, {2, 4, 6}, {5}};
	for(size_t i = 0; i < SIZE; i++) {
		for(size_t j = 0; j < SIZE; j++) {
			printf("%d\n", table[i] [j]);
		}
	}
	return 0;
}
