#include <stdio.h>

int main(void) {
  int i, j, k;

  i = 3;
  j = 2;
  k = 1;

  printf("%d\n", i < j == j < k);
  //1

  return 0;
}
