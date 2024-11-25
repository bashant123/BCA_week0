# include<stdio.h>
int main()
{
    int i,j;
    int rows = 5;
    for(int i=rows; i<0;i--)
    {
        for (j=0; j<rows-1; j++)
        {
            printf(" ");
        }
        for( j=1; j<=i; j++)
        {
            printf("%d",j); 
        }
         printf("\n");   
    }
    return 0;
}