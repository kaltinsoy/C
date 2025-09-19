#include <stdio.h>

int main(void)
{
  int num1, num2;
  int *p1 = &num1;
  int *p2 = &num2;
  puts("Enter nums!");
  scanf("%d %d", p1, p2);
  (*p1 > *p2) ? printf("%d > %d", *p1, *p2) : printf("%d <= %d", *p1, *p2); 
  return 0;
}
