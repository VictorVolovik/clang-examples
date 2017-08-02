#include <stdio.h>

int main(void) {
  int i, j, k;

  i = 3;
  j = 4;
  k = 5;

  printf("%d\n", i++ - j++ + --k);
  //3
  printf("%d %d %d\n", i, j, k);
  //4 5 4

  return 0;
}
