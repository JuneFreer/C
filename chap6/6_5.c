#include <stdio.h>

int main()
{
  int n, rev = 0, rem; /*reverse, remiander*/

  printf("Enter an integer: ");
  scanf("%d", &n);

  do{
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }while( n != 0);
  printf("The reverse number: %d\n", rev);

  return 0;
}

/*参考begeekmyfriend/leetcode*/
