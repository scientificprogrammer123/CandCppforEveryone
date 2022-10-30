#include <stdio.h>
int main () 
{
int i, number, weights[100];
double sum, average;
printf ("Enter the number of elephant seals: "); 
scanf ("%d", &number); 
printf ("\nEnter the weights of the %d elephant seals:\n", number); 
for (i = 1; i <= number; i++)   
    {     
scanf ("%d", &weights[i]);
    }
for (i = 0; i <= number; i++)
    {    
sum = sum + weights[i];  
}
average = sum/number;
printf ("\nThe average weight for a population of %d elephant seals is equal to =  %lf kg", number, average);
}
