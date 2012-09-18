#include <stdio.h>

/* write a program that prints its input one word per line */

main() {

  #define IN  1 /* inside a word */
  #define OUT 0 /* outside a word */

    int c, n1, nw, nc, state;

    state = OUT;
    n1 = nw = nc = 0;
    while ((c = getchar()) != EOF) {
      ++nc;
      if (c == '\n')
        ++n1;
      if (c == ' ' || c == '\n' || c == '\t')
        state = OUT;
      else if (state == OUT) {
        state = IN;
        ++nw;

      }
    }
    printf("\n%d newlines, %d words, and %d characters.\n", n1, nw, nc);
}