#include <stdio.h>

int isEven (int num);

int isEven (int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
