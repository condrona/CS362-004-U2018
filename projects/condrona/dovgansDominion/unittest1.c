/*
  Adam P. Condron
  CS362-400
  Assignment 3
  July 22, 2018

  Test of isGameOver function
*/

#include "dominion.h"
#include "dominion_helpers.h"
#include <limits.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

int compare(int*, int*);

int main () {

  int result;
  int a;
  int b;

  a = -5;
  b = 0;

  result = compare(&a, &b);

  if (result == -1)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.");

  a = INT_MAX;
  b = INT_MIN;

  result = compare(&a, &b);

  if (result == 1)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.");


  a = 0;
  b = 0;

  result = compare(&a, &b);

  if (result == 0)
    printf("TEST SUCCESSFULLY COMPLETED\n");
  else
    printf("TEST FAILED.");


  return 0;
}
