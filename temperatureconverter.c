/*program to convert a temperature given in celsius to fahrenhnit.*/
#include<stdio.h>
int main()
{
    float c, f;
    printf("Enter temperarture is celsius:");
    scanf("%f", &c);
    f = c * 9 / 5 + 32;
    printf("Temperature in fahrenheit = %f", f);
    return 0;
}