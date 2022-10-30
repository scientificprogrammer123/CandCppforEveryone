/* char in c
   a fundamental type
   sally coder
   nov 8, 2017
*/

#include <stdio.h>

int main(void)
{
  char c = 'a';
  printf("C in ASCII is %d\n", c);
  printf("C in ASCII is %c\n", c);
  printf("Three consecutive chars are: %c%c%c \n", c, c+1, c+2);
  printf("Three bell rings chars are: %c%c%c \n", '\a', '\a', '\a');
  return 0;
}
