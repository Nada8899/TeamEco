#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please Enter number of students \n");
    int row;
    scanf("%d",&row);
    int **arr = (int **) malloc(row * sizeof(int*));

    printf("Please Enter number of subjects \n");
    int colm;
    scanf("%d",&colm);
    for(int i = 0; i < row; i++)
    {
        arr[i] = (int *) malloc(colm * sizeof(int));
    }

    for (int rows=0; rows<row; rows++)
    {
        printf("enter the  student num %d  two subject \n",rows+1);
        for(int col=0; col<colm; col++)
        {
            scanf("%d",&arr[rows][col]);
        }
    }

    int *sum = malloc(row*sizeof(int));
    int *avrg = malloc(colm*sizeof(int));




    for (int rows=0; rows<row; rows++)
    {
        sum[rows]=0;
        for(int col=0; col<colm; col++)
        {
            sum[rows]+=arr[rows][col];
        }
    }
    for(int col=0; col<colm; col++)
    {
        avrg[col]=0;
        for (int rows=0; rows<row; rows++)
        {
            avrg[col]+=arr[rows][col];
        }
        avrg[col]/=row;
    }
    for(int i=0; i<row; i++)
    {
        printf("sum of student %d equal %d \n",i+1,sum[i]);
    }
    for(int i=0; i<colm; i++)
    {

        printf("Avrg of subject %d equal %d \n",i+1,avrg[i]);
    }

}
