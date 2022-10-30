/*
  circle and area
  sally coder
  sept 16, 2016
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main()
{
  double input = 0.0, output = 0.0;
    printf("This program returns the sine of an input\n");
  printf("enter a number between 0 and pi:\n");
  scanf("%lf", &input);
  output = sin(input);
  printf("sine of %lf is %lf\n", input, output);
  return 0;
}
