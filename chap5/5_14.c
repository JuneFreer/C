#include <stdio.h>

int main()
{
  int a, b;


  printf("Enter numerical grade: ");
  scanf("%.1d%d", &a, &b);

  switch (a) {
    case 10: printf("A\n");break;
    case 9: printf("A\n");break;
    case 8: printf("B\n");break;
    case 7: printf("C\n");break;
    case 6: printf("D\n");break;
    case 5: printf("F\n");break;
    case 4: printf("F\n");break;
    case 3: printf("F\n");break;
    case 2: printf("F\n");break;
    case 1: if(sizeof(b) == 1) printf("F\n");break;
    case 0: printf("F\n");break;
    default: printf("Error: out of bound\n");
  }
}

/*未完成*/
