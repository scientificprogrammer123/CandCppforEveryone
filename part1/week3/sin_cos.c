#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
 float interval=0.01;float i;double sinVal,cosVal;
while(i<1)
{
sinVal = sin(i);
cosVal = cos(i);
printf("Sin value of %0.2f = %0.3f, Cos value %0.2f = %0.3f\n",i,sinVal,i,cosVal);
i = i + interval;
}
return 0;
}
