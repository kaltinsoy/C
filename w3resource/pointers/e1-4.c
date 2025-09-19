#include <stdio.h>

int main(void) {
  puts("Num adder with pointer!");
  int num1, num2;
  int *p1 = &num1;
  int *p2 = &num2;
  puts("Enter p1 and p2!");
  scanf("%d", &num1);
  scanf("%d", &num2);
  printf("Total:%d\n", (*p1) + (*p2));

  return 0;
}
