#include <stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("Enter your name:");
    scanf("%s", &name);
    int length = strlen(name);
    printf("The length \'%s\' is %d\n", name, length);
    return 0;
}