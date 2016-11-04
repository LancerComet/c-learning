#include <stdio.h>

int main () {
  int int1, int2;
  puts("Please input two integers:");

  printf("Int 1: ");
  scanf("%d", &int1);

  printf("Int 2: ");
  scanf("%d", &int2);

  printf("Sum: %d; Multiply: %d", int1 + int2, int1 * int2);

  return 0;
}
