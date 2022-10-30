#include<stdio.h>
#include<math.h>
int main()
{
	float v; // value to be used in sine-function
	printf("Please enter a value between 0 and 1;"); //prompting for value
	scanf("%f",&v); 
	
	
	if(v>=0 && v<=1) // check to see if value is between 0 and 1. Otherwise, exit with error
	{
		printf("sin(%f) = %f",v,sin(v));
	}
	else
	{
		printf("ERROR: cannot compute the given value. The value must be a float between 0 and 1");
	}
	return 0;
}
