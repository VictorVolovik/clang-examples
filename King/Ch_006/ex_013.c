#include <stdio.h>

int main(void) {
  int n, m;

  printf("Enter a number: ");
  scanf("%d", &m);

  for (n = 2; m > 0; m /=2, n++) {
    /* empty loop body */;
  }
  printf("%d %d\n", n, m);

  return 0;
}
