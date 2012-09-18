#include <stdio.h>

/* write a program to copy its input to its output, 
   replacing each string of one or more blanks by a single blank 

   without using bools

   */

main() {

  int c, alreadySpace;
  c = alreadySpace = 0;

  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      putchar(c);
      alreadySpace = 0;
    }
    else if (alreadySpace == 0){
      putchar(c);
      alreadySpace = 1;
    }
    else
      ;
  }
}