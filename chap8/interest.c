/*prints a table of compound interest复利*/
#include <stdio.h>

#define NUM_RATES (int)(sizeof(value)/sizeof(value[0])) /*value是用来存储钱数的数组*/
#define INITIAL_BALANCE 100.00

int main(void)
{
  int i, low_rate, num_years, year;
  /*i用于迭代，low_rate是输入的rate，num_years用于遍历年份，year是年份*/
  double value[5];

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  for(i = 0; i < NUM_RATES; i++){
    printf("%6d%c", low_rate + i, '%');
    value[i] = INITIAL_BALANCE; /*将起始值赋给value数组，一个值代表一个利率下的钱数*/
  }
  printf("\n");

  for(year = 1; year <=num_years; year++){
    printf("%3d    ", year);
    for(i = 0; i < NUM_RATES; i++){
      value[i] += (low_rate + i) / 100.0 * value[i]; /*利息 = 本金 + 利率/100 * 本金 = 本金（1+利率/100）*/
      printf("%7.2f", value[i]);
    }
    printf("\n"); /*内层循环结束后换行*/
  }
  return 0;
}
