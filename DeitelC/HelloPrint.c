#include <stdio.h>

void HelloWorld(char print[]) {
    printf("%s\n", print);
}

int main(void) {
    HelloWorld("print");
}