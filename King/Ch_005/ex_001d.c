#include <stdio.h>

int main(void) {
  int i, j, k;

  i = 3;
  j = 4;
  k = 5;

  printf("%d\n", i % j + i < k);
  //0

  return 0;
}
