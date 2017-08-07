#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4, largest, smallest;

  printf("Enter four intergers: ");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

  if (n1 > n2 && n1 > n3 && n1 > n4) {
    largest = n1;
  } else if (n2 > n1 && n2 > n3 && n2 > n4) {
    largest = n2;
  } else if (n3 > n1 && n3 > n2 && n3 > n4) {
    largest = n3;
  } else {
    largest = n4;
  }

  if (n1 < n2 && n1 < n3 && n1 < n4) {
    smallest = n1;
  } else if (n2 < n1 && n2 < n3 && n2 < n4) {
    smallest = n2;
  } else if (n3 < n1 && n3 < n2 && n3 < n4) {
    smallest = n3;
  } else {
    smallest = n4;
  }

  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);

  return 0;
}
