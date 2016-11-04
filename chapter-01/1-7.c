#include <stdio.h>

void inputFunc () {
  int n1;
  int n2;
  int sum;

  puts("Please input two integers:");
  printf("Integer 1: ");
  scanf("%d", &n1);

  printf("Integer 2: ");
  scanf("%d", &n2);

  sum = n1 + n2;

  printf("The sum is %d.\n", sum);
}

int main () {
  inputFunc();
  return 0;
}
