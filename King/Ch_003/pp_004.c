#include <stdio.h>

int main(void) {
  int prefix, part1, part2;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &prefix, &part1, &part2);
  printf("You entered %d.%d.%d\n", prefix, part1, part2);

  return 0;
}
