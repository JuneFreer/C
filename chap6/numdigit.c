#include <stdio.h>

int main()
{
  int digits = 0, n;

  printf("Enter a nonnegative integer: ");
  scanf("%d", &n);

  do{
    n /= 10; /*注意：整数相除会向下取整（丢掉小数部分*/
    digits++;
  } while(n > 0);

  printf("The number has %d digit(s).\n", digits);
}
