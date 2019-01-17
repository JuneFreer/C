#include <stdio.h>

int main()
{
  int sum = 0;
  for(int i = 0; i < 10; i++){
    if(i % 2) continue; /*相当于if(i%2 != 0),跳过所有奇数*/
    sum += i; /*迭代，加上所有偶数*/
  }
  printf("%d\n", sum);
}


/*c中，0表示False，所有非0的数表示True*/
