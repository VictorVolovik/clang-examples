/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void) {
  long int ean;
  int d1, d2, d3, d4, d5, d6,
      d7, d8, d9, d10, d11, d12,
      first_sum, second_sum, total;

  printf("Enter the first 12 digits of an EAN: ");
  scanf("%ld", &ean);

  d1 = ean / 100000000000;
  d2 = ean % 100000000000 / 10000000000;
  d3 = ean % 10000000000 / 1000000000;
  d4 = ean % 1000000000 / 100000000;
  d5 = ean % 100000000 / 10000000;
  d6 = ean % 10000000 / 1000000;
  d7 = ean % 1000000 / 100000;
  d8 = ean % 100000 / 10000;
  d9 = ean % 10000 / 1000;
  d10 = ean % 1000 / 100;
  d11 = ean % 100 / 10;
  d12 = ean % 10;

  first_sum = d2 + d4 + d6 + d8 + d10 + d12;
  second_sum = d1 + d3 + d5 + d7 + d9 + d11;
  total = 3 * first_sum + second_sum;

  printf("Check digit: %d\n", 9 - ((total - 1) % 10));

  return 0;
}
