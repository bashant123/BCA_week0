#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number>10)
    {
        printf("the number %d is greater than 10\n", number);
    }
    if(number<10)
    {
        printf("the number %d is less than 10\n", number);
    }
    return 0;
} 