//
//  week3_fix_dr_Ps_mistake.c
//  
//
//  Created by Lejun Hu on 6/13/22.
//

//#include <stdio.h>
#include <stdio.h>
#include <math.h> /* has  sin(), abs(), and fabs() */
//#include <stdlib.h>

int main(void)
{
  double interval, sin_interval, abs_sin_interval;
  int i;
  for (i = 0; i <30; i++)
  {
    interval = i/10.0;
    sin_interval = sin(interval);
    abs_sin_interval = fabs(sin_interval);
    printf("sin( %lf ) = %lf \t", interval, abs_sin_interval);
  }


  printf("\n+++++++\n");
  return 0;
}
