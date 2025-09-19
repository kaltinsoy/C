#include <stdio.h>

void sumOfNums(int *num1, int *num2);

int main(void)
{
  
  int num1, num2;
  puts("Enter num1 and num2");
  scanf("%d %d", &num1, &num2);

  int *p1 = &num1;
  int *p2 = &num2;

  sumOfNums(p1, p2);



  return 0;
}

void sumOfNums(int *num1, int *num2) {
  printf("Sum of Nums: %d\n", (*num1) + (*num2));
}
