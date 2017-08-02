#include <stdio.h>

int main(void) {
  int i, j;

  i = 5;
  j = ++i * 3 - 2;

  printf("%d %d\n", i, j);
  //6 16

  return 0;
}
