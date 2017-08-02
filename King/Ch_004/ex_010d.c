#include <stdio.h>

int main(void) {
  int i, j;

  i = 2;
  j = 8;
  j = (i = 6) + (j = 3);

  printf("%d %d\n", i, j);
  //6 9

  return 0;
}
