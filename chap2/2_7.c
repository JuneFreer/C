#include <stdio.h>


int main()
{
  int r, v; /*statement first*/

  printf("Please enter the radius: \n");
  /*scanf("%d\n", r);*/ /*get value from user's input from keyboard*/
  scanf("%d\n", &r);

  v = (4.0 / 3.0) * r * r * r; /*(4 / 3) is wrong, cause it will throw away the decimals*/

  printf("volumn: %d\n", v);
}

/*warning: format specifies type 'int *' but the argument has type
      'int' [-Wformat]
  scanf("%d\n", r);*/

/*scanf requires the format (your "%d") and also a memory address of the variable
where it should put the value that was read.
r are int, not the memory address of an int (this is what int * type 'says': a pointer to a memory address of an int).
You should use the operator & to pass the memory address to scanf.*/

/* &r：指向变量r内存地址的指针*/
/* r：变量r*/
/* ‘int *’和 ‘int’是不同类型*/
