#include <stdio.h>
#define size 50

int main (void) {
	int turtle[size][size] = {0};
	int penUp = 1;
	double in = 0.00;
	int way = 0; //0 right, 1 left
	int row, column = 0;

	puts("Enter command between 1-9 with .0!");
	scanf("%.2lf", &in);

	while(in != 9.00) {
		puts("Enter command between 1-9 with .0!");
		scanf("%.1lf", &in);

		if(in == 2.00) {
			penUp = 0;
		} else if (in == 6.00) {
			for(size_t i = 0; i < size; i++) {
				for(size_t j = 0; j < size; j++) {
					printf("%d\n", turtle[i][j]);
				}
				printf("\n");
			}
		} else if (in == 3.00) {
			way = 0;
		} else if (in == 4.00) {
			way = 1;
		} else if (in > 4.00 && in < 6.00) {
				float temp = (in * 100) - 500;
				int tIn = (int) temp;
				
				if(!way && penUp == 0 && tIn < 50 && column < 50) {
					for(int i = 0; i < tIn; i++) {
						turtle[row][i] = 1;
				}
				column = tIn;

			} else if(way && penUp == 0 && tIn < 50 && row < 50) {
					for(int i = 0; i < tIn; i++) {
						turtle[i][column] = 1;
				}
				row = tIn;
			}

		}
	}



	return 0;
}
