#include <stdio.h>

unsigned long long int fibonacci(int n);

int main (void){

puts("Enter fibonacci step!");
int n;

if(!scanf("%d", &n)){
    puts("invalid");
    return 1;
    }

printf("%d. step of fibonacci: %llu\n", n, fibonacci(n));

return 0;
}

unsigned long long int fibonacci(int n) {

if(n == 0 || 1 == n){
return n;
} else {

return fibonacci(n - 1) + fibonacci (n - 2);
}

}
