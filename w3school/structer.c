#include <stdio.h>
#include <string.h>

struct myStruct {
    int myNum;
    char myLtr;
    char myString[30];
};

int main () {

    struct myStruct s1;
    s1.myNum = 10;
    s1.myLtr = 'a';
    strcpy(s1.myString, "Greetings!");

    struct myStruct s2;
    s2.myNum = 19;
    s2.myLtr = 'C';

    printf("%s\n", s1.myString);
    printf("%d\n", s1.myNum);
    printf("%c\n", s1.myLtr);
    printf("%d\n", s2.myNum);
    printf("%c\n", s2.myLtr);

return 0;
}