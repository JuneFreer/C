/*sum a series of numbers (using long int variables)*/
#include <stdio.h>

int main()
{
  long int n, sum;

  printf("This program sums a series of integers.\n");
  printf("Enter integres (0 to terminate): ");
  scanf("%ld", &n);
  while(n != 0){
    sum += n;
    scanf("%ld", &n); /*扫入下一个n*/
  }
  printf("the sum is: %ld\n", sum);
}
