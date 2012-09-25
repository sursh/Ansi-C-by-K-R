#include <stdio.h>

/* directly from the book. compiles, but no output */

main() {
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for (i=0; i < 10; ++i)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF)
    printf("%d ", c);
    if (c >= '0' && c <= '9'){
      printf("I am a digit");
      printf("test"); /* ++ndigit[c-'0']; */
    }
    else if (c == ' ' || c == '\n' || c == '\t') {
      ++nwhite;
      printf("I am a space");
    }
    else {
      printf("I am something else");
      ++nother;
    }

  printf("digits =");
  for(i=0; i <10; ++i)
    printf(" %d", ndigit[i]);
  printf(", white space = %d, other = %d\n", nwhite, nother);
}