#include <stdio.h>

/* verify that the expression getchar() != EOF is 0 or 1 */

/* why doesn't this print anything? */

/* I'm starting to think that 0 and 1 are the codes for backspace or other special chars */

main()
{
  int c;
  int check;

  while (c != EOF) {
    c = getchar();
    putchar(c != EOF);
    putchar(c);
  }
}