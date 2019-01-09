#include <stdio.h>


int main()
{
  int r = 10, v;

  v = (4.0 / 3.0) * r * r * r; /*(4 / 3) is wrong, cause it will throw away the decimals*/

  printf("volumn: %d\n", v);
}
