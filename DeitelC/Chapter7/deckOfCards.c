#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

void shuffle(int deck[][FACES]);
void deal(int deck[][FACES], const char *suits[], const char *faces[]);

int main(void)
{
    int deck[SUITS][FACES] = {0};
    srand((unsigned)time(NULL));
    shuffle(deck);

    const char *suits[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *faces[FACES] = {"Ace", "Deuce", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    
    deal(deck, suits, faces);

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
                    printf("Card: %5s of %-8s%c", 
                          faces[face], 
                          suits[suit], 
                          (card % 4 == 0) ? '\n' : '\t');
                }
            }
        }
    }
    putchar('\n');
}
