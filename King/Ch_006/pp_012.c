#include <stdio.h>

int main(void) {
  int i, j;
  float E, fact, e;

  printf("Enter a small (floating-point) number: ");
  scanf("%f", &E);

  e = 0.00f;
  for(i = 1; ;i++) {
    fact = 1.00f;
    for (j = 1; j <= i; j++) {
      fact *= j;
    }
    if (1.00f / fact < E) {
      break;
    }
    e += 1 / fact;
  }

  printf("untill 1/n! > E, e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! = %.10f\n", e);

  return 0;
}

