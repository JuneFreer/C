#include <stdio.h>

int main()
{
  int num;
  printf("Enter a number (no longer than 4 digits): ");
  scanf("%d", &num);

  if(num < 10)
    printf("The number %d has 1 digit\n", num);
  else if(num < 99)
    printf("The number %d has 2 digits\n", num);
  else if(num < 999)
    printf("The number %d has 3 digits\n", num);
  else if(num < 9999)
    printf("The number %d has 4 digits\n", num);
  else
    printf("The number %d is more than 4 digits\n", num);
}
