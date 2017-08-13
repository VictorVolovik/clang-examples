#include <stdio.h>

int main(void) {
  float n, largest;

  largest = 0;

  //while version
  printf("Enter a number: ");
  scanf("%f", &n);

  while (n > 0) {
    if (n > largest) {
      largest = n;
    }
    printf("Enter a number: ");
    scanf("%f", &n);
  }

  /*
  //do... while version
  do {
    printf("Enter a number: ");
    scanf("%f", &n);
    if (n > largest) {
      largest = n;
    }
  } while (n > 0);
  */

  printf("The largest number entered was %.4f\n", largest);

  return 0;
}
