#include <stdio.h>

int main () {
    char greetings[] = "Hello!";
    greetings[0] = 'Y';
    printf("%s\n", greetings);
return 0;
}