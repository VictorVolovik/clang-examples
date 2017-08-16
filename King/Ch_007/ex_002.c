#include <stdio.h>

int main(void) {
  printf("%g\n", 010E2);
  //integer constant
  printf("%g\n", 32.1E+5);
  //integer constant
  /*printf("%d\n", 0790);*/
  //not legal
  /*printf("%d\n", 100_000);*/
  //not legal
  printf("%f\n", 3.978e-2);
  //floting-point constant

  return 0;
}
