/*
 use of simple arrays as parameters
 sorting bubble sort
 display each loop
 easy but inefficient
 Bubble Sort is an easy-to-implement, stable sorting algorithm with a time complexity of O(n²) in the average and worst cases – and O(n) in the best case
 sally coder Jan 18 2018
 */

#include <stdio.h>

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array (int how_many, int data[], char *str)
{ 
    int i;
    printf("%s", str);
    for (i=0; i<how_many; i++)
        printf("%d\t", data[i]);
}

void bubble (int data[], int how_many)
{
    int i, j;
    int go_on;
    
    for (i=0; i<how_many; i++) {
        print_array(how_many, data, "\n inside bubble \n");
        printf("i=%d, input any int to continue:", i);
        scanf("%d", &go_on);
        for (j=how_many-1; j>i; j--)
            if (data[j-1] > data[j])
                swap(&data[j-1], &data[j]);
    }
}

int main ()
{
    const int SIZE  = 5;
    int grades [SIZE] = {78, 67, 92, 83, 88};
    
    print_array(SIZE, grades, "My grades\n");
    printf("\n\n");
    bubble(grades, SIZE);
    print_array(SIZE, grades, "My sorted grades\n");
    printf("\n\n");
    return 0;
}
