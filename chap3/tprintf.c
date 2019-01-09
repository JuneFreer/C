/*prints int and float values in various format*/

#include <stdio.h>

int main()
{
  int i;
  float x;

  i = 40;
  x = 839.21;

  printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
  printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
  printf("\a\a\a\a"); /* 4 alert*/
  printf("%12.5e\n", 30.253);
  printf("%-6.2g|\n", .0000009979);
}
