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
}