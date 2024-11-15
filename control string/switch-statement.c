#include<stdio.h>
int main()
{
    int input;
    printf("1. Play game\n");
    printf("2. Load game\n");
    printf("3. Play multi-player\n");
    printf("4. Exit\n");
    printf("selection: ");
    scanf("%d", &input);
    printf("\n");

    switch (input)
    {
    case 1:
        printf("play game called");
        break;
    case 2:
        printf("play with multiple player");
        break;
    case 3:
        printf("thanks for playing !!");
    default:
        printf("Bad input , quitting!\n");
        break; 
    }
    return 0;
}