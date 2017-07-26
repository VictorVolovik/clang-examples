#include <stdio.h>

int main(void) {
  float loan, remainder, interest_rate, monthly_rate, payment;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  monthly_rate = interest_rate / 100.00f / 12.00f;

  remainder = loan - payment + loan * monthly_rate;
  printf("Balance remaining after first payment: $%.2f\n", remainder);

  remainder = remainder - payment + remainder * monthly_rate;
  printf("Balance remaining after second payment: $%.2f\n", remainder);

  remainder = remainder - payment + remainder * monthly_rate;
  printf("Balance remaining after third payment: $%.2f\n", remainder);

  return 0;
}
