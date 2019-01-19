/*数列反向
  方法：在读入数时将其存储在一个数组中，然后反向遍历数组，一个接一个地显示出数组元素
  即， 不会真的对数组中的元素进行反向，只是使用户这样认为*/
#include <stdio.h>
#define N 10

int main(void)
{
  int a[N], i;

  printf("Enter %d numbers: ", N);
  for(i = 0; i < N; i++)
    scanf("%d ", &a[i]);

  printf("In reverse order:");
  for(i = N -1; i >= 0; i--)
    printf(" %d", a[i]);
  printf("\n");
  return 0;
}

/*数组的长度通常由宏定义 Macro define*/
