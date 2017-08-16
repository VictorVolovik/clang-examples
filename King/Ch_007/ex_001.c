#include <stdio.h>

int main(void) {
  printf("%d\n", 077);
  //7 * 8 + 7 = 63
  printf("%d\n", 0x77);
  //7 * 16 + 7 * 1 = 119
  printf("%d\n", 0xABC);
  //10 * 16 * 16 + 11 * 16 + 12 = 2748

  return 0;
}
