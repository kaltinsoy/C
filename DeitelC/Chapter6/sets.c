#include <stdio.h>
#define SIZE 11

int main (void) {
	int sets1[SIZE] = {0};
	int sets2[SIZE] = {0};

	for(size_t i = 0; i < SIZE; i++) {
		sets1[i] = i * 3;
		sets2[i] = i * 5;
	}

	puts("Union of sets:");
	for(size_t i = 0; i < SIZE; i++) {
		for(size_t j = 0; j < SIZE; j++) {
			if(sets1[i] == sets2[j]) {
				printf("%d\t", sets1[i]);
			}
		}

	}
	puts("Intersection of sets:");
	for(size_t i = 0; i < SIZE; i++) {
		for(size_t j = 0; j < SIZE; j++) {
			if(sets1[i] != sets2[j]) {
				printf("%d\t", sets1[i]);
				printf("%d\t", sets2[j]);
			}
		}

	}




	return 0;

}
