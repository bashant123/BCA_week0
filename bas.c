#include<stdio.h>
union employee
{
    int id;
    char name[20];
}e1;
int main()
{
    printf("Enter id:");
    scanf("%d",&e1.id);
    printf("Enter name:");
    scanf("%s",e1.name);
    printf("Wmp ID: %d\n",e1.id);
    printf("Emp name: %s\n",e1.name);
    return 0;
}