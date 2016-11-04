#include <stdio.h>
#include "../modules/input-two-int.h"

int main () {
  struct twoInt result = inputTwoInt();

  int int1 = result.int1;
  int int2 = result.int2;

  if (int1 % int2 == 0) {
    puts("int2 is the divisor of int1.");
  } else {
    puts("int2 isn't the divisor of int1.");
  }

  return 0;
}
