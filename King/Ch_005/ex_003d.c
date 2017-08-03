#include <stdio.h>

int main(void) {
  int i, j, k;

  i = 1;
  j = 1;
  k = 1;

  printf("%d\n", ++i || ++j && ++k);
  //1
  printf("%d %d %d\n", i, j, k);
  //2 1 1

  return 0;
}
