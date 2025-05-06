#include <stdio.h>

void struck12(int, int, int);

int main(void) {
	puts("Enter time in 3 integer!(H,M,Sec)");
	int time1, time2, time3 = 0;

	scanf("%d%d%d", &time1, &time2, &time3);
	struck12(time1, time2, time3);

	return 0;
}

void struck12(int i1, int i2, int i3) {
	int total = (i1*3600) + (i2*60) + i3;

	if(total > 43200) {
		total -= 43200;
	}
		int rem = 43200 - total;
		int sec = rem % 60;
		int h = rem / 3600;
		int m = (rem - (h * 3600) - sec) / 60;
		printf("%s%d%s%d%s%d%s\n", "Struck 12: ", h, " Hours, ", m, " Min, ", sec, " Secs left. ");
}
