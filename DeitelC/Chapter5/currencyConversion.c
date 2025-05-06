#include <stdio.h>

void usdToEuro(double);
void usdToYen(double);

int main(void) {
	double usd = 1;
	usdToEuro(usd);
	usdToYen(usd);
	return 0;
}

void usdToEuro(double usd) {
	double euro = usd * 0.92;
	printf("%3s\t%s\n", "USD", "EURO");
	printf("%3.2f\t%3.2f\n", usd, euro);
}

void usdToYen(double usd) {
	double yen = usd * 118.87;
	printf("%3s\t%s\n", "USD", "YEN");
	printf("%3.2f\t%3.2f\n", usd, yen);
}
