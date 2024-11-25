<<<<<<< HEAD
/*Program to find area and circumference of a circle.*/
#include <stdio.h>
#define PI 3.14
float radius, a, c;
float area();
float circum();
int main()
{
    printf("Enter radius of circle: ");
    scanf("%f", &radius );
    a = area();
    printf("Area is:%f\n", a);
    c =  circum();
    printf("Circumference is:%f\n", c);
    return 0;
}
float area() 
{
    return PI * radius * radius;
}
float circum()
{
    return 2 * PI * radius;
=======
/*Program to find area and circumference of a circle.*/
#include <stdio.h>
#define PI 3.14
float radius, a, c;
float area();
float circum();
int main()
{
    printf("Enter radius of circle: ");
    scanf("%f", &radius );
    a = area();
    printf("Area is:%f\n", a);
    c =  circum();
    printf("Circumference is:%f\n", c);
    return 0;
}
float area() 
{
    return PI * radius * radius;
}
float circum()
{
    return 2 * PI * radius;
>>>>>>> e73ac7cd1546134d1681c8f8ae5e644ad78a2703
}