#include <stdio.h>

int main(void) {
  int hours, minutes;

  printf("Enter a 24-hour time (hh:mm): ");
  scanf("%d:%d", &hours, &minutes);

  if (hours == 0) {
    printf("Equivalent 12-hour time is: 12:%.2d AM\n", minutes);
  } else if (hours < 12) {
    printf("Equivalent 12-hour time is: %d:%.2d AM\n", hours, minutes);
  } else if (hours == 12) {
    printf("Equivalent 12-hour time is: %d:%.2d PM\n", hours, minutes);
  } else {
    printf("Equivalent 12-hour time is: %d:%.2d PM\n", hours - 12, minutes);
  }

  return 0;
}
