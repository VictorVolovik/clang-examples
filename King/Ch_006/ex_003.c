#include <stdio.h>

int main(void) {
  int i, j;

  for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1) {
    printf("%d ", i);
  }
  //the , operator evaluates the left side, and discards the result
  //5, 4, 3, 2

  return 0;
}
