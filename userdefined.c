#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number :\n");
    scanf("%d%d",&a,&b);
    int addition = a + b;
    printf("the sum is :",addition);
    return 0;
}
int addition(int x,int y)
{
    return x+y;
}