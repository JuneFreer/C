#include <stdio.h>

int main()
{
  char ch;

  do{
    ch = getchar();
  }while(ch == ' ');
  printf("%c", ch);
}
