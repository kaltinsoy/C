#include <stdio.h>

int main(void){
    int counter = 0;
    int data = 0;
    int nine = 9;
    int lastData;

    printf("Enter integer!: ");
    scanf("%d", &data);
    while(data > 0){
        lastData = data % 10;
        if (lastData == 9) {
            counter++;
            data /= 10;
        } else {
            data /= 10;
        }
    }
    printf("%d\n", counter);
}