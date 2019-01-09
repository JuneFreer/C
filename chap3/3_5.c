#include <stdio.h>

int main()
{
  int item_number, day, month, year;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_number);
  printf("Enter unit price: ");
  scanf("%f", &unit_price);
  printf("Enter purchase date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\tUnit\t\tPurchase\n\tPrice\t\tDate\n%-4d\t$%8.2f\t%-.2d/%-.2d/%-d\n", item_number, unit_price, month, day, year);
}
