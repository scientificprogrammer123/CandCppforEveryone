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

int foobar(int* n){
     *n = *n +1;
     return *n;
}

int mystery(int p, int q){
     
    int r;
    if ((r = p % q) == 0)
        return q; 
    else return mystery(q, r);
}

int main() {
    /*
    int row = 50, col = 20;
    int *arr = (int *)malloc(row * col * sizeof(int)); //allocate memory
    int i, j;
   
    FILE *file;
    */
    
    /*Text file consisting of raw data in 50 rows and 20 columns*/
    
    /*
    file = fopen("elephant_seal_data_file.txt", "r");
    
    if (file == NULL) {
        printf("no file pointer, exiting...");
    	return 1;
    }
    
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){*/
            /* 
            *(arr + i*col + j) = i + j;
            */
            /*
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
    */
    
    /*
    #20
    int i = 0, j = 1, k = 2;
    printf("%d\n", (!!i));
    return 0;
    */
    
    
    /*
    #21
    double i = 5.6, j = 1, k = 2;
    printf("%d\n", (i));
    return i;
    */
    
    /*
    #26
    int k = 6;
    printf("foobar(k) = %d,",foobar(&k) );
    printf(" k = %d\n", k);
    */
    
    /*
    #31
    int answer = mystery(2, 6);
    printf("%d\n", answer);
    */
    
    /*
    #32
    int answer = mystery(7, 91);
    printf("%d\n", answer); 
    */
    
    /*
    #36
    int data[5] = {0 ,1, 2, 3, 4}, sum = 0 , i;
    for (i = 0; i < 5 ; i++)
        sum = sum + data[i];
    printf("%d\n", sum);
    */
    
    #37
    int a[10] = {1,2,3,4,5,6,7,8,9,10}, i = 6 ;
    int *p = &a[0];
    //printf("%d\n", *(p + i));
    printf("HELLO\t\tWORLD\n");
    
    #8
    int a = 3, b = 4, c = 0, d = '1';
    
}
