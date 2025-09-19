#include <stdio.h>

int main(void) {
  int m = 29;
  int *ab = &m;
  printf("m: %d, *ab: %d, ab: %d, address m: %d\n", m, *ab, ab, &m);
  m = 32;
  printf("m: %d, *ab: %d, ab: %d, address m: %d\n", m, *ab, ab, &m);
  *ab = 7;
  printf("m: %d, *ab: %d, ab: %d, address m: %d\n", m, *ab, ab, &m);

  return 0;
}
