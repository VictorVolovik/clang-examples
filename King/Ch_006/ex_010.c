#include <stdio.h>

int main(void) {
  int i;

  /*
  i = 10;
  while(i > 0) {
    if (i == 5) {
      i--;
      continue;
    }
    printf("%d", i);
    i--;
  }
  */

  i = 10;
  while (i > 0) {
    if (i == 5) {
      i--;
      goto loop_end;
    }
    printf("%d\n", i);
    i--;
    loop_end: ;
  }

  return 0;
}
