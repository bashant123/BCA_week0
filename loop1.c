<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    for(i = 1;i <= rows; ++i)
    {
        for(j = 1;j <= i; ++j);
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
=======
#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    for(i = 1;i <= rows; ++i)
    {
        for(j = 1;j <= i; ++j);
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
>>>>>>> e73ac7cd1546134d1681c8f8ae5e644ad78a2703
}