#include <stdio.h>
int main()
{
    int a;
    int result;
    printf("Enter an integer number: ");
    scanf("%d", &a);
    result = a * a;
    printf("the square of %d is: %d\n", a, result);
    return 0;
}