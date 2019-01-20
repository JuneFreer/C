/*检查一个数中有没有重复的数*/
#include <stdbool.h> /*C99 only*/
#include <stdio.h>

int main(void)
{
  bool digit_seen[10] = {false}; /*长度为10的bool型数组，对应0-9十个可能的digit*/
  int digit; /*单个数字*/
  long n; /*输入的number*/

  printf("Enter a number: ");
  scanf("%ld", &n);

  while(n > 0){
    digit = n % 10; /*从最后一位数往前检查*/
    if(digit_seen[digit])  /*有重复数字时此条件为真，执行break*/
      break;
    digit_seen[digit] = true;
    n /= 10;
  }

  if(n > 0)
    printf("repeated digit\n"); /*循环提前break，n > 0*/
  else
    printf("No repeated digit\n"); /*循环正常运行结束，n = 0*/
  return 0;
}
