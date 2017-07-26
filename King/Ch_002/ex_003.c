/*Computes the dimensional weight of a 12" x 10" x 8" box*/

#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void) {
  int volume;

  int height = 8;
  int length = 12;
  int width = 10;
  volume = height * length * width;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);

  return 0;
}

