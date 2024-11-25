#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of an Array ");
    scanf("%d", &n);
    int a = (int) malloc(n * sizeof(int));
    // dynamically allocating memory for array of n elements
    printf("Enter the elements of array ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Assigning elements to array from user
    int b = (int) realloc(a, 2 * n * sizeof(int));
    // This will allocate double the size of previous block
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    free(a); // This will deallocate the block of memory that has been used
}
