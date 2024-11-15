#include<stdio.h>
int main()
{
    char input;
    printf("Enter any alphabet:");
    scanf("%c", &input);
    printf("\n");

    switch (input)
    {
    case 'a':
        printf(" a is vowel letter");
        break;
    case 'e':
        printf(" e is vowel letter");
        break;
    case 'i':
        printf(" i is vowel letter");
        break;
    case 'o': 
        printf(" o is vowel letter");
        break;
     case 'u':
        printf( " u is vowel letter");
        break;
    default:
        printf("It is a consonant letter \n");
        break; 
    }
    return 0;
}