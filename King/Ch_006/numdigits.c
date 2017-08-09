/* Calculates the number of digits in an integer */

#include <stdio.h>

int main(void) {
  long int n;
  int digits = 0;

  printf("Enter a nonnegative integer: ");
  scanf("%li", &n);

  do {
    n /= 10;
    digits++;
  } while (n > 0);

  printf("The number has %d digits.\n", digits);

  return 0;
}
