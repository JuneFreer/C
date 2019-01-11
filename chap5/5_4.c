#include <stdio.h>

int main()
{
  int i, j;

  printf("Enter i and j (i/j): ");
  scanf("%d/%d", &i, &j);
  printf("%d\n", i < j ? -1 : (i == j ? 0 : 1)); /*三元表达式*/
}
