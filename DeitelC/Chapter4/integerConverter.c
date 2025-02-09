#include <stdio.h>

int main(void) {
    for (int i = 0; i < 257; i++) {
        int t = i;
        int binary = 0;
        int mult = 1;

        while (t > 0) {
            binary += (t % 2) * mult;
            t /= 2;
            mult *= 10;
        }

        printf("Int: %d, Bin: %d, Octal: %o, Hex: %X\n", i, binary, i, i);
    }

    return 0;
}

