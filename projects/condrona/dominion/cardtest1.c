/*
  Adam P. Condron
  CS362-400
  Assignment 3
  July 22, 2018

  Test of adventurer card
*/
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>

int main () {

  int handpos = 0, choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0;

  int k[10] = {adventurer, council_room, feast, gardens, mine,
	       remodel, smithy, village, baron, great_hall};

  struct gameState G, prevG;
  
  memset(&G, 23, sizeof(struct gameState));
  initializeGame(2, k, 1, &G);

  int handTop = G.handCount[0]; // get card count for player 0
  G.hand[0][handTop] = 0; // add adventurer card
  G.handCount[0]++; // increase card count

  memcpy(&prevG, &G, sizeof(struct gameState));

  cardEffect(adventurer, choice1, choice2, choice3, &G, handpos, &bonus);

  // check that new handCount is two greater than old handCount

  if (G.handCount[0] == (prevG.handCount[0] + 2))
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  prevG.handCount[0] is %d and G.handCount[0] is %d\n",
      prevG.handCount[0], G.handCount[0]);

  if (prevG.discardCount[0] <= G.discardCount[0])
    printf("TEST FAILED.  prevG.discardCount[0] = %d and G.discardCount[0] is %d.\n", 
      prevG.discardCount[0], G.discardCount[0]);
  else
    printf("TEST SUCCESSFULLY COMPLETED\n");

  if (G.deckCount[0] == (prevG.deckCount[0] - 2))
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  G.deckCount[0] is %d; expected %d\n", G.deckCount[0], (prevG.deckCount[0] - 2));

 return 0;

}


