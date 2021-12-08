#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int c[3][3];
    //printf("The elements of 2d array are:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Addition of 2 2D array are:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}