#include <stdio.h>
#define SIZE 10

void bubbleSort(int a[], size_t size, int(*compare)(int i1, int i2));
int asc(int i1, int i2);
int des(int i1, int i2);

int main (void)
{
	int nums[SIZE] = {2, 4, 6, 11, 123, 1000, 3, 42, 90, 1};
	puts("Nums are ready asc or desc ? (asc: 0/des: 1)");
	int order = 0;
	scanf("%d", &order);

	puts("Orginal list: ");
	for(size_t i = 0; i < SIZE; ++i) {
		printf(" %d,", nums[i]);
	}
	puts("");

	if(order) {
		// des sort
		bubbleSort(nums, SIZE, des);
		puts("In Descending Order: ");
	} else {
		bubbleSort(nums, SIZE, asc);
		puts("In Ascending Order: ");
	}
	
	for(size_t i = 0; i < SIZE; ++i) {
		printf(" %d,", nums[i]);
	}
	puts("");

return 0;
}



void bubbleSort(int a[], size_t size, int(*compare)(int i1, int i2)) {
	void swap(int *iS1, int *iS2);

	for(size_t pass = 0; pass < SIZE - 1; ++pass) {
		for(size_t count = 0; count < SIZE - 1; ++count) {
			if((*compare)(a[count], a[count + 1])) {
				swap(&a[count], &a[count + 1]);
				}
			}
		}
}

void swap(int *iS1, int *iS2) {
	int temp = *iS1;
	*iS1 = *iS2;
	*iS2 = temp;
}

int asc(int i1, int i2) {
	return i2 < i1;
}
int des(int i1, int i2) {
	return i1 < i2;
}
