/*
  Adam P. Condron
  CS362-400
  Assignment 3
  July 22, 2018

  Test of council room card
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
  G.hand[0][handTop] = council_room; // add council_room card
  G.handCount[0]++; // increase card count

  memcpy(&prevG, &G, sizeof(struct gameState));

  cardEffect(council_room, choice1, choice2, choice3, &G, handpos, &bonus);

  // check that new handCount is two greater than old handCount

  if (G.handCount[0] == (prevG.handCount[0] + 3)) // net gain of three cards: draw 4 and discard 1.
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  prevG.handCount[0] is %d and G.handCount[0] is %d\n",
      prevG.handCount[0], G.handCount[0]);

  if (G.handCount[1] == (prevG.handCount[1] + 1)) // other player gains one card
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  prevG.handCount[1] is %d and G.handCount[1] is %d\n",
      prevG.handCount[0], G.handCount[0]);

  if (G.numBuys == (prevG.numBuys + 1)) // numBuys should increment by one
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  prevG.numBuys is %d and G.numBuys is %d\n",
      prevG.numBuys, G.numBuys);

 return 0;

}
