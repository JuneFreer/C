/*判定素数：只需要检查不大于n的平方根的除数*/
#include <stdio.h>

int main()
{
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);

  for(int d = 2; d * d <= n; d++){ /*不要试图算出n的平方根，转换思维，比较d*d和n*/
    if(n % d == 0){
      printf("%d can be divisible by %d, so %d is not a prime number\n", n, d, n);
      return 0;
    }
  }
  printf("%d is a prime number\n", n);
  return 0;
}
