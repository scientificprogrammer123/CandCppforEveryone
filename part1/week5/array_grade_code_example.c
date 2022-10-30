/*
 use of simple arrays as parameters
 sally coder jan 8 2018
 */

#include <stdio.h>
//#include <math.h> /* has  sin(), abs(), and fabs() */

int main(void)
{ 
    const int SIZE = 5;
    
    int grades[SIZE]={78, 67, 92, 83, 88};
    double sum = 0.0;
    int i;
    
    printf("\n my grades are:\n");
    
    for (i=0; i<SIZE; i++)
        printf("%d\t", grades[i]);
    
    printf("\n\n");
    
    for (i=0; i<SIZE; i++)
        sum = sum + grades[i];
    
    printf("my averages is %.2f\n\n", sum/SIZE);
    
    return 0;
}

void print_grades(int how_many, int grades[])
{
  int i;
  printf("I have %d grades\n", how_many);
  for (i=0; i<how_many; i++) {
      printf("%d\t", grades[i]);
  }
}

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
