#include <stdio.h>

int main(void) {
  int n, i, j;
  float fact, e;

  printf("Enter a number: ");
  scanf("%d", &n);

  e = 0.00f;
  for (i = 1; i <= n; i++) {
    fact = 1.00f;
    for (j = 1; j <= i; j++) {
      fact *= j;
    }
    e += 1.00f / fact;
  }

  printf("if n = %d, e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! = %.10f\n", n, e);

  return 0;
}

