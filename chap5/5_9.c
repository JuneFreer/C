#include <stdio.h>

int main()
{
  int income;
  float tax;

  printf("Enter the income: ");
  scanf("%d", &income);

  if(income <750)
    tax = income * .001;
  else if(income < 2250)
    tax = 7.50 + (income - 750) * .002;
  else if(income < 3750)
    tax = 37.50 + (income - 2250) * .003;
  else if(income < 5250)
    tax = 82.50 + (income - 3750) * .004;
  else if(income < 7000)
    tax = 142.50 + (income - 5250) * .005;
  else
    tax = 230.00 + (income - 7000) * .006;

  printf("Tax: %.2f\n", tax);
}
