#include <stdio.h>

int main(void) {
  int m = 300;
  float fx = 300.600006;
  char cht = 'z';

  int *p1 = &m;
  float *p2 = &fx;
  char *p3 = &cht;

  printf("The & operator: m=%p, fx=%p, cht=%p\n", &m, &fx, &cht);
  printf("The & and * operator: m=%d, fx=%f, cht=%c\n", *(&m), *(&fx), *(&cht));
  printf("Using only pointer variable: m=%p, fx=%p, cht=%p\n", p1, p2, p3);
  printf("Using only pointer operator: m=%d, fx=%f, cht=%c\n", *p1, *p2, *p3);


  return 0;
}
