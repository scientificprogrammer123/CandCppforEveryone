/*
 use of pointers
 sally coder Mar 18 2018
 */

#include <stdio.h>
//#include <math.h> /* has  sin(), abs(), and fabs() */

int main(void)
{ 
    const int SIZE = 5;
    
    int grades[SIZE]={78, 67, 92, 83, 88};
    double sum = 0.0;
    double *ptr_to_sum = &sum;
    int i;
    
    printf("\n my grades are:\n");
    
    for (i=0; i<SIZE; i++)
        printf("%d\t", grades[i]);
    printf("\n\n");
    
    for (i=0; i<SIZE; i++)
        sum = sum + grades[i];
    printf("my average is %.2f\n\n", sum/SIZE);
    printf("\n\n");
    
    printf("sum is at %p, or %lu and is %lf\n", ptr_to_sum, ptr_to_sum, *ptr_to_sum);
    printf("grades are at %lu to %lu\n", grades, grades+5);
    return 0;
}

/*
void print_grades(int how_many, int grades[])
{
  int i;
  printf("I have %d grades\n", how_many);
  for (i=0; i<how_many; i++) {
      printf("%d\t", grades[i]);
  }
}*/

/*
int main (void)
{
  const int SIZE = 5;
  int grades[SIZE] = {78, 67, 92, 83, 88};
    
  print_grades(SIZE, grades);
  printf("\n\n");
  printf("my average is %.2f\n\n", average_grades(SIZE, grades));
    
  return 0;
}
*/
