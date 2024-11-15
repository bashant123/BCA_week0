#include <stdio.h>

int main() {
    int i, num, isPrime = 1; // Assume the number is prime initially

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("The number is neither prime nor composite.\n");
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = 0; // Set the flag to indicate it's composite
                break;
            }
        }

        if (isPrime) {
            printf("The number is PRIME.\n");
        } else {
            printf("The number is COMPOSITE.\n");
        }
    }

    return 0;
}
