#include <stdio.h>

/* write a program to copy its intput to its output,
  replacing each tab by \t, each backspace by \b, and each backslash by \\. */

/* very puzzled by the output on this one. 

      putchar("\\");
      putchar("t"); 

      outputs XZ instead of the expected \t 

      ah, figured it out. type of quotes really matter in C, and chars are very different from strings. 
      */

main() {

  int c;
  
  while ((c = getchar()) != EOF) {
    if (c != '\t')
      putchar(c);
    else {
      /* printf("\\t"); */
      putchar('\\');
      putchar('t');
    }
  }
}
