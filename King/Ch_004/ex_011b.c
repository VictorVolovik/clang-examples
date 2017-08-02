#include <stdio.h>

int main(void) {
  int i, j;

  i = 10;
  j = 5;

  printf("%d\n", i++ - ++j);
  //4
  printf("%d %d\n", i, j);
  //11 6

  return 0;
}
