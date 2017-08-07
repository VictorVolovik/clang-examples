#include <stdio.h>

int main(void) {
  int hrs, mins, mins_total;

  int dep1_time = 8 * 60;
  int dep2_time = 9 * 60 + 43;
  int dep3_time = 11 * 60 + 19;
  int dep4_time = 12 * 60 + 47;
  int dep5_time = 14 * 60;
  int dep6_time = 15 * 60 + 45;
  int dep7_time = 19 * 60;
  int dep8_time = 21 * 60 + 45;

  printf("Enter a 24-hour time: ");
  scanf("%d : %d", &hrs, &mins);

  mins_total = hrs * 60 + mins;

  printf("Closest departure time is ");
  if (mins_total < dep1_time ||
      (mins_total < dep2_time &&
       (mins_total - dep1_time) / 2 < (mins_total - dep2_time) / 2 * -1)) {
    printf("8:00 a.m., arriving at 10:16 a.m\n");
  } else if (mins_total < dep2_time ||
      (mins_total < dep3_time &&
       (mins_total - dep2_time) / 2 < (mins_total - dep3_time) / 2 * -1)) {
    printf("9:43 a.m., arriving at 11:52 a.m.\n");
  } else if (mins_total < dep3_time ||
      (mins_total < dep4_time &&
       (mins_total - dep3_time) / 2 < (mins_total - dep4_time) / 2 * -1)) {
    printf("11:19 a.m., arriving at 1:31 p.m.\n");
  } else if (mins_total < dep4_time ||
      (mins_total < dep5_time &&
       (mins_total - dep4_time) /2 < (mins_total - dep5_time) / 2 * -1)) {
    printf("12:47 p.m., arriving at 3:00 p.m.\n");
  } else if (mins_total < dep5_time ||
      (mins_total < dep6_time &&
       (mins_total - dep5_time) / 2 < (mins_total - dep6_time) / 2 * -1)) {
    printf("2:00 p.m., arriving at 4:08 p.m.\n");
  } else if (mins_total < dep6_time ||
      (mins_total < dep7_time &&
       (mins_total - dep6_time) / 2 < (mins_total - dep7_time) / 2 * -1 )) {
    printf("3:45 p.m., arriving at 5:55 p.m.\n");
  } else if (mins_total < dep7_time ||
      (mins_total < dep8_time &&
       (mins_total - dep7_time) / 2 < (mins_total - dep8_time) / 2 * -1)) {
    printf("7:00 p.m., arriving at 9:20 p.m.\n");
  } else {
    printf("9:45 p.m., arriving at 11:58 p.m.\n");
  }

  return 0;
}
