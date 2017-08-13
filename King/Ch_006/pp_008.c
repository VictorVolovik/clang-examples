#include <stdio.h>

int main(void) {
  int days, start, i;

  printf("Enter number of days in month: ");
  scanf("%d", &days);

  printf("Enter starting day of the week: (1=Sun, 7=Sat): ");
  scanf("%d", &start);

  //leading blank dates
  for (i = 1; i < start; i++) {
    printf("   ");
  }

  //calendar
  for (i = 1; i <= days; i++) {
    printf("%3d", i);
    if ((start + i - 1) % 7 == 0 || i == days) {
      printf("\n");
    }
  }

  return 0;
}
