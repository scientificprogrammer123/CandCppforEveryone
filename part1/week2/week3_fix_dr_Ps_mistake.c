//
//  week3_fix_dr_Ps_mistake.c
//  
//
//  Created by Lejun Hu on 6/13/22.
//

//#include <stdio.h>
#include <stdio.h>
#include <math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
  double interval;
  int i;
  for(i = 0; i <30; i++)
  {
    interval = i/10.0;
    printf(“sin( %lf ) = %lf \t”, interval, abs(sin(interval)));
  }


  printf(“\n+++++++\n”);
  return 0;
}
