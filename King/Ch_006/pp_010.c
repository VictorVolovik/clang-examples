#include <stdio.h>

int main(void) {
  int date1_month, date1_day, date1_year,
      date2_month, date2_day, date2_year,
      earliest_date_month, earliest_date_day, earliest_date_year;

  printf("Enter date (mm/dd/yy): ");
  scanf("%d / %d / %d", &date1_month, &date1_day, &date1_year);

  earliest_date_month = date1_month;
  earliest_date_day = date1_day;
  earliest_date_year = date1_year;

  for (;;) {
    printf("Enter date (mm/dd/yy): ");
    scanf("%d / %d / %d", &date2_month, &date2_day, &date2_year);

    if (date2_day == 0 && date2_month == 0 && date2_year == 0) {
      break;
    }

    if (date2_year < earliest_date_year) {
      earliest_date_day = date2_day;
      earliest_date_month = date2_month;
      earliest_date_year = date2_year;
    } else if (date2_year == earliest_date_year) {
      if (date2_month < earliest_date_month) {
        earliest_date_day = date2_day;
        earliest_date_month = date2_month;
        earliest_date_year = date2_year;
      } else if (date2_month == earliest_date_month) {
        if (date2_day < earliest_date_day) {
          earliest_date_day = date2_day;
          earliest_date_month = date2_month;
          earliest_date_year = date2_year;
        }
      }
    }
  }

  printf("%d/%d/%.2d is the earliest date\n", earliest_date_month,
      earliest_date_day, earliest_date_year);

  return 0;
}
