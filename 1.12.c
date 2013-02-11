#include <stdio.h>

/* write a program that prints its input one word per line */

main() {

  #define YES 1
  #define NO  0

  int c, inASpace;
  c = inASpace = NO;

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\t' && c != '\n') {
      putchar(c);
      inASpace = NO;
    }
    else if (inASpace == NO){
      putchar('\n');
      inASpace = YES;
    }
    else
      /* it's a second space, ignore it */
      ;
  }
}