#include <stdio.h>

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Celsius-Fahrenheit table\n\n");
  celsius = lower;
  while(celsius <= upper)
  {
    fahr = ((9.0 / 5.0)*celsius + 32.0);
    printf("%6.1f %f3.0\n", celsius, fahr);
    celsius = celsius + step;
  }
  return 0;
}

