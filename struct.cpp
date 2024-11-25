#include<stdio.h>
int main()
{
    struct book
    {
        int sn;
        char name[50];
        float price;
        int pages;

    };
    struct book b1 = {1, "c programming", 350.00,199 };
    printf("serial number is:%d\n", b1.sn);
    printf("Name of book is:%s\n",b1.name);
    printf("Price of book is: %f\n",b1.price);
    printf("No of pages in the book is:%d\n",b1.pages);
    return 0;
}