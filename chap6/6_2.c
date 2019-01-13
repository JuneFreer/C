#include <stdio.h>

int main()
{
  int m, n, remainder, larger, smaller;

  printf("Enter two integers: ");
  scanf("%d %d", &m, &n);

  /*先找出哪个小哪个大*/
  if(m > n){
    larger = m;
    smaller = n;
  }
  else{
    larger = n;
    smaller = m;
  }

  /*再用欧几里得的“辗转相除法”求GCD*/
  remainder = larger % smaller;
  while(remainder != 0){
    larger = smaller;
    smaller = remainder;
    remainder = larger % smaller;
  }
  printf("Greatest common devisor: %d\n", smaller); /*注意⚠️： 最后的GCD不是remainder，而是最后一次相除的除数smaller*/
  return 0;
}
