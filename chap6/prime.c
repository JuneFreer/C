/* 检查用户输入的数是否为素数（只能被1和其自身整除的自然数（大于0（数论）/包含0（集合论、计算机科学）的正整数））*/
#include <stdio.h>

int main()
{
  int i, n;

  printf("Enter an integer number (larger than 1): ");
  scanf("%d", &n);

  for(i = 2; i < n; i++)
    if(n % i == 0) break;

  if(i < n)
    printf("%d is divisible by %d\n", n, i);
  else
    printf("%d is prime number\n", n);
}
