#include<stdio.h>
#define M 3
#define N 3
int main()
{
    int matrix1[M][N], matrix2[M][N],difference[M][N],i,j;
    printf("\n Enter the elements of first matrix :\t");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\n Enter the elements of second matrix:\t");
    for(i=0;i<M;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            difference[i][j]=matrix1[i][j] - matrix2[i][j];

        }
    }
    printf("\n The difference of matrices is:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("\t%d",difference[i][j]);
        }
        printf("\n");
    }
    return 0;
}