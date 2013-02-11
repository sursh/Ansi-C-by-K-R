#include <stdio.h>

/* 1-13 print a histogram of the lengths of words in input
   it's easy to draw histogram with the bars horizontal
   a vertical orientation is more challenging. 

  pseudocode: 

  while the file isn't over
    while you're not in whitespace (aka in a word)
      tally up how many letters you've gone through
    then, once you've hit whitespace, store the tally in the array. 

   */

main() {

  #define MAX_WORD_LENGTH 20  
  #define YES 1
  #define NO  0

  int c, i, letterTally, inASpace;
  int letterCounts[MAX_WORD_LENGTH];

  letterTally = i = 0;
  c = inASpace = NO;

  while ((c = getchar()) != EOF) {
    /* you are in a word */
    if (c != ' ' && c != '\t' && c != '\n') {
      ++letterTally;
      inASpace = NO;
    }
    /* hitting the first whitespace after a word */
    else if (inASpace == NO){
      inASpace = YES;
      printf("One more word with %d letters \n", letterTally);
      ++letterCounts[letterTally];
      letterTally = 0;
    }
    else
      /* it's a second space, ignore it */
      ;
  }
  
  /* print out the histogram */
  for (i = 0; i < MAX_WORD_LENGTH; ++i)
    printf("%6d words with %d letters.\n", letterCounts[i], i);

}


