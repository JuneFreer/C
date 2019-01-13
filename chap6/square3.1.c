#include <stdio.h>

int main()
{
  int i, n, odd, square;

  printf("Enter a number: ");
  scanf("%d", &n);

  i = 1;
  odd = 3;
  for(square = 1; i <= n; odd += 2){
    printf("%10d%10d\n", i, square);
    ++i;
    square += odd; /*允许程序不执行任何乘法操作而计算连续的平方值*/
  }
  return 0;
}


/*odd初始为3，每个循环odd += 2， 当前平方值+当前odd就是下一个平方值*/
