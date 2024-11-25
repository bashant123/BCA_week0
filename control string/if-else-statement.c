#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number>10)
    {
        printf("the number %c is greater than 10\n", number);      /* %c providr the ascii value of characters*/  /* %d gives the numeric value*/
    }
    else if(number<10)
    {
        printf("the number %c is less than 10\n", number);
    }
    else
    {
        printf("the number %c is equal to 10 \n", number);
    }
    return 0;
} 