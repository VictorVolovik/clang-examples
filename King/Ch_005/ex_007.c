#include <stdio.h>

int main(void) {
  int i;

  printf("Enter a number: ");
  scanf("%d", &i);

  printf("%d\n", i >= 0 ? i : -i);
  //if i = 17, it prints 17
  //if i = -1, it prints 17 too,
  //as its -(-17)

  return 0;
}
