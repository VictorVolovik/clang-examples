#include <stdio.h>

int main(void) {
  int i, j;

  i = 7;
  j = 8;

  i *= j + 1;
  printf("%d %d\n", i, j);
  //63 8

  return 0;
}
