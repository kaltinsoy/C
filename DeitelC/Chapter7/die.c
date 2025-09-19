#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int bob = 0; //Bob
	int alice = 0;
	int superAlice = 0;
	int notSuperBob = 0;
  int superBob = 0;
  int notSuperAlice = 0;
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
        ++superBob;
			} else {
				++superAlice;
        if(tempDie > 3) {
          ++notSuperAlice;
        } else {
          ++superBob;
        }
			}
		} else {
			++superBob;
      ++superAlice;
		}
	}
/*    int bobtempDie = tempDie;
    if (tempDie < 4 && tempDie % 2 != 0) {
        bobtempDie = tempDie * 2; 
        (bobtempDie % 2) ? ++superBob : ++notSuperAlice;
        printf("bobtempDie: %d\n", bobtempDie);
    }
*/
	printf("Normal Alice: %d, Normal Bob: %d\n", alice, bob);
	printf("Super Alice: %d, NotSuperBob: %d\n", superAlice, notSuperBob);
	printf("Super Bob: %d, notSuperAlice: %d\n", superBob, notSuperAlice);

	return 0;
}
