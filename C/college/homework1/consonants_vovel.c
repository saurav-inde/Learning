/*
input : alphabet letter
output : is vovel or consonant
*/
#include <stdio.h>
/*-----------------------------------------------------------------------------------------------------
-------------------------------------definations-----------------------------------------------------*/
#define APH alphabet
#define ISLOWERVOVEL APH == 'a' || APH == 'e' || APH == 'i' || APH == 'o' || APH == 'u'
#define ISUPPERVOVEL APH == 'A' || APH == 'E' || APH == 'I' || APH == 'O' || APH == 'U'
/*-----------------------------------------------------------------------------------------------------
-------------------------------------main section----------------------------------------------------*/
int main()
{

    //alphabet declaration and assignment
    char alphabet;
    printf("Enter the letter: ");
    scanf("%c", &alphabet);

    //logic
    if (ISLOWERVOVEL || ISUPPERVOVEL)
    {
        printf("%c is a vovel", alphabet);
    }
    else
    {
        printf("%c is consonant", alphabet);
    }

    return 0;
}