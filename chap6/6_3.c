/*简化分式*/
#include <stdio.h>

int main()
{
  int m, n, remainder, larger, smaller, gcd;

  printf("Enter a fraction: ");
  scanf("%d/%d", &m, &n);

  if(m > n){
    larger = m;
    smaller = n;
  }else{
    larger = n;
    smaller = m;
  }

  remainder = larger % smaller;
  while(remainder != 0){
    larger = smaller;
    smaller = remainder;
    remainder = larger % smaller;
  }
  gcd = smaller; /*当remainder等于0时的smaller就是最大公约数*/

  printf("In lowest terms: %d/%d\n", m/gcd, n/gcd); /*分子分母同时除以最大公约数，就得到最简分式*/
}
