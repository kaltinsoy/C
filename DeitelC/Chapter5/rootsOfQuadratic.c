#include <stdio.h>
#include <math.h>

void rootsOfQuad(int, int, int);

int main(void) {
	int a, b, c = 0;
	puts("Enter coefficients!");
	scanf("%d%d%d", &a, &b, &c);
	rootsOfQuad(a, b, c);

	return 0;
}


void rootsOfQuad(int a, int b, int c) {
	int discriminant = (b * b) - 4 * a * c;

	if(discriminant) {
		int x1 = (-b - sqrt(discriminant))/2 * a;
		int x2 = (-b + sqrt(discriminant))/2 * a;
		printf("%s%d%d\n", "x1 and x2 are: ", x1, x2);
	} else {
		puts("Not reel!");
	}
}
