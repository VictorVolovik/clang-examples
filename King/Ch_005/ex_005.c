#include <stdio.h>

int main(void) {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n >= 1 <= 10) {
    printf("n is between 1 and 10\n");
  }
  //if statement is legal,
  //but 0 or 1 always lower then 10,
  //and thus always results true;
  //so, if n = 0, it prints:
  //n is between 1 and 10

  return 0;
}
