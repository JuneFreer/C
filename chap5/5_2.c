#include <stdio.h>

int main()
{
  int i = 10, j = 5;
  printf("%d\n", (!i) < j);

  int a = 2, b = 1;
  printf("%d\n", !!a + !b);

  int c = 5, d = 0, e = -5;
  printf("%d\n", c && d || e);

  int f = 1, g = 2, h = 3;
  printf("%d\n", f < g || h);
}

/*重点：逻辑运算符！&& ||，把非0值都当真值，把0值都当假值*/
/*优先级：！+ - 高于 > < <= >= 高于 == ！= 高于 && || */
