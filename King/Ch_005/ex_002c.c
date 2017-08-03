#include <stdio.h>

int main(void) {
  int i, j, k;

  i = 5;
  j = 0;
  k = -5;

  printf("%d\n", i && j || k);
  //1

  return 0;
}
