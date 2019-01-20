#include <stdio.h>

int main()
{
  int a[10]; /*int型数组*/
  printf("%lu %lu\n", sizeof(a), sizeof(int));
}

/*sizeof(int)=4byte（4x8=32bit我的电脑是32位的）, sizeof(a)=4byte x 10=32byte*/
