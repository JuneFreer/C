#include <stdio.h>

int main()
{
  float largest, n;

  printf("Enter a number: ");
  scanf("%f", &n);
  largest = n; /*必须放在外层*/
  while(n != 0){ /*如果n为0，就跳出循环*/
    printf("Enter a number: ");
    scanf("%f", &n); /*新扫入的n*/
    if(n > largest) /*如果新扫入的n比原来的n大，就把新的n赋给占位变量largest；否则不做任何变化；也就是我们只用largest变量保存了最大的n的值*/
      largest = n;
  }
  printf("The Largest number entered was: %.2f\n", largest);
}
