#include <stdio.h>

int main(void) {
  float loan, remainder, interest_rate, monthly_rate,
        payment, number_of_payments, i;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  monthly_rate = interest_rate / 100.00f / 12.00f;

  printf("Enter number of payments: ");
  scanf("%f", &number_of_payments);

  remainder = loan;
  for (i = 1; i <= number_of_payments; i++) {
    remainder = remainder - payment + remainder * monthly_rate;
    printf("Balance remaining after payment: $%.2f\n", remainder);
  }

  return 0;
}
