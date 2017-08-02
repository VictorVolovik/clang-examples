#include <stdio.h>

int main(void) {
  int i = 1;
  int j = 2;

  i % ++j;

  printf("%d %d\n", i, j);
  //1 3

  return 0;
}
