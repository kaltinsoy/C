#include <stdio.h>
#include <string.h>

struct myStruct {
    int myNum;
    char myNam[30];
};


int main () {

    struct myStruct s3 = {15, "Hello World!"};
    printf("%d\n%s", s3.myNum, s3.myNam);

    return 0;

}