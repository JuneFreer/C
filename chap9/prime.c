/*检查是否为素数，方法：求余2-n的平方根之间的数*/
#include <stdbool.h>
#include <stdio.h>

bool is_prime(int n)
{
  int divisor; /*声明declaration*/

  if(n < 1) /*语句statement*/
    return false;
  for(divisor = 2; divisor * divisor <= n; divisor++)
    if(n % divisor == 0)
      return false;
  return true;
}

int main(void)
{
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);
  if(is_prime(n))
    printf("Prime\n");
  else
    printf("Not Prime\n");

  return 0;
}
