#include <stdio.h>
int main(void)
{
    int num1,num2;
    int add,subs,mul,div,mod;
    printf("Enter First number and second number:");
    scanf("%d %d",&num1, &num2);

    // using airthmetic operation
    add = num1 + num2;
    subs = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;

    printf("\nAddition is: %d", add);
    printf("\nSubtractions is: %d", subs);
    printf("\nmultiply is: %d", mul);
    printf("\nDivision is: %d", div);
    printf("\nModolus is: %d", mod);
    return 0;
}
