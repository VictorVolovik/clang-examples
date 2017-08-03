#include <stdio.h>
#define true 1
#define false 0

int main(void) {
  int age, teenager;

  printf("Enter your age: ");
  scanf("%d", &age);

  teenager = (age >=13) && (age <= 19) ? true : false;

  printf("%s", teenager ? "You are a teenager.\n" :
                          "You are not a teenager.\n");
}
