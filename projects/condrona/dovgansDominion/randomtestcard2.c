/*
  Adam P. Condron
  CS362-400
  Assignment 4
  August 5, 2018

  Test of council room card
*/
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () 
{
  srand(time(NULL));
  int j = 0;

  for (j = 0; j < 100; j++)
  {
    int r;
    r = rand();
    r = r % 2000;

    int i = 2;

    for (i = 2; i < 5; i++)
    {
      int handpos = 0, choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0;

      int k[10] = {adventurer, council_room, feast, gardens, mine,
    	       remodel, smithy, village, baron, great_hall};

      struct gameState G, prevG;
      
      memset(&G, 23, sizeof(struct gameState));
      initializeGame(i, k, r, &G);

      memcpy(&prevG, &G, sizeof(struct gameState));

      int play;

      play = cardEffect(council_room, choice1, choice2, choice3, &G, handpos, &bonus);

      if (play > -1) // only test if card play was valid
      {
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
      }
    }
  }

 return 0;
}
