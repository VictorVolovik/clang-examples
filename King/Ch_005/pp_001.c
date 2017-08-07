#include <stdio.h>

int main(void) {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n > 0) {
    if (n < 10) {
      printf("The number %d has 1 digit\n", n);
    } else if (n < 100) {
      printf("The number %d has 2 digits\n", n);
    } else if (n < 1000) {
      printf("The number %d has 3 digits\n", n);
    } else if (n < 10000) {
      printf("The number %d has 4 digits\n", n);
    } else {
      printf("The number %d is too big\n", n);
    }
  }

  return 0;
}
