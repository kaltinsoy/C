#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int bob = 0; //Bob
	int alice = 0;
	int superAlice = 0;
	int notSuperBob = 0;
	srand(time(NULL));

	for(int i = 0; i < 1000; ++i){
		int die = 1 + rand() % 6;

		if(die % 2) {
			++bob;
			} else {
			++alice;
		}

		if(die != 1){
			int tempDie = (die % 2) ? die - 1 : die;
			if(tempDie % 2){
				++notSuperBob;
			} else {
				++superAlice;
			}
		} else {
			++notSuperBob;
		}
	}

	printf("Normal Alice: %d, Normal Bob: %d\n", alice, bob);
	printf("Super Alice: %d, NotSuperBob: %d\n", superAlice, notSuperBob);

	return 0;
}
