#include <stdio.h>

int main (void) {

	int matrix1 [2][2] = {{2, 3}, {4, 5}};
	int matrix2 [2][2] = {{6, 7}, {8, 9}};
	int result [2][2] = {0};

	puts("Result Matrix: ");
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				result [i][j] += matrix1 [i][k] * matrix2 [k][j];
			}
			printf("%d\t", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
