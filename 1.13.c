#include <stdio.h>

/* 1-13 print a histogram of the lengths of words in input
   it's easy to draw histogram with the bars horizontal
   a vertical orientation is more challenging. 

   */

int main() {

  #define MAX_WORD_LENGTH 20  
  #define YES 1
  #define NO  0

  int c, i, j, letterTally, inASpace;
  int letterCounts[MAX_WORD_LENGTH] = {0};

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
      ++letterCounts[letterTally];
      letterTally = 0;
    }
    else
      /* it's a second space, ignore it */
      ;
  }
  
  /* print out the histogram */
  for (i = 1; i < MAX_WORD_LENGTH; ++i){
    printf("\n %3d ", i);
    /* printf("%6d words with %d letters.\n", letterCounts[i], i); */
    for (j = 0; j < letterCounts[i]; ++j){
      printf("X");
    }
  }
  putchar('\n');
  return 1;

}


