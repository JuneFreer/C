#include <stdio.h>
#define PI 3.1415926

int main()
{
  int r; /*statement first*/
  float v;

  printf("Please enter the radius: ");
  /*scanf("%d\n", r);*/ /*get value from user's input from keyboard*/
  scanf("%d\n", &r);

  v = (4.0 / 3.0) * PI * r * r * r; /*(4 / 3) is wrong, cause it will throw away the decimals*/

  printf("volumn: %.2f\n", v);
}
