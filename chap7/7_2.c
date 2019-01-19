#include <stdio.h>

int main()
{
  int n, i;

  printf("Enter a number: ");
  scanf("%d", &n);

  for(i = 1; i <= n; i++){
    printf("%10d%10d\n", i, i * i);
    if(i % 24 == 0){
      printf("press Enter to continue: ");
      if(getchar() == '\n')
        continue;
    }
  }
}
