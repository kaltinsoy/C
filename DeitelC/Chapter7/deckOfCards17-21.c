#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

void shuffle(int deck[][FACES]);
void deal(int deck[][FACES], const char *suits[], const char *faces[]);
void fiveCard(int deck[][FACES], const char *suits[], const char *faces[]);

int main(void)
{
    int deck[SUITS][FACES] = {0};
    srand((unsigned)time(NULL));
    shuffle(deck);

    const char *suits[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *faces[FACES] = {"Ace", "Deuce", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    
    deal(deck, suits, faces);
    fiveCard(deck, suits, faces);

    return 0;
}

void shuffle(int deck[][FACES]) {
    for(size_t card = 1; card <= CARDS; ++card) {
        size_t row, column;
        do {
            row = rand() % SUITS;
            column = rand() % FACES;
        } while(deck[row][column] != 0);
        deck[row][column] = (int)card;
    }
}

void deal(int deck[][FACES], const char *suits[], const char *faces[]) {
    for(size_t card = 1; card <= CARDS; ++card) {
        for(size_t suit = 0; suit < SUITS; ++suit) {
            for(size_t face = 0; face < FACES; ++face) {
                if(deck[suit][face] == (int)card) {
                    /*printf("Card: %5s of %-8s%c", 
                          faces[face], 
                          suits[suit], 
                          (card % 4 == 0) ? '\n' : '\t');*/
                }
            }
        }
    }
    putchar('\n');
}

void fiveCard(int deck[][FACES], const char *suits[], const char *faces[]) {
  int hand[5][2] = {0};
  int count5 = 0;

  while (count5 < 5) {
    int row = rand() % SUITS;
    int column = rand() % FACES;

    if(hand[row][column] != 0) {
      hand[count5][0] = row;
      hand[count5][1] = column;
      printf("Card: %d: %s, %s\n", count5, faces[column], suits[row]);
    }
    deck[row][column] = 0;
    count5++;
  }
  checkHand(hand, suits, faces);
}

void checkHand(hand[][2], const char *suits[], const char *faces[]) {
  int fourOfaKind = 0;
  int threeOfaKind = 0;
  int twoPairs = 0;
  int onePair = 0;
  int flush = 0;
  int straight = 0;
  int same = 0;

  for(int i = 0; i < 5; i++) {
    int sameVal[FACES] = {0};
    int pairs = 0;

    sameVal[hand[i][1]]++;
  }






}
