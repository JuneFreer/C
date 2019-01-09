#include <stdio.h>

int main()
{
  int day, month, year;

  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("You entered the date %d%.2d%d\n", year, month, day);
  /*%.2d .2是精度，表示此数值必须有2位字符，没有就在左边用0填充*/
}
