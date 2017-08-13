#include <stdio.h>

int main() {
  int n, reverse = 0;

  printf("Enter a number: ");
  scanf("%d", &n);

  do {
    reverse = reverse * 10;
    reverse += n % 10;
    n = n / 10;
  } while (n != 0);

  printf("Reverse of entered number: %d\n", reverse);

  return 0;
}
