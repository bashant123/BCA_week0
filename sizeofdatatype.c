#include <stdio.h>
int a = 5;
char c = 'A';
float b = 5.3;
double d = 8.999999999;
 int main()
{
    printf("Value of a is %d\n", a);
    printf("Value of c is %c\n", c);
    printf("Value of b is %f\n", b);
    printf("Value of d is %lf\n", d);

    printf("the size of integer is: %zu\n", sizeof(a));
    printf("the size of character data type is: %zu\n", sizeof(c));
    printf("the size of float data type is: %zu\n", sizeof(b));
    printf("the size of double data type is: %zu\n", sizeof(d));
    return 0; 
}