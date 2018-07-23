/*
  Adam P. Condron
  CS362-400
  Assignment 3
  July 22, 2018

  Test of isGameOVer() function
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
  result = isGameOver(&G);
  if (result == 0)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  New game returned isGameOver true.\n");

  G.supplyCount[province] = 0;
  result = isGameOver(&G);
  if (result == 1)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  New game returned isGameOver true.\n");

  initializeGame(2, k, 1, &G);
  G.supplyCount[4] = 0;
  G.supplyCount[8] = 0;
  G.supplyCount[12] = 0;
  result = isGameOver(&G);
  if (result == 1)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  New game returned isGameOver true.\n");

  return 0;
}
