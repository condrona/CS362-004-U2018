/*
  Adam P. Condron
  CS362-400
  Assignment 3
  July 22, 2018

  Test of supplyCount() function
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

  result = supplyCount(adventurer, &G);
  if (result == 10)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  adventurer count is %d\n", result);

  result = supplyCount(council_room, &G);
  if (result == 10)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  council_room count is %d\n", result);
 
  result = supplyCount(feast, &G);
  if (result == 10)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  feast count is %d\n", result);
 
  result = supplyCount(gardens, &G);
  if (result == 8)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  gardens count is %d\n", result);
 
  result = supplyCount(mine, &G);
  if (result == 10)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  mine count is %d\n", result);
  
  result = supplyCount(remodel, &G);
  if (result == 10)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  remodel count is %d\n", result);
  
  result = supplyCount(smithy, &G);
  if (result == 10)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  smithy count is %d\n", result);
  
  result = supplyCount(village, &G);
  if (result == 10)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  village count is %d\n", result);
  
  result = supplyCount(baron, &G);
  if (result == 10)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  baron count is %d\n", result);
  
  result = supplyCount(great_hall, &G);
  if (result == 8)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.  great_hall count is %d\n", result);

  return 0;
}
