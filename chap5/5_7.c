/* Calculate a broker's commission*/
#include <stdio.h>

int main()
{
  float commission, value, unit_price, competitor_commission;
  int stock_num;

  printf("Enter stock_num and unit_price of trade (num/price): ");
  scanf("%d/%.2f", &stock_num, &unit_price);

  value = stock_num * unit_price;

  if(value < 2500.00)
    commission = 30.00 + .017 * value;
  else if(value < 6250.00)
    commission = 56.00 + .0066 * value;
  else if(value < 20000)
    commission = 76 + .0034 * value;
  else if(value < 50000)
    commission = 100 + .0022 * value;
  else if(value < 500000)
    commission = 155 + .0011 * value;
  else
    commission = 255 + .0009 * value;

  if(commission < 39.00)
    commission = 39.00; /*最低收费是39元*/

  if(stock_num < 2000)
    competitor_commission = (33.00 + 0.33) * stock_num;
  else
    competitor_commission = (33.00 + 0.20) * stock_num;

  printf("commission and competitor_commission: $%.2f and $%.2f\n", commission, competitor_commission);

  return 0;
}

/*未完成*/
