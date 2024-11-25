#include<stdio.h>
int main(void)
{
    int a = 3, b = 5;
    int result1;
    int result2;
    result1 = a >> 2;
    result2 = b << 1;
    printf("R Shift of %d is: %d  \n L shift of %d is: %d", a, result1, b, result2);
    return 0;
}