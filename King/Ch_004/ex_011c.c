#include <stdio.h>

int main(void) {
  int i, j;

  i = 7;
  j = 8;

  printf("%d\n", i++ - --j);
  //0
  printf("%d %d\n", i, j);
  //8 7

  return 0;
}
