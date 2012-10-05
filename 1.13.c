#include <stdio.h>

/* 1-13 print a histogram of the lengths of words in input
   it's easy to draw histogram with the bars horizontal
   a vertical orientation is more challenging. */

main() {

  /* histogram of the number of words consisting of n letters */
  int letterCount[20];
  int letterCounter;
  int c;

  while ((c = getchar()) != EOF) {
    printf("did i even get to here");

    if (c == ' ' || c == '\t' || c != '\n'){
      printf("there are %d letters ", letterCounter);
      ++letterCounter;
    }
    
    else {
      ++letterCount[letterCounter];
      letterCounter = 0;
    }
  }

  int i;
  for (i = 0; i < 10; ++i)
    printf(" %d", letterCount[i]);

}