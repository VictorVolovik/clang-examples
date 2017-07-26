#include <stdio.h>
#define PI 3.14f

int main(void) {
  int radius;
  float volume;

  printf("Enter radius: ");
  scanf("%d", &radius);
  volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

  printf("Volume of %d-meter sphere: %.2f\n", radius, volume);

  return 0;
}
