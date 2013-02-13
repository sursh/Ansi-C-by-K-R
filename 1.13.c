#include <stdio.h>
#include <stdbool.h>

/* 1-13 print a histogram of the lengths of words in input
   it's easy to draw histogram with the bars horizontal
   a vertical orientation is more challenging. */

#define MAX_WORD_LENGTH 20  

int main() {

  int c, i, letterTally, inASpace, printed0s;
  int letterCounts[MAX_WORD_LENGTH + 1] = {0};
  c = 0;
  i = 0;
  letterTally = 0;
  printed0s = 0;
  inASpace = false;

  while ((c = getchar()) != EOF) {

    /* you are in a word */
    if (c != ' ' && c != '\t' && c != '\n') {
      ++letterTally;
      inASpace = false;
    }

    /* hitting the first whitespace after a word - add tally to array and reset for next word */
    else if (inASpace == false){
      inASpace = true;
      ++letterCounts[letterTally];
      letterTally = 0;
    }

    else
      /* it's a second space, igfalsere it */
      ;
  }
  
  /* histogram setup row */
  putchar('\n');
  for (i = 1; i <= MAX_WORD_LENGTH; ++i)
    printf("%3d", i);

  /* print vertical histogram as long as there are false blank rows */
  while(printed0s < MAX_WORD_LENGTH){

    putchar('\n');
    printed0s = 0;

    /* print a row */
    for (i = 1; i <= MAX_WORD_LENGTH; ++i){
      if (letterCounts[i] != 0){
        printf("  X");
        --letterCounts[i];
      }
      else {
        printf("   ");  
        ++printed0s;
      }
    }
  }

  putchar('\n');
  return 0;

}


