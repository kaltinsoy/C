#include <stdio.h>

int main(void){

int num;
int e = 1;
int decimal = 0;

printf("%s\n", "Enter UNSIGNED BINARY! to convert decimal");
scanf("%d", &num);
int temp = num;

while (temp) {
	int last = temp % 10;
	temp = temp / 10;

	decimal += last * e;
	e = e * 2;

}
printf("%s %d\n", "Decimal: ", decimal);

	return 0;
}
