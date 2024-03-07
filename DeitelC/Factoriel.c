#include <stdio.h>

int main(void) {
    int userData;
    int counter;
    int data = 1;
    puts("Please enter factoriel number !: ");
    scanf("%d",&userData);

while(userData > 1) {
    if (userData == 0) {
        puts("0! = 1!\n");
    } else if (userData >  0) {
            printf("%s %d\n","UserData while", userData);
            data = userData * data;
            printf("%s %d\n","data while", data);

            userData--;
        }
    }
}