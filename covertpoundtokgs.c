/*Progran to convert pounds to kilograms.*/
#include<stdio.h>
int main()
{
    float p, k;
    printf("Enter pounds:");
    scanf("%f", &p);
    k = p / 2.2;
    printf("kilogram = %f", k);
    return 0;
}