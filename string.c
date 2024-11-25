#include <stdio.h>
int string_length(char s[]);
int main()
{
    char name[20];
    printf("Enter your name:");
    scanf("%s", &name);
    int length = string_length(name);
    printf("The length \'%s\' is %d\n", name, length);
    return 0;
}  