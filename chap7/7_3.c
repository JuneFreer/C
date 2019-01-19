/*sum a series of numbers (using long int variables)*/
#include <stdio.h>

int main()
{
  double n, sum;

  printf("This program sums a series of doubles.\n");
  printf("Enter doubles (0 to terminate): ");
  scanf("%lf", &n);
  while(n != 0.0){
    sum += n;
    scanf("%lf", &n); /*扫入下一个n*/
  }
  printf("the sum is: %lf\n", sum);
}
