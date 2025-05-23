#include <stdio.h>

int main(void) {
	int weekPay = 200;
	puts("Enter gross sales: ");
	int bonus;
	scanf("%d", &bonus);
	bonus = (bonus * 9) / 100;
	int total = bonus + weekPay;

	int range[9];
	int temp = (total/100) - 2;

	if(temp < 10) {
		++range[temp];
	} else {
		++range[8];
	}

	for (size_t i = 0; i < 9; i++) {
		printf("%d\n", range[i]);
	}

	return 0;
}
