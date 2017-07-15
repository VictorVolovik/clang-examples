#include <stdio.h>

/* print Celcius-Fahrenheit table
 * for celsius = -50, -45, ..., 50;
 * floating-point version
 */

int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = -50;   /* lower limit of temperature scale */
  upper = 50;    /* upper limit */
  step = 5;      /* step size */

  printf("Celcius-Fahrenheit table\n");

  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius * (9.0 / 5.0) + 32.0;
    printf("%3.0f\t%6.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
