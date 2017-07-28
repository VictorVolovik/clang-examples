#include <stdio.h>

int main(void) {
  int number1, number2, number3, number4,
      number5, number6, number7, number8,
      number9, number10, number11, number12,
      number13, number14, number15, number16,
      row_sum1, row_sum2, row_sum3, row_sum4,
      col_sum1, col_sum2, col_sum3, col_sum4,
      diag_sum1, diag_sum2;

  printf("Enter the numbers from 1 to 16 in any order:\n");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
      &number1, &number2, &number3, &number4,
      &number5, &number6, &number7, &number8,
      &number9, &number10, &number11, &number12,
      &number13, &number14, &number15, &number16);

  row_sum1 = number1 + number2 + number3 + number4;
  row_sum2 = number5 + number6 + number7 + number8;
  row_sum3 = number9 + number10 + number11 + number12;
  row_sum4 = number13 + number14 + number15 + number16;
  col_sum1 = number1 + number5 + number9 + number13;
  col_sum2 = number2 + number6 + number10 + number14;
  col_sum3 = number3 + number7 + number11 + number15;
  col_sum4 = number4 + number8 + number12 + number16;
  diag_sum1 = number1 + number6 + number11 + number16;
  diag_sum2 = number4 + number7 + number10 + number13;

  printf("%2d %2d %2d %2d\n", number1, number2, number3, number4);
  printf("%2d %2d %2d %2d\n", number5, number6, number7, number8);
  printf("%2d %2d %2d %2d\n", number9, number10, number11, number12);
  printf("%2d %2d %2d %2d\n", number13, number14, number15, number16);
  printf("Row sums: %d %d %d %d\n", row_sum1, row_sum2,
      row_sum3, row_sum4);
  printf("Column sums: %d %d %d %d\n", col_sum1, col_sum2,
      col_sum3, col_sum4);
  printf("Diagonal sums: %d %d\n", diag_sum1, diag_sum2);

  return 0;
}
