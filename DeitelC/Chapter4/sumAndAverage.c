#include <stdio.h>

int main(void) {
    int x = 0, counter = 0;
    scanf("%d", &x);

    for(int t = 0; t < x; t++){
        int i;
        scanf("%d", &i);
        counter += i;
    }

 printf("%d\n", counter/x);

return 0;
}

