#include <stdio.h>

int main (void){
    int i, j;
    float total = 0;
    while(1) {
        puts("Enter item number and how many sold: ");
        scanf("%d%d", &i, &j);
        if(i == 0) {
        break;
        }

        switch(i) {
        default:
            puts("Invalid value!");
            continue;
        case 1:
            total += 2.98 * j;
            break;
        case 2:
            total += 4.50 * j;
            break;
        case 3:
            total += 9.98 * j;
            break;
        case 4:
            total += 4.49 * j;
            break;
        case 5:
            total += 6.87 * j;
            break;
        }
    }
    printf("Last weeks total retail price: %.2f\n", total);
return 0;
}
