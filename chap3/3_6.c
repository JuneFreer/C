#include <stdio.h>

int main()
{
  int lang, pub, book_num, check_digit;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d", &lang, &pub, &book_num, &check_digit);

  printf("Language: %d\nPublisher: %d\nBook Number: %d\nCheck Digit: %d\n", lang, pub, book_num, check_digit);
}
