#include <stdio.h>

int main(void) {
  int i;

  i = 1;

  printf("%d\n", i++ - 1);
  //0
  printf("%d\n", i);
  //2

  return 0;
}
