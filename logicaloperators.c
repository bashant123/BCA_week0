//program using and operators.
#include<stdio.h>
int main(void)
{
    int sunny, vacation;
    printf("Enter 1 if sunny vacation , 0 if not:");
    scanf("%d",&sunny);
    printf("Enter 1 if vaction, 0 if not:");
    scanf("%d", &vacation);
    int sunAndvacation = sunny && vacation;
    if(sunAndvacation)
    {
        printf("yeah!!\n");
    } 
    else
    {
        printf("Too bad!\n");
    }
    return 0;
}
