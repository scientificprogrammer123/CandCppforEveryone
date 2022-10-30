//#define _GNU_SOURCE
//#include <stdio.h> //needed for 1
//#define MAX_LINE_LENGTH 1000 //needed for 1
//#include <stdlib.h>

//int main()
//{
    //need to do:
    //1. open file read line by line.
    //2. separate text in line by space character.
    //3. convert text from string to number, store number into array.
    //4. compute average of array, print it out.
    
    //1.
    //C – Read Text File Line by Line
    //To read contents of text file line by line in C programming, follow these steps.
    //Open the text file in read mode, using fopen(). If file pointer is null, return 
    //1, else continue.
    //Using fgets(), read next line into a string. fgets() returns string or EOF. You 
    //can use while loop to read line by line using fgets() function. During each 
    //iteration of while loop, you will get contents of the text file line by line.
    //Close the text file using fclose() function.
    //from https://www.tutorialkart.com/c-programming/c-read-text-file/
    //FILE * textfile;
    //char * line[MAX_LINE_LENGTH] = NULL;
    //textfile = fopen("/Users/lejunhu/Documents/_courses/C_for_everyone_UCSC/week5/elephant_seal_data.txt", "r");
    //if (textfile == NULL) {
    //    printf("no file pointer, exiting...");
    //	return 1;
    //}
    //while (fgets(line, MAX_LINE_LENGTH, textfile)) {
    //	printf("%s", line);
    //}
    //fclose (textfile);
    //return 0;
//}

/*
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("/Users/lejunhu/Documents/_courses/C_for_everyone_UCSC/week5/elephant_seal_data_file.txt", "r");
    if (fp == NULL)
    	printf("no file pointer, exiting...");
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fp)) != -1) {
        printf("Retrieved line of length %zu:\n", read);
        printf("%s", line);
    }

    fclose(fp);
    if (line)
        free(line);
    exit(EXIT_SUCCESS);
}
*/

/*
taken from:
https://github.com/PaareshC/C-for-Everyone-Programming-Fundamentals-by-University-of-California-Santa-Cruz/blob/master/Week%205/Peer%20Graded.txt
and then modified.

C Compiler

Average weight of elephant seals

26 Jun 2020

*/

#include <stdio.h>

#include <stdlib.h>

//#include <malloc.h>

double average(int row,int column,int mat[row][column])
{
    int a;
    int b;
    double sum=0.0;
    for(a=0;a<row;a++)
        for(b=0;b<column;b++)
            sum+=mat[a][b];
    return(sum/1000);
}

int main()
{
    int i;
    int j;
    int r=50;
    int col=20;

    //https://www.tutorialspoint.com/how-to-dynamically-allocate-a-2d-array-in-c
    //int* ptr = malloc((r * c) * sizeof(int));
    //test cases
    //int** mat=malloc(r*sizeof(int*));
    //int *mat = (int *)malloc(r * sizeof(int));
    //int *mat = (int *) malloc(r * sizeof(int));
    //int *mat = NULL;
    //mat = (int *)malloc(r * sizeof(int));
    //int* ptr = malloc((r * c) * sizeof(int));
    int** mat;
    mat = malloc(r * sizeof(int));
 
    for(i=0;i<r;++i) {
    	//mat[i]=malloc(r*sizeof(int));
    	mat[i] = malloc(col * sizeof(mat[0]));
    }

    FILE *file;

    /*Text file consisting of raw data in 50 rows and 20 columns*/
    file=fopen("elephant_seal_data_file.txt", "r");

    for(i=0;i<1000;i++)
    {
        for(j=0;j<col;j++)
        {
            if(!fscanf(file, "%d", &mat[i][j]))
            {
                break;
            }
            printf("%d\t",mat[i][j]);
            if(j==col-1)
            {
                printf("\n\n");
            }
            printf("Average of elephant seal is %.2f\n\n",average(r,col,mat));
        }

    }

    fclose(file);

    return 0;

}
    
/*
another implementation from stack overflow:
https://stackoverflow.com/questions/917783/how-do-i-work-with-dynamic-multi-dimensional-arrays-in-c
implement this one into the code above.

int** x;

x = malloc(dimension1_max * sizeof(*x));
for (int i = 0; i < dimension1_max; i++) {
  x[i] = malloc(dimension2_max * sizeof(x[0]));
}

//Writing values
x[0..(dimension1_max-1)][0..(dimension2_max-1)] = Value; 
[...]

for (int i = 0; i < dimension1_max; i++) {
  free(x[i]);
}
free(x);
*/



