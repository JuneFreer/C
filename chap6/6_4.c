/* Calculate a broker's commission*/
#include <stdio.h>

int main()
{
  float commission, value;

  printf("Enter value of trade: ");
  scanf("%f", &value);
  while(value != 0){
    if(value < 2500.00){
      commission = 30.00 + .017 * value;
      printf("commission: $%.2f\n", commission);
      printf("Enter value of trade: ");
      scanf("%f", &value);
    }
    else if(value < 6250.00){
      commission = 56.00 + .0066 * value;
      printf("commission: $%.2f\n", commission);
      printf("Enter value of trade: ");
      scanf("%f", &value);
    }
    else if(value < 20000){
      commission = 76 + .0034 * value;
      printf("commission: $%.2f\n", commission);
      printf("Enter value of trade: ");
      scanf("%f", &value);
    }
    else if(value < 50000){
      commission = 100 + .0022 * value;
      printf("commission: $%.2f\n", commission);
      printf("Enter value of trade: ");
      scanf("%f", &value);
    }
    else if(value < 500000){
      commission = 155 + .0011 * value;
      printf("commission: $%.2f\n", commission);
      printf("Enter value of trade: ");
      scanf("%f", &value);
    }
    else{
      commission = 255 + .0009 * value;
      printf("commission: $%.2f\n", commission);
      printf("Enter value of trade: ");
      scanf("%f", &value);
    }
    if(commission < 39.00){
      commission = 39.00; /*最低收费是39元*/
      printf("commission: $%.2f\n", commission);
      printf("Enter value of trade: ");
      scanf("%f", &value);
    }
  }
}

/*不设置终止条件，当心while进入无限循环*/
