#include <stdio.h>

int main(void) {
  int i, j;

  i = 6;
  j = i += i;

  printf("%d %d\n", i, j);
  //12 12

  return 0;
}
