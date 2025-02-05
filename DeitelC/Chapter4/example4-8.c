#include <stdio.h>
int main()
 {
int x, i, j;
printf("%s", "Enter an integer in the range 1-20:"); 
scanf("%d", &x); // read values for x
 for (i = 1; i <= x; i++) {
for (j = 1; j <= x; j++) { 
if (j==i)
 printf("%c",'@'); // output @ 12 
    else
 printf(" "); } // end inner for 15 
printf("\n");
 } // end outer for 17 
} // end of main
