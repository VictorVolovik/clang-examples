#include <stdio.h>

int main(void) {
  int i, j, k;

  i = 1;
  j = 2;
  k = 3;

  i -= j -= k;

  printf("%d %d %d\n", i, j ,k);
  //2 -1 3

  return 0;
}
