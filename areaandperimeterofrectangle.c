#include<stdio.h>
#include<math.h>
int main()
{
    float l, b, h, a, p;
    printf("Enter length and breadth:");
    scanf("%f%f", &l, &b);
    a = l + b;
    p = 2 * (l + b);
    printf("\nArea =  %f",a);
    printf("\nPerimeter =  %f",p);
    return 0;
}