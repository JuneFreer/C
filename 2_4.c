/*compute the dimensional weight of a 12 x 10 x 8 box*/

#include <stdio.h>

int main()
{
  int length = 12, height = 8, width = 10, volumn;

  volumn = height * length * width;

  printf("Dimensional: %dx%dx%d\n", length, width, height);
  printf("volumn (cubic inches): %d\n", volumn);
  printf("Dimensional weight (pounds): %d\n", (volumn + 165) / 166);
}
