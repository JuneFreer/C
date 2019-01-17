/*输入一个整数n，打印所有1-n范围内偶数的平方*/
#include <stdio.h>

int main()
{
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (int i = 2; i <= n; i+=2) {
    if(i * i <= n)
      printf("%d\n", i * i);
    else
      return 0;
  }
}
