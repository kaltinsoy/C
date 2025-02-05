#include <stdio.h>
#include <math.h>

int main(void){
    int sum = 0;
    for(int i = 1; i <= 99; i += 2) {
        sum += i;
}

printf("%s%d\n","Sum of 1-99 odd numbers: ", sum);

printf("%-15.1f\n", 333.546372);
printf("%-15.2f\n", 333.546372);
printf("%-15.3f\n", 333.546372);
printf("%-15.4f\n", 333.546372);
printf("%-15.5f\n", 333.546372);
printf("%10.2f\n", pow(2.5,3));

int counter = 1;

while (counter <= 20) {
    if(counter % 5 == 0) {
    printf("%d\n", counter);
    } else {
        printf("%d\t", counter);
    }

    ++counter;
}


return 0;
}
