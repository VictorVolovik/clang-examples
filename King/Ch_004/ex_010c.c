#include <stdio.h>

int main(void) {
  int i, j;

  i = 7;
  j = 6 + (i = 2.5);

  printf("%d %d\n", i, j);
  //2 8

  return 0;
}
