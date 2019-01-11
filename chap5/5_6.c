#include <stdio.h>

int main()
{
  int hour, min;

  printf("Enter a 24-hour time (hours:mins): ");
  scanf("%d:%2d", &hour, &min);
  printf("Equivalent 12-hour time: ");

  switch (hour) {
    case 13: printf("1:%.2d PM\n", min); break; /*下午 hour >= 13*/
    case 14: printf("2:%.2d PM\n", min); break;
    case 15: printf("3:%.2d PM\n", min); break;
    case 16: printf("4:%.2d PM\n", min); break;
    case 17: printf("5:%.2d PM\n", min); break;
    case 18: printf("6:%.2d PM\n", min); break;
    case 19: printf("7:%.2d PM\n", min); break;
    case 20: printf("8:%.2d PM\n", min); break;
    case 21: printf("9:%.2d PM\n", min); break;
    case 22: printf("10:%.2d PM\n", min); break;
    case 23: printf("11:%.2d PM\n", min); break;
    case 24: printf("0:%.2d AM\n", min); break;

    default: printf("%d:%2d AM\n", hour, min); break; /*上午 hour< 13*/
  }

}
