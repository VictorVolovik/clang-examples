#include <stdio.h>

int main(void) {
  int i, j;

  printf("Enter 1st number: ");
  scanf("%d", &i);

  printf("Enter 2nd number: ");
  scanf("%d", &j);

  printf("%d\n", (i > j) - (i < j));

  return 0;
}
