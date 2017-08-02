/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void) {
  long int upc;
  int d, i1, i2, i3, i4, i5,
      j1, j2, j3, j4, j5,
      first_sum, second_sum, total;

  printf("Enter the first 11 digits of a UPC: ");
  scanf("%ld", &upc);

  d = upc / 10000000000;

  i1 = upc % 10000000000 / 1000000000;
  i2 = upc % 1000000000 / 100000000;
  i3 = upc % 100000000 / 10000000;
  i4 = upc % 10000000 / 1000000;
  i5 = upc % 1000000 / 100000;

  j1 = upc % 100000 / 10000;
  j2 = upc % 10000 / 1000;
  j3 = upc % 1000 / 100;
  j4 = upc % 100 / 10;
  j5 = upc % 10;

  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;

  printf("Check digit: %d\n", 9 - ((total - 1) % 10));

  return 0;
}
