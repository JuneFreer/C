#include <stdio.h>

int main()
{
  float dollar;

  printf("Enter dollar amount: ");
  scanf("%f", &dollar); /* '&dollar' is the memory address of the variable dollar*/

  printf("With tax added: %.2f\n", dollar * (1 + 0.05));
}
