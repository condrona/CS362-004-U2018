/*
  Adam P. Condron
  CS362-400
  Assignment 3
  July 22, 2018

  Test of getCost() function
  adapted from test provided in class
  lines 21-22 are unchanged from that sample
*/

#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>

int main () {

  int result;

  int k[10] = {adventurer, council_room, feast, gardens, mine,
	       remodel, smithy, village, baron, great_hall};

  struct gameState G;
  
  initializeGame(2, k, 1, &G);

  result = getCost(adventurer);
  if (result == 6)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  adventurer cost is %d\n", result);

  result = getCost(council_room);
  if (result == 5)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  council_room cost is %d\n", result);

  result = getCost(feast);
  if (result == 4)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  feast cost is %d\n", result);

  result = getCost(gardens);
  if (result == 4)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  gardens cost is %d\n", result);

  result = getCost(mine);
  if (result == 5)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  mine cost is %d\n", result);

  result = getCost(remodel);
  if (result == 4)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  remodel cost is %d\n", result);

  result = getCost(smithy);
  if (result == 4)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  smithy cost is %d\n", result);

  result = getCost(village);
  if (result == 3)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  village cost is %d\n", result);

  result = getCost(baron);
  if (result == 4)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  baron cost is %d\n", result);

  result = getCost(great_hall);
  if (result == 3)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  great_hall cost is %d\n", result);
  return 0;
}
