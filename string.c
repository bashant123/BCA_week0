<<<<<<< HEAD
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
=======
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
>>>>>>> e73ac7cd1546134d1681c8f8ae5e644ad78a2703
}  