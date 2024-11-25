<<<<<<< HEAD
/*program to find price of n mangos given the price of a dozen mangos.*/
#include<stdio.h>
int main()
{
    float pricedozen, pricen;
    int n;
    printf("Enter price of a dozen mangos:");
    scanf("%f",&pricedozen);
    printf("Enter number mangos:");
    scanf("%d", &n);
    pricen = pricedozen / 12 * n;
    printf("price of %d mangos is %f", n, pricen);
    return 0;
=======
/*program to find price of n mangos given the price of a dozen mangos.*/
#include<stdio.h>
int main()
{
    float pricedozen, pricen;
    int n;
    printf("Enter price of a dozen mangos:");
    scanf("%f",&pricedozen);
    printf("Enter number mangos:");
    scanf("%d", &n);
    pricen = pricedozen / 12 * n;
    printf("price of %d mangos is %f", n, pricen);
    return 0;
>>>>>>> e73ac7cd1546134d1681c8f8ae5e644ad78a2703
}