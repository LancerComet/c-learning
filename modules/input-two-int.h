#include <stdio.h>

struct twoInt {
  int int1;
  int int2;
};

struct twoInt inputTwoInt () {
  int int1, int2;
  struct twoInt result;
  
  puts("Please provide two integers:");
  
  printf("Int 1: ");
  scanf("%d", &int1);

  printf("Int 2: ");
  scanf("%d", &int2);

  result.int1 = int1;
  result.int2 = int2;

  return result;
}
