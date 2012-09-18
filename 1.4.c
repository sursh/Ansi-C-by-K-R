#include <stdio.h>

/* 1.4 write a program to print the reverse table */

main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("\nTemperature conversionz\n\nC      F\n");

  celsius = lower;
  while(celsius <= upper) {
    fahr = (celsius * 9 / 5) + 32;
    printf("%d\t%d\n", celsius, fahr);
    celsius = celsius + step;
  }
}

