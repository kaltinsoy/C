#include <stdio.h>

int main () {

    int speedTrain = 150;
    int* ptr = &speedTrain;

    printf("%d\n", speedTrain);
    printf("%p\n", &speedTrain);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);

return 0;
}