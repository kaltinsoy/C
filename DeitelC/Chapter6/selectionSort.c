#include <stdio.h>

void selectionSort(size_t size, int a[size]);

void selectionSort(size_t size, int a[size]) {
	for(size_t i = 0; i < size - 1; i++) {
		size_t minI = i;
		for(size_t j = i + 1; j < size; j++) {
			if(a[j] < a[minI]) {
				minI = j;
			}
		}

	if(minI != i) {
		int temp = a[i];
		a[i] = a[minI];
		a[minI] = temp;

		}
	}
}
