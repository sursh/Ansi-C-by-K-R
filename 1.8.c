#include <stdio.h>

/* 1-8 write a program that counts blanks, tabs, and newlines */
/* haven't done arrays yet but it's the obvious data structure here */

main() {

  int blanks, tabs, newlines, c;
  blanks = tabs = newlines = c = 0;

  while (c != EOF) {
    c = getchar();
    if ( c == ' ') 
      ++blanks;
    else if (c == '\t')
      ++tabs;
    else if (c == '\n')
      ++newlines;
  }

  printf("\nThere are %d spaces, %d tabs, and %d newlines.\n", blanks, tabs, newlines);

}