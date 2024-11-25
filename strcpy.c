#include<stdio.h>
#include<string.h>
int main()
{
    char x[]="Happy New Year 2076!!";
    char y[50],z[50];
    printf("original string :%s\n",x);
    strcpy(y,x);
    printf("copied string :%s\n",y);
    return 0;
}