#include<stdio.h>
int main()
{
    struct book
    {
        char name[50];
        int price;
    }b[5];
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter the book name: ");
        scanf("%s",b[i].name);

        printf("Enter the price:");
        scanf("%d",&b[i].price);
    }
    printf(".......................................\n");
    for(i=0;i<2;i++)
    {
        printf("Name: %s\t\t",b[i].name);
        printf("Price: %d\n",b[i].price);
    }

    return 0;
}