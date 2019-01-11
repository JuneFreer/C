#include <stdio.h>

int main()
{
  int n;

  printf("Enter n's value:");
  scanf("%d", &n);

  if(n >= 1 <= 10) /*无论n >= 1的结果为真或假，为1或0，都小于10，warning：这个条件永远为真*/
    printf("n is between 1 and 10\n");
}
