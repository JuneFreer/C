#include <stdio.h>

int main()
{
  int i;
  long int size = 2147483647; /*32位模式的最大值*/

  for(i = 1; i * i <= size; i+= 2)
    printf("%10d%10d\n", i, i * i);
  printf("%d * %d is larger than %ld\n", i, i, size);
}
