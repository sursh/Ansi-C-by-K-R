#include <stdio.h>
#include <stdbool.h>

/* 1-13 print a histogram of the lengths of words in input
   it's easy to draw histogram with the bars horizontal
   a vertical orientation is more challenging. */

#define MAX_WORD_LENGTH 20  

void printHistogram(int *letterCounts, int len)
{

  int i;
  bool printedSomething = true;

  /* histogram setup row */
  putchar('\n');
  for (i = 1; i <= len; ++i)
    printf("%3d", i);

  /* print vertical histogram for as long as you're printing something */
  while(printedSomething == true){

    printedSomething = false;
    putchar('\n');
    
    /* print a row */
    for (i = 1; i <= len; ++i){
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
}

void countTheLetters(int *letterCounts, int len)
{

  int c, letterTally;
  bool inASpace; 
  c = 0;
  letterTally = 0;
  inASpace = false;
  
  while ((c = getchar()) != EOF) {

    /* you are in a word */
    if (c != ' ' && c != '\t' && c != '\n' && c != '\r') {
      ++letterTally;
      inASpace = false;
    }

    /* hitting the first whitespace after a word - add tally to array and reset for next word */
    else if (inASpace == false){
      inASpace = true;
      ++letterCounts[letterTally];
      letterTally = 0;
    }

    else {
      /* it's a second space, ignore it */
    }
  }
}

int main() {

  int letterCounts[MAX_WORD_LENGTH + 1] = {0};

  countTheLetters(letterCounts, MAX_WORD_LENGTH);
  
  printHistogram(letterCounts, MAX_WORD_LENGTH);

  return 0;

}


