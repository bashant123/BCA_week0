<<<<<<< HEAD
#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter your name:");
    scanf("%s",&name);
    int length = 0;
    while( name[length] != '\0')
    {
        length++;
    }
    printf("The length of given string is%d\n",length);
    return 0;
=======
#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter your name:");
    scanf("%s",&name);
    int length = 0;
    while( name[length] != '\0')
    {
        length++;
    }
    printf("The length of given string is%d\n",length);
    return 0;
>>>>>>> e73ac7cd1546134d1681c8f8ae5e644ad78a2703
}