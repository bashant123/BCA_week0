#include<stdio.h>
#define PI 3.1416
int main()
{
    float r1, r2, a1, a2, area;
    printf("\n Enter the radius of small circle:");
    scanf("%f",&r1);
    printf("\n Enter the radius of a big circle:");
    scanf("%f", &r2);
    a1 = PI * r1 * r1;
    a2 = PI * r2 * r2;
    area = a2 - a1;
    printf("\n The area between concentric circles with radius %f and %f \t is : %f1", r1, r2, area);
    return 0;
}
