#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in celsius:");
    scanf("%f",&c);
    f = (c*9.0/5.0)+32.0;
    printf("The temperature in farahenit = %f",f);
    return 0;
}