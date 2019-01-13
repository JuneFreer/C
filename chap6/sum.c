#include <stdio.h>

int main()
{
  int n, sum = 0;

  printf("Enter integers (0 to end): ");
  scanf("%d", &n); /*先读取一个数传给地址&n，n != 0才能进行判断*/
  while(n != 0)
  {
    sum += n;
    scanf("%d", &n); /*再接着读取剩下的数*/
  }
  printf("The sum is: %d\n", sum);

  return 0;
}
