//program to demostrate ternary operator
#include<stdio.h>
int main()
{
    int num1,num2,larger;
    printf("Enter two integers:");
    scanf("%d%d",&num1,&num2);
    //find the larger number using the ternary operator
    larger =(num1>num2)? num1 : num2;
    printf("The larger number is:%d\n",larger);
    return 0;
}