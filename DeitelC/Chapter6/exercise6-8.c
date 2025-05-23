#include <stdio.h>

int main(void) {
	int m [3][3];
		for(size_t i = 0; i < 3; i++) {
			for(size_t j = 0; j < 3; j++) {
				m [i] [j] = 3;
		}
	}
		for(size_t i = 0; i < 3; i++) {
			for(size_t j = 0; j < 3; j++) {
				printf("%zu\t", m [i] [j]);
		}
	}
	int small[100] = {0};
	int large[200];
	for(size_t i = 0; i < 200; i++) {
		large[i] = 1;
	}

	for(size_t i = 0; i < 100; i++) {
		large[100+i] = small[i];
	}

	for(size_t i = 0; i < 200; i++) {
		printf("%d ,", large[i]);
	}



		return 0;
}
