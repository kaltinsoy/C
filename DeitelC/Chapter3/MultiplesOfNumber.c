#include <stdio.h>

int main(void){
    int dollar = 0;
    for(dollar = 0; dollar < 500; dollar++) {
        if (dollar % 50 == 0) {
            printf("\n");
            printf("$ ");
            dollar++;
        } else {
            printf("$ ");
            dollar++;
        }
    }
}