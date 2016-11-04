#include <stdio.h>

void app () {
  int int1, int2, percent;
  
  puts("Please provide two integers:");
  
  printf("Int 1: ");
  scanf("%d", &int1);

  printf("Int 2: ");
  scanf("%d", &int2);

  percent = int1 * 100 / int2;
  printf("Int 1 is %d%% of Int 2.", percent);
}

int main () {
  app();
  return 0;
}
