#include <stdio.h>

int main(void) {
  int i, j;

  i = 5;
  j = (i -= 2) + 1;

  printf("%d %d\n", i, j);
  //3 4

  return 0;
}
