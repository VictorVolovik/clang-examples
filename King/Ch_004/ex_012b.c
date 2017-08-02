#include <stdio.h>

int main(void) {
  int i, j;

  i = 5;
  j = 3 - 2 * i++;

  printf("%d %d\n", i, j);
  //6 -7

  return 0;
}
