#include <stdio.h>
int main(void) {
    int number = 0;
    int counter = 1;
    int largest = 0;
    printf("%s\n","Enter 10 positive Integer");
    scanf("%d", &number);

    while(counter < 10) {
        printf("%s\n","Enter 10 positive Integer");
        scanf("%d", &number);
        
        if(number >= largest) {
            largest = number;
            ++counter;
        } else {
            ++counter;
        }


    }
    printf("%s %d\n", "Counter: ",counter);
    printf("%s %d\n", "Largest: ",largest);
    printf("%s %d\n", "Number: ",number);

    return 0;

}