/*计算用户输入的字符串的长度（有多少个char）*/
/*惯用法*/
#include <stdio.h>

int main()
{
  int len = 0;

  printf("Enter a message: ");
  while(getchar() != '\n')
    len++;
  printf("Your message was %d character(s) long.\n", len);
  return 0;
}
