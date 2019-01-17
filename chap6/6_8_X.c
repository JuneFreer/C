#include <stdio.h>

int main()
{
  int day, startDay;
  printf("Enter number of days in month: ");
  scanf("%d", &day);
  printf("Enter strating day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &startDay);

  switch(startDay){
    case 1: printf("%s", ""); break;
    case 2: printf("%2s", ""); break;
    case 3: printf("%4s", ""); break;
    case 4: printf("%6s", ""); break;
    case 5: printf("%8s", ""); break;
    case 6: printf("%10s", ""); break;
    case 7: printf("%12s", ""); break;
  }

  for(int i = 1; i < day; i++){
    if((startDay - 1 + i) % 7 == 0){ /*判断i是不是一个星期的最后一天，如果是就换行*/
      printf(" %2d\n", i);
      i++;
    }
    printf(" %2d", i);
  }
  printf(" %2d\n", day);
}

/*日历没法对齐*/
