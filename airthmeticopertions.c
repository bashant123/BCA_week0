/* Program to add,sub,mul and div two whole number.*/
#include<stdio.h>
int main()
{
    int a, b, c;
    float d;
    printf("Enter two whole number:\n");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("\nSum = %d", c);
    c = a - b;
    printf("\nDifference = %d", c);
    c = a * b;
    printf("\nMultification = %d", c);
    d = a / b;
    printf("\nDivision= %d", d);
    return 0;
}

