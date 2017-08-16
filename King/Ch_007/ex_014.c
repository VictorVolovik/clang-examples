#include <stdio.h>

int main(void) {
  float f, fract_part;;

  printf("Enter a floating-point number: ");
  scanf("%f", &f);

  fract_part = f - (int) f;
  printf("Fractional part of %f is %f\n", f, fract_part);
  //will fail, if value stored in f exceeds the largest value of type int
  //also take note one IEEE Standard 754 and precision

  return 0;
}
