#include <stdio.h>

/* write a program that prints its input one word per line */

main() {

  #define YES 1
  #define NO  0

  int c, alreadySpace;
  c = alreadySpace = NO;

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\t' && c != '\n') {
      putchar(c);
      alreadySpace = NO;
    }
    else if (alreadySpace == NO){
      putchar('\n');
      alreadySpace = YES;
    }
    else
      /* it's a second space, ignore it */
      ;
  }
}