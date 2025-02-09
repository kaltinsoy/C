#include <stdio.h>

int main(void) {

    int i = 5, j = 7, k = 4, m = -2;

printf("%d\n", i == 5);
printf("%d\n", j != 3);
printf("%d\n", i >= 5 && j < 4);
printf("%d\n", !m && k > m);
printf("%d\n", !k || m);
printf("%d\n", k - m < j || 5 - j >= k);
printf("%d\n", j + m <= i && !0);
printf("%d\n", !(j - m));
printf("%d\n", !(k > m));
printf("%d\n", !(j > k));
printf("%d\n", !m);
}
