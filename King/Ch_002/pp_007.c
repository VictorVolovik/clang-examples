#include <stdio.h>

int main(void) {
  int amount, remainder, bills_by_20, bills_by_10, bills_by_5, bills_by_1;

  printf("Enter an amount: ");
  scanf("%d", &amount);

  bills_by_20 = amount / 20;
  remainder = amount - bills_by_20 * 20;
  bills_by_10 = remainder / 10;
  remainder -=  bills_by_10 * 10;
  bills_by_5 = remainder / 5;
  remainder -= bills_by_5 * 5;
  bills_by_1 = remainder;

  printf("$20 bills: %d\n", bills_by_20);
  printf("$10 bills: %d\n", bills_by_10);
  printf(" $5 bills: %d\n", bills_by_5);
  printf(" $1 bills: %d\n", bills_by_1);

  return 0;
}
