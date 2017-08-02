#include <stdio.h>

int main(void) {
  int i, j;

  i = 7;
  j = 3 * i-- + 2;

  printf("%d %d\n", i, j);
  //6 23

  return 0;
}
