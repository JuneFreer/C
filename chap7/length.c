/*计算用户输入的字符串的长度（有多少个char）*/
#include <stdio.h>

int main()
{
  char ch;
  int len = 0;

  printf("Enter a message: ");
  ch = getchar(); /*scanf("%c", &ch);*/
  while(ch != '\n'){
    len++;
    ch = getchar();
  }
  printf("Your message was %d character(s) long.\n", len);
  return 0;
}
