#include <stdio.h>

int main(void) {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n == 1 - 10) {
    printf("n is between 1 and 10\n");
  }
  //if statement is legal,
  //but it's true only if n = -9;
  //if n = 5, it prints nothing

  return 0;
}
