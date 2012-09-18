#include <stdio.h>

/* 1.5 modify it to print in reverse order */

main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("\nTemperature conversionz\n\nC      F\n");

  celsius = upper;
  while(celsius >= lower) {
    fahr = (celsius * 9 / 5) + 32;
    printf("%d\t%d\n", celsius, fahr);
    celsius = celsius - step;
  }
}

