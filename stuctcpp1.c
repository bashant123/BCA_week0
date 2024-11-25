#include<stdio.h>
#define CAPACITY 10
struct Employee
{
    int Emp_id;
    char name[20];
    struct date
    {
        int dd;
        int mm;
        int yyyy;

    }dateofentry;
}; 
int main()
{
    struct Employee E[CAPACITY];
    int N,i;
    printf(" Enter the no. of employees data to be stored:\n");
    scanf("%d",&N);
    for( i=0; i<N; i++)
    {
        printf("Enter the data of employee %d\n", i+1);
        printf("Id:");
        scanf("%d",&E[i].Emp_id);
        printf("Name:");
        scanf(" %s",&E[i].name[20] );
        printf("Date of entry:");
        scanf("%d-%d-%d",&E[i].dateofentry.dd,&E[i].dateofentry.mm,E[i].dateofentry.yyyy);
    }
    for(i=0;i<N;i++)
    {
        printf(".................................\n");
        printf("The name of the employee id:%s\n",E[i].name);
        printf("The ID is:%d\n",&E[i].Emp_id);
        printf("The date of entry:%d-%d-%d",&E[i].dateofentry.dd,&E[i].dateofentry.mm,E[i].dateofentry.yyyy);
    }
    return 0;
}