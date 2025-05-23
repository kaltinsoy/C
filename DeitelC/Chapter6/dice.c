#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FACE 6
#define FACES 12
#define TIMES 3600

int main (void) {
	int freq[FACES + 1] = {0};
	srand(time(NULL));

	for(size_t i = 0; i < TIMES; i++) {
		int dice1 = 1 + rand() % FACE;
		int dice2 = 1 + rand() % FACE;
		int diceTotal = dice1 + dice2;
		++freq[diceTotal];
	}

	for(size_t i = 1; i <= FACES; i++) {
		printf("%s%zu%s%d\n", "FACE: ", i, " and freq: ", freq[i]);
	}
	return 0;
}
