#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void useAliceSuperPower(int *num);
void useBobSuperPower(int *num);

int main(void)
{
	int bob = 0; //Bob
	int alice = 0;
  srand(time(NULL));


  int die = 1 + rand() % 6;
  
  printf("%d\n", die);
  puts("Die rolled! Alice super power ? (1/x)");
  scanf("%d", &alice);
  puts("Bob super power? (1/x)");
  scanf("%d", &bob);
 
  if (alice == 1) useAliceSuperPower(&die);
  if (bob == 1) useBobSuperPower(&die);

  if(die % 2 == 0) {
    printf("Winner Bob! Die: %d\n", die);
    } else {
    printf("Winner Alice! Die: %d\n", die);
  }


	return 0;
}

void useAliceSuperPower(int *num) {
    if((*num) % 2 && (*num) != 1) {
      (*num)--;
    }
  }

void useBobSuperPower(int *num) {
   if((*num) < 4 && (*num) % 2 != 0) {
      (*num) = (*num) * 2;
    } 
  }
