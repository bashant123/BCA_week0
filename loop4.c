<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 5; i <=1; i--)
    {
       for(j = 5; j< i; j--)
       {
        printf(" ");
       }
       for(j = 1; j<=i ;j++)
       {
        if(j % 2) 
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
       }
       printf("\n");   
    }
    return 0;
=======
#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 5; i <=1; i--)
    {
       for(j = 5; j< i; j--)
       {
        printf(" ");
       }
       for(j = 1; j<=i ;j++)
       {
        if(j % 2) 
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
       }
       printf("\n");   
    }
    return 0;
>>>>>>> e73ac7cd1546134d1681c8f8ae5e644ad78a2703
}