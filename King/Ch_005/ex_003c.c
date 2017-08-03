#include <stdio.h>

int main(void) {
  int i, j, k;

  i = 7;
  j = 8;
  k = 9;

  printf("%d\n", (i = j) || (j = k));
  //1
  printf("%d %d %d\n", i, j, k);
  //8 8 9

  return 0;
}
