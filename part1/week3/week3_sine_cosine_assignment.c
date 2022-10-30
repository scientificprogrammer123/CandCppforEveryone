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
    double input_array [11] = {0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
    double output_array_sin [11] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    double output_array_cos [11] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    printf("This program returns the sine and cosine of 10 numbers between 0 and 1\n");
    //printf("enter a number between 0 and pi:\n");
    //scanf("%lf", &input);
    for (int i=0; i<(sizeof(input_array)/sizeof(input_array[0])); i++) {
        output_array_sin [i] = sin (input_array [i]);
        output_array_cos [i] = cos (input_array [i]);
    }
    //output = sin(input);
    //printf("sine of %lf is %lf\n", input, output);
    for (int i=0; i<(sizeof(input_array)/sizeof(input_array[0])); i++) {
        printf("sine of %lf is %lf\n", input_array [i], output_array_sin [i]);
        printf("cosine of %lf is %lf\n", input_array [i], output_array_cos [i]);
    }
    return 0;
}
