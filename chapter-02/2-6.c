#include <stdio.h>

int main () {
  int height;

  printf("Please provide your height: ");
  scanf("%d", &height);

  printf("Your standard weight is %.1f.", (height - 100) * .9);
  
  return 0;
}
