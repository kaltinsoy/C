#include <stdio.h>
#define size 50

int main(void) {
    int turtle[size][size] = {0};
    int penUp = 1;
    double in = 0.00;
    int way = 0; // 0 right, 1 down, 2 left, 3 up
    int row = 0, column = 0;

    while (1) {
        puts("Enter command between 1-9 (e.g., 5.12 for move 12 steps):");
        scanf("%lf", &in);

        if (in == 9.00) {
            break;
        } else if (in == 1.00) {
            penUp = 1;
        } else if (in == 2.00) {
            penUp = 0;
        } else if (in == 3.00) {
            way = (way + 1) % 4; // Turn right
        } else if (in == 4.00) {
            way = (way - 1 + 4) % 4; // Turn left
        } else if (in == 6.00) {
            for (size_t i = 0; i < size; i++) {
                for (size_t j = 0; j < size; j++) {
                    printf("%c", turtle[i][j] ? '*' : ' ');
                }
                printf("\n");
            }
        } else if (in >= 5.00 && in < 6.00) {
            float temp = (in - 5.00) * 100;
            int steps = (int)temp;

            for (int i = 0; i < steps; i++) {
                if (!penUp) {
                    turtle[row][column] = 1;
                }

                switch (way) {
                    case 0: // Right
                        if (column < size - 1) column++;
                        break;
                    case 1: // Down
                        if (row < size - 1) row++;
                        break;
                    case 2: // Left
                        if (column > 0) column--;
                        break;
                    case 3: // Up
                        if (row > 0) row--;
                        break;
                }
            }
        }
    }

    return 0;
}
