#include <stdio.h>

/* verify that the expression getchar() != EOF is 0 or 1 */

/* why doesn't this print anything? */

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