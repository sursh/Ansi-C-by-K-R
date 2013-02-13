#include <stdio.h>
#include <stdbool.h>

/* 1-13 print a histogram of the lengths of words in input
   it's easy to draw histogram with the bars horizontal
   a vertical orientation is more challenging. */

#define MAX_WORD_LENGTH 20  
#define YES 1
#define NO 0

int main() {

  int c, i, letterTally, inASpace;
  int letterCounts[MAX_WORD_LENGTH + 1] = {0};
  bool printedSomething; 
  c = 0;
  i = 0;
  letterTally = 0;
  inASpace = NO;
  printedSomething = true;

  while ((c = getchar()) != EOF) {

    /* you are in a word */
    if (c != ' ' && c != '\t' && c != '\n') {
      ++letterTally;
      inASpace = NO;
    }

    /* hitting the first whitespace after a word - add tally to array and reset for next word */
    else if (inASpace == NO){
      inASpace = YES;
      ++letterCounts[letterTally];
      letterTally = 0;
    }

    else
      /* it's a second space, ignore it */
      ;
  }
  
  /* histogram setup row */
  putchar('\n');
  for (i = 1; i <= MAX_WORD_LENGTH; ++i)
    printf("%3d", i);

  /* print vertical histogram as long as there are NO blank rows */
  while(printedSomething == true){

    printedSomething = false;
    putchar('\n');
    
    /* print a row */
    for (i = 1; i <= MAX_WORD_LENGTH; ++i){
      if (letterCounts[i] != 0){
        printf("  X");
        --letterCounts[i];
        printedSomething = true;
      }
      else {
        printf("   ");  
      }
    }
  }

  putchar('\n');
  return 0;

}


