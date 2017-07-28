#include <stdio.h>

int main(void) {
  int gs1, group, publisher, item, check_digit;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs1, &group,
      &publisher, &item, &check_digit);

  printf("GS1 prefix: %d\n", gs1);
  printf("Group identifies: %d\n", group);
  printf("Pubsliher code: %d\n", publisher);
  printf("Item number: %d\n", item);
  printf("Check digit: %d\n", check_digit);

  return 0;
}
