#include <stdio.h>

int main()
{
  int a, b;

  printf("Enter a two-digit number: ");
  scanf("%1d%1d", &a, &b);

  printf("You entered the number ");

  void func(int second)
  {
    switch(second)
    {
      case 0: printf("\n"); break;
      case 1: printf("-one\n"); break;
      case 2: printf("-two\n"); break;
      case 3: printf("-three\n"); break;
      case 4: printf("-four\n"); break;
      case 5: printf("-five\n"); break;
      case 6: printf("-six\n"); break;
      case 7: printf("-seven\n"); break;
      case 8: printf("-eight\n"); break;
      case 9: printf("-nine\n"); break;
    }
  }

  switch(a)
  {
    case 1:
      switch(b)
      {
        case 0: printf("ten\n"); break;
        case 1: printf("eleven\n"); break;
        case 2: printf("twelve\n"); break;
        case 3: printf("thirteen\n"); break;
        case 4: printf("fourteen\n"); break;
        case 5: printf("fifteen\n"); break;
        case 6: printf("sixteen\n"); break;
        case 7: printf("seventeen\n"); break;
        case 8: printf("eighteen\n"); break;
        case 9: printf("nineteen\n"); break;
      } break;
    case 2: printf("twenty\n"); break;
      func(b);
    case 3: printf("thirty"); break;
      func(b);
    case 4: printf("fourty"); break;
      func(b);
    case 5: printf("fifty"); break;
      func(b);
    case 6: printf("sixty"); break;
      func(b);
    case 7: printf("seventy"); break;
      func(b);
    case 8: printf("eighty"); break;
      func(b);
    case 9: printf("ninety"); break;
      func(b);
  }
}

/*未完成*/
