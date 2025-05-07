#include <stdio.h>

int main(void) {
	float f1, f2, f3, f4;
	puts("Enter 4 float!");
	scanf("%f%f%f%f", &f1, &f2, &f3, &f4);
	float listF[] = {f1, f2, f3, f4};

	float temp;
	for(int i = 0; i < 3; i++) {
		if(listF[i] >= listF[i+1]) {
			temp = listF[i];
		} else if (listF[i+1] >= listF[i]) {
			temp = listF[i+1];
		}
	}
	printf("%s%f\n", "Biggest float: ", temp);
	return 0;
}
