#include <stdio.h>
#include <stdlib.h> 

double average(int row,int column,int *mat)
{
    int a;
    int b;
    double sum=0.0;
    for(a=0;a<row;a++)
        for(b=0;b<column;b++)
            sum+=mat[a*column+b];
    return(sum/(row*column));
}

int main() {
    int row = 50, col = 20;
    int *arr = (int *)malloc(row * col * sizeof(int)); //allocate memory
    int i, j;
   
    FILE *file;
    /*Text file consisting of raw data in 50 rows and 20 columns*/
    file = fopen("elephant_seal_data_file.txt", "r");
    
    if (file == NULL) {
        printf("no file pointer, exiting...");
    	return 1;
    }
    
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            //*(arr + i*col + j) = i + j;
            if(!fscanf(file, "%d", &arr[i*col + j])) //store data into location of arr
            {
                break;
            }
            printf("%d\t", arr[i*col + j]); 
        }
    } 
    
    double average_num = average(row, col, arr);
    printf("\n %lf\t \n", average_num);
    printf("hello \t\t world \n");
    free(arr); //free memory
    return 0;
}
